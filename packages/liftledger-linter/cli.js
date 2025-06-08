#!/usr/bin/env node
const fs = require('fs');
const path = require('path');
const { lint } = require('./index');

function main() {
  const args = process.argv.slice(2);

  if (args.length === 0) {
    console.error('Usage: liftledger-linter <file1.lfl> [file2.lfl] ...');
    process.exit(1);
  }

  let totalErrors = 0;
  let totalWarnings = 0;

  args.forEach(filePath => {
    try {
      const absolutePath = path.resolve(filePath);
      if (!fs.existsSync(absolutePath)) {
        console.error(`Error: File not found: ${absolutePath}`);
        totalErrors++;
        return;
      }
      if (fs.statSync(absolutePath).isDirectory()) {
        console.error(`Error: Cannot lint a directory: ${absolutePath}. Please provide individual .lfl files.`);
        totalErrors++;
        return;
      }
      if (path.extname(absolutePath) !== '.lfl') {
        console.warn(`Warning: Skipping non-.lfl file: ${absolutePath}`);
        return;
      }

      const sourceCode = fs.readFileSync(absolutePath, 'utf8');
      const diagnostics = lint(sourceCode);

      if (diagnostics.length > 0) {
        console.log(`\n${absolutePath}`);
        diagnostics.forEach(diagnostic => {
          const { message, startPosition, severity } = diagnostic;
          const line = startPosition.row + 1;
          const column = startPosition.column + 1;
          const type = severity.toUpperCase();
          console.log(`  ${line}:${column}\t${type}\t${message}`);
          if (severity === 'error') {
            totalErrors++;
          } else if (severity === 'warning') {
            totalWarnings++;
          }
        });
      }
    } catch (error) {
      console.error(`Error processing file ${filePath}:`, error.message);
      totalErrors++;
    }
  });

  if (totalErrors > 0 || totalWarnings > 0) {
    console.log(`\nLinting finished with ${totalErrors} error(s) and ${totalWarnings} warning(s).`);
  } else {
    console.log('\nLinting finished. No issues found.');
  }

  if (totalErrors > 0) {
    process.exit(1);
  }
}

if (require.main === module) {
  main();
}
