/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'liftledger',

  rules: {
    source_file: $ => repeat($._line),

    _line: $ => choice(
      $.comment,
      $.include,
      $.exercises_block,
      $.template_block,
      $.measurement_entry,
      $.pr_entry,
      $.log_entry,
      '\n'
    ),

    comment: $ => seq(';', /.*/),

    include: $ => seq('@include', /\s+/, $.file_path),

    file_path: $ => /[^\s]+/,

    exercises_block: $ => seq(
      $.exercises_start,
      repeat($._line_break),
      repeat($.exercise),
      $._exercises_end
    ),

    exercises_start: $ => '@exercises',

    _exercises_end: $ => '@end-exercises',

    exercise: $ => seq(
      '[',
      $.exercise_name,
      ']',
      repeat($._line_break),
      repeat($.attribute)
    ),

    exercise_name: $ => /[^\]]+/,

    attribute: $ => seq(
      $.attribute_name,
      ':',
      optional(/\s/),
      $.attribute_value,
      $._line_break
    ),

    attribute_name: $ => /[a-zA-Z_]+/,
    attribute_value: $ => /[^\n]+/,

    _line_break: $ => /\r?\n/,

    template_block: $ => seq(
      '@template',
      $.template_name,
      '\n',
      repeat($.template_exercise),
      '@end-template'
    ),

    template_name: $ => /[^\n]+/,

    template_exercise: $ => seq(
      /\s+/,
      $.template_exercise_name,
      ':',
      /\s+/,
      $.template_exercise_details,
      '\n'
    ),

    template_exercise_details: $ => /[^\n]+/,
    template_exercise_name: $ => /[^\:\n]+/,

    log_entry: $ => seq(
      $.date,
      '*',
      $.workout_name,
      '\n',
      repeat($.logged_exercise),
      '\n\n',
    ),

    logged_exercise: $ => seq(
      /\s+/,
      $.logged_exercise_name,
      ':',
      /\s+/,
      $.logged_exercise_details,
      '\n'
    ),

    logged_exercise_name: $ => /[^\:\n]+/,
    logged_exercise_details: $ => /[^\n]+/,

    measurement_entry: $ => seq(
      $.date,
      '#',
      'Measurements',
      '\n',
      repeat($.measurement),
      '\n\n',
    ),

    measurement: $ => seq(
      /\s+/,
      $.measurement_name,
      ':',
      /\s+/,
      $.measurement_value,
      '\n'
    ),

    pr_entry: $ => seq(
      $.date,
      '^',
      'PR',
      '\n',
      repeat($.pr_record),
      '\n\n'
    ),

    pr_record: $ => seq(
      /\s+/,
      $.pr_exercise_name,
      ':',
      /\s*/,
      $.pr_type,
      /\s+/,
      $.weight,
      '\n'
    ),

    pr_exercise_name: $ => /[^:\n]+/,
    pr_type: $ => /\d+RM/,
    weight: $ => /\d+(\.\d+)?kg|BW/,
    date: $ => /\d{4}-\d{2}-\d{2}/,
    workout_name: $ => /[^\n]+/,
    measurement_name: $ => /[^:]+/,
    measurement_value: $ => /[^\n]+/,
  }
});
