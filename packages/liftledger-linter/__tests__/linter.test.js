const { lint } = require('../index');

describe('LiftLedger Linter', () => {
  it('should report an error if a date is missing', () => {
    const sourceCode = `
Bench Press
50kg 5x5
`;
    const diagnostics = lint(sourceCode);
    expect(diagnostics).toEqual(
      expect.arrayContaining([
        expect.objectContaining({
          message: 'LiftLedger entry should have a date.',
          severity: 'error',
          startPosition: expect.objectContaining({ row: 1, column: 0 }), // Adjusted to where the error is reported
        }),
      ])
    );
    expect(diagnostics.length).toBe(1);
  });

  it('should not report an error if a date is present', () => {
    const sourceCode = `
2024-01-15
Bench Press
50kg 5x5
`;
    const diagnostics = lint(sourceCode);
    expect(diagnostics.length).toBe(0);
  });

  it('should not report a missing date error for an empty file', () => {
    const sourceCode = '';
    const diagnostics = lint(sourceCode);
    expect(diagnostics.length).toBe(0);
  });

  it('should not report a missing date error for a file with only comments or whitespace', () => {
    const sourceCode = `
; This is a comment
    
`;
    const diagnostics = lint(sourceCode);
    expect(diagnostics.length).toBe(0);
  });

   it('should handle files with only a date correctly', () => {
    const sourceCode = `2024-01-15`;
    const diagnostics = lint(sourceCode);
    expect(diagnostics.length).toBe(0);
  });

  it('should report an error on the first meaningful token if date is missing and content exists', () => {
    const sourceCode = `Bench Press\n50kg 5x5`; // No leading newline
    const diagnostics = lint(sourceCode);
    expect(diagnostics.length).toBe(1);
    expect(diagnostics[0]).toEqual(
      expect.objectContaining({
        message: 'LiftLedger entry should have a date.',
        severity: 'error',
        startPosition: expect.objectContaining({ row: 0, column: 0 }),
        endPosition: expect.objectContaining({ row: 0, column: 11}) // 'Bench Press'
      })
    );
  });
});
