#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__blank_line_token1 = 1,
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
  aux_sym_attribute_token1 = 13,
  sym_attribute_name = 14,
  aux_sym_attribute_value_token1 = 15,
  anon_sym_ATtemplate = 16,
  anon_sym_ATend_DASHtemplate = 17,
  aux_sym_template_exercise_name_token1 = 18,
  anon_sym_STAR = 19,
  anon_sym_LF = 20,
  anon_sym_POUND = 21,
  anon_sym_Measurements = 22,
  anon_sym_CARET = 23,
  anon_sym_PR = 24,
  aux_sym_pr_record_token1 = 25,
  sym_pr_exercise_name = 26,
  sym_pr_type = 27,
  sym_weight = 28,
  sym_date = 29,
  sym_measurement_name = 30,
  sym_source_file = 31,
  sym__entry = 32,
  sym__blank_line = 33,
  sym_comment = 34,
  sym_include = 35,
  sym_exercises_block = 36,
  sym_exercise = 37,
  sym_attribute = 38,
  sym_attribute_value = 39,
  sym__line_break = 40,
  sym_template_block = 41,
  sym_template_name = 42,
  sym_template_exercise = 43,
  sym_template_exercise_details = 44,
  sym_template_exercise_name = 45,
  sym_log_entry = 46,
  sym_logged_exercise = 47,
  sym_measurement_entry = 48,
  sym_measurement = 49,
  sym_pr_entry = 50,
  sym_pr_record = 51,
  sym_logged_exercise_name = 52,
  sym_logged_exercise_details = 53,
  sym_workout_name = 54,
  sym_measurement_value = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_exercises_block_repeat1 = 57,
  aux_sym_exercises_block_repeat2 = 58,
  aux_sym_exercise_repeat1 = 59,
  aux_sym_template_block_repeat1 = 60,
  aux_sym_log_entry_repeat1 = 61,
  aux_sym_log_entry_repeat2 = 62,
  aux_sym_measurement_entry_repeat1 = 63,
  aux_sym_pr_entry_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
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
  [aux_sym_attribute_token1] = "attribute_token1",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_ATtemplate] = "@template",
  [anon_sym_ATend_DASHtemplate] = "@end-template",
  [aux_sym_template_exercise_name_token1] = "template_exercise_name_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [anon_sym_Measurements] = "Measurements",
  [anon_sym_CARET] = "^",
  [anon_sym_PR] = "PR",
  [aux_sym_pr_record_token1] = "pr_record_token1",
  [sym_pr_exercise_name] = "pr_exercise_name",
  [sym_pr_type] = "pr_type",
  [sym_weight] = "weight",
  [sym_date] = "date",
  [sym_measurement_name] = "measurement_name",
  [sym_source_file] = "source_file",
  [sym__entry] = "_entry",
  [sym__blank_line] = "_blank_line",
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
  [sym_template_exercise_details] = "template_exercise_details",
  [sym_template_exercise_name] = "template_exercise_name",
  [sym_log_entry] = "log_entry",
  [sym_logged_exercise] = "logged_exercise",
  [sym_measurement_entry] = "measurement_entry",
  [sym_measurement] = "measurement",
  [sym_pr_entry] = "pr_entry",
  [sym_pr_record] = "pr_record",
  [sym_logged_exercise_name] = "logged_exercise_name",
  [sym_logged_exercise_details] = "logged_exercise_details",
  [sym_workout_name] = "workout_name",
  [sym_measurement_value] = "measurement_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exercises_block_repeat1] = "exercises_block_repeat1",
  [aux_sym_exercises_block_repeat2] = "exercises_block_repeat2",
  [aux_sym_exercise_repeat1] = "exercise_repeat1",
  [aux_sym_template_block_repeat1] = "template_block_repeat1",
  [aux_sym_log_entry_repeat1] = "log_entry_repeat1",
  [aux_sym_log_entry_repeat2] = "log_entry_repeat2",
  [aux_sym_measurement_entry_repeat1] = "measurement_entry_repeat1",
  [aux_sym_pr_entry_repeat1] = "pr_entry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
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
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_ATtemplate] = anon_sym_ATtemplate,
  [anon_sym_ATend_DASHtemplate] = anon_sym_ATend_DASHtemplate,
  [aux_sym_template_exercise_name_token1] = aux_sym_template_exercise_name_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Measurements] = anon_sym_Measurements,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PR] = anon_sym_PR,
  [aux_sym_pr_record_token1] = aux_sym_pr_record_token1,
  [sym_pr_exercise_name] = sym_pr_exercise_name,
  [sym_pr_type] = sym_pr_type,
  [sym_weight] = sym_weight,
  [sym_date] = sym_date,
  [sym_measurement_name] = sym_measurement_name,
  [sym_source_file] = sym_source_file,
  [sym__entry] = sym__entry,
  [sym__blank_line] = sym__blank_line,
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
  [sym_template_exercise_details] = sym_template_exercise_details,
  [sym_template_exercise_name] = sym_template_exercise_name,
  [sym_log_entry] = sym_log_entry,
  [sym_logged_exercise] = sym_logged_exercise,
  [sym_measurement_entry] = sym_measurement_entry,
  [sym_measurement] = sym_measurement,
  [sym_pr_entry] = sym_pr_entry,
  [sym_pr_record] = sym_pr_record,
  [sym_logged_exercise_name] = sym_logged_exercise_name,
  [sym_logged_exercise_details] = sym_logged_exercise_details,
  [sym_workout_name] = sym_workout_name,
  [sym_measurement_value] = sym_measurement_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exercises_block_repeat1] = aux_sym_exercises_block_repeat1,
  [aux_sym_exercises_block_repeat2] = aux_sym_exercises_block_repeat2,
  [aux_sym_exercise_repeat1] = aux_sym_exercise_repeat1,
  [aux_sym_template_block_repeat1] = aux_sym_template_block_repeat1,
  [aux_sym_log_entry_repeat1] = aux_sym_log_entry_repeat1,
  [aux_sym_log_entry_repeat2] = aux_sym_log_entry_repeat2,
  [aux_sym_measurement_entry_repeat1] = aux_sym_measurement_entry_repeat1,
  [aux_sym_pr_entry_repeat1] = aux_sym_pr_entry_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__blank_line_token1] = {
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
  [aux_sym_attribute_token1] = {
    .visible = false,
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
  [aux_sym_template_exercise_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [aux_sym_pr_record_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pr_exercise_name] = {
    .visible = true,
    .named = true,
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
  [sym__blank_line] = {
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
  [sym_template_exercise_details] = {
    .visible = true,
    .named = true,
  },
  [sym_template_exercise_name] = {
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
  [sym_logged_exercise_name] = {
    .visible = true,
    .named = true,
  },
  [sym_logged_exercise_details] = {
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
  [aux_sym_exercises_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exercise_repeat1] = {
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
  [aux_sym_log_entry_repeat2] = {
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
  [52] = 52,
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
  [102] = 102,
  [103] = 103,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '\n', 153,
        '\r', 104,
        '#', 154,
        '*', 151,
        ':', 112,
        ';', 100,
        '@', 30,
        'B', 121,
        'M', 123,
        'P', 120,
        '[', 109,
        ']', 110,
        '^', 157,
        '\t', 105,
        0x0b, 105,
        '\f', 105,
        ' ', 105,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '@') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 20:
      if (lookahead == 'W') ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 81:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 82:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 83:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(111);
      END_STATE();
    case 84:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(166);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '@') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '\n', 98,
        '\r', 114,
        ';', 100,
        '@', 44,
        '[', 109,
        '\t', 113,
        0x0b, 113,
        '\f', 113,
        ' ', 113,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 95:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '@') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '^') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_exercises_start);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__exercises_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(166);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LF);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_pr_exercise_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 93},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 93},
  [9] = {.lex_state = 93},
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 95},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 95},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 94},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 94},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 94},
  [31] = {.lex_state = 96},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 96},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 96},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 96},
  [40] = {.lex_state = 96},
  [41] = {.lex_state = 96},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 96},
  [44] = {.lex_state = 96},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 94},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 94},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 94},
  [67] = {.lex_state = 94},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 94},
  [70] = {.lex_state = 94},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 94},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 96},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 96},
  [79] = {.lex_state = 94},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 96},
  [82] = {.lex_state = 81},
  [83] = {.lex_state = 81},
  [84] = {.lex_state = 160},
  [85] = {.lex_state = 94},
  [86] = {.lex_state = 96},
  [87] = {.lex_state = 96},
  [88] = {.lex_state = 94},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 96},
  [92] = {.lex_state = 96},
  [93] = {.lex_state = 101},
  [94] = {.lex_state = 94},
  [95] = {.lex_state = 84},
  [96] = {.lex_state = 94},
  [97] = {.lex_state = 96},
  [98] = {.lex_state = 81},
  [99] = {.lex_state = 96},
  [100] = {.lex_state = 96},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 96},
  [103] = {.lex_state = 81},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [aux_sym_include_token1] = ACTIONS(1),
    [sym_exercises_start] = ACTIONS(1),
    [sym__exercises_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(1),
    [anon_sym_ATtemplate] = ACTIONS(1),
    [anon_sym_ATend_DASHtemplate] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_Measurements] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PR] = ACTIONS(1),
    [aux_sym_pr_record_token1] = ACTIONS(1),
    [sym_pr_type] = ACTIONS(1),
    [sym_weight] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym__entry] = STATE(2),
    [sym__blank_line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_include] = STATE(2),
    [sym_exercises_block] = STATE(2),
    [sym_template_block] = STATE(2),
    [sym_log_entry] = STATE(2),
    [sym_measurement_entry] = STATE(2),
    [sym_pr_entry] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__blank_line_token1] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_ATinclude] = ACTIONS(11),
    [sym_exercises_start] = ACTIONS(13),
    [aux_sym_attribute_token1] = ACTIONS(3),
    [anon_sym_ATtemplate] = ACTIONS(15),
    [sym_date] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
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
      aux_sym__blank_line_token1,
    STATE(3), 10,
      sym__entry,
      sym__blank_line,
      sym_comment,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [37] = 9,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__blank_line_token1,
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
    STATE(3), 10,
      sym__entry,
      sym__blank_line,
      sym_comment,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [74] = 7,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(45), 1,
      aux_sym__blank_line_token1,
    ACTIONS(47), 1,
      aux_sym_include_token1,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_log_entry_repeat2,
    STATE(9), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [102] = 7,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(53), 1,
      aux_sym__blank_line_token1,
    ACTIONS(55), 1,
      aux_sym_include_token1,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym_log_entry_repeat2,
    STATE(8), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [130] = 7,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(47), 1,
      aux_sym_include_token1,
    ACTIONS(61), 1,
      aux_sym__blank_line_token1,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_log_entry_repeat2,
    STATE(4), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [158] = 7,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(55), 1,
      aux_sym_include_token1,
    ACTIONS(67), 1,
      aux_sym__blank_line_token1,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_log_entry_repeat2,
    STATE(5), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [186] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(75), 1,
      aux_sym_include_token1,
    ACTIONS(73), 2,
      aux_sym__blank_line_token1,
      anon_sym_LF,
    STATE(8), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [209] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(82), 1,
      aux_sym_include_token1,
    ACTIONS(80), 2,
      aux_sym__blank_line_token1,
      anon_sym_LF,
    STATE(9), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [232] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(87), 1,
      aux_sym__blank_line_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [253] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(93), 1,
      aux_sym__blank_line_token1,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [274] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(100), 3,
      aux_sym__blank_line_token1,
      aux_sym_include_token1,
      anon_sym_LF,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [291] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      aux_sym__blank_line_token1,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [312] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      aux_sym__blank_line_token1,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [333] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(45), 1,
      aux_sym__blank_line_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [354] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(53), 1,
      aux_sym__blank_line_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [375] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      aux_sym__blank_line_token1,
    STATE(11), 1,
      aux_sym_log_entry_repeat2,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [396] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(116), 3,
      aux_sym__blank_line_token1,
      aux_sym_include_token1,
      anon_sym_LF,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [413] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(118), 1,
      aux_sym__blank_line_token1,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(120), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(20), 2,
      sym__line_break,
      aux_sym_exercises_block_repeat1,
    STATE(35), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [435] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(124), 1,
      aux_sym__blank_line_token1,
    ACTIONS(126), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(30), 2,
      sym__line_break,
      aux_sym_exercises_block_repeat1,
    STATE(31), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [457] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [470] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [483] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [496] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(134), 1,
      aux_sym__blank_line_token1,
    ACTIONS(136), 1,
      sym__exercises_end,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(25), 2,
      sym__line_break,
      aux_sym_exercises_block_repeat1,
    STATE(41), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [517] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(124), 1,
      aux_sym__blank_line_token1,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym__exercises_end,
    STATE(30), 2,
      sym__line_break,
      aux_sym_exercises_block_repeat1,
    STATE(39), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [538] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [551] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [564] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [577] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      aux_sym__blank_line_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [590] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(150), 1,
      aux_sym__blank_line_token1,
    STATE(30), 2,
      sym__line_break,
      aux_sym_exercises_block_repeat1,
    ACTIONS(153), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [606] = 4,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(155), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [621] = 5,
    ACTIONS(159), 1,
      aux_sym_attribute_token1,
    ACTIONS(161), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(163), 1,
      aux_sym_template_exercise_name_token1,
    STATE(100), 1,
      sym_template_exercise_name,
    STATE(38), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [638] = 4,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(167), 1,
      sym_attribute_name,
    ACTIONS(165), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [653] = 5,
    ACTIONS(170), 1,
      aux_sym_attribute_token1,
    ACTIONS(173), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(175), 1,
      aux_sym_template_exercise_name_token1,
    STATE(100), 1,
      sym_template_exercise_name,
    STATE(34), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [670] = 4,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(126), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [685] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(178), 1,
      aux_sym_include_token1,
    ACTIONS(180), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_log_entry_repeat2,
    STATE(37), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [702] = 5,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(178), 1,
      aux_sym_include_token1,
    ACTIONS(182), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_log_entry_repeat2,
    STATE(42), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [719] = 5,
    ACTIONS(159), 1,
      aux_sym_attribute_token1,
    ACTIONS(163), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(184), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(100), 1,
      sym_template_exercise_name,
    STATE(34), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [736] = 4,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(186), 1,
      sym__exercises_end,
    STATE(40), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [750] = 4,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(188), 1,
      sym__exercises_end,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(40), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [764] = 4,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym__exercises_end,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    STATE(40), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [778] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(193), 1,
      aux_sym_include_token1,
    ACTIONS(196), 1,
      anon_sym_LF,
    STATE(42), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [792] = 4,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(198), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_CARET,
  [805] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(204), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [814] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(206), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [823] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(208), 1,
      aux_sym__blank_line_token1,
    STATE(18), 1,
      sym__line_break,
  [833] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(210), 1,
      aux_sym_attribute_value_token1,
    STATE(72), 1,
      sym_workout_name,
  [843] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(212), 1,
      aux_sym_attribute_value_token1,
    STATE(60), 1,
      sym_template_name,
  [853] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(214), 2,
      aux_sym_include_token1,
      anon_sym_LF,
  [861] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(216), 1,
      aux_sym__blank_line_token1,
    STATE(44), 1,
      sym__line_break,
  [871] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(218), 1,
      aux_sym__blank_line_token1,
    STATE(49), 1,
      sym__line_break,
  [881] = 3,
    ACTIONS(220), 1,
      aux_sym_attribute_token1,
    ACTIONS(222), 1,
      aux_sym_attribute_value_token1,
    STATE(64), 1,
      sym_template_exercise_details,
  [891] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(224), 1,
      aux_sym_template_exercise_name_token1,
    STATE(86), 1,
      sym_logged_exercise_name,
  [901] = 1,
    ACTIONS(226), 3,
      aux_sym_attribute_token1,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [907] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(228), 1,
      aux_sym_attribute_value_token1,
    STATE(46), 1,
      sym_measurement_value,
  [917] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(230), 1,
      aux_sym_attribute_value_token1,
    STATE(51), 1,
      sym_logged_exercise_details,
  [927] = 1,
    ACTIONS(232), 3,
      aux_sym_attribute_token1,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [933] = 3,
    ACTIONS(234), 1,
      aux_sym_attribute_token1,
    ACTIONS(236), 1,
      aux_sym_attribute_value_token1,
    STATE(50), 1,
      sym_attribute_value,
  [943] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(163), 1,
      aux_sym_template_exercise_name_token1,
    STATE(97), 1,
      sym_template_exercise_name,
  [953] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(238), 1,
      aux_sym__blank_line_token1,
    STATE(32), 1,
      sym__line_break,
  [963] = 3,
    ACTIONS(222), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(240), 1,
      aux_sym_attribute_token1,
    STATE(70), 1,
      sym_template_exercise_details,
  [973] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(222), 1,
      aux_sym_attribute_value_token1,
    STATE(70), 1,
      sym_template_exercise_details,
  [983] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(242), 1,
      aux_sym__blank_line_token1,
    STATE(54), 1,
      sym__line_break,
  [993] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(244), 1,
      aux_sym__blank_line_token1,
    STATE(68), 1,
      sym__line_break,
  [1003] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(246), 1,
      aux_sym__blank_line_token1,
    STATE(12), 1,
      sym__line_break,
  [1013] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(248), 1,
      aux_sym__blank_line_token1,
    STATE(45), 1,
      sym__line_break,
  [1023] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(250), 1,
      aux_sym__blank_line_token1,
    STATE(7), 1,
      sym__line_break,
  [1033] = 1,
    ACTIONS(252), 3,
      aux_sym_attribute_token1,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [1039] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(254), 1,
      aux_sym__blank_line_token1,
    STATE(6), 1,
      sym__line_break,
  [1049] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(256), 1,
      aux_sym__blank_line_token1,
    STATE(57), 1,
      sym__line_break,
  [1059] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(222), 1,
      aux_sym_attribute_value_token1,
    STATE(63), 1,
      sym_template_exercise_details,
  [1069] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(258), 1,
      aux_sym__blank_line_token1,
    STATE(36), 1,
      sym__line_break,
  [1079] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(236), 1,
      aux_sym_attribute_value_token1,
    STATE(66), 1,
      sym_attribute_value,
  [1089] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(260), 1,
      anon_sym_PR,
  [1096] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(262), 1,
      sym_file_path,
  [1103] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [1110] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(266), 1,
      aux_sym__blank_line_token1,
  [1117] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1124] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(270), 1,
      aux_sym__blank_line_token1,
  [1131] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(272), 1,
      sym_exercise_name,
  [1138] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [1145] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(276), 1,
      aux_sym_include_token1,
  [1152] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(278), 1,
      aux_sym_include_token1,
  [1159] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(280), 1,
      aux_sym_pr_record_token1,
  [1166] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(282), 1,
      aux_sym__blank_line_token1,
  [1173] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1180] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1187] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(288), 1,
      aux_sym__blank_line_token1,
  [1194] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(290), 1,
      anon_sym_Measurements,
  [1201] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(292), 1,
      sym_pr_exercise_name,
  [1208] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(294), 1,
      sym_pr_type,
  [1215] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
  [1222] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(298), 1,
      aux_sym_comment_token1,
  [1229] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(300), 1,
      aux_sym__blank_line_token1,
  [1236] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(302), 1,
      sym_measurement_name,
  [1243] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(304), 1,
      aux_sym__blank_line_token1,
  [1250] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(306), 1,
      anon_sym_COLON,
  [1257] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(308), 1,
      aux_sym_include_token1,
  [1264] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [1271] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_COLON,
  [1278] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(314), 1,
      sym_weight,
  [1285] = 2,
    ACTIONS(157), 1,
      aux_sym_attribute_token1,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [1292] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(318), 1,
      aux_sym_include_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 253,
  [SMALL_STATE(12)] = 274,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 354,
  [SMALL_STATE(17)] = 375,
  [SMALL_STATE(18)] = 396,
  [SMALL_STATE(19)] = 413,
  [SMALL_STATE(20)] = 435,
  [SMALL_STATE(21)] = 457,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 483,
  [SMALL_STATE(24)] = 496,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 538,
  [SMALL_STATE(27)] = 551,
  [SMALL_STATE(28)] = 564,
  [SMALL_STATE(29)] = 577,
  [SMALL_STATE(30)] = 590,
  [SMALL_STATE(31)] = 606,
  [SMALL_STATE(32)] = 621,
  [SMALL_STATE(33)] = 638,
  [SMALL_STATE(34)] = 653,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 685,
  [SMALL_STATE(37)] = 702,
  [SMALL_STATE(38)] = 719,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 750,
  [SMALL_STATE(41)] = 764,
  [SMALL_STATE(42)] = 778,
  [SMALL_STATE(43)] = 792,
  [SMALL_STATE(44)] = 805,
  [SMALL_STATE(45)] = 814,
  [SMALL_STATE(46)] = 823,
  [SMALL_STATE(47)] = 833,
  [SMALL_STATE(48)] = 843,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 861,
  [SMALL_STATE(51)] = 871,
  [SMALL_STATE(52)] = 881,
  [SMALL_STATE(53)] = 891,
  [SMALL_STATE(54)] = 901,
  [SMALL_STATE(55)] = 907,
  [SMALL_STATE(56)] = 917,
  [SMALL_STATE(57)] = 927,
  [SMALL_STATE(58)] = 933,
  [SMALL_STATE(59)] = 943,
  [SMALL_STATE(60)] = 953,
  [SMALL_STATE(61)] = 963,
  [SMALL_STATE(62)] = 973,
  [SMALL_STATE(63)] = 983,
  [SMALL_STATE(64)] = 993,
  [SMALL_STATE(65)] = 1003,
  [SMALL_STATE(66)] = 1013,
  [SMALL_STATE(67)] = 1023,
  [SMALL_STATE(68)] = 1033,
  [SMALL_STATE(69)] = 1039,
  [SMALL_STATE(70)] = 1049,
  [SMALL_STATE(71)] = 1059,
  [SMALL_STATE(72)] = 1069,
  [SMALL_STATE(73)] = 1079,
  [SMALL_STATE(74)] = 1089,
  [SMALL_STATE(75)] = 1096,
  [SMALL_STATE(76)] = 1103,
  [SMALL_STATE(77)] = 1110,
  [SMALL_STATE(78)] = 1117,
  [SMALL_STATE(79)] = 1124,
  [SMALL_STATE(80)] = 1131,
  [SMALL_STATE(81)] = 1138,
  [SMALL_STATE(82)] = 1145,
  [SMALL_STATE(83)] = 1152,
  [SMALL_STATE(84)] = 1159,
  [SMALL_STATE(85)] = 1166,
  [SMALL_STATE(86)] = 1173,
  [SMALL_STATE(87)] = 1180,
  [SMALL_STATE(88)] = 1187,
  [SMALL_STATE(89)] = 1194,
  [SMALL_STATE(90)] = 1201,
  [SMALL_STATE(91)] = 1208,
  [SMALL_STATE(92)] = 1215,
  [SMALL_STATE(93)] = 1222,
  [SMALL_STATE(94)] = 1229,
  [SMALL_STATE(95)] = 1236,
  [SMALL_STATE(96)] = 1243,
  [SMALL_STATE(97)] = 1250,
  [SMALL_STATE(98)] = 1257,
  [SMALL_STATE(99)] = 1264,
  [SMALL_STATE(100)] = 1271,
  [SMALL_STATE(101)] = 1278,
  [SMALL_STATE(102)] = 1285,
  [SMALL_STATE(103)] = 1292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 6, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 6, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat2, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat2, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 8, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 8, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 6, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 6, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 6, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 6, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 6, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat2, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 6, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_details, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
