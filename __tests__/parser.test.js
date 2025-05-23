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
});