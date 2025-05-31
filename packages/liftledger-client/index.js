const fs = require('fs')
const Parser = require('tree-sitter')
const LiftLedger = require('tree-sitter-liftledger')

/**
 * LiftLedgerClient
 * Parse, transform, and write LiftLedger files on the fly.
 */
class LiftLedgerClient {
  constructor() {
    // No longer store parser as instance variable to avoid shared state issues
  }

  /**
   * Parse raw text into a Tree-sitter syntax tree.
   * @param {string} text
   * @returns {Parser.Tree}
   */
  parseText(text) {
    const parser = new Parser()
    parser.setLanguage(LiftLedger)
    return parser.parse(text)
  }

  /**
   * Read a file and parse it.
   * @param {string} filePath
   * @returns {{ text: string, tree: Parser.Tree }}
   */
  parseFile(filePath) {
    const text = fs.readFileSync(filePath, 'utf8')
    const tree = this.parseText(text)
    return { text, tree }
  }

  /**
   * Apply a transform function to a file and write to a new file.
   * @param {string} inputPath
   * @param {string} outputPath
   * @param {(text: string, tree: Parser.Tree) => string} transformFn
   */
  transformFile(inputPath, outputPath, transformFn) {
    const { text, tree } = this.parseFile(inputPath)
    const newText = transformFn(text, tree)
    fs.writeFileSync(outputPath, newText, 'utf8')
  }

  /**
   * Apply a transform to raw text.
   * @param {string} rawText
   * @param {(text: string, tree: Parser.Tree) => string} transformFn
   * @returns {string}
   */
  transformText(rawText, transformFn) {
    const tree = this.parseText(rawText)
    return transformFn(rawText, tree)
  }

  /**
   * Overwrite a file with new content.
   * @param {string} filePath
   * @param {string} content
   */
  writeFile(filePath, content) {
    fs.writeFileSync(filePath, content, 'utf8')
  }

  /**
   * Append text to the end of a file.
   * @param {string} filePath
   * @param {string} extraText
   */
  appendToFile(filePath, extraText) {
    fs.appendFileSync(filePath, extraText, 'utf8')
  }
}

module.exports = LiftLedgerClient
