#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const formatLiftLedger = require('./formatter');

function printHelp() {
  console.log('Usage: lflfmt [options] <file>');
  console.log('');
  console.log('Options:');
  console.log('  -h, --help         Show this help message');
  console.log('  -i, --indent <n>   Set indentation size (default: 2)');
  console.log('  -o, --output <file>  Specify output file (default: stdout)');
  console.log('');
  console.log('If <file> is not specified, the formatter will read from stdin.');
}

function main() {
  const args = process.argv.slice(2);
  let inputFile = null;
  let outputFile = null;
  let indentSize = 2;

  for (let i = 0; i < args.length; i++) {
    switch (args[i]) {
      case '-h':
      case '--help':
        printHelp();
        process.exit(0);
      case '-i':
      case '--indent':
        indentSize = parseInt(args[++i], 10);
        if (isNaN(indentSize)) {
          console.error('Invalid indent size');
          process.exit(1);
        }
        break;
      case '-o':
      case '--output':
        outputFile = args[++i];
        break;
      default:
        if (!inputFile) {
          inputFile = args[i];
        } else {
          console.error('Unexpected argument:', args[i]);
          process.exit(1);
        }
    }
  }

  let input;
  if (inputFile) {
    input = fs.readFileSync(inputFile, 'utf8');
  } else {
    input = fs.readFileSync(0, 'utf8'); // Read from stdin
  }

  const formattedOutput = formatLiftLedger(input, indentSize);

  if (outputFile) {
    fs.writeFileSync(outputFile, formattedOutput);
  } else {
    console.log(formattedOutput);
  }
}

main();
