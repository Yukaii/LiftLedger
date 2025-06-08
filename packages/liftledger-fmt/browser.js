// Browser-compatible formatter using web-tree-sitter
let Parser;
let LiftLedger;

// Initialize tree-sitter for browser (reuse from linter)
export async function initTreeSitter() {
  try {
    // Import tree-sitter web
    const TreeSitter = await import('web-tree-sitter');
    await TreeSitter.init();
    Parser = TreeSitter;
    
    // Load the LiftLedger WASM
    LiftLedger = await TreeSitter.Language.load('/tree-sitter-liftledger.wasm');
    console.log('Tree-sitter formatter initialized successfully');
    return true;
  } catch (error) {
    console.warn('Failed to initialize tree-sitter for formatter:', error);
    // Fall back to simple formatter if tree-sitter fails
    Parser = null;
    LiftLedger = null;
    return false;
  }
}

// Real formatter function using tree-sitter (browser version)
function realFormat(input, indentSize = 2) {
  if (!Parser || !LiftLedger) {
    // Fall back to simple formatter if tree-sitter isn't available
    return simpleFormatFallback(input, indentSize);
  }

  try {
    const parser = new Parser();
    parser.setLanguage(LiftLedger);

    const tree = parser.parse(input);
    const root = tree.rootNode;

    let output = '';
    let currentIndentation = 0;
    let maxNameLength = 0;

    function indent() {
      currentIndentation += indentSize;
    }

    function dedent() {
      currentIndentation = Math.max(0, currentIndentation - indentSize);
    }

    function getIndent() {
      return ' '.repeat(currentIndentation);
    }

    function safeGetText(node, index) {
      if (node.children && node.children.length > index) {
        return node.children[index].text.trim();
      }
      return '';
    }

    function findMaxNameLength(node) {
      if (node.type === 'attribute') {
        const name = safeGetText(node, 0);
        maxNameLength = Math.max(maxNameLength, name.length);
      }
      if (node.children) {
        node.children.forEach(findMaxNameLength);
      }
    }

    function formatExercisesBlock(node) {
      output += '@exercises\n';
      indent();

      for (let i = 1; i < node.children.length; i++) {
        const child = node.children[i];
        if (child.type === 'exercise') {
          formatExercise(child);
        }
      }
      dedent();
      output += '@end-exercises\n\n';
    }

    function formatExercise(node) {
      output += getIndent() + '[' + safeGetText(node, 1) + ']\n';
      indent();
      for (let i = 3; i < node.children.length; i++) {
        const child = node.children[i];
        if (child.type === 'attribute') {
          formatAttribute(child);
        }
      }
      dedent();
      output += '\n';
    }

    function formatAttribute(node) {
      const name = safeGetText(node, 0);
      const value = safeGetText(node, 2);
      const padding = ' '.repeat(Math.max(0, maxNameLength - name.length));
      output += getIndent() + name + padding + ': ' + value + '\n';
    }

    function formatWithAlignment(node) {
      if (!node) return;

      switch (node.type) {
        case 'source_file':
          if (node.children) {
            node.children.forEach(formatWithAlignment);
          }
          break;

        case 'exercises_block':
          formatExercisesBlock(node);
          break;

        case 'template_block':
          output += '@template ' + safeGetText(node, 1) + '\n';
          indent();
          if (node.children) {
            node.children.slice(2, -1).forEach(formatWithAlignment);
          }
          dedent();
          output += '@end-template\n\n';
          break;

        case 'template_exercise':
        case 'logged_exercise':
        case 'measurement':
        case 'pr_record':
          const name = safeGetText(node, 0);
          const padding = ' '.repeat(Math.max(0, maxNameLength - name.length));
          output += getIndent() + name + padding + ': ';
          output += safeGetText(node, 2);
          if (node.children && node.children.length > 3) {
            output += ' ' + safeGetText(node, 3);
          }
          output += '\n';
          break;

        case 'log_entry':
          output += safeGetText(node, 0) + ' * ' + safeGetText(node, 2) + '\n';
          indent();
          if (node.children) {
            node.children.slice(3).forEach(formatWithAlignment);
          }
          dedent();
          output += '\n';
          break;

        case 'measurement_entry':
          output += safeGetText(node, 0) + ' # Measurements\n';
          indent();
          if (node.children) {
            node.children.slice(3).forEach(formatWithAlignment);
          }
          dedent();
          output += '\n';
          break;

        case 'pr_entry':
          output += safeGetText(node, 0) + ' ^ PR\n';
          indent();
          if (node.children) {
            node.children.slice(3).forEach(formatWithAlignment);
          }
          dedent();
          output += '\n';
          break;

        case 'comment':
          output += node.text + '\n';
          break;

        case 'include':
          output += node.text + '\n\n';
          break;
      }
    }

    findMaxNameLength(root);
    formatWithAlignment(root);

    return output;
  } catch (error) {
    console.warn('Tree-sitter formatting failed:', error);
    return simpleFormatFallback(input, indentSize);
  }
}

// Fallback formatter when tree-sitter is not available
function simpleFormatFallback(input, indentSize = 2) {
  // Simple formatter that works without tree-sitter in the browser
  const lines = input.split('\n');
  const formatted = [];
  let currentIndent = 0;
  let inExerciseBlock = false;
  let inTemplateBlock = false;
  
  // Remove empty lines at start and end
  while (lines.length > 0 && !lines[0].trim()) {
    lines.shift();
  }
  while (lines.length > 0 && !lines[lines.length - 1].trim()) {
    lines.pop();
  }
  
  for (let i = 0; i < lines.length; i++) {
    const line = lines[i].trim();
    
    if (!line) {
      // Empty lines
      formatted.push('');
      continue;
    }
    
    if (line.startsWith(';')) {
      // Comments - preserve but don't indent
      formatted.push(line);
      continue;
    }
    
    if (line.startsWith('@exercises')) {
      // Exercises block start
      formatted.push(line);
      currentIndent = indentSize;
      inExerciseBlock = true;
      continue;
    }
    
    if (line.startsWith('@template')) {
      // Template block start
      formatted.push(line);
      currentIndent = indentSize;
      inTemplateBlock = true;
      continue;
    }
    
    if (line.startsWith('@end-')) {
      // Block end
      currentIndent = 0;
      formatted.push(line);
      inExerciseBlock = false;
      inTemplateBlock = false;
      
      // Add empty line after block
      if (i < lines.length - 1 && lines[i + 1].trim()) {
        formatted.push('');
      }
      continue;
    }
    
    if (line.startsWith('[') && line.endsWith(']') && inExerciseBlock) {
      // Exercise definition in exercises block
      formatted.push(' '.repeat(currentIndent) + line);
      currentIndent = indentSize * 2;
      continue;
    }
    
    if (/^\d{4}-\d{2}-\d{2}/.test(line)) {
      // Date entries
      currentIndent = indentSize;
      formatted.push(line);
      continue;
    }
    
    if (line.includes(':')) {
      // Regular entries with colons
      formatted.push(' '.repeat(currentIndent) + line);
      continue;
    }
    
    // Default case
    formatted.push(' '.repeat(currentIndent) + line);
  }
  
  return formatted.join('\n');
}

// Main formatting function
export function formatLiftLedger(input, indentSize = 2) {
  return realFormat(input, indentSize);
}

export default formatLiftLedger;
