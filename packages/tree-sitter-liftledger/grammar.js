/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const newline = /\r?\n/;

module.exports = grammar({
  name: 'liftledger',

  extras: $ => [$.comment, /[ \t]/],

  rules: {
    source_file: $ => repeat($._entry),

    _entry: $ => choice(
      $.log_entry,
      $.measurement_entry,
      $.pr_entry,
      $.comment,
      $.include,
      $.exercises_block,
      $.template_block,
      newline,
    ),

    comment: $ => seq(';', /.*/),

    include: $ => seq('@include', /\s+/, $.file_path),

    file_path: $ => /[^\s]+/,

    exercises_block: $ => seq(
      $.exercises_start,
      $._line_break,
      repeat($.exercise),
      $._exercises_end,
      $._line_break,
    ),

    exercises_start: $ => '@exercises',

    _exercises_end: $ => '@end-exercises',

    exercise: $ => seq(
      '[',
      $.exercise_name,
      ']',
      repeat($._line_break),
      repeat($.attribute),
    ),

    exercise_name: $ => /[^\]]+/,

    attribute: $ => seq(
      $.attribute_name,
      ':',
      $.attribute_value,
      repeat($._line_break)
    ),

    attribute_name: $ => /[a-zA-Z_]+/,
    attribute_value: $ => /[^\n\r]+/,

    _line_break: $ => /\r?\n/,

    template_block: $ => seq(
      '@template',
      $.template_name,
      $._line_break,
      repeat($.template_exercise),
      '@end-template',
      $._line_break
    ),

    template_name: $ => /[^\n]+/,

    template_exercise: $ => seq(
      $.template_exercise_name,
      ':',
      $.template_exercise_details,
      $._line_break
    ),

    template_exercise_name: $ => /[^:\n]+/,

    template_exercise_details: $ => seq(
      $.weight,
      $.reps_sets,
      optional($.rpe)
    ),

    exercise_details: $ => seq(
      $.weight,
      $.reps_sets,
      optional($.rpe)
    ),

    reps_sets: $ => choice(
      seq($.reps, 'x', $.sets),
      /\d+\/\d+\/\d+/
    ),

    reps: $ => /\d+/,
    sets: $ => /\d+/,

    rpe: $ => seq('@RPE', /\d+(\.\d+)?/),

    log_entry: $ => seq(
      $.date,
      '*',
      $.workout_name,
      $._line_break,
      repeat($.logged_exercise),
    ),

    logged_exercise: $ => seq(
      $.logged_exercise_name,
      ':',
      $.exercise_details,
      optional($.exercise_note),
      $._line_break
    ),

    logged_exercise_name: $ => /[^:\n]+/,

    exercise_note: $ => seq(
      '"',
      /[^"]+/,
      '"'
    ),

    measurement_entry: $ => seq(
      $.date,
      '#',
      'Measurements',
      $._line_break,
      repeat($.measurement),
    ),

    measurement: $ => seq(
      $.measurement_name,
      ':',
      $.measurement_value,
      $._line_break
    ),

    pr_entry: $ => seq(
      $.date,
      '^',
      'PR',
      $._line_break,
      repeat($.pr_record),
    ),

    pr_record: $ => seq(
      $.exercise_name,
      ':',
      $.pr_type,
      $.weight,
      $._line_break
    ),

    pr_type: $ => /\d+RM/,
    weight: $ => /\d+(\.\d+)?kg|BW/,
    date: $ => /\d{4}-\d{2}-\d{2}/,
    workout_name: $ => /[^\n]+/,
    measurement_name: $ => /[^:\n\r]+/,
    measurement_value: $ => /[^\n\r]+/,
  }
});
