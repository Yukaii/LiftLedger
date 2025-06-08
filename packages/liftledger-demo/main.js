import { EditorView } from '@codemirror/view';
import { EditorState } from '@codemirror/state';
import { basicSetup } from 'codemirror';
import { linter, lintGutter } from '@codemirror/lint';
import { oneDark } from '@codemirror/theme-one-dark';
import { StreamLanguage } from '@codemirror/language';
import { initTreeSitter, lint, createCodeMirrorLinter } from 'liftledger-linter/browser.js';

// Browser-compatible formatter
function formatLiftLedger(input, indentSize = 2) {
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

const liftLedgerLanguage = StreamLanguage.define({
  name: 'liftledger',
  startState() {
    return {};
  },
  token(stream, state) {
    // Date pattern
    if (stream.match(/^\d{4}-\d{2}-\d{2}/)) {
      return 'keyword';
    }
    
    // Comments
    if (stream.match(/^;.*$/)) {
      return 'comment';
    }
    
    // Section markers
    if (stream.match(/^[@^*#]/)) {
      return 'operator';
    }
    
    // Exercise names in brackets
    if (stream.match(/^\[.*?\]/)) {
      return 'string';
    }
    
    // Numbers (weights, reps, etc.)
    if (stream.match(/^\d+(\.\d+)?(kg|lbs|%)?/)) {
      return 'number';
    }
    
    // RPE markers
    if (stream.match(/@RPE\d+/)) {
      return 'atom';
    }
    
    // Sets notation (5x3, etc.)
    if (stream.match(/\d+x\d+/)) {
      return 'number';
    }
    
    // Quoted strings
    if (stream.match(/"[^"]*"/)) {
      return 'string';
    }
    
    stream.next();
    return null;
  }
});


// Initialize the editor
let editorView;

function initEditor() {
  const startDoc = `; LiftLedger Demo
; Try typing a workout entry below

2024-01-15 * Upper Body Workout
  Bench Press: 80kg 5x3 @RPE8
  Pull-ups: bodyweight 8/6/5
  Overhead Press: 50kg 5x3`;

  const state = EditorState.create({
    doc: startDoc,
    extensions: [
      basicSetup,
      liftLedgerLanguage,
      linter(createCodeMirrorLinter()),
      lintGutter(),
      oneDark,
      EditorView.updateListener.of(update => {
        if (update.docChanged) {
          updateDiagnostics(update.state.doc.toString());
        }
      })
    ]
  });

  editorView = new EditorView({
    state,
    parent: document.getElementById('editor')
  });

  // Initial diagnostics update
  updateDiagnostics(startDoc);
}


function updateDiagnostics(sourceCode) {
  const diagnostics = lint(sourceCode);
  const diagnosticsList = document.getElementById('diagnostics-list');
  
  if (diagnostics.length === 0) {
    diagnosticsList.innerHTML = `
      <div class="no-diagnostics">
        ✅ No issues found!<br>
        Your LiftLedger format looks good.
      </div>
    `;
    return;
  }
  
  diagnosticsList.innerHTML = diagnostics.map(diagnostic => {
    const severityClass = `diagnostic-${diagnostic.severity}`;
    const severityIcon = {
      error: '❌',
      warning: '⚠️',
      info: 'ℹ️'
    }[diagnostic.severity];
    
    return `
      <div class="diagnostic-item ${severityClass}">
        <div class="diagnostic-message">${severityIcon} ${diagnostic.message}</div>
        <div class="diagnostic-location">Line ${diagnostic.line + 1}</div>
      </div>
    `;
  }).join('');
}

// Example data
const examples = {
  basic: `2024-01-15 * Basic Workout
  Squats: 100kg 5x3
  Bench Press: 80kg 5x3
  Deadlift: 120kg 1x5`,
    
  complete: `; Complete LiftLedger Example

@exercises
  [Squat]
  id: SQ001
  description: Barbell squat targeting quads and glutes
@end-exercises

@template Upper Body
  Bench Press: 80kg 5x3 @RPE8
  Pull-ups: bodyweight 8x3
@end-template

2024-01-15 * Upper Body Workout
  Bench Press: 80kg 5/5/4 @RPE8 "Felt strong today"
  Pull-ups: bodyweight 8/6/5 "Last set was tough"
  Overhead Press: 50kg 5x3

2024-01-16 # Measurements
  Weight: 75kg
  Body Fat: 15%

2024-01-17 ^ PR
  Bench Press: 1RM 95kg`,
    
  error: `; This will show an error because it's missing a date
  Squats: 100kg 5x3
  Bench Press: 80kg 5x3`,
    
  unformatted: `; Unformatted code - try the Format button!


@exercises
[Squat]
id: SQ001
description: Barbell squat targeting quads and glutes
@end-exercises


@template Upper Body
Bench Press: 80kg 5x3 @RPE8
Pull-ups: bodyweight 8x3
@end-template


2024-01-15 * Upper Body Workout
Bench Press: 80kg 5/5/4 @RPE8 "Felt strong today"
Pull-ups: bodyweight 8/6/5 "Last set was tough"
Overhead Press: 50kg 5x3


2024-01-16 # Measurements
Weight: 75kg
Body Fat: 15%`,
    
  measurements: `2024-01-20 # Body Measurements
  Weight: 75.5kg
  Body Fat: 14.8%
  Chest: 102cm
  Waist: 81cm
  Arms: 35cm`
};

// Make loadExample globally available
window.loadExample = function(exampleKey) {
  const example = examples[exampleKey];
  if (example && editorView) {
    editorView.dispatch({
      changes: {
        from: 0,
        to: editorView.state.doc.length,
        insert: example
      }
    });
  }
};

// Format function
function formatCode() {
  if (!editorView) return;
  
  const currentText = editorView.state.doc.toString();
  const formattedText = formatLiftLedger(currentText);
  
  // Update the editor with formatted text
  editorView.dispatch({
    changes: {
      from: 0,
      to: editorView.state.doc.length,
      insert: formattedText
    }
  });
}

// Initialize when DOM is loaded
document.addEventListener('DOMContentLoaded', async () => {
  // Initialize tree-sitter first
  await initTreeSitter();
  
  // Then initialize the editor
  initEditor();
  
  // Add format button event listener
  const formatBtn = document.getElementById('format-btn');
  if (formatBtn) {
    formatBtn.addEventListener('click', formatCode);
  }
});
