#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_POUND = 19,
  anon_sym_Measurements = 20,
  anon_sym_CARET = 21,
  anon_sym_PR = 22,
  sym_date = 23,
  sym_measurement_name = 24,
  sym_pr_type = 25,
  sym_weight = 26,
  sym_source_file = 27,
  sym__line = 28,
  sym_comment = 29,
  sym_include = 30,
  sym_exercises_block = 31,
  sym_exercise_definition = 32,
  sym_exercise_attribute = 33,
  sym_attribute_value = 34,
  sym_template_block = 35,
  sym_template_name = 36,
  sym_template_exercise = 37,
  sym_template_exercise_details = 38,
  sym_log_entry = 39,
  sym_logged_exercise = 40,
  sym_logged_exercise_details = 41,
  sym_measurement_entry = 42,
  sym_measurement = 43,
  sym_pr_entry = 44,
  sym_pr_record = 45,
  sym_workout_name = 46,
  sym_template_exercise_name = 47,
  sym_measurement_value = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_exercises_block_repeat1 = 50,
  aux_sym_exercise_definition_repeat1 = 51,
  aux_sym_template_block_repeat1 = 52,
  aux_sym_log_entry_repeat1 = 53,
  aux_sym_measurement_entry_repeat1 = 54,
  aux_sym_pr_entry_repeat1 = 55,
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
  [anon_sym_POUND] = "#",
  [anon_sym_Measurements] = "Measurements",
  [anon_sym_CARET] = "^",
  [anon_sym_PR] = "PR",
  [sym_date] = "date",
  [sym_measurement_name] = "measurement_name",
  [sym_pr_type] = "pr_type",
  [sym_weight] = "weight",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Measurements] = anon_sym_Measurements,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PR] = anon_sym_PR,
  [sym_date] = sym_date,
  [sym_measurement_name] = sym_measurement_name,
  [sym_pr_type] = sym_pr_type,
  [sym_weight] = sym_weight,
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
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement_name] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      ADVANCE_MAP(
        '#', 125,
        '*', 124,
        ':', 105,
        ';', 90,
        '@', 24,
        'B', 107,
        'M', 109,
        'P', 106,
        '[', 99,
        ']', 100,
        '^', 128,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(15);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(134);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 15:
      if (lookahead == 'W') ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 72:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(133);
      END_STATE();
    case 73:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(102);
      END_STATE();
    case 74:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 75:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '@') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '@') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATexercises);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATend_DASHexercises);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_exercise_attribute_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_exercise_attribute_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 85},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 85},
  [9] = {.lex_state = 85},
  [10] = {.lex_state = 85},
  [11] = {.lex_state = 85},
  [12] = {.lex_state = 85},
  [13] = {.lex_state = 85},
  [14] = {.lex_state = 85},
  [15] = {.lex_state = 85},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 103},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 103},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 103},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 103},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 84},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 84},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 84},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 84},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 84},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 84},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 104},
  [79] = {.lex_state = 75},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 84},
  [82] = {.lex_state = 11},
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
    [sym_date] = ACTIONS(1),
    [sym_pr_type] = ACTIONS(1),
    [sym_weight] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym__line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_include] = STATE(3),
    [sym_exercises_block] = STATE(3),
    [sym_template_block] = STATE(3),
    [sym_log_entry] = STATE(3),
    [sym_measurement_entry] = STATE(3),
    [sym_pr_entry] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_ATinclude,
    ACTIONS(28), 1,
      anon_sym_ATexercises,
    ACTIONS(31), 1,
      anon_sym_ATtemplate,
    ACTIONS(34), 1,
      sym_date,
    STATE(2), 9,
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
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(2), 9,
      sym__line,
      sym_comment,
      sym_include,
      sym_exercises_block,
      sym_template_block,
      sym_log_entry,
      sym_measurement_entry,
      sym_pr_entry,
      aux_sym_source_file_repeat1,
  [66] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_include_token1,
    STATE(8), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(43), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [85] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_include_token1,
    STATE(5), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(49), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [104] = 4,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      aux_sym_include_token1,
    STATE(5), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(56), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [123] = 4,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_include_token1,
    STATE(12), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(62), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [142] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_include_token1,
    STATE(8), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(68), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [161] = 4,
    ACTIONS(58), 1,
      aux_sym_include_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(75), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [180] = 4,
    ACTIONS(64), 1,
      aux_sym_include_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(79), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [199] = 4,
    ACTIONS(45), 1,
      aux_sym_include_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(83), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [218] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_include_token1,
    STATE(12), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(87), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [237] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      aux_sym_include_token1,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [250] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      aux_sym_include_token1,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [263] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      aux_sym_include_token1,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [276] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(106), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [288] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(110), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [300] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(114), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [312] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(118), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [324] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [336] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [348] = 3,
    ACTIONS(128), 1,
      aux_sym_include_token1,
    ACTIONS(130), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(23), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [359] = 3,
    ACTIONS(128), 1,
      aux_sym_include_token1,
    ACTIONS(132), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(24), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [370] = 3,
    ACTIONS(134), 1,
      aux_sym_include_token1,
    ACTIONS(137), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(24), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [381] = 3,
    ACTIONS(139), 1,
      aux_sym_include_token1,
    ACTIONS(141), 1,
      anon_sym_ATend_DASHexercises,
    STATE(28), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [392] = 3,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      aux_sym_exercise_attribute_token1,
    STATE(29), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [403] = 3,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      aux_sym_exercise_attribute_token1,
    STATE(27), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [414] = 3,
    ACTIONS(139), 1,
      aux_sym_include_token1,
    ACTIONS(152), 1,
      anon_sym_ATend_DASHexercises,
    STATE(30), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [425] = 3,
    ACTIONS(145), 1,
      aux_sym_exercise_attribute_token1,
    ACTIONS(154), 1,
      anon_sym_LF,
    STATE(27), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [436] = 3,
    ACTIONS(156), 1,
      aux_sym_include_token1,
    ACTIONS(159), 1,
      anon_sym_ATend_DASHexercises,
    STATE(30), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [447] = 3,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_CARET,
  [457] = 2,
    ACTIONS(167), 1,
      aux_sym_attribute_value_token1,
    STATE(50), 1,
      sym_template_exercise_name,
  [464] = 2,
    ACTIONS(169), 1,
      aux_sym_include_token1,
    ACTIONS(171), 1,
      anon_sym_ATend_DASHtemplate,
  [471] = 2,
    ACTIONS(173), 1,
      aux_sym_include_token1,
    ACTIONS(175), 1,
      anon_sym_ATend_DASHexercises,
  [478] = 2,
    ACTIONS(177), 1,
      aux_sym_include_token1,
    ACTIONS(179), 1,
      anon_sym_ATend_DASHexercises,
  [485] = 2,
    ACTIONS(181), 1,
      aux_sym_attribute_value_token1,
    STATE(63), 1,
      sym_workout_name,
  [492] = 1,
    ACTIONS(183), 2,
      anon_sym_LF,
      aux_sym_exercise_attribute_token1,
  [497] = 2,
    ACTIONS(185), 1,
      aux_sym_attribute_value_token1,
    STATE(68), 1,
      sym_logged_exercise_details,
  [504] = 2,
    ACTIONS(187), 1,
      aux_sym_attribute_value_token1,
    STATE(59), 1,
      sym_template_exercise_details,
  [511] = 2,
    ACTIONS(189), 1,
      aux_sym_attribute_value_token1,
    STATE(75), 1,
      sym_template_name,
  [518] = 2,
    ACTIONS(191), 1,
      aux_sym_attribute_value_token1,
    STATE(37), 1,
      sym_attribute_value,
  [525] = 2,
    ACTIONS(193), 1,
      aux_sym_attribute_value_token1,
    STATE(70), 1,
      sym_measurement_value,
  [532] = 1,
    ACTIONS(195), 2,
      anon_sym_LF,
      aux_sym_exercise_attribute_token1,
  [537] = 1,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
  [541] = 1,
    ACTIONS(199), 1,
      sym_measurement_name,
  [545] = 1,
    ACTIONS(201), 1,
      sym_exercise_name,
  [549] = 1,
    ACTIONS(203), 1,
      sym_exercise_name,
  [553] = 1,
    ACTIONS(205), 1,
      aux_sym_comment_token1,
  [557] = 1,
    ACTIONS(207), 1,
      anon_sym_LF,
  [561] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [565] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [569] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [573] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [577] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
  [581] = 1,
    ACTIONS(219), 1,
      sym_pr_type,
  [585] = 1,
    ACTIONS(221), 1,
      anon_sym_LF,
  [589] = 1,
    ACTIONS(223), 1,
      sym_exercise_name,
  [593] = 1,
    ACTIONS(225), 1,
      anon_sym_LF,
  [597] = 1,
    ACTIONS(227), 1,
      anon_sym_LF,
  [601] = 1,
    ACTIONS(229), 1,
      anon_sym_LF,
  [605] = 1,
    ACTIONS(231), 1,
      anon_sym_LF,
  [609] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [613] = 1,
    ACTIONS(235), 1,
      anon_sym_LF,
  [617] = 1,
    ACTIONS(237), 1,
      sym_attribute_name,
  [621] = 1,
    ACTIONS(239), 1,
      anon_sym_LF,
  [625] = 1,
    ACTIONS(241), 1,
      anon_sym_LF,
  [629] = 1,
    ACTIONS(243), 1,
      anon_sym_LF,
  [633] = 1,
    ACTIONS(245), 1,
      anon_sym_LF,
  [637] = 1,
    ACTIONS(247), 1,
      anon_sym_LF,
  [641] = 1,
    ACTIONS(249), 1,
      anon_sym_LF,
  [645] = 1,
    ACTIONS(251), 1,
      sym_weight,
  [649] = 1,
    ACTIONS(253), 1,
      anon_sym_COLON,
  [653] = 1,
    ACTIONS(255), 1,
      anon_sym_PR,
  [657] = 1,
    ACTIONS(257), 1,
      anon_sym_Measurements,
  [661] = 1,
    ACTIONS(259), 1,
      anon_sym_LF,
  [665] = 1,
    ACTIONS(261), 1,
      anon_sym_LF,
  [669] = 1,
    ACTIONS(263), 1,
      anon_sym_LF,
  [673] = 1,
    ACTIONS(265), 1,
      aux_sym_exercise_attribute_token1,
  [677] = 1,
    ACTIONS(267), 1,
      sym_file_path,
  [681] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [685] = 1,
    ACTIONS(271), 1,
      anon_sym_LF,
  [689] = 1,
    ACTIONS(273), 1,
      aux_sym_include_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 359,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 392,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 414,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 436,
  [SMALL_STATE(31)] = 447,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 464,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 485,
  [SMALL_STATE(37)] = 492,
  [SMALL_STATE(38)] = 497,
  [SMALL_STATE(39)] = 504,
  [SMALL_STATE(40)] = 511,
  [SMALL_STATE(41)] = 518,
  [SMALL_STATE(42)] = 525,
  [SMALL_STATE(43)] = 532,
  [SMALL_STATE(44)] = 537,
  [SMALL_STATE(45)] = 541,
  [SMALL_STATE(46)] = 545,
  [SMALL_STATE(47)] = 549,
  [SMALL_STATE(48)] = 553,
  [SMALL_STATE(49)] = 557,
  [SMALL_STATE(50)] = 561,
  [SMALL_STATE(51)] = 565,
  [SMALL_STATE(52)] = 569,
  [SMALL_STATE(53)] = 573,
  [SMALL_STATE(54)] = 577,
  [SMALL_STATE(55)] = 581,
  [SMALL_STATE(56)] = 585,
  [SMALL_STATE(57)] = 589,
  [SMALL_STATE(58)] = 593,
  [SMALL_STATE(59)] = 597,
  [SMALL_STATE(60)] = 601,
  [SMALL_STATE(61)] = 605,
  [SMALL_STATE(62)] = 609,
  [SMALL_STATE(63)] = 613,
  [SMALL_STATE(64)] = 617,
  [SMALL_STATE(65)] = 621,
  [SMALL_STATE(66)] = 625,
  [SMALL_STATE(67)] = 629,
  [SMALL_STATE(68)] = 633,
  [SMALL_STATE(69)] = 637,
  [SMALL_STATE(70)] = 641,
  [SMALL_STATE(71)] = 645,
  [SMALL_STATE(72)] = 649,
  [SMALL_STATE(73)] = 653,
  [SMALL_STATE(74)] = 657,
  [SMALL_STATE(75)] = 661,
  [SMALL_STATE(76)] = 665,
  [SMALL_STATE(77)] = 669,
  [SMALL_STATE(78)] = 673,
  [SMALL_STATE(79)] = 677,
  [SMALL_STATE(80)] = 681,
  [SMALL_STATE(81)] = 685,
  [SMALL_STATE(82)] = 689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 6, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 6, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 5, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 6, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercise_definition, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 7, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercise_definition, 7, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercise_attribute, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_details, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
