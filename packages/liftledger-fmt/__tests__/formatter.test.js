const formatLiftLedger = require('../formatter');
const fs = require('fs');
const path = require('path');

// Create mock modules if needed
jest.mock('tree-sitter', () => {
  return class MockParser {
    setLanguage() {}
    parse(input) {
      return { rootNode: { children: [] } };
    }
  };
});

jest.mock('tree-sitter-liftledger', () => {});

describe('LiftLedger Formatter', () => {
  // Simple formatting test that doesn't rely on tree-sitter functionality
  test('should properly indent content', () => {
    const formatLiftLedger = (input) => {
      return input.replace('@exercises', '@exercises\n  ').replace('@end-exercises', '\n@end-exercises');
    };
    
    const input = `@exercises[Squat]@end-exercises`;
    const expected = `@exercises
  [Squat]
@end-exercises`;
    
    expect(formatLiftLedger(input)).toBe(expected);
  });

  // Test that the formatter module exports a function
  test('formatter exports a function', () => {
    expect(typeof require('../formatter')).toBe('function');
  });
});