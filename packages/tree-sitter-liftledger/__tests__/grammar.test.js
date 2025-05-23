const fs = require('fs');
const path = require('path');

describe('LiftLedger Grammar', () => {
  let grammarFilePath = path.join(__dirname, '..', 'grammar.js');
  
  test('grammar file exists', () => {
    expect(fs.existsSync(grammarFilePath)).toBeTruthy();
  });

  test('grammar file contains expected syntax definitions', () => {
    const grammarContent = fs.readFileSync(grammarFilePath, 'utf8');
    
    // Check for basic syntax constructs
    expect(grammarContent).toContain('module.exports = grammar({');
    expect(grammarContent).toContain('name: \'liftledger\'');
    expect(grammarContent).toContain('source_file: $ =>');
    
    // Check for key grammar elements
    expect(grammarContent).toContain('log_entry:');
    expect(grammarContent).toContain('exercise:');
    expect(grammarContent).toContain('measurement_entry:');
    expect(grammarContent).toContain('pr_entry:');
    expect(grammarContent).toContain('template_block:');
    
    // Check for specific syntax patterns
    expect(grammarContent).toContain('date: $ =>');
    expect(grammarContent).toContain('weight: $ =>');
    expect(grammarContent).toContain('reps_sets: $ =>');
  });
});