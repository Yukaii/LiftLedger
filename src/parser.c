#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_ATexercises = 7,
  anon_sym_ATend_DASHexercises = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  sym_exercise_name = 11,
  aux_sym_exercise_attribute_token1 = 12,
  anon_sym_COLON = 13,
  sym_attribute_name = 14,
  aux_sym_attribute_value_token1 = 15,
  anon_sym_ATtemplate = 16,
  anon_sym_ATend_DASHtemplate = 17,
  anon_sym_STAR = 18,
  anon_sym_LF_LF = 19,
  aux_sym_logged_exercise_name_token1 = 20,
  anon_sym_POUND = 21,
  anon_sym_Measurements = 22,
  anon_sym_CARET = 23,
  anon_sym_PR = 24,
  sym_pr_exercise_name = 25,
  sym_pr_type = 26,
  sym_weight = 27,
  sym_date = 28,
  sym_measurement_name = 29,
  sym_source_file = 30,
  sym__line = 31,
  sym_comment = 32,
  sym_include = 33,
  sym_exercises_block = 34,
  sym_exercise_definition = 35,
  sym_exercise_attribute = 36,
  sym_attribute_value = 37,
  sym_template_block = 38,
  sym_template_name = 39,
  sym_template_exercise = 40,
  sym_template_exercise_details = 41,
  sym_log_entry = 42,
  sym_logged_exercise = 43,
  sym_logged_exercise_name = 44,
  sym_logged_exercise_details = 45,
  sym_measurement_entry = 46,
  sym_measurement = 47,
  sym_pr_entry = 48,
  sym_pr_record = 49,
  sym_workout_name = 50,
  sym_template_exercise_name = 51,
  sym_measurement_value = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_exercises_block_repeat1 = 54,
  aux_sym_exercise_definition_repeat1 = 55,
  aux_sym_template_block_repeat1 = 56,
  aux_sym_log_entry_repeat1 = 57,
  aux_sym_measurement_entry_repeat1 = 58,
  aux_sym_pr_entry_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_ATinclude] = "@include",
  [aux_sym_include_token1] = "include_token1",
  [sym_file_path] = "file_path",
  [anon_sym_ATexercises] = "@exercises",
  [anon_sym_ATend_DASHexercises] = "@end-exercises",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_exercise_name] = "exercise_name",
  [aux_sym_exercise_attribute_token1] = "exercise_attribute_token1",
  [anon_sym_COLON] = ":",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_ATtemplate] = "@template",
  [anon_sym_ATend_DASHtemplate] = "@end-template",
  [anon_sym_STAR] = "*",
  [anon_sym_LF_LF] = "\n\n",
  [aux_sym_logged_exercise_name_token1] = "logged_exercise_name_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_Measurements] = "Measurements",
  [anon_sym_CARET] = "^",
  [anon_sym_PR] = "PR",
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
  [sym_exercise_definition] = "exercise_definition",
  [sym_exercise_attribute] = "exercise_attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_template_block] = "template_block",
  [sym_template_name] = "template_name",
  [sym_template_exercise] = "template_exercise",
  [sym_template_exercise_details] = "template_exercise_details",
  [sym_log_entry] = "log_entry",
  [sym_logged_exercise] = "logged_exercise",
  [sym_logged_exercise_name] = "logged_exercise_name",
  [sym_logged_exercise_details] = "logged_exercise_details",
  [sym_measurement_entry] = "measurement_entry",
  [sym_measurement] = "measurement",
  [sym_pr_entry] = "pr_entry",
  [sym_pr_record] = "pr_record",
  [sym_workout_name] = "workout_name",
  [sym_template_exercise_name] = "template_exercise_name",
  [sym_measurement_value] = "measurement_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exercises_block_repeat1] = "exercises_block_repeat1",
  [aux_sym_exercise_definition_repeat1] = "exercise_definition_repeat1",
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
  [anon_sym_ATexercises] = anon_sym_ATexercises,
  [anon_sym_ATend_DASHexercises] = anon_sym_ATend_DASHexercises,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_exercise_name] = sym_exercise_name,
  [aux_sym_exercise_attribute_token1] = aux_sym_exercise_attribute_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_ATtemplate] = anon_sym_ATtemplate,
  [anon_sym_ATend_DASHtemplate] = anon_sym_ATend_DASHtemplate,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [aux_sym_logged_exercise_name_token1] = aux_sym_logged_exercise_name_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Measurements] = anon_sym_Measurements,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PR] = anon_sym_PR,
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
  [sym_exercise_definition] = sym_exercise_definition,
  [sym_exercise_attribute] = sym_exercise_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_template_block] = sym_template_block,
  [sym_template_name] = sym_template_name,
  [sym_template_exercise] = sym_template_exercise,
  [sym_template_exercise_details] = sym_template_exercise_details,
  [sym_log_entry] = sym_log_entry,
  [sym_logged_exercise] = sym_logged_exercise,
  [sym_logged_exercise_name] = sym_logged_exercise_name,
  [sym_logged_exercise_details] = sym_logged_exercise_details,
  [sym_measurement_entry] = sym_measurement_entry,
  [sym_measurement] = sym_measurement,
  [sym_pr_entry] = sym_pr_entry,
  [sym_pr_record] = sym_pr_record,
  [sym_workout_name] = sym_workout_name,
  [sym_template_exercise_name] = sym_template_exercise_name,
  [sym_measurement_value] = sym_measurement_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exercises_block_repeat1] = aux_sym_exercises_block_repeat1,
  [aux_sym_exercise_definition_repeat1] = aux_sym_exercise_definition_repeat1,
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
  [anon_sym_ATexercises] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATend_DASHexercises] = {
    .visible = true,
    .named = false,
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
  [aux_sym_exercise_attribute_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_logged_exercise_name_token1] = {
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
  [sym_exercise_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_exercise_attribute] = {
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
  [sym_template_exercise_name] = {
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
  [aux_sym_exercise_definition_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      ADVANCE_MAP(
        '#', 130,
        '*', 126,
        ':', 107,
        ';', 91,
        '@', 27,
        'B', 109,
        'M', 111,
        'P', 108,
        '[', 101,
        ']', 102,
        '^', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 18:
      if (lookahead == 'W') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 75:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(142);
      END_STATE();
    case 76:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(104);
      END_STATE();
    case 77:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 78:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '@') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATexercises);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATend_DASHexercises);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_exercise_attribute_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_exercise_attribute_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_logged_exercise_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_logged_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_pr_exercise_name);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_pr_exercise_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(142);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 105},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 105},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 105},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 105},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 105},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 75},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 87},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 87},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 87},
  [72] = {.lex_state = 87},
  [73] = {.lex_state = 87},
  [74] = {.lex_state = 87},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 87},
  [82] = {.lex_state = 87},
  [83] = {.lex_state = 87},
  [84] = {.lex_state = 87},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 87},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 78},
  [91] = {.lex_state = 87},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 87},
  [94] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_ATexercises] = ACTIONS(1),
    [anon_sym_ATend_DASHexercises] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [anon_sym_ATtemplate] = ACTIONS(1),
    [anon_sym_ATend_DASHtemplate] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_Measurements] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PR] = ACTIONS(1),
    [sym_pr_type] = ACTIONS(1),
    [sym_weight] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym__line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_include] = STATE(2),
    [sym_exercises_block] = STATE(2),
    [sym_template_block] = STATE(2),
    [sym_log_entry] = STATE(2),
    [sym_measurement_entry] = STATE(2),
    [sym_pr_entry] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_ATinclude] = ACTIONS(9),
    [anon_sym_ATexercises] = ACTIONS(11),
    [anon_sym_ATtemplate] = ACTIONS(13),
    [sym_date] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(11), 1,
      anon_sym_ATexercises,
    ACTIONS(13), 1,
      anon_sym_ATtemplate,
    ACTIONS(15), 1,
      sym_date,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
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
  [33] = 8,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_ATinclude,
    ACTIONS(32), 1,
      anon_sym_ATexercises,
    ACTIONS(35), 1,
      anon_sym_ATtemplate,
    ACTIONS(38), 1,
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
  [66] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [78] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(47), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [90] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [102] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [114] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [126] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [138] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [150] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [162] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [174] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [186] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [198] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [210] = 3,
    ACTIONS(89), 1,
      aux_sym_include_token1,
    ACTIONS(91), 1,
      anon_sym_LF_LF,
    STATE(20), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [221] = 3,
    ACTIONS(93), 1,
      aux_sym_include_token1,
    ACTIONS(95), 1,
      anon_sym_LF_LF,
    STATE(25), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [232] = 3,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      aux_sym_exercise_attribute_token1,
    STATE(18), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [243] = 3,
    ACTIONS(102), 1,
      aux_sym_include_token1,
    ACTIONS(104), 1,
      anon_sym_LF_LF,
    STATE(29), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [254] = 3,
    ACTIONS(89), 1,
      aux_sym_include_token1,
    ACTIONS(106), 1,
      anon_sym_LF_LF,
    STATE(28), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [265] = 3,
    ACTIONS(108), 1,
      aux_sym_include_token1,
    ACTIONS(111), 1,
      anon_sym_LF_LF,
    STATE(21), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [276] = 3,
    ACTIONS(113), 1,
      aux_sym_include_token1,
    ACTIONS(115), 1,
      anon_sym_ATend_DASHexercises,
    STATE(30), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [287] = 3,
    ACTIONS(117), 1,
      aux_sym_include_token1,
    ACTIONS(119), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(33), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [298] = 3,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      aux_sym_exercise_attribute_token1,
    STATE(18), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [309] = 3,
    ACTIONS(93), 1,
      aux_sym_include_token1,
    ACTIONS(125), 1,
      anon_sym_LF_LF,
    STATE(21), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
  [320] = 3,
    ACTIONS(127), 1,
      aux_sym_include_token1,
    ACTIONS(130), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(26), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [331] = 3,
    ACTIONS(123), 1,
      aux_sym_exercise_attribute_token1,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(24), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [342] = 3,
    ACTIONS(134), 1,
      aux_sym_include_token1,
    ACTIONS(137), 1,
      anon_sym_LF_LF,
    STATE(28), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
  [353] = 3,
    ACTIONS(139), 1,
      aux_sym_include_token1,
    ACTIONS(142), 1,
      anon_sym_LF_LF,
    STATE(29), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [364] = 3,
    ACTIONS(144), 1,
      aux_sym_include_token1,
    ACTIONS(147), 1,
      anon_sym_ATend_DASHexercises,
    STATE(30), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [375] = 3,
    ACTIONS(113), 1,
      aux_sym_include_token1,
    ACTIONS(149), 1,
      anon_sym_ATend_DASHexercises,
    STATE(22), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [386] = 3,
    ACTIONS(102), 1,
      aux_sym_include_token1,
    ACTIONS(151), 1,
      anon_sym_LF_LF,
    STATE(19), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
  [397] = 3,
    ACTIONS(117), 1,
      aux_sym_include_token1,
    ACTIONS(153), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(26), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [408] = 3,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_CARET,
  [418] = 1,
    ACTIONS(161), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [423] = 2,
    ACTIONS(163), 1,
      aux_sym_include_token1,
    ACTIONS(165), 1,
      anon_sym_ATend_DASHexercises,
  [430] = 2,
    ACTIONS(167), 1,
      aux_sym_include_token1,
    ACTIONS(169), 1,
      anon_sym_ATend_DASHtemplate,
  [437] = 1,
    ACTIONS(171), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [442] = 2,
    ACTIONS(173), 1,
      aux_sym_logged_exercise_name_token1,
    STATE(60), 1,
      sym_template_exercise_name,
  [449] = 2,
    ACTIONS(175), 1,
      aux_sym_attribute_value_token1,
    STATE(49), 1,
      sym_attribute_value,
  [456] = 2,
    ACTIONS(177), 1,
      aux_sym_attribute_value_token1,
    STATE(74), 1,
      sym_workout_name,
  [463] = 1,
    ACTIONS(179), 2,
      aux_sym_include_token1,
      anon_sym_LF_LF,
  [468] = 2,
    ACTIONS(181), 1,
      aux_sym_logged_exercise_name_token1,
    STATE(55), 1,
      sym_logged_exercise_name,
  [475] = 2,
    ACTIONS(183), 1,
      aux_sym_attribute_value_token1,
    STATE(87), 1,
      sym_template_name,
  [482] = 2,
    ACTIONS(185), 1,
      aux_sym_attribute_value_token1,
    STATE(73), 1,
      sym_template_exercise_details,
  [489] = 2,
    ACTIONS(187), 1,
      aux_sym_include_token1,
    ACTIONS(189), 1,
      anon_sym_ATend_DASHexercises,
  [496] = 1,
    ACTIONS(191), 2,
      anon_sym_LF,
      aux_sym_exercise_attribute_token1,
  [501] = 2,
    ACTIONS(193), 1,
      aux_sym_attribute_value_token1,
    STATE(82), 1,
      sym_logged_exercise_details,
  [508] = 1,
    ACTIONS(195), 2,
      anon_sym_LF,
      aux_sym_exercise_attribute_token1,
  [513] = 2,
    ACTIONS(197), 1,
      aux_sym_attribute_value_token1,
    STATE(84), 1,
      sym_measurement_value,
  [520] = 1,
    ACTIONS(199), 1,
      anon_sym_LF,
  [524] = 1,
    ACTIONS(201), 1,
      anon_sym_LF,
  [528] = 1,
    ACTIONS(203), 1,
      aux_sym_include_token1,
  [532] = 1,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [536] = 1,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [540] = 1,
    ACTIONS(209), 1,
      sym_pr_exercise_name,
  [544] = 1,
    ACTIONS(211), 1,
      aux_sym_comment_token1,
  [548] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [552] = 1,
    ACTIONS(215), 1,
      sym_measurement_name,
  [556] = 1,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [560] = 1,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [564] = 1,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [568] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
  [572] = 1,
    ACTIONS(225), 1,
      anon_sym_LF,
  [576] = 1,
    ACTIONS(227), 1,
      sym_exercise_name,
  [580] = 1,
    ACTIONS(229), 1,
      aux_sym_include_token1,
  [584] = 1,
    ACTIONS(231), 1,
      aux_sym_include_token1,
  [588] = 1,
    ACTIONS(233), 1,
      aux_sym_exercise_attribute_token1,
  [592] = 1,
    ACTIONS(235), 1,
      anon_sym_LF,
  [596] = 1,
    ACTIONS(237), 1,
      sym_attribute_name,
  [600] = 1,
    ACTIONS(239), 1,
      anon_sym_LF,
  [604] = 1,
    ACTIONS(241), 1,
      anon_sym_LF,
  [608] = 1,
    ACTIONS(243), 1,
      anon_sym_LF,
  [612] = 1,
    ACTIONS(245), 1,
      anon_sym_LF,
  [616] = 1,
    ACTIONS(247), 1,
      anon_sym_LF,
  [620] = 1,
    ACTIONS(249), 1,
      sym_pr_type,
  [624] = 1,
    ACTIONS(251), 1,
      anon_sym_COLON,
  [628] = 1,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
  [632] = 1,
    ACTIONS(255), 1,
      anon_sym_PR,
  [636] = 1,
    ACTIONS(257), 1,
      anon_sym_Measurements,
  [640] = 1,
    ACTIONS(259), 1,
      anon_sym_LF,
  [644] = 1,
    ACTIONS(261), 1,
      anon_sym_LF,
  [648] = 1,
    ACTIONS(263), 1,
      anon_sym_LF,
  [652] = 1,
    ACTIONS(265), 1,
      anon_sym_LF,
  [656] = 1,
    ACTIONS(267), 1,
      aux_sym_include_token1,
  [660] = 1,
    ACTIONS(269), 1,
      aux_sym_exercise_attribute_token1,
  [664] = 1,
    ACTIONS(271), 1,
      anon_sym_LF,
  [668] = 1,
    ACTIONS(273), 1,
      anon_sym_LF,
  [672] = 1,
    ACTIONS(275), 1,
      sym_weight,
  [676] = 1,
    ACTIONS(277), 1,
      sym_file_path,
  [680] = 1,
    ACTIONS(279), 1,
      anon_sym_LF,
  [684] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [688] = 1,
    ACTIONS(283), 1,
      anon_sym_LF,
  [692] = 1,
    ACTIONS(285), 1,
      aux_sym_include_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 287,
  [SMALL_STATE(24)] = 298,
  [SMALL_STATE(25)] = 309,
  [SMALL_STATE(26)] = 320,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 342,
  [SMALL_STATE(29)] = 353,
  [SMALL_STATE(30)] = 364,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 397,
  [SMALL_STATE(34)] = 408,
  [SMALL_STATE(35)] = 418,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 430,
  [SMALL_STATE(38)] = 437,
  [SMALL_STATE(39)] = 442,
  [SMALL_STATE(40)] = 449,
  [SMALL_STATE(41)] = 456,
  [SMALL_STATE(42)] = 463,
  [SMALL_STATE(43)] = 468,
  [SMALL_STATE(44)] = 475,
  [SMALL_STATE(45)] = 482,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 496,
  [SMALL_STATE(48)] = 501,
  [SMALL_STATE(49)] = 508,
  [SMALL_STATE(50)] = 513,
  [SMALL_STATE(51)] = 520,
  [SMALL_STATE(52)] = 524,
  [SMALL_STATE(53)] = 528,
  [SMALL_STATE(54)] = 532,
  [SMALL_STATE(55)] = 536,
  [SMALL_STATE(56)] = 540,
  [SMALL_STATE(57)] = 544,
  [SMALL_STATE(58)] = 548,
  [SMALL_STATE(59)] = 552,
  [SMALL_STATE(60)] = 556,
  [SMALL_STATE(61)] = 560,
  [SMALL_STATE(62)] = 564,
  [SMALL_STATE(63)] = 568,
  [SMALL_STATE(64)] = 572,
  [SMALL_STATE(65)] = 576,
  [SMALL_STATE(66)] = 580,
  [SMALL_STATE(67)] = 584,
  [SMALL_STATE(68)] = 588,
  [SMALL_STATE(69)] = 592,
  [SMALL_STATE(70)] = 596,
  [SMALL_STATE(71)] = 600,
  [SMALL_STATE(72)] = 604,
  [SMALL_STATE(73)] = 608,
  [SMALL_STATE(74)] = 612,
  [SMALL_STATE(75)] = 616,
  [SMALL_STATE(76)] = 620,
  [SMALL_STATE(77)] = 624,
  [SMALL_STATE(78)] = 628,
  [SMALL_STATE(79)] = 632,
  [SMALL_STATE(80)] = 636,
  [SMALL_STATE(81)] = 640,
  [SMALL_STATE(82)] = 644,
  [SMALL_STATE(83)] = 648,
  [SMALL_STATE(84)] = 652,
  [SMALL_STATE(85)] = 656,
  [SMALL_STATE(86)] = 660,
  [SMALL_STATE(87)] = 664,
  [SMALL_STATE(88)] = 668,
  [SMALL_STATE(89)] = 672,
  [SMALL_STATE(90)] = 676,
  [SMALL_STATE(91)] = 680,
  [SMALL_STATE(92)] = 684,
  [SMALL_STATE(93)] = 688,
  [SMALL_STATE(94)] = 692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 5, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 6, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 6, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 6, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 6, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 6, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 7, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercise_definition, 7, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 6, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 6, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 8, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 6, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercise_definition, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercise_attribute, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_details, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
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
