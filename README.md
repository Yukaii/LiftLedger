# Lift Ledger: A Simple Fitness Tracking Format

Lift Ledger is a plain text format for tracking fitness workouts and progress over time. It's designed to be easy to edit manually while also being parser-friendly and extensible.

It's inspired by [beancount](https://github.com/beancount/beancount). Co-designed with Claude 3.5 Sonnet.

## Key Features

- Simple, human-readable plain text format
- Easy to edit manually or with basic text editors
- Structured for easy parsing by programs
- Flexible organization (by day, week, month, or year)
- Supports exercise definitions, workout templates, and logging
- Accommodates incomplete sets and workout notes

## Basic Format

```lfl
; Lift Ledger Format Example

@exercises
    [Squat]
    id:          SQ001
    description: Barbell squat targeting quads, glutes, and core
    tutorial:    https://example.com/squat-tutorial
    image:       squat.jpg

    [Deadlift]
    id:          DL001
    description: Compound exercise for posterior chain
    tutorial:    https://example.com/deadlift-tutorial
    image:       deadlift.jpg
@end-exercises

@template Leg Day
    Squat:      100kg 5x3 @RPE8
    Deadlift:   120kg 5x3 @RPE7
    Leg Press:  150kg 10x3
    Calf Raises: 50kg 15x4
@end-template

2023-03-01 * Leg Day
    Squat:      100kg 5/5/4 @RPE8 "Felt tired on last set"
    Deadlift:   120kg 5/5/3 @RPE7 "Lower back tight, stopped early"
    Leg Press:  150kg 10/10/8 "Fatigue on last set"
    Calf Raises: 50kg 15x4

2023-03-05 # Measurements
    Weight:   75kg
    Body Fat: 15%
    Chest:    100cm
    Waist:    80cm

2023-03-07 ^ PR
    Squat:    1RM 140kg
    Deadlift: 1RM 160kg
```

## Format Explanation

- Lines starting with ';' are comments
- '@exercises' section defines exercises with details
- '@template' defines workout templates
- Date lines start workouts, measurements, or personal records
- '*' indicates a workout, '#' measurements, '^' personal records
- Exercise logs: `Name: Weight Reps @RPE "Optional notes"`
- Reps can be noted as `5x3` for consistent sets or `5/5/4` for varying reps
- Use "BW" for bodyweight exercises

## Extensibility

The format is designed to be extended by third-party tools. Special comments (e.g., '; @tool-specific-instruction') can be used for custom features but are ignored by the core parser.

## Demo

🚀 **Try LiftLedger in your browser!**

Experience LiftLedger with our interactive demo that features:
- Live code editor with syntax highlighting
- Real-time linting and error detection
- Example templates and scenarios

**[View Demo →](https://liftledger.yukai.dev/)**

The demo showcases the LiftLedger format with CodeMirror integration and provides instant feedback on your LiftLedger entries.

## Getting Started

1. Create a new text file with a `.lfl` extension
2. Start by defining your exercises and workout templates
3. Log your workouts, measurements, and personal records
4. Use comments to add any additional information

For more detailed information and examples, please refer to the full documentation.

## Development

This project includes several packages:

- **`tree-sitter-liftledger`**: Grammar definition and parser
- **`liftledger-linter`**: Linting rules and validation
- **`liftledger-client`**: JavaScript client library
- **`liftledger-fmt`**: Code formatter
- **`liftledger-demo`**: Interactive web demo

### Quick Commands

```bash
# Run tests
pnpm test

# Start demo in development mode
pnpm demo:dev

# Build demo for production
pnpm demo:build

# Build all packages
pnpm build
```
