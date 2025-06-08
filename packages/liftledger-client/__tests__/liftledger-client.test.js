const fs = require('fs')
const path = require('path')
const LiftLedgerClient = require('../index')

describe('LiftLedgerClient', () => {
  let client

  beforeEach(() => {
    client = new LiftLedgerClient()
  })

  test.skip('parseText returns a tree with source_file root', () => {
    // TODO: Fix tree-sitter state interference when running with linter tests
    const text = '2025-01-01 * Test Workout\n    Exercise: 100kg 5x5'
    const tree = client.parseText(text)
    expect(tree).toBeDefined()
    expect(tree.rootNode).toBeDefined()
    expect(tree.rootNode.type).toBe('source_file')
  })

  test('transformFile applies transform and writes output', () => {
    const inputPath = path.join(__dirname, 'temp-input.lfl')
    const outputPath = path.join(__dirname, 'temp-output.lfl')
    const original = '2025-01-01 * Test Workout\n    Entry: yes'
    fs.writeFileSync(inputPath, original, 'utf8')

    client.transformFile(inputPath, outputPath, (text, tree) => {
      // Append a comment line at end
      return text + '\n# Added by transform'
    })

    const newContent = fs.readFileSync(outputPath, 'utf8')
    expect(newContent).toContain(original)
    expect(newContent).toContain('# Added by transform')

    // Cleanup temp files
    fs.unlinkSync(inputPath)
    fs.unlinkSync(outputPath)
  })
})
