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
    if (node.type === 'attribute') {
      const name = safeGetText(node, 0);
      maxNameLength = Math.max(maxNameLength, name.length);
    }
    node.children.forEach(findMaxNameLength);
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
    switch (node.type) {
      case 'source_file':
        node.children.forEach(formatWithAlignment);
        break;

      case 'exercises_block':
        formatExercisesBlock(node);
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
        const name = safeGetText(node, 0);
        const padding = ' '.repeat(Math.max(0, maxNameLength - name.length));
        output += getIndent() + name + padding + ': ';
        output += safeGetText(node, 2);
        if (node.children.length > 3) {
          output += ' ' + safeGetText(node, 3);
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
    }
  }

  findMaxNameLength(root);
  formatWithAlignment(root);

  return output;
}

module.exports = formatLiftLedger;
