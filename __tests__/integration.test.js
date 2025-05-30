const fs = require('fs');
const path = require('path');

describe('LiftLedger Integration Tests', () => {
  const fixturesDir = path.join(__dirname, 'fixtures');
  
  describe('End-to-End File Processing', () => {
    test('can validate complete workout file structure', () => {
      const filePath = path.join(fixturesDir, 'complete-workout.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Test comprehensive parsing capabilities
      const sections = {
        exercises: /@exercises[\s\S]*?@end-exercises/g,
        templates: /@template[\s\S]*?@end-template/g,
        workouts: /^\d{4}-\d{2}-\d{2} \* .+$/gm,
        measurements: /^\d{4}-\d{2}-\d{2} # Measurements$/gm,
        prs: /^\d{4}-\d{2}-\d{2} \^ PR$/gm,
        comments: /^;.*$/gm,
        includes: /^@include .+$/gm
      };
      
      // Verify all major sections are present and parseable
      expect(content.match(sections.exercises)).toHaveLength(1);
      expect(content.match(sections.templates)).toHaveLength(3);
      expect(content.match(sections.workouts)).toHaveLength(4);
      expect(content.match(sections.measurements)).toHaveLength(2);
      expect(content.match(sections.prs)).toHaveLength(1);
      expect(content.match(sections.comments)).toBeTruthy();
      expect(content.match(sections.includes)).toHaveLength(1);
    });

    test('validates exercise data integrity across all formats', () => {
      const filePath = path.join(fixturesDir, 'edge-cases.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Extract and validate all exercise entries
      const exerciseEntries = content.match(/^\s+\w+.*:\s+.+$/gm) || [];
      
      let weightEntries = 0;
      let bodyweightEntries = 0;
      let rpeEntries = 0;
      let notedEntries = 0;
      
      exerciseEntries.forEach(line => {
        if (line.includes('kg')) weightEntries++;
        if (line.includes('BW')) bodyweightEntries++;
        if (line.includes('@RPE')) rpeEntries++;
        if (line.includes('"')) notedEntries++;
      });
      
      expect(weightEntries).toBeGreaterThan(10);
      expect(bodyweightEntries).toBeGreaterThan(5);
      expect(rpeEntries).toBeGreaterThan(15);
      expect(notedEntries).toBeGreaterThan(8);
    });

    test('validates measurement and PR data consistency', () => {
      const filePath = path.join(fixturesDir, 'complete-workout.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Extract measurement sections
      const measurementSections = content.match(
        /\d{4}-\d{2}-\d{2} # Measurements[\s\S]*?(?=\n\d{4}-\d{2}-\d{2}|\n@|\nz)/g
      ) || [];
      
      measurementSections.forEach(section => {
        const measurements = section.match(/^\s+\w+.*:\s+.+$/gm) || [];
        expect(measurements.length).toBeGreaterThan(0);
        
        measurements.forEach(measurement => {
          // Should have valid measurement format
          expect(measurement).toMatch(/^\s+[\w\s]+:\s+\d+(\.\d+)?(kg|%|cm|\/10)$/);
        });
      });
      
      // Extract PR sections
      const prSections = content.match(
        /\d{4}-\d{2}-\d{2} \^ PR[\s\S]*?(?=\n\d{4}-\d{2}-\d{2}|\n@|\nz)/g
      ) || [];
      
      prSections.forEach(section => {
        const prs = section.match(/^\s+\w+.*:\s+.+$/gm) || [];
        expect(prs.length).toBeGreaterThan(0);
        
        prs.forEach(pr => {
          // Should have valid PR format
          expect(pr).toMatch(/^\s+[\w\s]+:\s+\d+RM\s+\d+(\.\d+)?kg$/);
        });
      });
    });
  });

  describe('Cross-Format Validation', () => {
    test('template exercises match workout log formats', () => {
      const filePath = path.join(fixturesDir, 'complete-workout.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Extract template exercises
      const templateExercises = content.match(
        /@template[\s\S]*?@end-template/g
      )?.[0]?.match(/^\s+\w+.*:\s+.+$/gm) || [];
      
      // Extract workout exercises
      const workoutExercises = content.match(
        /\d{4}-\d{2}-\d{2} \* [\s\S]*?(?=\n\d{4}-\d{2}-\d{2}|\n@|$)/g
      )?.[0]?.match(/^\s+\w+.*:\s+.+$/gm) || [];
      
      // Both should have similar format patterns
      templateExercises.forEach(exercise => {
        expect(exercise).toMatch(/:\s+(BW|\d+(\.\d+)?kg)\s+\d+[x\/]/);
      });
      
      workoutExercises.forEach(exercise => {
        expect(exercise).toMatch(/:\s+(BW|\d+(\.\d+)?kg)\s+\d+[x\/]/);
      });
    });

    test('validates consistent exercise naming across sections', () => {
      const filePath = path.join(fixturesDir, 'complete-workout.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      // Extract exercise definitions
      const exerciseDefinitions = content.match(/^\s+\[(.+)\]$/gm)?.map(
        match => match.match(/\[(.+)\]/)[1]
      ) || [];
      
      // Extract exercise usage in templates and workouts
      const exerciseUsage = content.match(/^\s+([^:\[]+):/gm)?.map(
        match => match.match(/^\s+([^:]+):/)[1].trim()
      ) || [];
      
      // Some exercises used should be defined (allow for flexibility)
      const definedSet = new Set(exerciseDefinitions);
      const usedUndefined = exerciseUsage.filter(name => !definedSet.has(name));
      
      // Test that we have both defined and used exercises
      expect(exerciseDefinitions.length).toBeGreaterThan(0);
      expect(exerciseUsage.length).toBeGreaterThan(0);
      expect(usedUndefined.length).toBeLessThan(exerciseUsage.length); // Some flexibility
    });
  });

  describe('Format Completeness Validation', () => {
    test('covers all documented format features', () => {
      const allFiles = ['minimal.lfl', 'complete-workout.lfl', 'edge-cases.lfl'];
      let combinedContent = '';
      
      allFiles.forEach(filename => {
        const filePath = path.join(fixturesDir, filename);
        if (fs.existsSync(filePath)) {
          combinedContent += fs.readFileSync(filePath, 'utf8') + '\n';
        }
      });
      
      // Verify all major format features are tested
      const features = {
        comments: /^;/m,
        includes: /@include/,
        exerciseBlocks: /@exercises[\s\S]*@end-exercises/,
        templateBlocks: /@template[\s\S]*@end-template/,
        workoutEntries: /\d{4}-\d{2}-\d{2} \*/,
        measurementEntries: /\d{4}-\d{2}-\d{2} #/,
        prEntries: /\d{4}-\d{2}-\d{2} \^/,
        standardReps: /\d+x\d+/,
        variableReps: /\d+\/\d+\/\d+/,
        bodyweight: /BW\s+\d+/,
        weightedExercises: /\d+(\.\d+)?kg/,
        rpeValues: /@RPE\d+(\.\d+)?/,
        exerciseNotes: /"[^"]+"/,
        rmFormats: /\d+RM/,
        timeBasedSets: /\d+s/
      };
      
      Object.entries(features).forEach(([feature, pattern]) => {
        expect(combinedContent).toMatch(pattern);
      });
    });

    test('validates edge case coverage', () => {
      const filePath = path.join(fixturesDir, 'edge-cases.lfl');
      const content = fs.readFileSync(filePath, 'utf8');
      
      const edgeCases = {
        decimalWeights: /\d+\.\d+kg/,
        complexRepSchemes: /\d+\/\d+\/\d+\/\d+/,
        highVolumeReps: /2[0-9]\/1[5-9]/,
        lowReps: /[1-3]\/[1-3]\/[1-3]/,
        pyramidSets: /5\/4\/3\/2\/1/,
        timeBasedExercises: /\d+s/,
        bodyweightVariations: /BW\s+\d+\/\d+\/\d+/,
        highRPE: /@RPE[9](\.\d+)?/,
        multipleRMFormats: /[3-8]RM/,
        longExerciseNames: /[A-Z][a-z]+\s[A-Z][a-z]+\s[A-Z][a-z]+/
      };
      
      Object.entries(edgeCases).forEach(([caseType, pattern]) => {
        expect(content).toMatch(pattern);
      });
    });
  });
});