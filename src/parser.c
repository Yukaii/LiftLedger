#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
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
  sym_logged_exercise_name = 47,
  sym_logged_exercise_details = 48,
  sym_measurement_entry = 49,
  sym_measurement = 50,
  sym_pr_entry = 51,
  sym_pr_record = 52,
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
  [sym_logged_exercise_name] = "logged_exercise_name",
  [sym_logged_exercise_details] = "logged_exercise_details",
  [sym_measurement_entry] = "measurement_entry",
  [sym_measurement] = "measurement",
  [sym_pr_entry] = "pr_entry",
  [sym_pr_record] = "pr_record",
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
  [sym_logged_exercise_name] = sym_logged_exercise_name,
  [sym_logged_exercise_details] = sym_logged_exercise_details,
  [sym_measurement_entry] = sym_measurement_entry,
  [sym_measurement] = sym_measurement,
  [sym_pr_entry] = sym_pr_entry,
  [sym_pr_record] = sym_pr_record,
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
  [sym_logged_exercise_name] = {
    .visible = true,
    .named = true,
  },
  [sym_logged_exercise_details] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (eof) ADVANCE(98);
      ADVANCE_MAP(
        '\n', 100,
        '\r', 105,
        '#', 143,
        '*', 141,
        ':', 114,
        ';', 101,
        '@', 33,
        'B', 123,
        'M', 125,
        'P', 122,
        '[', 111,
        ']', 112,
        '^', 146,
        '\t', 107,
        0x0b, 107,
        '\f', 107,
        ' ', 107,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(116);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '@') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(153);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 85:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 86:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(155);
      END_STATE();
    case 87:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(113);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(111);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == '^') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_exercises_start);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__exercises_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(151);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_pr_record_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_pr_exercise_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 96},
  [3] = {.lex_state = 96},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 96},
  [6] = {.lex_state = 96},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 96},
  [13] = {.lex_state = 96},
  [14] = {.lex_state = 96},
  [15] = {.lex_state = 96},
  [16] = {.lex_state = 96},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 97},
  [22] = {.lex_state = 97},
  [23] = {.lex_state = 97},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 97},
  [28] = {.lex_state = 97},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 97},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 97},
  [41] = {.lex_state = 97},
  [42] = {.lex_state = 97},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 97},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 97},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 97},
  [62] = {.lex_state = 97},
  [63] = {.lex_state = 96},
  [64] = {.lex_state = 97},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 86},
  [67] = {.lex_state = 97},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 96},
  [70] = {.lex_state = 96},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 97},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 149},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 97},
  [79] = {.lex_state = 96},
  [80] = {.lex_state = 96},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 97},
  [84] = {.lex_state = 97},
  [85] = {.lex_state = 102},
  [86] = {.lex_state = 96},
  [87] = {.lex_state = 96},
  [88] = {.lex_state = 96},
  [89] = {.lex_state = 96},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 96},
  [92] = {.lex_state = 96},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 96},
  [95] = {.lex_state = 96},
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
    [sym_source_file] = STATE(59),
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
  [72] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(45), 1,
      sym_attribute_name,
    ACTIONS(47), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_exercises_block_repeat1,
    ACTIONS(43), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(22), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [93] = 2,
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
  [106] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [119] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [132] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
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
  [249] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(45), 1,
      sym_attribute_name,
    ACTIONS(75), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_exercises_block_repeat1,
    ACTIONS(73), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(23), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [270] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
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
    STATE(33), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [303] = 6,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(47), 1,
      sym__line_break,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      sym__exercises_end,
    STATE(24), 1,
      aux_sym_exercises_block_repeat1,
    STATE(27), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [323] = 4,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(91), 1,
      sym_attribute_name,
    ACTIONS(87), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [338] = 4,
    ACTIONS(45), 1,
      sym_attribute_name,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(94), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [353] = 4,
    ACTIONS(45), 1,
      sym_attribute_name,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(43), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_attribute,
      aux_sym_exercise_repeat1,
  [368] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(98), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_exercises_block_repeat1,
    ACTIONS(96), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [383] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(101), 1,
      aux_sym_include_token1,
    ACTIONS(103), 1,
      anon_sym_LF_LF,
    STATE(31), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [397] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(105), 1,
      aux_sym_include_token1,
    ACTIONS(108), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(26), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [411] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(110), 1,
      sym__exercises_end,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [425] = 4,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(112), 1,
      sym__exercises_end,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [439] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(117), 1,
      aux_sym_include_token1,
    ACTIONS(119), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(34), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [453] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(121), 1,
      aux_sym_include_token1,
    ACTIONS(123), 1,
      anon_sym_LF_LF,
    STATE(39), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [467] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(125), 1,
      aux_sym_include_token1,
    ACTIONS(128), 1,
      anon_sym_LF_LF,
    STATE(31), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [481] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(130), 1,
      aux_sym_include_token1,
    ACTIONS(132), 1,
      anon_sym_LF_LF,
    STATE(38), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [495] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      sym__exercises_end,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    STATE(28), 2,
      sym_exercise,
      aux_sym_exercises_block_repeat2,
  [509] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(117), 1,
      aux_sym_include_token1,
    ACTIONS(134), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(26), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [523] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(101), 1,
      aux_sym_include_token1,
    ACTIONS(136), 1,
      anon_sym_LF_LF,
    STATE(25), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [537] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(130), 1,
      aux_sym_include_token1,
    ACTIONS(138), 1,
      anon_sym_LF_LF,
    STATE(32), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [551] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(121), 1,
      aux_sym_include_token1,
    ACTIONS(140), 1,
      anon_sym_LF_LF,
    STATE(30), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [565] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(142), 1,
      aux_sym_include_token1,
    ACTIONS(145), 1,
      anon_sym_LF_LF,
    STATE(38), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [579] = 4,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(147), 1,
      aux_sym_include_token1,
    ACTIONS(150), 1,
      anon_sym_LF_LF,
    STATE(39), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [593] = 4,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(152), 1,
      anon_sym_STAR,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      anon_sym_CARET,
  [606] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(158), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [615] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(160), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [624] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(162), 1,
      aux_sym_attribute_value_token1,
    STATE(89), 1,
      sym_measurement_value,
  [634] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(164), 1,
      aux_sym_attribute_value_token1,
    STATE(77), 1,
      sym_attribute_value,
  [644] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(166), 1,
      aux_sym_attribute_value_token1,
    STATE(95), 1,
      sym_workout_name,
  [654] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(168), 1,
      aux_sym_attribute_value_token1,
    STATE(80), 1,
      sym_template_exercise_details,
  [664] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(170), 1,
      aux_sym_template_exercise_name_token1,
    STATE(62), 1,
      sym_logged_exercise_name,
  [674] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(172), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [682] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(174), 1,
      aux_sym_attribute_value_token1,
    STATE(87), 1,
      sym_logged_exercise_details,
  [692] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(176), 1,
      aux_sym_attribute_value_token1,
    STATE(70), 1,
      sym_template_name,
  [702] = 3,
    ACTIONS(164), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(178), 1,
      aux_sym_attribute_token1,
    STATE(72), 1,
      sym_attribute_value,
  [712] = 3,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(180), 1,
      aux_sym_template_exercise_name_token1,
    STATE(73), 1,
      sym_template_exercise_name,
  [722] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(182), 2,
      aux_sym_include_token1,
      anon_sym_ATend_DASHtemplate,
  [730] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(184), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [738] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(186), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [746] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [753] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(190), 1,
      aux_sym_include_token1,
  [760] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(192), 1,
      sym_file_path,
  [767] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [774] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(196), 1,
      aux_sym_include_token1,
  [781] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
  [788] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(200), 1,
      anon_sym_COLON,
  [795] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [802] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [809] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(206), 1,
      sym_pr_exercise_name,
  [816] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(208), 1,
      sym_measurement_name,
  [823] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(210), 1,
      anon_sym_COLON,
  [830] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(212), 1,
      aux_sym_include_token1,
  [837] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(214), 1,
      anon_sym_LF,
  [844] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(216), 1,
      anon_sym_LF,
  [851] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(218), 1,
      sym__line_break,
  [858] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(220), 1,
      sym__line_break,
  [865] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [872] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(224), 1,
      aux_sym_include_token1,
  [879] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(226), 1,
      sym_exercise_name,
  [886] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(228), 1,
      aux_sym_pr_record_token1,
  [893] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(230), 1,
      sym__line_break,
  [900] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [907] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [914] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(236), 1,
      anon_sym_LF,
  [921] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(238), 1,
      anon_sym_Measurements,
  [928] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(240), 1,
      anon_sym_PR,
  [935] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(242), 1,
      sym_pr_type,
  [942] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(244), 1,
      anon_sym_COLON,
  [949] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(246), 1,
      aux_sym_comment_token1,
  [956] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(248), 1,
      anon_sym_LF,
  [963] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(250), 1,
      anon_sym_LF,
  [970] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [977] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(254), 1,
      anon_sym_LF,
  [984] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(256), 1,
      aux_sym_include_token1,
  [991] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(258), 1,
      anon_sym_LF,
  [998] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(260), 1,
      anon_sym_LF,
  [1005] = 2,
    ACTIONS(89), 1,
      aux_sym_attribute_token1,
    ACTIONS(262), 1,
      sym_weight,
  [1012] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [1019] = 2,
    ACTIONS(3), 1,
      aux_sym_attribute_token1,
    ACTIONS(266), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 397,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 439,
  [SMALL_STATE(30)] = 453,
  [SMALL_STATE(31)] = 467,
  [SMALL_STATE(32)] = 481,
  [SMALL_STATE(33)] = 495,
  [SMALL_STATE(34)] = 509,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 537,
  [SMALL_STATE(37)] = 551,
  [SMALL_STATE(38)] = 565,
  [SMALL_STATE(39)] = 579,
  [SMALL_STATE(40)] = 593,
  [SMALL_STATE(41)] = 606,
  [SMALL_STATE(42)] = 615,
  [SMALL_STATE(43)] = 624,
  [SMALL_STATE(44)] = 634,
  [SMALL_STATE(45)] = 644,
  [SMALL_STATE(46)] = 654,
  [SMALL_STATE(47)] = 664,
  [SMALL_STATE(48)] = 674,
  [SMALL_STATE(49)] = 682,
  [SMALL_STATE(50)] = 692,
  [SMALL_STATE(51)] = 702,
  [SMALL_STATE(52)] = 712,
  [SMALL_STATE(53)] = 722,
  [SMALL_STATE(54)] = 730,
  [SMALL_STATE(55)] = 738,
  [SMALL_STATE(56)] = 746,
  [SMALL_STATE(57)] = 753,
  [SMALL_STATE(58)] = 760,
  [SMALL_STATE(59)] = 767,
  [SMALL_STATE(60)] = 774,
  [SMALL_STATE(61)] = 781,
  [SMALL_STATE(62)] = 788,
  [SMALL_STATE(63)] = 795,
  [SMALL_STATE(64)] = 802,
  [SMALL_STATE(65)] = 809,
  [SMALL_STATE(66)] = 816,
  [SMALL_STATE(67)] = 823,
  [SMALL_STATE(68)] = 830,
  [SMALL_STATE(69)] = 837,
  [SMALL_STATE(70)] = 844,
  [SMALL_STATE(71)] = 851,
  [SMALL_STATE(72)] = 858,
  [SMALL_STATE(73)] = 865,
  [SMALL_STATE(74)] = 872,
  [SMALL_STATE(75)] = 879,
  [SMALL_STATE(76)] = 886,
  [SMALL_STATE(77)] = 893,
  [SMALL_STATE(78)] = 900,
  [SMALL_STATE(79)] = 907,
  [SMALL_STATE(80)] = 914,
  [SMALL_STATE(81)] = 921,
  [SMALL_STATE(82)] = 928,
  [SMALL_STATE(83)] = 935,
  [SMALL_STATE(84)] = 942,
  [SMALL_STATE(85)] = 949,
  [SMALL_STATE(86)] = 956,
  [SMALL_STATE(87)] = 963,
  [SMALL_STATE(88)] = 970,
  [SMALL_STATE(89)] = 977,
  [SMALL_STATE(90)] = 984,
  [SMALL_STATE(91)] = 991,
  [SMALL_STATE(92)] = 998,
  [SMALL_STATE(93)] = 1005,
  [SMALL_STATE(94)] = 1012,
  [SMALL_STATE(95)] = 1019,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 6, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat2, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat2, 2, 0, 0), SHIFT_REPEAT(75),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 8, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise, 6, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_details, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
