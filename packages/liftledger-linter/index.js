const Parser = require('tree-sitter');
const LiftLedger = require('tree-sitter-liftledger');

// Function to create a fresh parser instance each time
function createParser() {
  const parser = new Parser();
  parser.setLanguage(LiftLedger);
  return parser;
}

function lint(sourceCode) {
  const parser = createParser();
  const tree = parser.parse(sourceCode);
  const errors = [];

  if (!tree || !tree.rootNode) {
    return [];
  }



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
  // These are the main content types that should have dates:
  const contentTypesRequiringDate = ['log_entry', 'measurement_entry', 'pr_entry'];
  const hasContentRequiringDate = tree.rootNode.children.some(
    child => contentTypesRequiringDate.includes(child.type)
  );

  // Also check for standalone logged exercises (exercises without a proper log_entry structure)
  const hasStandaloneExerciseContent = tree.rootNode.children.some(
    child => child.type === 'logged_exercise' || child.type === 'exercise'
  );

  if (!hasDate && (hasContentRequiringDate || hasStandaloneExerciseContent)) {
    // Find the first content node that requires a date to report the error on.
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
      startPosition: reportingNode.startPosition,
      endPosition: reportingNode.endPosition,
      severity: 'error',
    });
  }

  // If there are only ERROR nodes and no date, and the file is not empty, report missing date
  if (
    !hasDate &&
    tree.rootNode.children.length > 0 &&
    tree.rootNode.children.every(child => child.type === 'ERROR') &&
    tree.rootNode.text.trim().length > 0
  ) {
    // Only report if at least one ERROR node contains non-comment, non-whitespace content
    const hasNonTrivialError = tree.rootNode.children.some(child => {
      const text = child.text.trim();
      // Ignore empty, whitespace, or comment-only lines
      return text.length > 0 && !/^;/.test(text);
    });
    if (hasNonTrivialError) {
      const errorNode = tree.rootNode.children.find(child => {
        const text = child.text.trim();
        return text.length > 0 && !/^;/.test(text);
      }) || tree.rootNode.children[0];
      errors.push({
        message: 'LiftLedger entry should have a date.',
        startPosition: errorNode.startPosition,
        endPosition: errorNode.endPosition,
        severity: 'error',
      });
    }
  }

  // Add more linting rules here

  return errors;
}

module.exports = {
  lint,
};
