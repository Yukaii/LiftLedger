#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
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
  aux_sym_reps_sets_token2 = 21,
  aux_sym_reps_sets_token3 = 22,
  aux_sym_reps_token1 = 23,
  anon_sym_ATRPE = 24,
  aux_sym_rpe_token1 = 25,
  anon_sym_STAR = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_exercise_note_token1 = 28,
  anon_sym_POUND = 29,
  anon_sym_CARET = 30,
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
  sym_measurement_title = 59,
  sym_measurement = 60,
  sym_pr_entry = 61,
  sym_pr_title = 62,
  sym_pr_record = 63,
  sym_workout_name = 64,
  sym_measurement_value = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_exercises_block_repeat1 = 67,
  aux_sym_exercise_repeat1 = 68,
  aux_sym_exercise_repeat2 = 69,
  aux_sym_template_block_repeat1 = 70,
  aux_sym_log_entry_repeat1 = 71,
  aux_sym_measurement_entry_repeat1 = 72,
  aux_sym_pr_entry_repeat1 = 73,
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
  [aux_sym_reps_sets_token2] = "reps_sets_token2",
  [aux_sym_reps_sets_token3] = "reps_sets_token3",
  [aux_sym_reps_token1] = "reps_token1",
  [anon_sym_ATRPE] = "@RPE",
  [aux_sym_rpe_token1] = "rpe_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_exercise_note_token1] = "exercise_note_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_CARET] = "^",
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
  [sym_measurement_title] = "measurement_title",
  [sym_measurement] = "measurement",
  [sym_pr_entry] = "pr_entry",
  [sym_pr_title] = "pr_title",
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
  [aux_sym_reps_sets_token2] = aux_sym_reps_sets_token2,
  [aux_sym_reps_sets_token3] = aux_sym_reps_sets_token3,
  [aux_sym_reps_token1] = aux_sym_reps_token1,
  [anon_sym_ATRPE] = anon_sym_ATRPE,
  [aux_sym_rpe_token1] = aux_sym_rpe_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_exercise_note_token1] = aux_sym_exercise_note_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_CARET] = anon_sym_CARET,
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
  [sym_measurement_title] = sym_measurement_title,
  [sym_measurement] = sym_measurement,
  [sym_pr_entry] = sym_pr_entry,
  [sym_pr_title] = sym_pr_title,
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
  [aux_sym_reps_sets_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reps_sets_token3] = {
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
  [anon_sym_CARET] = {
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
  [sym_measurement_title] = {
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
  [sym_pr_title] = {
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
  [52] = 36,
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 93,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      ADVANCE_MAP(
        '\n', 85,
        '\r', 1,
        '"', 223,
        '#', 226,
        '*', 222,
        ':', 147,
        ';', 87,
        '@', 20,
        'B', 148,
        '[', 110,
        ']', 111,
        '^', 227,
        'x', 208,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(151);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(225);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(228);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'W') ADVANCE(229);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 80:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(264);
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(160);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(206);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '@') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__entry_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__entry_token1);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(151);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(225);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_exercises_start);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__exercises_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '@') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'x') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']') ADVANCE(146);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '\r') ADVANCE(160);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'x') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_x);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_reps_sets_token1);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_reps_sets_token2);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_reps_sets_token3);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_reps_token1);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ATRPE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_rpe_token1);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_rpe_token1);
      if (lookahead == 'k') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_rpe_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_exercise_note_token1);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_exercise_note_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 81},
  [9] = {.lex_state = 83},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 83},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 80},
  [33] = {.lex_state = 80},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 80},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 80},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 80},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 80},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 96},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 96},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 0},
  [106] = {(TSStateId)(-1)},
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
    [aux_sym_reps_sets_token2] = ACTIONS(1),
    [aux_sym_reps_sets_token3] = ACTIONS(1),
    [aux_sym_reps_token1] = ACTIONS(1),
    [anon_sym_ATRPE] = ACTIONS(1),
    [aux_sym_rpe_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_pr_type] = ACTIONS(1),
    [sym_weight] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(98),
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
    STATE(80), 1,
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
    STATE(80), 1,
      sym_logged_exercise_name,
    STATE(4), 2,
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
    STATE(80), 1,
      sym_logged_exercise_name,
    STATE(5), 2,
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
      sym_measurement_name,
    STATE(7), 1,
      sym_comment,
    STATE(8), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(62), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [163] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_measurement_name,
    STATE(8), 3,
      sym_comment,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(68), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [183] = 5,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_exercise_name,
    STATE(9), 1,
      sym_comment,
    STATE(10), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(75), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [205] = 4,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_exercise_name,
    STATE(10), 3,
      sym_comment,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(81), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [225] = 5,
    ACTIONS(64), 1,
      sym_measurement_name,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(7), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(88), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [247] = 5,
    ACTIONS(77), 1,
      sym_exercise_name,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    STATE(9), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(92), 6,
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
    STATE(24), 1,
      aux_sym_exercise_repeat1,
    STATE(33), 1,
      aux_sym_exercise_repeat2,
    STATE(38), 1,
      sym__line_break,
    STATE(47), 1,
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
    STATE(13), 1,
      aux_sym_exercise_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_exercise_repeat2,
    STATE(38), 1,
      sym__line_break,
    STATE(47), 1,
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
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
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
      sym_date,
      sym_measurement_name,
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
      anon_sym_ATtemplate,
      aux_sym_template_exercise_name_token1,
      sym_date,
  [391] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_exercise_repeat1,
    STATE(38), 1,
      sym__line_break,
    ACTIONS(118), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [412] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      aux_sym_reps_sets_token3,
    ACTIONS(124), 1,
      aux_sym_reps_token1,
    STATE(20), 1,
      sym_comment,
    STATE(42), 1,
      sym_reps_sets,
    STATE(94), 1,
      sym_reps,
    ACTIONS(120), 2,
      aux_sym_reps_sets_token1,
      aux_sym_reps_sets_token2,
  [435] = 2,
    STATE(21), 1,
      sym_comment,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [448] = 2,
    STATE(22), 1,
      sym_comment,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [461] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(19), 1,
      aux_sym_exercise_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(38), 1,
      sym__line_break,
    ACTIONS(130), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [482] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      aux_sym__entry_token1,
    STATE(38), 1,
      sym__line_break,
    STATE(24), 2,
      sym_comment,
      aux_sym_exercise_repeat1,
    ACTIONS(135), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [501] = 2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [514] = 2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [527] = 2,
    STATE(27), 1,
      sym_comment,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [540] = 2,
    STATE(28), 1,
      sym_comment,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [553] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      aux_sym_reps_sets_token3,
    ACTIONS(124), 1,
      aux_sym_reps_token1,
    STATE(29), 1,
      sym_comment,
    STATE(46), 1,
      sym_reps_sets,
    STATE(94), 1,
      sym_reps,
    ACTIONS(120), 2,
      aux_sym_reps_sets_token1,
      aux_sym_reps_sets_token2,
  [576] = 7,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(149), 1,
      aux_sym_template_exercise_name_token1,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_template_block_repeat1,
    STATE(60), 1,
      sym_template_exercise,
    STATE(100), 1,
      sym_template_exercise_name,
  [598] = 7,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(151), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(31), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_template_block_repeat1,
    STATE(60), 1,
      sym_template_exercise,
    STATE(100), 1,
      sym_template_exercise_name,
  [620] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      sym_attribute_name,
    STATE(47), 1,
      sym_attribute,
    ACTIONS(153), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(32), 2,
      sym_comment,
      aux_sym_exercise_repeat2,
  [638] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(32), 1,
      aux_sym_exercise_repeat2,
    STATE(33), 1,
      sym_comment,
    STATE(47), 1,
      sym_attribute,
    ACTIONS(158), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [658] = 6,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(162), 1,
      aux_sym_template_exercise_name_token1,
    STATE(60), 1,
      sym_template_exercise,
    STATE(100), 1,
      sym_template_exercise_name,
    STATE(34), 2,
      sym_comment,
      aux_sym_template_block_repeat1,
  [678] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(32), 1,
      aux_sym_exercise_repeat2,
    STATE(35), 1,
      sym_comment,
    STATE(47), 1,
      sym_attribute,
    ACTIONS(96), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [698] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    ACTIONS(165), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [711] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      sym__exercises_end,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_exercise,
    STATE(37), 2,
      sym_comment,
      aux_sym_exercises_block_repeat1,
  [728] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(172), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [741] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      sym__exercises_end,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      aux_sym_exercises_block_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(77), 1,
      sym_exercise,
  [760] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      aux_sym__entry_token1,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym__line_break,
    STATE(40), 1,
      sym_comment,
    STATE(61), 1,
      sym_exercise_note,
  [779] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(182), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [792] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      anon_sym_ATRPE,
    STATE(42), 1,
      sym_comment,
    STATE(55), 1,
      sym_rpe,
    ACTIONS(184), 2,
      aux_sym__entry_token1,
      anon_sym_DQUOTE,
  [809] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      sym__exercises_end,
    STATE(39), 1,
      aux_sym_exercises_block_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(77), 1,
      sym_exercise,
  [828] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(190), 3,
      aux_sym__entry_token1,
      anon_sym_ATRPE,
      anon_sym_DQUOTE,
  [840] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(192), 3,
      aux_sym__entry_token1,
      anon_sym_ATRPE,
      anon_sym_DQUOTE,
  [852] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      anon_sym_ATRPE,
    ACTIONS(194), 1,
      aux_sym__entry_token1,
    STATE(46), 1,
      sym_comment,
    STATE(87), 1,
      sym_rpe,
  [868] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(196), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [880] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(198), 3,
      aux_sym__entry_token1,
      anon_sym_ATRPE,
      anon_sym_DQUOTE,
  [892] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_CARET,
    STATE(49), 1,
      sym_comment,
  [908] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [919] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      aux_sym__entry_token1,
    STATE(27), 1,
      sym__line_break,
    STATE(51), 1,
      sym_comment,
  [932] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [943] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(43), 1,
      sym__line_break,
    STATE(53), 1,
      sym_comment,
  [956] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      aux_sym_template_name_token1,
    STATE(54), 1,
      sym_comment,
    STATE(67), 1,
      sym_template_name,
  [969] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(214), 2,
      aux_sym__entry_token1,
      anon_sym_DQUOTE,
  [980] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    ACTIONS(216), 2,
      aux_sym__entry_token1,
      anon_sym_DQUOTE,
  [991] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      aux_sym__entry_token1,
    STATE(28), 1,
      sym__line_break,
    STATE(57), 1,
      sym_comment,
  [1004] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      sym_weight,
    STATE(58), 1,
      sym_comment,
    STATE(62), 1,
      sym_template_exercise_details,
  [1017] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      aux_sym__entry_token1,
    STATE(15), 1,
      sym__line_break,
    STATE(59), 1,
      sym_comment,
  [1030] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [1041] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      aux_sym__entry_token1,
    STATE(16), 1,
      sym__line_break,
    STATE(61), 1,
      sym_comment,
  [1054] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      aux_sym__entry_token1,
    STATE(50), 1,
      sym__line_break,
    STATE(62), 1,
      sym_comment,
  [1067] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      aux_sym__entry_token1,
    STATE(26), 1,
      sym__line_break,
    STATE(63), 1,
      sym_comment,
  [1080] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      sym_weight,
    STATE(40), 1,
      sym_exercise_details,
    STATE(64), 1,
      sym_comment,
  [1093] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(234), 1,
      aux_sym__entry_token1,
    STATE(25), 1,
      sym__line_break,
    STATE(65), 1,
      sym_comment,
  [1106] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      aux_sym_attribute_value_token1,
    STATE(66), 1,
      sym_comment,
    STATE(76), 1,
      sym_measurement_value,
  [1119] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      aux_sym__entry_token1,
    STATE(30), 1,
      sym__line_break,
    STATE(67), 1,
      sym_comment,
  [1132] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      aux_sym_template_name_token1,
    STATE(68), 1,
      sym_comment,
    STATE(74), 1,
      sym_workout_name,
  [1145] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      aux_sym__entry_token1,
    STATE(12), 1,
      sym__line_break,
    STATE(69), 1,
      sym_comment,
  [1158] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      aux_sym_attribute_value_token1,
    STATE(23), 1,
      sym_attribute_value,
    STATE(70), 1,
      sym_comment,
  [1171] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      aux_sym_reps_token1,
    STATE(44), 1,
      sym_sets,
    STATE(71), 1,
      sym_comment,
  [1184] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      aux_sym__entry_token1,
    STATE(11), 1,
      sym__line_break,
    STATE(72), 1,
      sym_comment,
  [1197] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      aux_sym_attribute_value_token1,
    STATE(72), 1,
      sym_measurement_title,
    STATE(73), 1,
      sym_comment,
  [1210] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      aux_sym__entry_token1,
    STATE(6), 1,
      sym__line_break,
    STATE(74), 1,
      sym_comment,
  [1223] = 4,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      aux_sym_attribute_value_token1,
    STATE(69), 1,
      sym_pr_title,
    STATE(75), 1,
      sym_comment,
  [1236] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      aux_sym__entry_token1,
    STATE(17), 1,
      sym__line_break,
    STATE(76), 1,
      sym_comment,
  [1249] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [1260] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_comment,
  [1270] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_comment,
  [1280] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      anon_sym_COLON,
    STATE(80), 1,
      sym_comment,
  [1290] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      aux_sym__entry_token1,
    STATE(81), 1,
      sym_comment,
  [1300] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      aux_sym__entry_token1,
    STATE(82), 1,
      sym_comment,
  [1310] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      sym_weight,
    STATE(83), 1,
      sym_comment,
  [1320] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_x,
    STATE(84), 1,
      sym_comment,
  [1330] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      aux_sym__entry_token1,
    STATE(85), 1,
      sym_comment,
  [1340] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      aux_sym_rpe_token1,
    STATE(86), 1,
      sym_comment,
  [1350] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      aux_sym__entry_token1,
    STATE(87), 1,
      sym_comment,
  [1360] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      aux_sym__entry_token1,
    STATE(88), 1,
      sym_comment,
  [1370] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      sym_pr_type,
    STATE(89), 1,
      sym_comment,
  [1380] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      aux_sym_exercise_note_token1,
    STATE(90), 1,
      sym_comment,
  [1390] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_comment,
  [1400] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      sym_exercise_name,
    STATE(92), 1,
      sym_comment,
  [1410] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
  [1420] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      anon_sym_x,
    STATE(94), 1,
      sym_comment,
  [1430] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      sym_file_path,
    STATE(95), 1,
      sym_comment,
  [1440] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym_comment,
  [1450] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      aux_sym__entry_token1,
    STATE(97), 1,
      sym_comment,
  [1460] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(98), 1,
      sym_comment,
  [1470] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_comment,
  [1480] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_comment,
  [1490] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym_comment,
  [1500] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
  [1510] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      aux_sym__entry_token1,
    STATE(103), 1,
      sym_comment,
  [1520] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      aux_sym_include_token1,
    STATE(104), 1,
      sym_comment,
  [1530] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym_comment,
  [1540] = 1,
    ACTIONS(128), 1,
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
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 269,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 343,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 391,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 435,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 461,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 501,
  [SMALL_STATE(26)] = 514,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 540,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 576,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 620,
  [SMALL_STATE(33)] = 638,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 678,
  [SMALL_STATE(36)] = 698,
  [SMALL_STATE(37)] = 711,
  [SMALL_STATE(38)] = 728,
  [SMALL_STATE(39)] = 741,
  [SMALL_STATE(40)] = 760,
  [SMALL_STATE(41)] = 779,
  [SMALL_STATE(42)] = 792,
  [SMALL_STATE(43)] = 809,
  [SMALL_STATE(44)] = 828,
  [SMALL_STATE(45)] = 840,
  [SMALL_STATE(46)] = 852,
  [SMALL_STATE(47)] = 868,
  [SMALL_STATE(48)] = 880,
  [SMALL_STATE(49)] = 892,
  [SMALL_STATE(50)] = 908,
  [SMALL_STATE(51)] = 919,
  [SMALL_STATE(52)] = 932,
  [SMALL_STATE(53)] = 943,
  [SMALL_STATE(54)] = 956,
  [SMALL_STATE(55)] = 969,
  [SMALL_STATE(56)] = 980,
  [SMALL_STATE(57)] = 991,
  [SMALL_STATE(58)] = 1004,
  [SMALL_STATE(59)] = 1017,
  [SMALL_STATE(60)] = 1030,
  [SMALL_STATE(61)] = 1041,
  [SMALL_STATE(62)] = 1054,
  [SMALL_STATE(63)] = 1067,
  [SMALL_STATE(64)] = 1080,
  [SMALL_STATE(65)] = 1093,
  [SMALL_STATE(66)] = 1106,
  [SMALL_STATE(67)] = 1119,
  [SMALL_STATE(68)] = 1132,
  [SMALL_STATE(69)] = 1145,
  [SMALL_STATE(70)] = 1158,
  [SMALL_STATE(71)] = 1171,
  [SMALL_STATE(72)] = 1184,
  [SMALL_STATE(73)] = 1197,
  [SMALL_STATE(74)] = 1210,
  [SMALL_STATE(75)] = 1223,
  [SMALL_STATE(76)] = 1236,
  [SMALL_STATE(77)] = 1249,
  [SMALL_STATE(78)] = 1260,
  [SMALL_STATE(79)] = 1270,
  [SMALL_STATE(80)] = 1280,
  [SMALL_STATE(81)] = 1290,
  [SMALL_STATE(82)] = 1300,
  [SMALL_STATE(83)] = 1310,
  [SMALL_STATE(84)] = 1320,
  [SMALL_STATE(85)] = 1330,
  [SMALL_STATE(86)] = 1340,
  [SMALL_STATE(87)] = 1350,
  [SMALL_STATE(88)] = 1360,
  [SMALL_STATE(89)] = 1370,
  [SMALL_STATE(90)] = 1380,
  [SMALL_STATE(91)] = 1390,
  [SMALL_STATE(92)] = 1400,
  [SMALL_STATE(93)] = 1410,
  [SMALL_STATE(94)] = 1420,
  [SMALL_STATE(95)] = 1430,
  [SMALL_STATE(96)] = 1440,
  [SMALL_STATE(97)] = 1450,
  [SMALL_STATE(98)] = 1460,
  [SMALL_STATE(99)] = 1470,
  [SMALL_STATE(100)] = 1480,
  [SMALL_STATE(101)] = 1490,
  [SMALL_STATE(102)] = 1500,
  [SMALL_STATE(103)] = 1510,
  [SMALL_STATE(104)] = 1520,
  [SMALL_STATE(105)] = 1530,
  [SMALL_STATE(106)] = 1540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 5, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 2, 0, 0), SHIFT_REPEAT(96),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_break, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_details, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps_sets, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps_sets, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_break, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_details, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpe, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reps, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_title, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_title, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_note, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
