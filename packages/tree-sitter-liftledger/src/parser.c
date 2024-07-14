#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__entry_token1 = 1,
  anon_sym_SEMI = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_ATinclude = 4,
  aux_sym_include_token1 = 5,
  sym_file_path = 6,
  sym_exercises_start = 7,
  sym__exercises_end = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  sym_exercise_name = 11,
  anon_sym_COLON = 12,
  sym_attribute_name = 13,
  aux_sym_attribute_value_token1 = 14,
  anon_sym_ATtemplate = 15,
  anon_sym_ATend_DASHtemplate = 16,
  aux_sym_template_name_token1 = 17,
  aux_sym_template_exercise_name_token1 = 18,
  anon_sym_x = 19,
  aux_sym_reps_sets_token1 = 20,
  aux_sym_reps_token1 = 21,
  anon_sym_ATRPE = 22,
  aux_sym_rpe_token1 = 23,
  anon_sym_STAR = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_exercise_note_token1 = 26,
  anon_sym_POUND = 27,
  anon_sym_Measurements = 28,
  anon_sym_CARET = 29,
  anon_sym_PR = 30,
  sym_pr_type = 31,
  sym_weight = 32,
  sym_date = 33,
  sym_measurement_name = 34,
  sym_source_file = 35,
  sym__entry = 36,
  sym_comment = 37,
  sym_include = 38,
  sym_exercises_block = 39,
  sym_exercise = 40,
  sym_attribute = 41,
  sym_attribute_value = 42,
  sym__line_break = 43,
  sym_template_block = 44,
  sym_template_name = 45,
  sym_template_exercise = 46,
  sym_template_exercise_name = 47,
  sym_template_exercise_details = 48,
  sym_exercise_details = 49,
  sym_reps_sets = 50,
  sym_reps = 51,
  sym_sets = 52,
  sym_rpe = 53,
  sym_log_entry = 54,
  sym_logged_exercise = 55,
  sym_logged_exercise_name = 56,
  sym_exercise_note = 57,
  sym_measurement_entry = 58,
  sym_measurement = 59,
  sym_pr_entry = 60,
  sym_pr_record = 61,
  sym_workout_name = 62,
  sym_measurement_value = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_exercises_block_repeat1 = 65,
  aux_sym_exercise_repeat1 = 66,
  aux_sym_exercise_repeat2 = 67,
  aux_sym_template_block_repeat1 = 68,
  aux_sym_log_entry_repeat1 = 69,
  aux_sym_measurement_entry_repeat1 = 70,
  aux_sym_pr_entry_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__entry_token1] = "_entry_token1",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_ATinclude] = "@include",
  [aux_sym_include_token1] = "include_token1",
  [sym_file_path] = "file_path",
  [sym_exercises_start] = "exercises_start",
  [sym__exercises_end] = "_exercises_end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_exercise_name] = "exercise_name",
  [anon_sym_COLON] = ":",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_ATtemplate] = "@template",
  [anon_sym_ATend_DASHtemplate] = "@end-template",
  [aux_sym_template_name_token1] = "template_name_token1",
  [aux_sym_template_exercise_name_token1] = "template_exercise_name_token1",
  [anon_sym_x] = "x",
  [aux_sym_reps_sets_token1] = "reps_sets_token1",
  [aux_sym_reps_token1] = "reps_token1",
  [anon_sym_ATRPE] = "@RPE",
  [aux_sym_rpe_token1] = "rpe_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_exercise_note_token1] = "exercise_note_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_Measurements] = "Measurements",
  [anon_sym_CARET] = "^",
  [anon_sym_PR] = "PR",
  [sym_pr_type] = "pr_type",
  [sym_weight] = "weight",
  [sym_date] = "date",
  [sym_measurement_name] = "measurement_name",
  [sym_source_file] = "source_file",
  [sym__entry] = "_entry",
  [sym_comment] = "comment",
  [sym_include] = "include",
  [sym_exercises_block] = "exercises_block",
  [sym_exercise] = "exercise",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym__line_break] = "_line_break",
  [sym_template_block] = "template_block",
  [sym_template_name] = "template_name",
  [sym_template_exercise] = "template_exercise",
  [sym_template_exercise_name] = "template_exercise_name",
  [sym_template_exercise_details] = "template_exercise_details",
  [sym_exercise_details] = "exercise_details",
  [sym_reps_sets] = "reps_sets",
  [sym_reps] = "reps",
  [sym_sets] = "sets",
  [sym_rpe] = "rpe",
  [sym_log_entry] = "log_entry",
  [sym_logged_exercise] = "logged_exercise",
  [sym_logged_exercise_name] = "logged_exercise_name",
  [sym_exercise_note] = "exercise_note",
  [sym_measurement_entry] = "measurement_entry",
  [sym_measurement] = "measurement",
  [sym_pr_entry] = "pr_entry",
  [sym_pr_record] = "pr_record",
  [sym_workout_name] = "workout_name",
  [sym_measurement_value] = "measurement_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exercises_block_repeat1] = "exercises_block_repeat1",
  [aux_sym_exercise_repeat1] = "exercise_repeat1",
  [aux_sym_exercise_repeat2] = "exercise_repeat2",
  [aux_sym_template_block_repeat1] = "template_block_repeat1",
  [aux_sym_log_entry_repeat1] = "log_entry_repeat1",
  [aux_sym_measurement_entry_repeat1] = "measurement_entry_repeat1",
  [aux_sym_pr_entry_repeat1] = "pr_entry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__entry_token1] = aux_sym__entry_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [sym_file_path] = sym_file_path,
  [sym_exercises_start] = sym_exercises_start,
  [sym__exercises_end] = sym__exercises_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_exercise_name] = sym_exercise_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_ATtemplate] = anon_sym_ATtemplate,
  [anon_sym_ATend_DASHtemplate] = anon_sym_ATend_DASHtemplate,
  [aux_sym_template_name_token1] = aux_sym_template_name_token1,
  [aux_sym_template_exercise_name_token1] = aux_sym_template_exercise_name_token1,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_reps_sets_token1] = aux_sym_reps_sets_token1,
  [aux_sym_reps_token1] = aux_sym_reps_token1,
  [anon_sym_ATRPE] = anon_sym_ATRPE,
  [aux_sym_rpe_token1] = aux_sym_rpe_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_exercise_note_token1] = aux_sym_exercise_note_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Measurements] = anon_sym_Measurements,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PR] = anon_sym_PR,
  [sym_pr_type] = sym_pr_type,
  [sym_weight] = sym_weight,
  [sym_date] = sym_date,
  [sym_measurement_name] = sym_measurement_name,
  [sym_source_file] = sym_source_file,
  [sym__entry] = sym__entry,
  [sym_comment] = sym_comment,
  [sym_include] = sym_include,
  [sym_exercises_block] = sym_exercises_block,
  [sym_exercise] = sym_exercise,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym__line_break] = sym__line_break,
  [sym_template_block] = sym_template_block,
  [sym_template_name] = sym_template_name,
  [sym_template_exercise] = sym_template_exercise,
  [sym_template_exercise_name] = sym_template_exercise_name,
  [sym_template_exercise_details] = sym_template_exercise_details,
  [sym_exercise_details] = sym_exercise_details,
  [sym_reps_sets] = sym_reps_sets,
  [sym_reps] = sym_reps,
  [sym_sets] = sym_sets,
  [sym_rpe] = sym_rpe,
  [sym_log_entry] = sym_log_entry,
  [sym_logged_exercise] = sym_logged_exercise,
  [sym_logged_exercise_name] = sym_logged_exercise_name,
  [sym_exercise_note] = sym_exercise_note,
  [sym_measurement_entry] = sym_measurement_entry,
  [sym_measurement] = sym_measurement,
  [sym_pr_entry] = sym_pr_entry,
  [sym_pr_record] = sym_pr_record,
  [sym_workout_name] = sym_workout_name,
  [sym_measurement_value] = sym_measurement_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exercises_block_repeat1] = aux_sym_exercises_block_repeat1,
  [aux_sym_exercise_repeat1] = aux_sym_exercise_repeat1,
  [aux_sym_exercise_repeat2] = aux_sym_exercise_repeat2,
  [aux_sym_template_block_repeat1] = aux_sym_template_block_repeat1,
  [aux_sym_log_entry_repeat1] = aux_sym_log_entry_repeat1,
  [aux_sym_measurement_entry_repeat1] = aux_sym_measurement_entry_repeat1,
  [aux_sym_pr_entry_repeat1] = aux_sym_pr_entry_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__entry_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_exercises_start] = {
    .visible = true,
    .named = true,
  },
  [sym__exercises_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_exercise_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATend_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_exercise_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reps_sets_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reps_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATRPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rpe_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_exercise_note_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Measurements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PR] = {
    .visible = true,
    .named = false,
  },
  [sym_pr_type] = {
    .visible = true,
    .named = true,
  },
  [sym_weight] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_exercises_block] = {
    .visible = true,
    .named = true,
  },
  [sym_exercise] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym_template_block] = {
    .visible = true,
    .named = true,
  },
  [sym_template_name] = {
    .visible = true,
    .named = true,
  },
  [sym_template_exercise] = {
    .visible = true,
    .named = true,
  },
  [sym_template_exercise_name] = {
    .visible = true,
    .named = true,
  },
  [sym_template_exercise_details] = {
    .visible = true,
    .named = true,
  },
  [sym_exercise_details] = {
    .visible = true,
    .named = true,
  },
  [sym_reps_sets] = {
    .visible = true,
    .named = true,
  },
  [sym_reps] = {
    .visible = true,
    .named = true,
  },
  [sym_sets] = {
    .visible = true,
    .named = true,
  },
  [sym_rpe] = {
    .visible = true,
    .named = true,
  },
  [sym_log_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_logged_exercise] = {
    .visible = true,
    .named = true,
  },
  [sym_logged_exercise_name] = {
    .visible = true,
    .named = true,
  },
  [sym_exercise_note] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement] = {
    .visible = true,
    .named = true,
  },
  [sym_pr_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_pr_record] = {
    .visible = true,
    .named = true,
  },
  [sym_workout_name] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exercises_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exercise_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exercise_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_log_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_measurement_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pr_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 40,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 89,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '\n', 97,
        '\r', 1,
        '"', 245,
        '#', 248,
        '*', 244,
        ':', 159,
        ';', 99,
        '@', 21,
        'B', 161,
        'M', 163,
        'P', 160,
        '[', 122,
        ']', 123,
        '^', 251,
        'x', 232,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == 'B') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(230);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(175);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(254);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(252);
      END_STATE();
    case 27:
      if (lookahead == 'W') ADVANCE(255);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 92:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(290);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(230);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '@') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__entry_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__entry_token1);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(175);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_exercises_start);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__exercises_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '@') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(230);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(230);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'x') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_x);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_reps_sets_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '/') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_ATRPE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_rpe_token1);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_rpe_token1);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_rpe_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_exercise_note_token1);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_exercise_note_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(290);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'u') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(290);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 95},
  [8] = {.lex_state = 95},
  [9] = {.lex_state = 93},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 94},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 95},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 92},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 92},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 108},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__entry_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_ATinclude] = ACTIONS(1),
    [sym_exercises_start] = ACTIONS(1),
    [sym__exercises_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [anon_sym_ATtemplate] = ACTIONS(1),
    [anon_sym_ATend_DASHtemplate] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [aux_sym_reps_sets_token1] = ACTIONS(1),
    [aux_sym_reps_token1] = ACTIONS(1),
    [anon_sym_ATRPE] = ACTIONS(1),
    [aux_sym_rpe_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_Measurements] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PR] = ACTIONS(1),
    [sym_pr_type] = ACTIONS(1),
    [sym_weight] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__entry] = STATE(2),
    [sym_comment] = STATE(1),
    [sym_include] = STATE(2),
    [sym_exercises_block] = STATE(2),
    [sym_template_block] = STATE(2),
    [sym_log_entry] = STATE(2),
    [sym_measurement_entry] = STATE(2),
    [sym_pr_entry] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__entry_token1] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_ATinclude] = ACTIONS(11),
    [sym_exercises_start] = ACTIONS(13),
    [anon_sym_ATtemplate] = ACTIONS(15),
    [sym_date] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_ATinclude,
    ACTIONS(13), 1,
      sym_exercises_start,
    ACTIONS(15), 1,
      anon_sym_ATtemplate,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym__entry_token1,
    STATE(2), 1,
      sym_comment,
    STATE(3), 8,
      sym__entry,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [35] = 8,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__entry_token1,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_ATinclude,
    ACTIONS(34), 1,
      sym_exercises_start,
    ACTIONS(37), 1,
      anon_sym_ATtemplate,
    ACTIONS(40), 1,
      sym_date,
    STATE(3), 9,
      sym__entry,
      sym_comment,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [68] = 5,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_template_exercise_name_token1,
    STATE(103), 1,
      sym_logged_exercise_name,
    STATE(4), 3,
      sym_comment,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(45), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [91] = 6,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_template_exercise_name_token1,
    STATE(5), 1,
      sym_comment,
    STATE(103), 1,
      sym_logged_exercise_name,
    STATE(6), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(52), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [116] = 6,
    ACTIONS(54), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(103), 1,
      sym_logged_exercise_name,
    STATE(4), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(58), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [141] = 5,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_exercise_name,
    STATE(7), 1,
      sym_comment,
    STATE(11), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(62), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [163] = 5,
    ACTIONS(64), 1,
      sym_exercise_name,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(7), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(68), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [185] = 5,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_measurement_name,
    STATE(9), 1,
      sym_comment,
    STATE(10), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(72), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [207] = 5,
    ACTIONS(74), 1,
      sym_measurement_name,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(12), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(78), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [229] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      sym_exercise_name,
    STATE(11), 3,
      sym_comment,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(82), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [249] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_measurement_name,
    STATE(12), 3,
      sym_comment,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(89), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [269] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_exercise_repeat1,
    STATE(33), 1,
      aux_sym_exercise_repeat2,
    STATE(35), 1,
      sym__line_break,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(96), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [298] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(14), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_exercise_repeat1,
    STATE(28), 1,
      aux_sym_exercise_repeat2,
    STATE(35), 1,
      sym__line_break,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(100), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [327] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_comment,
    ACTIONS(104), 7,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
      sym_measurement_name,
  [343] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_comment,
    ACTIONS(108), 7,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      aux_sym_template_exercise_name_token1,
      sym_date,
  [359] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
    ACTIONS(112), 7,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      aux_sym_template_exercise_name_token1,
      sym_date,
  [375] = 3,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
    ACTIONS(116), 7,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [391] = 2,
    STATE(19), 1,
      sym_comment,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [404] = 2,
    STATE(20), 1,
      sym_comment,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [417] = 2,
    STATE(21), 1,
      sym_comment,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [430] = 2,
    STATE(22), 1,
      sym_comment,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [443] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_exercise_repeat1,
    STATE(35), 1,
      sym__line_break,
    ACTIONS(126), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [464] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym__entry_token1,
    STATE(35), 1,
      sym__line_break,
    STATE(24), 2,
      sym_comment,
      aux_sym_exercise_repeat1,
    ACTIONS(131), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [483] = 2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [496] = 2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [509] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(23), 1,
      aux_sym_exercise_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(35), 1,
      sym__line_break,
    ACTIONS(137), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [530] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(28), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_exercise_repeat2,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(139), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [550] = 7,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(143), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(145), 1,
      aux_sym_template_exercise_name_token1,
    STATE(29), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_template_block_repeat1,
    STATE(75), 1,
      sym_template_exercise,
    STATE(82), 1,
      sym_template_exercise_name,
  [572] = 7,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(147), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(29), 1,
      aux_sym_template_block_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(75), 1,
      sym_template_exercise,
    STATE(82), 1,
      sym_template_exercise_name,
  [594] = 6,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(151), 1,
      aux_sym_template_exercise_name_token1,
    STATE(75), 1,
      sym_template_exercise,
    STATE(82), 1,
      sym_template_exercise_name,
    STATE(31), 2,
      sym_comment,
      aux_sym_template_block_repeat1,
  [614] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      sym_attribute_name,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(154), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(32), 2,
      sym_comment,
      aux_sym_exercise_repeat2,
  [632] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(32), 1,
      aux_sym_exercise_repeat2,
    STATE(33), 1,
      sym_comment,
    STATE(49), 1,
      sym_attribute,
    ACTIONS(100), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [652] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      aux_sym__entry_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym__line_break,
    STATE(34), 1,
      sym_comment,
    STATE(70), 1,
      sym_exercise_note,
  [671] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    ACTIONS(163), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [684] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      anon_sym_ATRPE,
    STATE(36), 1,
      sym_comment,
    STATE(55), 1,
      sym_rpe,
    ACTIONS(165), 2,
      aux_sym__entry_token1,
      anon_sym_DQUOTE,
  [701] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      sym__exercises_end,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_exercises_block_repeat1,
    STATE(58), 1,
      sym_exercise,
  [720] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(173), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [733] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      sym__exercises_end,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_exercise,
    STATE(39), 2,
      sym_comment,
      aux_sym_exercises_block_repeat1,
  [750] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(180), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [763] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      aux_sym_reps_sets_token1,
    ACTIONS(184), 1,
      aux_sym_reps_token1,
    STATE(36), 1,
      sym_reps_sets,
    STATE(41), 1,
      sym_comment,
    STATE(91), 1,
      sym_reps,
  [782] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      sym__exercises_end,
    STATE(37), 1,
      aux_sym_exercises_block_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(58), 1,
      sym_exercise,
  [801] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      aux_sym_reps_sets_token1,
    ACTIONS(184), 1,
      aux_sym_reps_token1,
    STATE(43), 1,
      sym_comment,
    STATE(47), 1,
      sym_reps_sets,
    STATE(91), 1,
      sym_reps,
  [820] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(188), 3,
      aux_sym__entry_token1,
      anon_sym_ATRPE,
      anon_sym_DQUOTE,
  [832] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(190), 3,
      aux_sym__entry_token1,
      anon_sym_ATRPE,
      anon_sym_DQUOTE,
  [844] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_CARET,
    STATE(46), 1,
      sym_comment,
  [860] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      anon_sym_ATRPE,
    ACTIONS(198), 1,
      aux_sym__entry_token1,
    STATE(47), 1,
      sym_comment,
    STATE(85), 1,
      sym_rpe,
  [876] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(200), 3,
      aux_sym__entry_token1,
      anon_sym_ATRPE,
      anon_sym_DQUOTE,
  [888] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(202), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [900] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      aux_sym_reps_token1,
    STATE(44), 1,
      sym_sets,
    STATE(50), 1,
      sym_comment,
  [913] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [924] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [935] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(42), 1,
      sym__line_break,
    STATE(53), 1,
      sym_comment,
  [948] = 4,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      aux_sym_template_name_token1,
    STATE(54), 1,
      sym_comment,
    STATE(69), 1,
      sym_template_name,
  [961] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(212), 2,
      aux_sym__entry_token1,
      anon_sym_DQUOTE,
  [972] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym__entry_token1,
    STATE(5), 1,
      sym__line_break,
    STATE(56), 1,
      sym_comment,
  [985] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      aux_sym__entry_token1,
    STATE(9), 1,
      sym__line_break,
    STATE(57), 1,
      sym_comment,
  [998] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    ACTIONS(218), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [1009] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(220), 2,
      aux_sym__entry_token1,
      anon_sym_DQUOTE,
  [1020] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      aux_sym__entry_token1,
    STATE(51), 1,
      sym__line_break,
    STATE(60), 1,
      sym_comment,
  [1033] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      aux_sym__entry_token1,
    STATE(26), 1,
      sym__line_break,
    STATE(61), 1,
      sym_comment,
  [1046] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      sym_weight,
    STATE(34), 1,
      sym_exercise_details,
    STATE(62), 1,
      sym_comment,
  [1059] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      aux_sym__entry_token1,
    STATE(21), 1,
      sym__line_break,
    STATE(63), 1,
      sym_comment,
  [1072] = 4,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      aux_sym_attribute_value_token1,
    STATE(64), 1,
      sym_comment,
    STATE(74), 1,
      sym_measurement_value,
  [1085] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      aux_sym__entry_token1,
    STATE(8), 1,
      sym__line_break,
    STATE(65), 1,
      sym_comment,
  [1098] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(234), 1,
      aux_sym__entry_token1,
    STATE(18), 1,
      sym__line_break,
    STATE(66), 1,
      sym_comment,
  [1111] = 4,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      aux_sym_template_name_token1,
    STATE(56), 1,
      sym_workout_name,
    STATE(67), 1,
      sym_comment,
  [1124] = 4,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      aux_sym_attribute_value_token1,
    STATE(27), 1,
      sym_attribute_value,
    STATE(68), 1,
      sym_comment,
  [1137] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      aux_sym__entry_token1,
    STATE(30), 1,
      sym__line_break,
    STATE(69), 1,
      sym_comment,
  [1150] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      aux_sym__entry_token1,
    STATE(17), 1,
      sym__line_break,
    STATE(70), 1,
      sym_comment,
  [1163] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      aux_sym__entry_token1,
    STATE(20), 1,
      sym__line_break,
    STATE(71), 1,
      sym_comment,
  [1176] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      sym_weight,
    STATE(60), 1,
      sym_template_exercise_details,
    STATE(72), 1,
      sym_comment,
  [1189] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      aux_sym__entry_token1,
    STATE(25), 1,
      sym__line_break,
    STATE(73), 1,
      sym_comment,
  [1202] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      aux_sym__entry_token1,
    STATE(15), 1,
      sym__line_break,
    STATE(74), 1,
      sym_comment,
  [1215] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [1226] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_PR,
    STATE(76), 1,
      sym_comment,
  [1236] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_comment,
  [1246] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_comment,
  [1256] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      aux_sym__entry_token1,
    STATE(79), 1,
      sym_comment,
  [1266] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      anon_sym_COLON,
    STATE(80), 1,
      sym_comment,
  [1276] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      sym_weight,
    STATE(81), 1,
      sym_comment,
  [1286] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_comment,
  [1296] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      sym_file_path,
    STATE(83), 1,
      sym_comment,
  [1306] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      aux_sym_rpe_token1,
    STATE(84), 1,
      sym_comment,
  [1316] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      aux_sym__entry_token1,
    STATE(85), 1,
      sym_comment,
  [1326] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_x,
    STATE(86), 1,
      sym_comment,
  [1336] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_comment,
  [1346] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      aux_sym_exercise_note_token1,
    STATE(88), 1,
      sym_comment,
  [1356] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
  [1366] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      aux_sym__entry_token1,
    STATE(90), 1,
      sym_comment,
  [1376] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_x,
    STATE(91), 1,
      sym_comment,
  [1386] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      aux_sym__entry_token1,
    STATE(92), 1,
      sym_comment,
  [1396] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      sym_pr_type,
    STATE(93), 1,
      sym_comment,
  [1406] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      anon_sym_Measurements,
    STATE(94), 1,
      sym_comment,
  [1416] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      sym_exercise_name,
    STATE(95), 1,
      sym_comment,
  [1426] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym_comment,
  [1436] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      aux_sym_comment_token1,
    STATE(97), 1,
      sym_comment,
  [1446] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_comment,
  [1456] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_comment,
  [1466] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_comment,
  [1476] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      aux_sym__entry_token1,
    STATE(101), 1,
      sym_comment,
  [1486] = 3,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      aux_sym_include_token1,
    STATE(102), 1,
      sym_comment,
  [1496] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym_comment,
  [1506] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 269,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 343,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 391,
  [SMALL_STATE(20)] = 404,
  [SMALL_STATE(21)] = 417,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 464,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 496,
  [SMALL_STATE(27)] = 509,
  [SMALL_STATE(28)] = 530,
  [SMALL_STATE(29)] = 550,
  [SMALL_STATE(30)] = 572,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 614,
  [SMALL_STATE(33)] = 632,
  [SMALL_STATE(34)] = 652,
  [SMALL_STATE(35)] = 671,
  [SMALL_STATE(36)] = 684,
  [SMALL_STATE(37)] = 701,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 733,
  [SMALL_STATE(40)] = 750,
  [SMALL_STATE(41)] = 763,
  [SMALL_STATE(42)] = 782,
  [SMALL_STATE(43)] = 801,
  [SMALL_STATE(44)] = 820,
  [SMALL_STATE(45)] = 832,
  [SMALL_STATE(46)] = 844,
  [SMALL_STATE(47)] = 860,
  [SMALL_STATE(48)] = 876,
  [SMALL_STATE(49)] = 888,
  [SMALL_STATE(50)] = 900,
  [SMALL_STATE(51)] = 913,
  [SMALL_STATE(52)] = 924,
  [SMALL_STATE(53)] = 935,
  [SMALL_STATE(54)] = 948,
  [SMALL_STATE(55)] = 961,
  [SMALL_STATE(56)] = 972,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 998,
  [SMALL_STATE(59)] = 1009,
  [SMALL_STATE(60)] = 1020,
  [SMALL_STATE(61)] = 1033,
  [SMALL_STATE(62)] = 1046,
  [SMALL_STATE(63)] = 1059,
  [SMALL_STATE(64)] = 1072,
  [SMALL_STATE(65)] = 1085,
  [SMALL_STATE(66)] = 1098,
  [SMALL_STATE(67)] = 1111,
  [SMALL_STATE(68)] = 1124,
  [SMALL_STATE(69)] = 1137,
  [SMALL_STATE(70)] = 1150,
  [SMALL_STATE(71)] = 1163,
  [SMALL_STATE(72)] = 1176,
  [SMALL_STATE(73)] = 1189,
  [SMALL_STATE(74)] = 1202,
  [SMALL_STATE(75)] = 1215,
  [SMALL_STATE(76)] = 1226,
  [SMALL_STATE(77)] = 1236,
  [SMALL_STATE(78)] = 1246,
  [SMALL_STATE(79)] = 1256,
  [SMALL_STATE(80)] = 1266,
  [SMALL_STATE(81)] = 1276,
  [SMALL_STATE(82)] = 1286,
  [SMALL_STATE(83)] = 1296,
  [SMALL_STATE(84)] = 1306,
  [SMALL_STATE(85)] = 1316,
  [SMALL_STATE(86)] = 1326,
  [SMALL_STATE(87)] = 1336,
  [SMALL_STATE(88)] = 1346,
  [SMALL_STATE(89)] = 1356,
  [SMALL_STATE(90)] = 1366,
  [SMALL_STATE(91)] = 1376,
  [SMALL_STATE(92)] = 1386,
  [SMALL_STATE(93)] = 1396,
  [SMALL_STATE(94)] = 1406,
  [SMALL_STATE(95)] = 1416,
  [SMALL_STATE(96)] = 1426,
  [SMALL_STATE(97)] = 1436,
  [SMALL_STATE(98)] = 1446,
  [SMALL_STATE(99)] = 1456,
  [SMALL_STATE(100)] = 1466,
  [SMALL_STATE(101)] = 1476,
  [SMALL_STATE(102)] = 1486,
  [SMALL_STATE(103)] = 1496,
  [SMALL_STATE(104)] = 1506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 6, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 2, 0, 0), SHIFT_REPEAT(96),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_details, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_break, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps_sets, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps_sets, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_break, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_details, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpe, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_note, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_liftledger(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
