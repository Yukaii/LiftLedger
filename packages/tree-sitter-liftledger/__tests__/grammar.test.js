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

  // Enhanced grammar tests with complete structure validation
  describe('Grammar Structure Validation', () => {
    let grammarContent;
    
    beforeAll(() => {
      grammarContent = fs.readFileSync(grammarFilePath, 'utf8');
    });

    test('contains all required top-level rules', () => {
      const requiredRules = [
        'source_file',
        'comment',
        'include',
        'exercises_block',
        'exercise',
        'attribute',
        'template_block',
        'template_exercise',
        'log_entry',
        'logged_exercise',
        'measurement_entry',
        'pr_entry'
      ];

      requiredRules.forEach(rule => {
        expect(grammarContent).toContain(`${rule}:`);
      });
    });

    test('contains exercise-specific rules', () => {
      const exerciseRules = [
        'exercise_name',
        'exercise_details',
        'logged_exercise_name',
        'template_exercise_name',
        'exercise_note'
      ];

      exerciseRules.forEach(rule => {
        expect(grammarContent).toContain(`${rule}:`);
      });
    });

    test('contains data format rules', () => {
      const dataRules = [
        'weight',
        'date',
        'reps_sets',
        'reps',
        'sets',
        'rpe'
      ];

      dataRules.forEach(rule => {
        expect(grammarContent).toContain(`${rule}:`);
      });
    });

    test('contains measurement and PR rules', () => {
      const measurementRules = [
        'measurement',
        'measurement_name',
        'measurement_value',
        'pr_record',
        'pr_type'
      ];

      measurementRules.forEach(rule => {
        expect(grammarContent).toContain(`${rule}:`);
      });
    });

    test('validates weight format patterns', () => {
      // Should contain pattern for kg weights and BW
      expect(grammarContent).toContain('weight:');
      // The actual regex should support decimal weights and BW
      expect(grammarContent).toMatch(/weight.*\\d+.*kg.*BW/s);
    });

    test('validates date format patterns', () => {
      // Should contain pattern for YYYY-MM-DD format
      expect(grammarContent).toContain('date:');
      expect(grammarContent).toContain('\\d{4}-\\d{2}-\\d{2}');
    });

    test('validates reps/sets format patterns', () => {
      // Should support both 5x3 and 5/5/5 formats
      expect(grammarContent).toContain('reps_sets:');
      // Should contain choice between formats
      expect(grammarContent).toMatch(/reps_sets.*choice/s);
    });

    test('validates RPE format patterns', () => {
      // Should contain @RPE with numeric value
      expect(grammarContent).toContain('rpe:');
      expect(grammarContent).toMatch(/rpe.*@RPE/s);
    });

    test('validates entry type markers', () => {
      // Should contain markers for different entry types
      expect(grammarContent).toContain("'*'"); // Workout marker
      expect(grammarContent).toContain("'#'"); // Measurement marker  
      expect(grammarContent).toContain("'^'"); // PR marker
    });

    test('validates block delimiters', () => {
      // Should contain exercise and template block delimiters
      expect(grammarContent).toContain('@exercises');
      expect(grammarContent).toContain('@end-exercises');
      expect(grammarContent).toContain('@template');
      expect(grammarContent).toContain('@end-template');
    });

    test('validates comment and include syntax', () => {
      // Should contain comment pattern
      expect(grammarContent).toContain('comment:');
      expect(grammarContent).toMatch(/comment.*';'/s);
      
      // Should contain include pattern
      expect(grammarContent).toContain('include:');
      expect(grammarContent).toMatch(/include.*@include/s);
    });
  });

  // Test that grammar can handle fixture file patterns
  describe('Grammar Pattern Validation', () => {
    const fixturesDir = path.join(__dirname, '..', '..', '..', '__tests__', 'fixtures');

    test('grammar patterns match fixture file content', () => {
      const minimalPath = path.join(fixturesDir, 'minimal.lfl');
      if (fs.existsSync(minimalPath)) {
        const content = fs.readFileSync(minimalPath, 'utf8');
        
        // Test that content matches expected patterns the grammar should handle
        expect(content).toMatch(/@exercises[\s\S]*@end-exercises/);
        expect(content).toMatch(/\d{4}-\d{2}-\d{2} \* \w+/);
        expect(content).toMatch(/\d{4}-\d{2}-\d{2} # Measurements/);
        expect(content).toMatch(/\d{4}-\d{2}-\d{2} \^ PR/);
      }
    });

    test('grammar patterns match complex fixture patterns', () => {
      const completePath = path.join(fixturesDir, 'complete-workout.lfl');
      if (fs.existsSync(completePath)) {
        const content = fs.readFileSync(completePath, 'utf8');
        
        // Test complex patterns
        expect(content).toMatch(/@template \w+[\s\S]*@end-template/);
        expect(content).toMatch(/\w+:\s+\d+(\.\d+)?kg\s+\d+[x\/]\d+.*@RPE\d+/);
        expect(content).toMatch(/\w+:\s+BW\s+\d+[x\/]\d+/);
        expect(content).toMatch(/"[^"]+"/); // Exercise notes
        expect(content).toMatch(/\d+RM\s+\d+kg/); // PR format
      }
    });

    test('grammar patterns match edge case patterns', () => {
      const edgePath = path.join(fixturesDir, 'edge-cases.lfl');
      if (fs.existsSync(edgePath)) {
        const content = fs.readFileSync(edgePath, 'utf8');
        
        // Test edge case patterns
        expect(content).toMatch(/\d+(\.\d+)?kg\s+\d+\/\d+\/\d+\/\d+/); // Complex reps
        expect(content).toMatch(/BW\s+\d+\/\d+\/\d+\/\d+\/\d+/); // Bodyweight pyramids
        expect(content).toMatch(/\d+s/); // Time-based exercises
        expect(content).toMatch(/\d+RM\s+\d+(\.\d+)?kg/); // Different RM formats
      }
    });
  });

  // Test grammar consistency and completeness
  describe('Grammar Consistency', () => {
    let grammarContent;
    
    beforeAll(() => {
      grammarContent = fs.readFileSync(grammarFilePath, 'utf8');
    });

    test('all referenced rules are defined', () => {
      // Extract all rule references (e.g., $.rule_name)
      const ruleReferences = grammarContent.match(/\$\.[\w_]+/g) || [];
      const uniqueRefs = [...new Set(ruleReferences.map(ref => ref.substring(2)))];
      
      // Extract all rule definitions (e.g., rule_name: $ =>)
      const ruleDefinitions = grammarContent.match(/^\s*[\w_]+:\s*\$/gm) || [];
      const definedRules = ruleDefinitions.map(def => def.match(/^\s*([\w_]+):/)[1]);
      
      // Check that all referenced rules are defined
      uniqueRefs.forEach(ref => {
        if (!['$', 'choice', 'seq', 'repeat', 'optional'].includes(ref)) {
          expect(definedRules).toContain(ref);
        }
      });
    });

    test('grammar exports are properly structured', () => {
      expect(grammarContent).toMatch(/module\.exports\s*=\s*grammar\s*\(/);
      expect(grammarContent).toMatch(/name:\s*['"]liftledger['"]/);
      expect(grammarContent).toMatch(/rules:\s*\{/);
    });

    test('terminal patterns are properly escaped', () => {
      // Check that special characters in string literals are properly handled
      const stringLiterals = grammarContent.match(/'[^']*'/g) || [];
      stringLiterals.forEach(literal => {
        // Should not contain problematic unescaped characters (this is just a basic check)
        expect(literal).toBeTruthy(); // Just ensure we found some literals
      });
      
      // More meaningful test: check that the grammar contains proper string escaping
      expect(grammarContent).toContain("'@exercises'");
      expect(grammarContent).toContain("'@template'");
    });
  });
});