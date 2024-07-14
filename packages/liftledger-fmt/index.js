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
  let maxNameLength = 0;

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

  function findMaxNameLength(node) {
    switch (node.type) {
      case 'source_file':
      case 'template_block':
      case 'log_entry':
      case 'measurement_entry':
      case 'pr_entry':
      case 'exercises_block':
        node.children.forEach(findMaxNameLength);
        break;
      case 'template_exercise':
      case 'logged_exercise':
      case 'measurement':
      case 'pr_record':
      case 'attribute':
        maxNameLength = Math.max(maxNameLength, safeGetText(node, 0).length);
        break;
    }
  }

  function formatWithAlignment(node) {
    debug('Processing node: ' + node.type);
    switch (node.type) {
      case 'source_file':
        node.children.forEach(formatWithAlignment);
        break;

      case 'template_block':
        output += '@template ' + safeGetText(node, 1) + '\n';
        indent();
        node.children.slice(2, -1).forEach(formatWithAlignment);
        dedent();
        output += '@end-template\n\n';
        break;

      case 'template_exercise':
      case 'logged_exercise':
      case 'measurement':
      case 'pr_record':
      case 'attribute':
        const name = safeGetText(node, 0);
        const padding = ' '.repeat(maxNameLength - name.length);
        output += getIndent() + name + padding + ': ';
        if (node.type === 'template_exercise' || node.type === 'logged_exercise') {
          output += safeGetText(node, 2);
          if (node.children.length > 3) {
            output += ' ' + safeGetText(node, 3);
          }
        } else if (node.type === 'pr_record') {
          output += safeGetText(node, 2) + ' ' + safeGetText(node, 3);
        } else {
          output += safeGetText(node, 2);
        }
        output += '\n';
        break;

      case 'log_entry':
        output += safeGetText(node, 0) + ' * ' + safeGetText(node, 2) + '\n';
        indent();
        node.children.slice(3).forEach(formatWithAlignment);
        dedent();
        output += '\n';
        break;

      case 'measurement_entry':
        output += safeGetText(node, 0) + ' # Measurements\n';
        indent();
        node.children.slice(3).forEach(formatWithAlignment);
        dedent();
        output += '\n';
        break;

      case 'pr_entry':
        output += safeGetText(node, 0) + ' ^ PR\n';
        indent();
        node.children.slice(3).forEach(formatWithAlignment);
        dedent();
        output += '\n';
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
        node.children.slice(1, -1).forEach(formatWithAlignment);
        dedent();
        output += '@end-exercises\n\n';
        break;

      case 'exercise':
        output += getIndent() + '[' + safeGetText(node, 0) + ']\n';
        indent();
        node.children.slice(2).forEach(formatWithAlignment);
        dedent();
        break;

      default:
        debug('Unknown node type: ' + node.type);
    }
  }

  // First pass: find max name length
  findMaxNameLength(root);

  // Second pass: format with alignment
  formatWithAlignment(root);

  return output;
}

// Example usage
const input = `
@template Leg Day
    Squat:      100kg 5x3 @RPE8
    Deadlift:   120kg 5x3 @RPE7
    Leg Press:  150kg 10x3
    Calf Raises: 50kg 15x4
@end-template

2023-03-01 * Leg Day
    Squat:      100kg 5/5/4 @RPE8 "Felt tired on last set"
    Deadlift:   120kg 5/5/3 @RPE7 "Lower back tight, stopped early"
    Leg Press:  150kg 10/10/8 "Fatigue on last set"
    Calf Raises: 50kg 15x4

2023-03-05 # Measurements
    Weight:   75kg
    Body Fat: 15%
    Chest:    100cm
    Waist:    80cm

2023-03-07 ^ PR
    Squat:    1RM 140kg
    Deadlift: 1RM 160kg
`;

console.log(formatLiftLedger(input)); // Uses default indentation
console.log(formatLiftLedger(input, 4)); // Uses 4 spaces for indentation
