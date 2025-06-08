// Browser-compatible linter using web-tree-sitter
let Parser;
let LiftLedger;

// Initialize tree-sitter for browser
export async function initTreeSitter() {
  try {
    // Import tree-sitter web
    const TreeSitter = await import('web-tree-sitter');
    await TreeSitter.init();
    Parser = TreeSitter;
    
    // Load the LiftLedger WASM
    LiftLedger = await TreeSitter.Language.load('/tree-sitter-liftledger.wasm');
    console.log('Tree-sitter initialized successfully');
    return true;
  } catch (error) {
    console.warn('Failed to initialize tree-sitter:', error);
    // Fall back to mock linter if tree-sitter fails
    Parser = null;
    LiftLedger = null;
    return false;
  }
}

// Real linter function using tree-sitter (browser version)
function realLint(sourceCode) {
  if (!Parser || !LiftLedger) {
    // Fall back to mock linter if tree-sitter isn't available
    return mockLintFallback(sourceCode);
  }

  try {
    const parser = new Parser();
    parser.setLanguage(LiftLedger);
    
    const tree = parser.parse(sourceCode);
    if (!tree || !tree.rootNode) {
      return mockLintFallback(sourceCode);
    }

    const errors = [];

    // Check if a date is present
    let hasDate = false;
    function traverse(node) {
      if (!node) return;
      if (node.type === 'date') {
        hasDate = true;
      }
      for (let i = 0; i < (node.childCount || 0); i++) {
        traverse(node.child(i));
      }
    }

    traverse(tree.rootNode);

    // Determine if there's any actual workout content that requires a date.
    const contentTypesRequiringDate = ['log_entry', 'measurement_entry', 'pr_entry'];
    const hasContentRequiringDate = tree.rootNode.children.some(
      child => contentTypesRequiringDate.includes(child.type)
    );

    // Also check for standalone logged exercises
    const hasStandaloneExerciseContent = tree.rootNode.children.some(
      child => child.type === 'logged_exercise' || child.type === 'exercise'
    );

    if (!hasDate && (hasContentRequiringDate || hasStandaloneExerciseContent)) {
      // Find the first content node that requires a date
      let reportingNode = tree.rootNode.firstChild || tree.rootNode;
      for (const child of tree.rootNode.children) {
        if (contentTypesRequiringDate.includes(child.type) || 
            child.type === 'logged_exercise' || 
            child.type === 'exercise') {
          reportingNode = child;
          break;
        }
      }

      errors.push({
        message: 'LiftLedger entry should have a date.',
        line: reportingNode.startPosition.row,
        severity: 'error',
      });
    }

    // If there are only ERROR nodes and no date, and the file is not empty
    if (
      !hasDate &&
      tree.rootNode.children.length > 0 &&
      tree.rootNode.children.every(child => child.type === 'ERROR') &&
      tree.rootNode.text.trim().length > 0
    ) {
      // Only report if at least one ERROR node contains non-comment content
      const hasNonTrivialError = tree.rootNode.children.some(child => {
        const text = child.text.trim();
        return text.length > 0 && !/^;/.test(text);
      });
      if (hasNonTrivialError) {
        const errorNode = tree.rootNode.children.find(child => {
          const text = child.text.trim();
          return text.length > 0 && !/^;/.test(text);
        }) || tree.rootNode.children[0];
        errors.push({
          message: 'LiftLedger entry should have a date.',
          line: errorNode.startPosition.row,
          severity: 'error',
        });
      }
    }

    return errors;
  } catch (error) {
    console.warn('Tree-sitter linting failed:', error);
    return mockLintFallback(sourceCode);
  }
}

// Fallback linter when tree-sitter is not available
function mockLintFallback(sourceCode) {
  const errors = [];
  const lines = sourceCode.split('\n');
  
  // Check for date pattern
  const hasDate = lines.some(line => /^\d{4}-\d{2}-\d{2}/.test(line.trim()));
  
  // Check if there's workout content that needs a date
  const hasWorkoutContent = lines.some(line => {
    const trimmed = line.trim();
    return trimmed && 
           !trimmed.startsWith(';') && 
           !trimmed.startsWith('@') && 
           !hasDate &&
           (trimmed.includes(':') || trimmed.includes('kg') || trimmed.includes('lbs'));
  });
  
  if (!hasDate && hasWorkoutContent) {
    // Find first non-comment, non-empty line for error position
    let errorLine = 0;
    for (let i = 0; i < lines.length; i++) {
      const trimmed = lines[i].trim();
      if (trimmed && !trimmed.startsWith(';') && !trimmed.startsWith('@')) {
        errorLine = i;
        break;
      }
    }
    
    errors.push({
      message: 'LiftLedger entry should have a date.',
      line: errorLine,
      severity: 'error'
    });
  }
  
  // Check for other common issues
  lines.forEach((line, index) => {
    const trimmed = line.trim();
    
    // Check for malformed exercise entries
    if (trimmed.includes(':') && !trimmed.startsWith(';') && !trimmed.startsWith('@')) {
      const parts = trimmed.split(':');
      if (parts.length === 2 && !parts[1].trim()) {
        errors.push({
          message: 'Exercise entry is missing details after colon.',
          line: index,
          severity: 'warning'
        });
      }
    }
    
    // Check for potential typos in common units
    if (/\b\d+\s*(kgs|kg\.)\b/i.test(trimmed)) {
      errors.push({
        message: 'Did you mean "kg" instead of "' + trimmed.match(/\d+\s*(kgs|kg\.)/i)[1] + '"?',
        line: index,
        severity: 'info'
      });
    }
  });
  
  return errors;
}

// Main linting function
export function lint(sourceCode) {
  return realLint(sourceCode);
}

// CodeMirror linter integration
export function createCodeMirrorLinter() {
  return function(view) {
    const doc = view.state.doc;
    const text = doc.toString();
    
    const diagnostics = realLint(text);
    
    return diagnostics.map(diagnostic => ({
      from: doc.line(diagnostic.line + 1).from,
      to: doc.line(diagnostic.line + 1).to,
      severity: diagnostic.severity,
      message: diagnostic.message,
    }));
  };
}
