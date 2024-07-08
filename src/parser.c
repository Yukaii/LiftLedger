#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_COLON = 11,
  sym_attribute_name = 12,
  sym_attribute_value = 13,
  anon_sym_ATtemplate = 14,
  anon_sym_ATend_DASHtemplate = 15,
  aux_sym_template_name_token1 = 16,
  anon_sym_STAR = 17,
  anon_sym_POUND = 18,
  anon_sym_Measurements = 19,
  anon_sym_CARET = 20,
  anon_sym_PR = 21,
  sym_date = 22,
  sym_exercise_name = 23,
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
  sym_template_block = 34,
  sym_template_name = 35,
  sym_template_exercise = 36,
  sym_template_exercise_details = 37,
  sym_log_entry = 38,
  sym_logged_exercise = 39,
  sym_logged_exercise_details = 40,
  sym_measurement_entry = 41,
  sym_measurement = 42,
  sym_pr_entry = 43,
  sym_pr_record = 44,
  sym_workout_name = 45,
  sym_measurement_value = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_exercises_block_repeat1 = 48,
  aux_sym_exercise_definition_repeat1 = 49,
  aux_sym_template_block_repeat1 = 50,
  aux_sym_log_entry_repeat1 = 51,
  aux_sym_measurement_entry_repeat1 = 52,
  aux_sym_pr_entry_repeat1 = 53,
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
  [anon_sym_COLON] = ":",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_ATtemplate] = "@template",
  [anon_sym_ATend_DASHtemplate] = "@end-template",
  [aux_sym_template_name_token1] = "template_name_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_Measurements] = "Measurements",
  [anon_sym_CARET] = "^",
  [anon_sym_PR] = "PR",
  [sym_date] = "date",
  [sym_exercise_name] = "exercise_name",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_ATtemplate] = anon_sym_ATtemplate,
  [anon_sym_ATend_DASHtemplate] = anon_sym_ATend_DASHtemplate,
  [aux_sym_template_name_token1] = aux_sym_template_name_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Measurements] = anon_sym_Measurements,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PR] = anon_sym_PR,
  [sym_date] = sym_date,
  [sym_exercise_name] = sym_exercise_name,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
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
  [aux_sym_template_name_token1] = {
    .visible = false,
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
  [sym_exercise_name] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '#', 131,
        '*', 130,
        ':', 109,
        ';', 98,
        '@', 31,
        'B', 111,
        'M', 113,
        'P', 110,
        '[', 107,
        ']', 108,
        '^', 134,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 16:
      if (lookahead == '@') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(142);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 20:
      if (lookahead == 'W') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 83:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    case 84:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == '@') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == '@') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
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
      ACCEPT_TOKEN(anon_sym_ATexercises);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATend_DASHexercises);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 93},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 94},
  [9] = {.lex_state = 94},
  [10] = {.lex_state = 94},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 94},
  [13] = {.lex_state = 94},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 93},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 93},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 93},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 93},
  [56] = {.lex_state = 99},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 93},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 93},
  [66] = {.lex_state = 93},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 16},
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
    [sym_source_file] = STATE(53),
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
  [66] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_include_token1,
    STATE(4), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(43), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [85] = 4,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_include_token1,
    STATE(5), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(50), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [104] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_include_token1,
    STATE(6), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(57), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [123] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym_include_token1,
    STATE(4), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(64), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [142] = 4,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_include_token1,
    STATE(5), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(70), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [161] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym_include_token1,
    STATE(6), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(76), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [180] = 4,
    ACTIONS(66), 1,
      aux_sym_include_token1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(82), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [199] = 4,
    ACTIONS(78), 1,
      aux_sym_include_token1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(86), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [218] = 4,
    ACTIONS(72), 1,
      aux_sym_include_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(90), 6,
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
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(128), 2,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
    STATE(24), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [360] = 3,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(132), 2,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
    STATE(22), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [372] = 3,
    ACTIONS(136), 1,
      sym_attribute_name,
    ACTIONS(134), 2,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
    STATE(24), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [384] = 3,
    ACTIONS(139), 1,
      anon_sym_ATend_DASHexercises,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(28), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [395] = 3,
    ACTIONS(143), 1,
      anon_sym_ATend_DASHexercises,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(26), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [406] = 3,
    ACTIONS(148), 1,
      aux_sym_include_token1,
    ACTIONS(150), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(29), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [417] = 3,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_ATend_DASHexercises,
    STATE(26), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [428] = 3,
    ACTIONS(148), 1,
      aux_sym_include_token1,
    ACTIONS(154), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(30), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [439] = 3,
    ACTIONS(156), 1,
      aux_sym_include_token1,
    ACTIONS(159), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(30), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [450] = 1,
    ACTIONS(161), 3,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
      sym_attribute_name,
  [456] = 3,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_CARET,
  [466] = 2,
    ACTIONS(169), 1,
      aux_sym_template_name_token1,
    STATE(64), 1,
      sym_logged_exercise_details,
  [473] = 2,
    ACTIONS(171), 1,
      aux_sym_template_name_token1,
    STATE(58), 1,
      sym_template_exercise_details,
  [480] = 2,
    ACTIONS(173), 1,
      aux_sym_template_name_token1,
    STATE(42), 1,
      sym_template_name,
  [487] = 2,
    ACTIONS(175), 1,
      aux_sym_include_token1,
    ACTIONS(177), 1,
      anon_sym_ATend_DASHtemplate,
  [494] = 2,
    ACTIONS(179), 1,
      aux_sym_template_name_token1,
    STATE(66), 1,
      sym_measurement_value,
  [501] = 2,
    ACTIONS(181), 1,
      aux_sym_template_name_token1,
    STATE(52), 1,
      sym_workout_name,
  [508] = 1,
    ACTIONS(183), 1,
      anon_sym_COLON,
  [512] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [516] = 1,
    ACTIONS(187), 1,
      anon_sym_COLON,
  [520] = 1,
    ACTIONS(189), 1,
      anon_sym_LF,
  [524] = 1,
    ACTIONS(191), 1,
      sym_exercise_name,
  [528] = 1,
    ACTIONS(193), 1,
      anon_sym_LF,
  [532] = 1,
    ACTIONS(195), 1,
      sym_measurement_name,
  [536] = 1,
    ACTIONS(197), 1,
      sym_exercise_name,
  [540] = 1,
    ACTIONS(199), 1,
      sym_exercise_name,
  [544] = 1,
    ACTIONS(201), 1,
      sym_attribute_value,
  [548] = 1,
    ACTIONS(203), 1,
      anon_sym_Measurements,
  [552] = 1,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [556] = 1,
    ACTIONS(207), 1,
      sym_file_path,
  [560] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
  [564] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [568] = 1,
    ACTIONS(213), 1,
      sym_pr_type,
  [572] = 1,
    ACTIONS(215), 1,
      anon_sym_LF,
  [576] = 1,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
  [580] = 1,
    ACTIONS(219), 1,
      anon_sym_LF,
  [584] = 1,
    ACTIONS(221), 1,
      anon_sym_LF,
  [588] = 1,
    ACTIONS(223), 1,
      anon_sym_LF,
  [592] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [596] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [600] = 1,
    ACTIONS(229), 1,
      sym_exercise_name,
  [604] = 1,
    ACTIONS(231), 1,
      anon_sym_LF,
  [608] = 1,
    ACTIONS(233), 1,
      anon_sym_LF,
  [612] = 1,
    ACTIONS(235), 1,
      anon_sym_LF,
  [616] = 1,
    ACTIONS(237), 1,
      anon_sym_LF,
  [620] = 1,
    ACTIONS(239), 1,
      sym_weight,
  [624] = 1,
    ACTIONS(241), 1,
      anon_sym_LF,
  [628] = 1,
    ACTIONS(243), 1,
      anon_sym_PR,
  [632] = 1,
    ACTIONS(245), 1,
      anon_sym_LF,
  [636] = 1,
    ACTIONS(247), 1,
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
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 428,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 466,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 480,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 494,
  [SMALL_STATE(38)] = 501,
  [SMALL_STATE(39)] = 508,
  [SMALL_STATE(40)] = 512,
  [SMALL_STATE(41)] = 516,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 524,
  [SMALL_STATE(44)] = 528,
  [SMALL_STATE(45)] = 532,
  [SMALL_STATE(46)] = 536,
  [SMALL_STATE(47)] = 540,
  [SMALL_STATE(48)] = 544,
  [SMALL_STATE(49)] = 548,
  [SMALL_STATE(50)] = 552,
  [SMALL_STATE(51)] = 556,
  [SMALL_STATE(52)] = 560,
  [SMALL_STATE(53)] = 564,
  [SMALL_STATE(54)] = 568,
  [SMALL_STATE(55)] = 572,
  [SMALL_STATE(56)] = 576,
  [SMALL_STATE(57)] = 580,
  [SMALL_STATE(58)] = 584,
  [SMALL_STATE(59)] = 588,
  [SMALL_STATE(60)] = 592,
  [SMALL_STATE(61)] = 596,
  [SMALL_STATE(62)] = 600,
  [SMALL_STATE(63)] = 604,
  [SMALL_STATE(64)] = 608,
  [SMALL_STATE(65)] = 612,
  [SMALL_STATE(66)] = 616,
  [SMALL_STATE(67)] = 620,
  [SMALL_STATE(68)] = 624,
  [SMALL_STATE(69)] = 628,
  [SMALL_STATE(70)] = 632,
  [SMALL_STATE(71)] = 636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 6, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 6, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 5, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_attribute, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_details, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
