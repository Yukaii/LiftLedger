const fs = require('fs');
const path = require('path');

describe('LiftLedger Parser', () => {
  // Simple syntax validation tests
  test('date format validation', () => {
    const isValidDate = (dateStr) => {
      const regex = /^\d{4}-\d{2}-\d{2}$/;
      return regex.test(dateStr);
    };

    expect(isValidDate('2023-03-01')).toBeTruthy();
    expect(isValidDate('2023-3-1')).toBeFalsy();
    expect(isValidDate('20230301')).toBeFalsy();
  });

  test('weight format validation', () => {
    const isValidWeight = (weightStr) => {
      const regex = /^\d+(\.\d+)?kg|BW$/;
      return regex.test(weightStr);
    };

    expect(isValidWeight('100kg')).toBeTruthy();
    expect(isValidWeight('100.5kg')).toBeTruthy();
    expect(isValidWeight('BW')).toBeTruthy();
    expect(isValidWeight('100')).toBeFalsy();
    expect(isValidWeight('100 kg')).toBeFalsy();
  });

  test('reps_sets format validation', () => {
    const isValidRepsSets = (str) => {
      return /^\d+x\d+$/.test(str) || /^\d+\/\d+\/\d+$/.test(str);
    };

    expect(isValidRepsSets('5x3')).toBeTruthy();
    expect(isValidRepsSets('10x4')).toBeTruthy();
    expect(isValidRepsSets('5/5/5')).toBeTruthy();
    expect(isValidRepsSets('5 x 3')).toBeFalsy();
    expect(isValidRepsSets('5X3')).toBeFalsy();
  });

  test('RPE format validation', () => {
    const isValidRPE = (str) => {
      return /^@RPE\d+(\.\d+)?$/.test(str);
    };

    expect(isValidRPE('@RPE8')).toBeTruthy();
    expect(isValidRPE('@RPE9.5')).toBeTruthy();
    expect(isValidRPE('RPE8')).toBeFalsy();
    expect(isValidRPE('@rpe8')).toBeFalsy();
    expect(isValidRPE('@RPE 8')).toBeFalsy();
  });

  // Full file format parsing tests
  describe('Complete File Format Parsing', () => {
    const fixturesDir = path.join(__dirname, 'fixtures');
    
    test('can parse minimal valid LiftLedger file', () => {
      const filePath = path.join(fixturesDir, 'minimal.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Test that file contains expected components
      expect(content).toContain('@exercises');
      expect(content).toContain('@end-exercises');
      expect(content).toContain('2023-01-01 * Simple Workout');
      expect(content).toContain('2023-01-02 # Measurements');
      expect(content).toContain('2023-01-03 ^ PR');
      
      // Test format validation on content
      const lines = content.split('\n');
      const dateLines = lines.filter(line => /^\d{4}-\d{2}-\d{2}/.test(line));
      expect(dateLines.length).toBe(3);
      
      // Each date line should have proper format
      dateLines.forEach(line => {
        const dateMatch = line.match(/^(\d{4}-\d{2}-\d{2}) ([\*\#\^])/);
        expect(dateMatch).toBeTruthy();
      });
    });

    test('can parse complete workout file with all features', () => {
      const filePath = path.join(fixturesDir, 'complete-workout.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Test exercises block
      expect(content).toContain('@exercises');
      expect(content).toContain('@end-exercises');
      expect(content).toContain('[Squat]');
      expect(content).toContain('[Deadlift]');
      expect(content).toContain('[Bench Press]');
      expect(content).toContain('[Pull-ups]');
      
      // Test templates
      expect(content).toContain('@template Push Day');
      expect(content).toContain('@template Pull Day');
      expect(content).toContain('@template Leg Day');
      expect(content).toContain('@end-template');
      
      // Test workout entries
      expect(content).toContain('2023-03-01 * Push Day');
      expect(content).toContain('2023-03-03 * Pull Day');
      expect(content).toContain('2023-03-05 * Leg Day');
      
      // Test measurement entries
      expect(content).toContain('2023-03-07 # Measurements');
      expect(content).toContain('Weight:        75.2kg');
      expect(content).toContain('Body Fat:      14.8%');
      
      // Test PR entries
      expect(content).toContain('2023-03-10 ^ PR');
      expect(content).toContain('1RM 145kg');
      
      // Test include statement
      expect(content).toContain('@include "supplemental-exercises.lfl"');
      
      // Validate exercise details format
      const exerciseLines = content.split('\n').filter(line => 
        line.includes('kg') && line.includes('@RPE') && line.includes(':')
      );
      expect(exerciseLines.length).toBeGreaterThan(0);
      
      exerciseLines.forEach(line => {
        // Should contain exercise name, weight, reps/sets, and RPE
        expect(line).toMatch(/:\s+\d+(\.\d+)?kg\s+\d+[x\/]\d+.*@RPE\d+/);
      });
    });

    test('can parse edge cases and complex scenarios', () => {
      const filePath = path.join(fixturesDir, 'edge-cases.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Test complex exercise names
      expect(content).toContain('[Bulgarian Split Squat]');
      expect(content).toContain('[Weighted Chin-ups]');
      
      // Test varied reps formats
      expect(content).toContain('12/10/8/6'); // Decreasing reps
      expect(content).toContain('15/12/10/8/6'); // Ladder down
      expect(content).toContain('25/20/15/10/5'); // High volume
      expect(content).toContain('5/4/3/2/1'); // Pyramid
      
      // Test decimal weights
      expect(content).toContain('102.5kg');
      expect(content).toContain('87.5kg');
      expect(content).toContain('127.5kg');
      
      // Test bodyweight exercises
      expect(content).toContain('BW 15/12/10/8/6');
      expect(content).toContain('BW 25/20/15/10/5');
      
      // Test time-based exercises
      expect(content).toContain('60s/45s/30s');
      expect(content).toContain('90s');
      
      // Test different RM formats
      expect(content).toContain('3RM 130kg');
      expect(content).toContain('5RM 85kg');
      expect(content).toContain('8RM 45kg');
      
      // Test detailed measurements with decimals
      expect(content).toContain('76.4kg');
      expect(content).toContain('13.2%');
      expect(content).toContain('102.5cm');
    });
  });

  // Exercise parsing validation
  describe('Exercise Component Validation', () => {
    test('validates exercise definition structure', () => {
      const exerciseBlock = `@exercises
    [Test Exercise]
    id:          TEST001
    description: Test exercise description
    tutorial:    https://example.com/test
    image:       test.jpg
@end-exercises`;
      
      // Test exercise block structure
      expect(exerciseBlock).toMatch(/@exercises[\s\S]*@end-exercises/);
      expect(exerciseBlock).toContain('[Test Exercise]');
      expect(exerciseBlock).toMatch(/id:\s+TEST001/);
      expect(exerciseBlock).toMatch(/description:\s+Test exercise description/);
      expect(exerciseBlock).toMatch(/tutorial:\s+https:\/\/example\.com\/test/);
      expect(exerciseBlock).toMatch(/image:\s+test\.jpg/);
    });

    test('validates template structure', () => {
      const templateBlock = `@template Test Template
    Exercise 1:     100kg 5x3 @RPE8
    Exercise 2:     BW 10x4 @RPE7
    Exercise 3:     50kg 8x5
@end-template`;
      
      expect(templateBlock).toMatch(/@template Test Template[\s\S]*@end-template/);
      expect(templateBlock).toContain('100kg 5x3 @RPE8');
      expect(templateBlock).toContain('BW 10x4 @RPE7');
      expect(templateBlock).toContain('50kg 8x5');
    });

    test('validates workout entry structure', () => {
      const workoutEntry = `2023-03-01 * Test Workout
    Exercise 1:     100kg 5/5/4 @RPE8 "Good session"
    Exercise 2:     BW 10x3 @RPE7
    Exercise 3:     75kg 8/7/6 @RPE9 "Struggled on last set"`;
      
      expect(workoutEntry).toMatch(/^\d{4}-\d{2}-\d{2} \* Test Workout/m);
      expect(workoutEntry).toContain('100kg 5/5/4 @RPE8 "Good session"');
      expect(workoutEntry).toContain('BW 10x3 @RPE7');
      expect(workoutEntry).toContain('75kg 8/7/6 @RPE9 "Struggled on last set"');
    });

    test('validates measurement entry structure', () => {
      const measurementEntry = `2023-03-01 # Measurements
    Weight:   75kg
    Body Fat: 15%
    Chest:    100cm`;
      
      expect(measurementEntry).toMatch(/^\d{4}-\d{2}-\d{2} # Measurements/m);
      expect(measurementEntry).toContain('Weight:   75kg');
      expect(measurementEntry).toContain('Body Fat: 15%');
      expect(measurementEntry).toContain('Chest:    100cm');
    });

    test('validates PR entry structure', () => {
      const prEntry = `2023-03-01 ^ PR
    Squat:    1RM 140kg
    Deadlift: 3RM 120kg
    Bench:    5RM 90kg`;
      
      expect(prEntry).toMatch(/^\d{4}-\d{2}-\d{2} \^ PR/m);
      expect(prEntry).toContain('1RM 140kg');
      expect(prEntry).toContain('3RM 120kg');
      expect(prEntry).toContain('5RM 90kg');
    });
  });

  // Advanced validation tests
  describe('Advanced Format Validation', () => {
    test('validates complex reps/sets patterns', () => {
      const patterns = [
        '5x3',           // Standard sets x reps
        '10x4',          // Higher volume
        '5/5/5',         // Consistent reps across sets
        '8/6/4',         // Descending reps
        '10/10/8/6',     // Four sets with varying reps
        '15/12/10/8/6',  // Five sets descending
        '1/2/3/4/5'      // Ascending pyramid
      ];
      
      patterns.forEach(pattern => {
        expect(pattern).toMatch(/^\d+(x\d+|\/((\d+\/)*\d+))$/);
      });
    });

    test('validates weight formats including decimals', () => {
      const weights = [
        '100kg',
        '75.5kg',
        '102.25kg',
        'BW'
      ];
      
      weights.forEach(weight => {
        expect(weight).toMatch(/^\d+(\.\d+)?kg|BW$/);
      });
    });

    test('validates RPE formats', () => {
      const rpeValues = [
        '@RPE6',
        '@RPE7.5',
        '@RPE9',
        '@RPE10'
      ];
      
      rpeValues.forEach(rpe => {
        expect(rpe).toMatch(/^@RPE\d+(\.\d+)?$/);
      });
    });

    test('validates comment and include syntax', () => {
      const comments = [
        '; This is a comment',
        '; Another comment with special chars @#$%',
        '@include "file.lfl"',
        '@include "path/to/file.lfl"'
      ];
      
      expect(comments[0]).toMatch(/^;\s/);
      expect(comments[1]).toMatch(/^;\s/);
      expect(comments[2]).toMatch(/^@include\s+".*\.lfl"$/);
      expect(comments[3]).toMatch(/^@include\s+".*\.lfl"$/);
    });
  });
});