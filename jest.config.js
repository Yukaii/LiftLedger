module.exports = {
  testEnvironment: 'node',
  verbose: true,
  collectCoverage: true,
  coverageReporters: ['text', 'lcov'],
  testMatch: ['**/__tests__/**/*.js', '**/?(*.)+(spec|test).js'],
  setupFilesAfterEnv: ['./jest-setup.js'],
  moduleNameMapper: {
    '^tree-sitter-liftledger$': '<rootDir>/packages/tree-sitter-liftledger/bindings/node/index.js',
    '^tree-sitter$': '<rootDir>/node_modules/tree-sitter/index.js',
  },
  // Run tests sequentially to avoid tree-sitter parser conflicts
  maxWorkers: 1,
  // Reset modules between tests to prevent tree-sitter state conflicts
  resetModules: true,
  clearMocks: true,
};
