#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_exercise_name = 11,
  anon_sym_COLON = 12,
  sym_attribute_name = 13,
  sym_attribute_value = 14,
  anon_sym_ATtemplate = 15,
  anon_sym_ATend_DASHtemplate = 16,
  aux_sym_template_name_token1 = 17,
  anon_sym_STAR = 18,
  anon_sym_POUND = 19,
  anon_sym_Measurements = 20,
  anon_sym_CARET = 21,
  anon_sym_PR = 22,
  sym_date = 23,
  sym_weight = 24,
  sym_reps = 25,
  sym_rpe = 26,
  sym_note = 27,
  sym_measurement_name = 28,
  sym_pr_type = 29,
  sym_source_file = 30,
  sym__line = 31,
  sym_comment = 32,
  sym_include = 33,
  sym_exercises_block = 34,
  sym_exercise_definition = 35,
  sym_exercise_attribute = 36,
  sym_template_block = 37,
  sym_template_name = 38,
  sym_template_exercise = 39,
  sym_log_entry = 40,
  sym_logged_exercise = 41,
  sym_measurement_entry = 42,
  sym_measurement = 43,
  sym_pr_entry = 44,
  sym_pr_record = 45,
  sym_workout_name = 46,
  sym_measurement_value = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_exercises_block_repeat1 = 49,
  aux_sym_exercise_definition_repeat1 = 50,
  aux_sym_template_block_repeat1 = 51,
  aux_sym_log_entry_repeat1 = 52,
  aux_sym_measurement_entry_repeat1 = 53,
  aux_sym_pr_entry_repeat1 = 54,
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
  [sym_weight] = "weight",
  [sym_reps] = "reps",
  [sym_rpe] = "rpe",
  [sym_note] = "note",
  [sym_measurement_name] = "measurement_name",
  [sym_pr_type] = "pr_type",
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
  [sym_log_entry] = "log_entry",
  [sym_logged_exercise] = "logged_exercise",
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
  [sym_exercise_name] = sym_exercise_name,
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
  [sym_weight] = sym_weight,
  [sym_reps] = sym_reps,
  [sym_rpe] = sym_rpe,
  [sym_note] = sym_note,
  [sym_measurement_name] = sym_measurement_name,
  [sym_pr_type] = sym_pr_type,
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
  [sym_log_entry] = sym_log_entry,
  [sym_logged_exercise] = sym_logged_exercise,
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
  [sym_weight] = {
    .visible = true,
    .named = true,
  },
  [sym_reps] = {
    .visible = true,
    .named = true,
  },
  [sym_rpe] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '"', 3,
        '#', 186,
        '*', 185,
        ':', 174,
        ';', 101,
        '@', 16,
        'M', 29,
        'P', 17,
        '[', 115,
        ']', 116,
        '^', 188,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '@') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(232);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'W') ADVANCE(192);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 77:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 78:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 79:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '@') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 93:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '@') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(231);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATexercises);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATexercises);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATexercises);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATend_DASHexercises);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '@') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == ']') ADVANCE(3);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '@') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == '@') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead == 'x') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_exercise_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(173);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_date);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_reps);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_reps);
      if (lookahead == '/') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_reps);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_rpe);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_rpe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '@') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(231);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'p') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead == 'x') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_measurement_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_measurement_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pr_type);
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
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 93},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 95},
  [9] = {.lex_state = 93},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 95},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 92},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 78},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 104},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 79},
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
    [anon_sym_ATtemplate] = ACTIONS(1),
    [anon_sym_ATend_DASHtemplate] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_Measurements] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PR] = ACTIONS(1),
    [sym_reps] = ACTIONS(1),
    [sym_rpe] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
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
      sym_exercise_name,
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
      sym_exercise_name,
    STATE(4), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(50), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [104] = 4,
    ACTIONS(52), 1,
      sym_exercise_name,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
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
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_rpe,
    ACTIONS(64), 1,
      sym_note,
    ACTIONS(60), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [142] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_measurement_name,
    STATE(11), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(68), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [161] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_exercise_name,
    STATE(10), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(74), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [180] = 4,
    ACTIONS(76), 1,
      sym_exercise_name,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(80), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [199] = 4,
    ACTIONS(70), 1,
      sym_measurement_name,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(84), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [218] = 4,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_measurement_name,
    STATE(12), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(88), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [237] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_exercise_name,
    STATE(13), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(95), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [256] = 3,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_note,
    ACTIONS(102), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [272] = 2,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
      sym_measurement_name,
  [285] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [298] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [311] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [324] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
      sym_measurement_name,
  [337] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 7,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      sym_exercise_name,
      anon_sym_ATtemplate,
      sym_date,
  [350] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(128), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [362] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(132), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [374] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(136), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [386] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [398] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(144), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [410] = 2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 5,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      anon_sym_ATexercises,
      anon_sym_ATtemplate,
      sym_date,
  [422] = 3,
    ACTIONS(152), 1,
      sym_attribute_name,
    ACTIONS(150), 2,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
    STATE(29), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [434] = 3,
    ACTIONS(156), 1,
      sym_attribute_name,
    ACTIONS(154), 2,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
    STATE(28), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [446] = 3,
    ACTIONS(152), 1,
      sym_attribute_name,
    ACTIONS(159), 2,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
    STATE(28), 2,
      sym_exercise_attribute,
      aux_sym_exercise_definition_repeat1,
  [458] = 3,
    ACTIONS(161), 1,
      anon_sym_ATend_DASHexercises,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(35), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [469] = 3,
    ACTIONS(165), 1,
      anon_sym_ATend_DASHexercises,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(31), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [480] = 3,
    ACTIONS(170), 1,
      sym_exercise_name,
    ACTIONS(172), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(33), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [491] = 3,
    ACTIONS(174), 1,
      sym_exercise_name,
    ACTIONS(177), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(33), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [502] = 3,
    ACTIONS(181), 1,
      sym_rpe,
    ACTIONS(183), 1,
      sym_note,
    ACTIONS(179), 2,
      sym_exercise_name,
      anon_sym_ATend_DASHtemplate,
  [513] = 3,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_ATend_DASHexercises,
    STATE(31), 2,
      sym_exercise_definition,
      aux_sym_exercises_block_repeat1,
  [524] = 3,
    ACTIONS(170), 1,
      sym_exercise_name,
    ACTIONS(187), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(32), 2,
      sym_template_exercise,
      aux_sym_template_block_repeat1,
  [535] = 3,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_CARET,
  [545] = 2,
    ACTIONS(197), 1,
      sym_note,
    ACTIONS(195), 2,
      sym_exercise_name,
      anon_sym_ATend_DASHtemplate,
  [553] = 1,
    ACTIONS(199), 3,
      anon_sym_ATend_DASHexercises,
      anon_sym_LBRACK,
      sym_attribute_name,
  [559] = 2,
    ACTIONS(201), 1,
      aux_sym_template_name_token1,
    STATE(19), 1,
      sym_measurement_value,
  [566] = 2,
    ACTIONS(203), 1,
      aux_sym_template_name_token1,
    STATE(36), 1,
      sym_template_name,
  [573] = 1,
    ACTIONS(205), 2,
      sym_exercise_name,
      anon_sym_ATend_DASHtemplate,
  [578] = 1,
    ACTIONS(195), 2,
      sym_exercise_name,
      anon_sym_ATend_DASHtemplate,
  [583] = 2,
    ACTIONS(207), 1,
      aux_sym_template_name_token1,
    STATE(9), 1,
      sym_workout_name,
  [590] = 1,
    ACTIONS(209), 2,
      sym_exercise_name,
      anon_sym_ATend_DASHtemplate,
  [595] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [599] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [603] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [607] = 1,
    ACTIONS(217), 1,
      sym_weight,
  [611] = 1,
    ACTIONS(219), 1,
      sym_attribute_value,
  [615] = 1,
    ACTIONS(221), 1,
      sym_reps,
  [619] = 1,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [623] = 1,
    ACTIONS(225), 1,
      sym_reps,
  [627] = 1,
    ACTIONS(227), 1,
      sym_exercise_name,
  [631] = 1,
    ACTIONS(229), 1,
      sym_file_path,
  [635] = 1,
    ACTIONS(231), 1,
      sym_weight,
  [639] = 1,
    ACTIONS(233), 1,
      sym_pr_type,
  [643] = 1,
    ACTIONS(235), 1,
      anon_sym_Measurements,
  [647] = 1,
    ACTIONS(237), 1,
      anon_sym_PR,
  [651] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [655] = 1,
    ACTIONS(241), 1,
      aux_sym_comment_token1,
  [659] = 1,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [663] = 1,
    ACTIONS(245), 1,
      sym_weight,
  [667] = 1,
    ACTIONS(247), 1,
      anon_sym_COLON,
  [671] = 1,
    ACTIONS(249), 1,
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
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 285,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 324,
  [SMALL_STATE(20)] = 337,
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 362,
  [SMALL_STATE(23)] = 374,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 446,
  [SMALL_STATE(30)] = 458,
  [SMALL_STATE(31)] = 469,
  [SMALL_STATE(32)] = 480,
  [SMALL_STATE(33)] = 491,
  [SMALL_STATE(34)] = 502,
  [SMALL_STATE(35)] = 513,
  [SMALL_STATE(36)] = 524,
  [SMALL_STATE(37)] = 535,
  [SMALL_STATE(38)] = 545,
  [SMALL_STATE(39)] = 553,
  [SMALL_STATE(40)] = 559,
  [SMALL_STATE(41)] = 566,
  [SMALL_STATE(42)] = 573,
  [SMALL_STATE(43)] = 578,
  [SMALL_STATE(44)] = 583,
  [SMALL_STATE(45)] = 590,
  [SMALL_STATE(46)] = 595,
  [SMALL_STATE(47)] = 599,
  [SMALL_STATE(48)] = 603,
  [SMALL_STATE(49)] = 607,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 615,
  [SMALL_STATE(52)] = 619,
  [SMALL_STATE(53)] = 623,
  [SMALL_STATE(54)] = 627,
  [SMALL_STATE(55)] = 631,
  [SMALL_STATE(56)] = 635,
  [SMALL_STATE(57)] = 639,
  [SMALL_STATE(58)] = 643,
  [SMALL_STATE(59)] = 647,
  [SMALL_STATE(60)] = 651,
  [SMALL_STATE(61)] = 655,
  [SMALL_STATE(62)] = 659,
  [SMALL_STATE(63)] = 663,
  [SMALL_STATE(64)] = 667,
  [SMALL_STATE(65)] = 671,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_workout_name, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 6, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 6, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exercises_block, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_block, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_definition, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise_attribute, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_name, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
