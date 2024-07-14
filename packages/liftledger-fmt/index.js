const Parser = require('tree-sitter');
const LiftLedger = require('tree-sitter-liftledger');

const DEBUG = false; // Set this to true to enable debug logging
const DEFAULT_INDENT = 2; // Default indentation spaces

function formatLiftLedger(input, indentSize = DEFAULT_INDENT) {
  const parser = new Parser();
  parser.setLanguage(LiftLedger);

  const tree = parser.parse(input);
  const root = tree.rootNode;

  let output = '';
  let currentIndentation = 0;

  function debug(message) {
    if (DEBUG) {
      console.log(message);
    }
  }

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
    if (node.children.length > index) {
      return node.children[index].text.trim();
    }
    debug(`Child at index ${index} not found in node type: ${node.type}`);
    return '';
  }

  function traverse(node) {
    debug('Processing node: ' + node.type);
    switch (node.type) {
      case 'source_file':
        node.children.forEach(child => traverse(child));
        break;

      case 'template_block':
        output += '@template ' + safeGetText(node, 1) + '\n';
        indent();
        node.children.slice(2, -1).forEach(child => traverse(child));
        dedent();
        output += '@end-template\n\n';
        break;

      case 'template_exercise':
        output += getIndent() + safeGetText(node, 0) + ':';
        output += safeGetText(node, 2) + '\n';
        break;

      case 'log_entry':
        output += safeGetText(node, 0) + ' * ' + safeGetText(node, 2) + '\n';
        indent();
        node.children.slice(3).forEach(child => traverse(child));
        dedent();
        output += '\n';
        break;

      case 'logged_exercise':
        output += getIndent() + safeGetText(node, 0) + ':';
        output += safeGetText(node, 2);
        if (node.children.length > 3) {
          output += ' ' + safeGetText(node, 3);
        }
        output += '\n';
        break;

      case 'measurement_entry':
        output += safeGetText(node, 0) + ' # Measurements\n';
        indent();
        node.children.slice(3).forEach(child => traverse(child));
        dedent();
        output += '\n';
        break;

      case 'measurement':
        output += getIndent() + safeGetText(node, 0) + ': ' + safeGetText(node, 2) + '\n';
        break;

      case 'pr_entry':
        output += safeGetText(node, 0) + ' ^ PR\n';
        indent();
        node.children.slice(3).forEach(child => traverse(child));
        dedent();
        output += '\n';
        break;

      case 'pr_record':
        output += getIndent() + safeGetText(node, 0) + ': ' + safeGetText(node, 2) + ' ' + safeGetText(node, 3) + '\n';
        break;

      case 'comment':
        output += node.text + '\n';
        break;

      case 'include':
        output += node.text + '\n\n';
        break;

      case 'exercises_block':
        output += '@exercises\n';
        indent();
        node.children.slice(1, -1).forEach(child => traverse(child));
        dedent();
        output += '@end-exercises\n\n';
        break;

      case 'exercise':
        output += getIndent() + '[' + safeGetText(node, 0) + ']\n';
        indent();
        node.children.slice(2).forEach(child => traverse(child));
        dedent();
        break;

      case 'attribute':
        output += getIndent() + safeGetText(node, 0) + ': ' + safeGetText(node, 2) + '\n';
        break;

      default:
        debug('Unknown node type: ' + node.type);
    }
  }

  traverse(root);
  return output;
}

// Example usage
const input = `
@template Leg Day
    Squat:      100kg 5x3 @RPE8
@end-template

2023-03-01 * Leg Day
    Squat:      100kg 5/5/4 @RPE8 "Felt tired on last set"

2023-03-05 # Measurements
    Weight:   75kg
    Body Fat: 15%

2023-03-07 ^ PR
    Squat:    1RM 140kg
`;

console.log(formatLiftLedger(input)); // Uses default indentation
console.log(formatLiftLedger(input, 4));
