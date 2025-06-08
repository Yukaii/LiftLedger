# LiftLedger Demo

A web-based demo application showcasing the LiftLedger linter with CodeMirror integration and real-time diagnostics.

## Features

- **Live Code Editor**: CodeMirror-based editor with syntax highlighting for LiftLedger format
- **Real-time Linting**: Instant feedback on LiftLedger syntax and format issues
- **Diagnostics Panel**: Clear visualization of errors, warnings, and suggestions
- **Example Templates**: Pre-built examples to explore different LiftLedger features
- **Responsive Design**: Clean, modern interface that works on different screen sizes

## Getting Started

### Prerequisites

- Node.js (version 16 or higher)
- pnpm

### Installation

```bash
# From the root of the LiftLedger project
pnpm install

# Start development server
pnpm demo:dev

# Build for production
pnpm demo:build

# Preview production build
pnpm demo:preview
```

Or directly in the demo package:

```bash
cd packages/liftledger-demo

# Install dependencies
pnpm install

# Start development server
pnpm dev

# Build for production
pnpm build

# Preview production build
pnpm preview
```

### Live Demo

The demo is automatically deployed to GitHub Pages and available at:
**[https://liftledger.yukai.dev/demo/](https://liftledger.yukai.dev/demo/)**

The deployment happens automatically when changes are pushed to the main branch.

## Usage

1. **Editor**: Type or paste LiftLedger format content in the main editor area
2. **Live Feedback**: See syntax highlighting and linting feedback in real-time
3. **Diagnostics**: Check the diagnostics panel for detailed error/warning information
4. **Examples**: Use the example buttons to load different LiftLedger scenarios

### Example LiftLedger Format

```liftledger
; Basic workout entry
2024-01-15 * Upper Body Workout
    Bench Press: 80kg 5x3 @RPE8
    Pull-ups: bodyweight 8/6/5
    Overhead Press: 50kg 5x3

; Measurements
2024-01-16 # Body Measurements
    Weight: 75kg
    Body Fat: 15%

; Personal Records
2024-01-17 ^ PR
    Bench Press: 1RM 95kg
```

## Linting Features

The demo includes several linting rules:

- **Missing Date**: Warns when workout entries don't have a date
- **Malformed Entries**: Detects incomplete exercise entries
- **Unit Typos**: Suggests corrections for common unit mistakes
- **Format Validation**: Ensures proper LiftLedger syntax

## Technical Details

### Built With

- **CodeMirror 6**: Modern code editor for the web
- **Vite**: Fast build tool and development server
- **LiftLedger Linter**: Custom linting rules for LiftLedger format
- **Tree-sitter**: Parsing infrastructure for syntax highlighting

### Architecture

- `main.js`: Core application logic and CodeMirror setup
- `index.html`: Main application structure and styling
- `vite.config.js`: Build configuration
- Mock linter for browser compatibility (tree-sitter runs in Node.js)

## Development

The demo uses a mock linter that runs in the browser, implementing a subset of the full LiftLedger linting rules. This provides a practical demonstration of real-time linting capabilities without requiring server-side processing.

For production use, the full Node.js-based linter with tree-sitter parsing would be used via an API endpoint or build-time processing.

## Related Packages

- `liftledger-linter`: Core linting engine
- `tree-sitter-liftledger`: Grammar definition and parser
- `liftledger-client`: JavaScript client library
- `liftledger-fmt`: Code formatter
