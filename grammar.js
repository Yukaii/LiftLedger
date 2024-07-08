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
      '\n',
      repeat($.exercise_definition),
      '@end-exercises',
      '\n'
    ),

    exercise_definition: $ => seq(
      /\s+/,
      '[', $.exercise_name, ']',
      '\n',
      repeat($.exercise_attribute),
      '\n'
    ),

    exercise_name: $ => /[^\]]+/,

    exercise_attribute: $ => seq(
      /\s*/,
      $.attribute_name,
      ':',
      /\s*/,
      $.attribute_value,
    ),

    attribute_name: $ => /[a-zA-Z_]+/,
    attribute_value: $ => /[^\n]+/,

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
      $.template_exercise_details,
      '\n'
    ),

    template_exercise_details: $ => /[^\n]+/,

    log_entry: $ => seq(
      $.date,
      '*',
      $.workout_name,
      '\n',
      repeat($.logged_exercise)
    ),

    logged_exercise: $ => seq(
      /\s+/,
      $.exercise_name,
      ':',
      $.logged_exercise_details,
      '\n'
    ),

    logged_exercise_details: $ => /[^\n]+/,

    measurement_entry: $ => seq(
      $.date,
      '#',
      'Measurements',
      '\n',
      repeat($.measurement)
    ),

    measurement: $ => seq(
      /\s+/,
      $.measurement_name,
      ':',
      $.measurement_value,
      '\n'
    ),

    pr_entry: $ => seq(
      $.date,
      '^',
      'PR',
      '\n',
      repeat($.pr_record)
    ),

    pr_record: $ => seq(
      /\s+/,
      $.exercise_name,
      $.pr_type,
      ':',
      $.weight,
      '\n'
    ),

    date: $ => /\d{4}-\d{2}-\d{2}/,
    workout_name: $ => /[^\n]+/,
    template_exercise_name: $ => /[^\n]+/,
    measurement_name: $ => /[^:]+/,
    measurement_value: $ => /[^\n]+/,
    pr_type: $ => /\d+RM/,
    weight: $ => /\d+(\.\d+)?kg|BW/
  }
});
