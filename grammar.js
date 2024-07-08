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
      $.log_entry,
      $.measurement_entry,
      $.pr_entry,
      '\n'
    ),

    comment: $ => seq(';', /.*/),

    include: $ => seq('@include', /\s+/, $.file_path),

    file_path: $ => /[^\s]+/,

    exercises_block: $ => seq(
      '@exercises',
      repeat($.exercise_definition),
      '@end-exercises'
    ),

    exercise_definition: $ => seq(
      '[', $.exercise_name, ']',
      repeat($.exercise_attribute)
    ),

    exercise_attribute: $ => seq(
      $.attribute_name,
      ':',
      $.attribute_value
    ),

    attribute_name: $ => /[a-zA-Z_]+/,
    attribute_value: $ => /.+/,

    template_block: $ => seq(
      '@template',
      $.template_name,
      repeat($.template_exercise),
      '@end-template'
    ),

    template_name: $ => /[^\n]+/,

    template_exercise: $ => seq(
      $.exercise_name,
      ':',
      $.template_exercise_details
    ),

    template_exercise_details: $ => /[^\n]+/,

    log_entry: $ => seq(
      $.date,
      '*',
      $.workout_name,
      repeat($.logged_exercise)
    ),

    logged_exercise: $ => seq(
      $.exercise_name,
      ':',
      $.logged_exercise_details
    ),

    logged_exercise_details: $ => /[^\n]+/,

    measurement_entry: $ => seq(
      $.date,
      '#',
      'Measurements',
      repeat($.measurement)
    ),

    measurement: $ => seq(
      $.measurement_name,
      ':',
      $.measurement_value
    ),

    pr_entry: $ => seq(
      $.date,
      '^',
      'PR',
      repeat($.pr_record)
    ),

    pr_record: $ => seq(
      $.exercise_name,
      $.pr_type,
      ':',
      $.weight
    ),

    date: $ => /\d{4}-\d{2}-\d{2}/,
    workout_name: $ => /[^\n]+/,
    exercise_name: $ => /[^:\n]+/,
    measurement_name: $ => /[^:]+/,
    measurement_value: $ => /[^\n]+/,
    pr_type: $ => /\d+RM/,
    weight: $ => /\d+(\.\d+)?kg|BW/
  }
});
