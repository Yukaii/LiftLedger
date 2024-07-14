// liftledger-formatter.js
const Parser = require('tree-sitter');
const LiftLedger = require('tree-sitter-liftledger');

function formatLiftLedger(input, indentSize = 2) {
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
    if (node.children.length > index) {
      return node.children[index].text.trim();
    }
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
    }
  }

  findMaxNameLength(root);
  formatWithAlignment(root);

  return output;
}

module.exports = formatLiftLedger;
