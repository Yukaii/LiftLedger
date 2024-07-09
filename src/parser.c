#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
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
  sym__line_break = 16,
  anon_sym_ATtemplate = 17,
  anon_sym_ATend_DASHtemplate = 18,
  aux_sym_template_exercise_name_token1 = 19,
  anon_sym_STAR = 20,
  anon_sym_LF_LF = 21,
  anon_sym_POUND = 22,
  anon_sym_Measurements = 23,
  anon_sym_CARET = 24,
  anon_sym_PR = 25,
  aux_sym_pr_record_token1 = 26,
  sym_pr_exercise_name = 27,
  sym_pr_type = 28,
  sym_weight = 29,
  sym_date = 30,
  sym_measurement_name = 31,
  sym_source_file = 32,
  sym__line = 33,
  sym_comment = 34,
  sym_include = 35,
  sym_exercises_block = 36,
  sym_exercise = 37,
  sym_attribute = 38,
  sym_attribute_value = 39,
  sym_template_block = 40,
  sym_template_name = 41,
  sym_template_exercise = 42,
  sym_template_exercise_details = 43,
  sym_template_exercise_name = 44,
  sym_log_entry = 45,
  sym_logged_exercise = 46,
  sym_measurement_entry = 47,
  sym_measurement = 48,
  sym_pr_entry = 49,
  sym_pr_record = 50,
  sym_logged_exercise_name = 51,
  sym_logged_exercise_details = 52,
  sym_workout_name = 53,
  sym_measurement_value = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_exercises_block_repeat1 = 56,
  aux_sym_exercises_block_repeat2 = 57,
  aux_sym_exercise_repeat1 = 58,
  aux_sym_template_block_repeat1 = 59,
  aux_sym_log_entry_repeat1 = 60,
  aux_sym_measurement_entry_repeat1 = 61,
  aux_sym_pr_entry_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [sym__line_break] = "_line_break",
  [anon_sym_ATtemplate] = "@template",
  [anon_sym_ATend_DASHtemplate] = "@end-template",
  [aux_sym_template_exercise_name_token1] = "template_exercise_name_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LF_LF] = "\n\n",
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
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym_include] = "include",
  [sym_exercises_block] = "exercises_block",
  [sym_exercise] = "exercise",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
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
  [aux_sym_measurement_entry_repeat1] = "measurement_entry_repeat1",
  [aux_sym_pr_entry_repeat1] = "pr_entry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
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
  [sym__line_break] = sym__line_break,
  [anon_sym_ATtemplate] = anon_sym_ATtemplate,
  [anon_sym_ATend_DASHtemplate] = anon_sym_ATend_DASHtemplate,
  [aux_sym_template_exercise_name_token1] = aux_sym_template_exercise_name_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
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
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym_include] = sym_include,
  [sym_exercises_block] = sym_exercises_block,
  [sym_exercise] = sym_exercise,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
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
  [aux_sym_measurement_entry_repeat1] = aux_sym_measurement_entry_repeat1,
  [aux_sym_pr_entry_repeat1] = aux_sym_pr_entry_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [sym__line_break] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LF_LF] = {
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
  [sym__line] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (eof) ADVANCE(94);
      ADVANCE_MAP(
        '\n', 96,
        '\r', 101,
        '#', 152,
        '*', 150,
        ':', 110,
        ';', 97,
        '@', 31,
        'B', 119,
        'M', 121,
        'P', 118,
        '[', 107,
        ']', 108,
        '^', 155,
        '\t', 103,
        0x0b, 103,
        '\f', 103,
        ' ', 103,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '@') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(161);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == 'W') ADVANCE(162);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 80:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 81:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 82:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(109);
      END_STATE();
    case 83:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(164);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(94);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '@') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      if (eof) ADVANCE(94);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(107);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '^') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
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
      ACCEPT_TOKEN(sym__exercises_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '\n') ADVANCE(133);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(160);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(164);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_pr_exercise_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(164);
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
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 92},
  [16] = {.lex_state = 92},
  [17] = {.lex_state = 92},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 93},
  [41] = {.lex_state = 93},
  [42] = {.lex_state = 93},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 92},
  [66] = {.lex_state = 93},
  [67] = {.lex_state = 92},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 83},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 93},
  [81] = {.lex_state = 80},
  [82] = {.lex_state = 81},
  [83] = {.lex_state = 158},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 92},
  [87] = {.lex_state = 93},
  [88] = {.lex_state = 93},
  [89] = {.lex_state = 98},
  [90] = {.lex_state = 93},
  [91] = {.lex_state = 93},
  [92] = {.lex_state = 93},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 92},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 80},
  [98] = {.lex_state = 92},
  [99] = {.lex_state = 92},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 92},
  [102] = {.lex_state = 92},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [sym__line_break] = ACTIONS(1),
    [anon_sym_ATtemplate] = ACTIONS(1),
    [anon_sym_ATend_DASHtemplate] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LF_LF] = ACTIONS(1),
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
    [sym_source_file] = STATE(63),
    [sym__line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_include] = STATE(2),
    [sym_exercises_block] = STATE(2),
    [sym_template_block] = STATE(2),
    [sym_log_entry] = STATE(2),
    [sym_measurement_entry] = STATE(2),
    [sym_pr_entry] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
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
      anon_sym_LF,
    STATE(3), 9,
      sym__line,
      sym_comment,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [36] = 9,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LF,
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
      sym__line,
      sym_comment,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [72] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [85] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [98] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [111] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [124] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(53), 1,
      sym_attribute_name,
    ACTIONS(55), 1,
      sym__line_break,
    STATE(18), 1,
      aux_sym_exercises_block_repeat1,
    ACTIONS(51), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [145] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [158] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [171] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [184] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [197] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [210] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [223] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [236] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [249] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [262] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(53), 1,
      sym_attribute_name,
    ACTIONS(77), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_exercises_block_repeat1,
    ACTIONS(75), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(25), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [283] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(79), 1,
      sym__exercises_end,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      sym__line_break,
    STATE(20), 1,
      aux_sym_exercises_block_repeat1,
    STATE(34), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [303] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(77), 1,
      sym__line_break,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      sym__exercises_end,
    STATE(24), 1,
      aux_sym_exercises_block_repeat1,
    STATE(30), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [323] = 4,
    ACTIONS(53), 1,
      sym_attribute_name,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(75), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(26), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [338] = 5,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(92), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(94), 1,
      aux_sym_template_exercise_name_token1,
    STATE(91), 1,
      sym_template_exercise_name,
    STATE(22), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [355] = 5,
    ACTIONS(97), 1,
      aux_sym_attribute_token1,
    ACTIONS(99), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(101), 1,
      aux_sym_template_exercise_name_token1,
    STATE(91), 1,
      sym_template_exercise_name,
    STATE(22), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [372] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(105), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_exercises_block_repeat1,
    ACTIONS(103), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [387] = 4,
    ACTIONS(53), 1,
      sym_attribute_name,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(108), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(26), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [402] = 4,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(112), 1,
      sym_attribute_name,
    ACTIONS(110), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(26), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [417] = 5,
    ACTIONS(97), 1,
      aux_sym_attribute_token1,
    ACTIONS(101), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(115), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(91), 1,
      sym_template_exercise_name,
    STATE(23), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [434] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(117), 1,
      aux_sym_include_token1,
    ACTIONS(119), 1,
      anon_sym_LF_LF,
    STATE(32), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [448] = 4,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(121), 1,
      sym__exercises_end,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(29), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [462] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(126), 1,
      sym__exercises_end,
    STATE(29), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [476] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(128), 1,
      aux_sym_include_token1,
    ACTIONS(130), 1,
      anon_sym_LF_LF,
    STATE(39), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [490] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(132), 1,
      aux_sym_include_token1,
    ACTIONS(135), 1,
      anon_sym_LF_LF,
    STATE(32), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [504] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(137), 1,
      aux_sym_include_token1,
    ACTIONS(139), 1,
      anon_sym_LF_LF,
    STATE(35), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [518] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      sym__exercises_end,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    STATE(29), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [532] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(141), 1,
      aux_sym_include_token1,
    ACTIONS(144), 1,
      anon_sym_LF_LF,
    STATE(35), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [546] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(117), 1,
      aux_sym_include_token1,
    ACTIONS(146), 1,
      anon_sym_LF_LF,
    STATE(28), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [560] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(137), 1,
      aux_sym_include_token1,
    ACTIONS(148), 1,
      anon_sym_LF_LF,
    STATE(33), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [574] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(128), 1,
      aux_sym_include_token1,
    ACTIONS(150), 1,
      anon_sym_LF_LF,
    STATE(31), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [588] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(152), 1,
      aux_sym_include_token1,
    ACTIONS(155), 1,
      anon_sym_LF_LF,
    STATE(39), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [602] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(157), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [611] = 4,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_CARET,
  [624] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(165), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [633] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(167), 1,
      aux_sym_attribute_value_token1,
    STATE(96), 1,
      sym_measurement_value,
  [643] = 1,
    ACTIONS(169), 3,
      aux_sym_attribute_token1,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [649] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(171), 1,
      aux_sym_attribute_value_token1,
    STATE(86), 1,
      sym_template_exercise_details,
  [659] = 3,
    ACTIONS(171), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(173), 1,
      aux_sym_attribute_token1,
    STATE(65), 1,
      sym_template_exercise_details,
  [669] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(175), 1,
      aux_sym_attribute_value_token1,
    STATE(84), 1,
      sym_attribute_value,
  [679] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(177), 1,
      aux_sym_attribute_value_token1,
    STATE(102), 1,
      sym_workout_name,
  [689] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(179), 1,
      aux_sym_template_exercise_name_token1,
    STATE(66), 1,
      sym_logged_exercise_name,
  [699] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(181), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [707] = 1,
    ACTIONS(183), 3,
      aux_sym_attribute_token1,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [713] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(185), 1,
      aux_sym_attribute_value_token1,
    STATE(75), 1,
      sym_template_name,
  [723] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(187), 1,
      aux_sym_attribute_value_token1,
    STATE(94), 1,
      sym_logged_exercise_details,
  [733] = 3,
    ACTIONS(171), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(189), 1,
      aux_sym_attribute_token1,
    STATE(79), 1,
      sym_template_exercise_details,
  [743] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(101), 1,
      aux_sym_template_exercise_name_token1,
    STATE(80), 1,
      sym_template_exercise_name,
  [753] = 1,
    ACTIONS(191), 3,
      aux_sym_attribute_token1,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [759] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(193), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [767] = 3,
    ACTIONS(175), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(195), 1,
      aux_sym_attribute_token1,
    STATE(77), 1,
      sym_attribute_value,
  [777] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(171), 1,
      aux_sym_attribute_value_token1,
    STATE(79), 1,
      sym_template_exercise_details,
  [787] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(197), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [795] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [802] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(201), 1,
      aux_sym_include_token1,
  [809] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [816] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(205), 1,
      anon_sym_LF,
  [823] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(207), 1,
      anon_sym_LF,
  [830] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [837] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [844] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(213), 1,
      sym_exercise_name,
  [851] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [858] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(217), 1,
      sym_pr_exercise_name,
  [865] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(219), 1,
      sym_measurement_name,
  [872] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [879] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(223), 1,
      aux_sym_include_token1,
  [886] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(225), 1,
      anon_sym_LF,
  [893] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(227), 1,
      anon_sym_LF,
  [900] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(229), 1,
      sym__line_break,
  [907] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(231), 1,
      sym__line_break,
  [914] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(233), 1,
      anon_sym_Measurements,
  [921] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(235), 1,
      anon_sym_LF,
  [928] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [935] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(239), 1,
      aux_sym_include_token1,
  [942] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(241), 1,
      sym_file_path,
  [949] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(243), 1,
      aux_sym_pr_record_token1,
  [956] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(245), 1,
      sym__line_break,
  [963] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(247), 1,
      anon_sym_PR,
  [970] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(249), 1,
      anon_sym_LF,
  [977] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
  [984] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(253), 1,
      anon_sym_COLON,
  [991] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
  [998] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(257), 1,
      sym_pr_type,
  [1005] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(259), 1,
      anon_sym_COLON,
  [1012] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(261), 1,
      anon_sym_COLON,
  [1019] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(263), 1,
      anon_sym_LF,
  [1026] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(265), 1,
      anon_sym_LF,
  [1033] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(267), 1,
      anon_sym_LF,
  [1040] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(269), 1,
      anon_sym_LF,
  [1047] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(271), 1,
      aux_sym_include_token1,
  [1054] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(273), 1,
      anon_sym_LF,
  [1061] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(275), 1,
      anon_sym_LF,
  [1068] = 2,
    ACTIONS(87), 1,
      aux_sym_attribute_token1,
    ACTIONS(277), 1,
      sym_weight,
  [1075] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(279), 1,
      anon_sym_LF,
  [1082] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(281), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 387,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 417,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 462,
  [SMALL_STATE(31)] = 476,
  [SMALL_STATE(32)] = 490,
  [SMALL_STATE(33)] = 504,
  [SMALL_STATE(34)] = 518,
  [SMALL_STATE(35)] = 532,
  [SMALL_STATE(36)] = 546,
  [SMALL_STATE(37)] = 560,
  [SMALL_STATE(38)] = 574,
  [SMALL_STATE(39)] = 588,
  [SMALL_STATE(40)] = 602,
  [SMALL_STATE(41)] = 611,
  [SMALL_STATE(42)] = 624,
  [SMALL_STATE(43)] = 633,
  [SMALL_STATE(44)] = 643,
  [SMALL_STATE(45)] = 649,
  [SMALL_STATE(46)] = 659,
  [SMALL_STATE(47)] = 669,
  [SMALL_STATE(48)] = 679,
  [SMALL_STATE(49)] = 689,
  [SMALL_STATE(50)] = 699,
  [SMALL_STATE(51)] = 707,
  [SMALL_STATE(52)] = 713,
  [SMALL_STATE(53)] = 723,
  [SMALL_STATE(54)] = 733,
  [SMALL_STATE(55)] = 743,
  [SMALL_STATE(56)] = 753,
  [SMALL_STATE(57)] = 759,
  [SMALL_STATE(58)] = 767,
  [SMALL_STATE(59)] = 777,
  [SMALL_STATE(60)] = 787,
  [SMALL_STATE(61)] = 795,
  [SMALL_STATE(62)] = 802,
  [SMALL_STATE(63)] = 809,
  [SMALL_STATE(64)] = 816,
  [SMALL_STATE(65)] = 823,
  [SMALL_STATE(66)] = 830,
  [SMALL_STATE(67)] = 837,
  [SMALL_STATE(68)] = 844,
  [SMALL_STATE(69)] = 851,
  [SMALL_STATE(70)] = 858,
  [SMALL_STATE(71)] = 865,
  [SMALL_STATE(72)] = 872,
  [SMALL_STATE(73)] = 879,
  [SMALL_STATE(74)] = 886,
  [SMALL_STATE(75)] = 893,
  [SMALL_STATE(76)] = 900,
  [SMALL_STATE(77)] = 907,
  [SMALL_STATE(78)] = 914,
  [SMALL_STATE(79)] = 921,
  [SMALL_STATE(80)] = 928,
  [SMALL_STATE(81)] = 935,
  [SMALL_STATE(82)] = 942,
  [SMALL_STATE(83)] = 949,
  [SMALL_STATE(84)] = 956,
  [SMALL_STATE(85)] = 963,
  [SMALL_STATE(86)] = 970,
  [SMALL_STATE(87)] = 977,
  [SMALL_STATE(88)] = 984,
  [SMALL_STATE(89)] = 991,
  [SMALL_STATE(90)] = 998,
  [SMALL_STATE(91)] = 1005,
  [SMALL_STATE(92)] = 1012,
  [SMALL_STATE(93)] = 1019,
  [SMALL_STATE(94)] = 1026,
  [SMALL_STATE(95)] = 1033,
  [SMALL_STATE(96)] = 1040,
  [SMALL_STATE(97)] = 1047,
  [SMALL_STATE(98)] = 1054,
  [SMALL_STATE(99)] = 1061,
  [SMALL_STATE(100)] = 1068,
  [SMALL_STATE(101)] = 1075,
  [SMALL_STATE(102)] = 1082,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 6, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 6, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat2, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 8, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 6, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 6, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 6, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_details, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
