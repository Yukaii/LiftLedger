#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_STAR = 19,
  anon_sym_POUND = 20,
  anon_sym_Measurements = 21,
  anon_sym_CARET = 22,
  anon_sym_PR = 23,
  sym_logged_exercise_details = 24,
  aux_sym_pr_exercise_name_token1 = 25,
  sym_pr_type = 26,
  sym_weight = 27,
  sym_date = 28,
  sym_source_file = 29,
  sym__entry = 30,
  sym_comment = 31,
  sym_include = 32,
  sym_exercises_block = 33,
  sym_exercise = 34,
  sym_attribute = 35,
  sym_attribute_value = 36,
  sym__line_break = 37,
  sym_template_block = 38,
  sym_template_name = 39,
  sym_template_exercise = 40,
  sym_template_exercise_details = 41,
  sym_template_exercise_name = 42,
  sym_log_entry = 43,
  sym_logged_exercise = 44,
  sym_measurement_entry = 45,
  sym_measurement = 46,
  sym_pr_entry = 47,
  sym_pr_record = 48,
  sym_logged_exercise_name = 49,
  sym_pr_exercise_name = 50,
  sym_workout_name = 51,
  sym_measurement_name = 52,
  sym_measurement_value = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_exercises_block_repeat1 = 55,
  aux_sym_exercise_repeat1 = 56,
  aux_sym_exercise_repeat2 = 57,
  aux_sym_template_block_repeat1 = 58,
  aux_sym_log_entry_repeat1 = 59,
  aux_sym_measurement_entry_repeat1 = 60,
  aux_sym_pr_entry_repeat1 = 61,
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
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_Measurements] = "Measurements",
  [anon_sym_CARET] = "^",
  [anon_sym_PR] = "PR",
  [sym_logged_exercise_details] = "logged_exercise_details",
  [aux_sym_pr_exercise_name_token1] = "pr_exercise_name_token1",
  [sym_pr_type] = "pr_type",
  [sym_weight] = "weight",
  [sym_date] = "date",
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
  [sym_template_exercise_details] = "template_exercise_details",
  [sym_template_exercise_name] = "template_exercise_name",
  [sym_log_entry] = "log_entry",
  [sym_logged_exercise] = "logged_exercise",
  [sym_measurement_entry] = "measurement_entry",
  [sym_measurement] = "measurement",
  [sym_pr_entry] = "pr_entry",
  [sym_pr_record] = "pr_record",
  [sym_logged_exercise_name] = "logged_exercise_name",
  [sym_pr_exercise_name] = "pr_exercise_name",
  [sym_workout_name] = "workout_name",
  [sym_measurement_name] = "measurement_name",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Measurements] = anon_sym_Measurements,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PR] = anon_sym_PR,
  [sym_logged_exercise_details] = sym_logged_exercise_details,
  [aux_sym_pr_exercise_name_token1] = aux_sym_pr_exercise_name_token1,
  [sym_pr_type] = sym_pr_type,
  [sym_weight] = sym_weight,
  [sym_date] = sym_date,
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
  [sym_template_exercise_details] = sym_template_exercise_details,
  [sym_template_exercise_name] = sym_template_exercise_name,
  [sym_log_entry] = sym_log_entry,
  [sym_logged_exercise] = sym_logged_exercise,
  [sym_measurement_entry] = sym_measurement_entry,
  [sym_measurement] = sym_measurement,
  [sym_pr_entry] = sym_pr_entry,
  [sym_pr_record] = sym_pr_record,
  [sym_logged_exercise_name] = sym_logged_exercise_name,
  [sym_pr_exercise_name] = sym_pr_exercise_name,
  [sym_workout_name] = sym_workout_name,
  [sym_measurement_name] = sym_measurement_name,
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
  [sym_logged_exercise_details] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pr_exercise_name_token1] = {
    .visible = false,
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
  [sym_pr_exercise_name] = {
    .visible = true,
    .named = true,
  },
  [sym_workout_name] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement_name] = {
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
  [44] = 37,
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
  [85] = 75,
  [86] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      ADVANCE_MAP(
        '\n', 87,
        '\r', 1,
        '#', 185,
        '*', 184,
        ':', 113,
        ';', 88,
        '@', 32,
        'B', 115,
        'M', 117,
        'P', 114,
        '[', 109,
        ']', 110,
        '^', 188,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(192);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(226);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(227);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(227);
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
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '@') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(225);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(183);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__entry_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(192);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
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
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_exercises_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
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
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_exercise_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'R') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'W') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATend_DASHtemplate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_template_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(183);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_template_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Measurements);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Measurements);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PR);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_logged_exercise_details);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_logged_exercise_details);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '@') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(225);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_pr_exercise_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pr_type);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_weight);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 85},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 85},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 85},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 97},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 97},
  [86] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(80),
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
  [68] = 6,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_pr_exercise_name_token1,
    STATE(4), 1,
      sym_comment,
    STATE(72), 1,
      sym_measurement_name,
    STATE(12), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(45), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [93] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_template_exercise_name_token1,
    STATE(82), 1,
      sym_logged_exercise_name,
    STATE(5), 3,
      sym_comment,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(51), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [116] = 6,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_pr_exercise_name_token1,
    STATE(6), 1,
      sym_comment,
    STATE(70), 1,
      sym_pr_exercise_name,
    STATE(10), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(58), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [141] = 6,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym_template_exercise_name_token1,
    STATE(7), 1,
      sym_comment,
    STATE(82), 1,
      sym_logged_exercise_name,
    STATE(5), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(64), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [166] = 6,
    ACTIONS(47), 1,
      aux_sym_pr_exercise_name_token1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(72), 1,
      sym_measurement_name,
    STATE(4), 2,
      sym_measurement,
      aux_sym_measurement_entry_repeat1,
    ACTIONS(70), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [191] = 6,
    ACTIONS(66), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    STATE(82), 1,
      sym_logged_exercise_name,
    STATE(7), 2,
      sym_logged_exercise,
      aux_sym_log_entry_repeat1,
    ACTIONS(74), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [216] = 6,
    ACTIONS(60), 1,
      aux_sym_pr_exercise_name_token1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    STATE(70), 1,
      sym_pr_exercise_name,
    STATE(11), 2,
      sym_pr_record,
      aux_sym_pr_entry_repeat1,
    ACTIONS(78), 6,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [241] = 5,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym_pr_exercise_name_token1,
    STATE(70), 1,
      sym_pr_exercise_name,
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
  [264] = 5,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_pr_exercise_name_token1,
    STATE(72), 1,
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
  [287] = 9,
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
    STATE(28), 1,
      aux_sym_exercise_repeat2,
    STATE(35), 1,
      sym__line_break,
    STATE(39), 1,
      sym_attribute,
    ACTIONS(96), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [316] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_exercise_repeat1,
    STATE(29), 1,
      aux_sym_exercise_repeat2,
    STATE(35), 1,
      sym__line_break,
    STATE(39), 1,
      sym_attribute,
    ACTIONS(100), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [345] = 3,
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
      aux_sym_pr_exercise_name_token1,
      sym_date,
  [361] = 3,
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
  [377] = 3,
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
      aux_sym_pr_exercise_name_token1,
      sym_date,
  [393] = 2,
    STATE(18), 1,
      sym_comment,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [406] = 2,
    STATE(19), 1,
      sym_comment,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [419] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_exercise_repeat1,
    STATE(35), 1,
      sym__line_break,
    ACTIONS(118), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [440] = 2,
    STATE(21), 1,
      sym_comment,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [453] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(20), 1,
      aux_sym_exercise_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(35), 1,
      sym__line_break,
    ACTIONS(122), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [474] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      aux_sym__entry_token1,
    STATE(35), 1,
      sym__line_break,
    STATE(23), 2,
      sym_comment,
      aux_sym_exercise_repeat1,
    ACTIONS(127), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [493] = 2,
    STATE(24), 1,
      sym_comment,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [506] = 2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [519] = 2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      aux_sym__entry_token1,
      anon_sym_SEMI,
      anon_sym_ATinclude,
      sym_exercises_start,
      anon_sym_ATtemplate,
      sym_date,
  [532] = 7,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(139), 1,
      aux_sym_template_exercise_name_token1,
    STATE(27), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_template_block_repeat1,
    STATE(45), 1,
      sym_template_exercise,
    STATE(79), 1,
      sym_template_exercise_name,
  [554] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(28), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_exercise_repeat2,
    STATE(39), 1,
      sym_attribute,
    ACTIONS(100), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [574] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_exercise_repeat2,
    STATE(39), 1,
      sym_attribute,
    ACTIONS(141), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [594] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      sym_attribute_name,
    STATE(39), 1,
      sym_attribute,
    ACTIONS(143), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
    STATE(30), 2,
      sym_comment,
      aux_sym_exercise_repeat2,
  [612] = 7,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      aux_sym_template_exercise_name_token1,
    ACTIONS(148), 1,
      anon_sym_ATend_DASHtemplate,
    STATE(31), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_template_block_repeat1,
    STATE(45), 1,
      sym_template_exercise,
    STATE(79), 1,
      sym_template_exercise_name,
  [634] = 6,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_ATend_DASHtemplate,
    ACTIONS(152), 1,
      aux_sym_template_exercise_name_token1,
    STATE(45), 1,
      sym_template_exercise,
    STATE(79), 1,
      sym_template_exercise_name,
    STATE(32), 2,
      sym_comment,
      aux_sym_template_block_repeat1,
  [654] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      sym__exercises_end,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_exercises_block_repeat1,
    STATE(41), 1,
      sym_exercise,
  [673] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      sym__exercises_end,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_exercise,
    STATE(34), 2,
      sym_comment,
      aux_sym_exercises_block_repeat1,
  [690] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    ACTIONS(164), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [703] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym__exercises_end,
    STATE(33), 1,
      aux_sym_exercises_block_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(41), 1,
      sym_exercise,
  [722] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(168), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [735] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(170), 4,
      aux_sym__entry_token1,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [748] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym__exercises_end,
      anon_sym_LBRACK,
      sym_attribute_name,
  [760] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      anon_sym_CARET,
    STATE(40), 1,
      sym_comment,
  [776] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym__exercises_end,
      anon_sym_LBRACK,
  [787] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      aux_sym__entry_token1,
    STATE(15), 1,
      sym__line_break,
    STATE(42), 1,
      sym_comment,
  [800] = 4,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      aux_sym_template_name_token1,
    STATE(43), 1,
      sym_comment,
    STATE(60), 1,
      sym_template_exercise_details,
  [813] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [824] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [835] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym__entry_token1,
    STATE(36), 1,
      sym__line_break,
    STATE(46), 1,
      sym_comment,
  [848] = 4,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      aux_sym_template_name_token1,
    STATE(47), 1,
      sym_comment,
    STATE(52), 1,
      sym_template_name,
  [861] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym__entry_token1,
    STATE(17), 1,
      sym__line_break,
    STATE(48), 1,
      sym_comment,
  [874] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      aux_sym__entry_token1,
    STATE(16), 1,
      sym__line_break,
    STATE(49), 1,
      sym_comment,
  [887] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_ATend_DASHtemplate,
      aux_sym_template_exercise_name_token1,
  [898] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      aux_sym__entry_token1,
    STATE(19), 1,
      sym__line_break,
    STATE(51), 1,
      sym_comment,
  [911] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      aux_sym__entry_token1,
    STATE(27), 1,
      sym__line_break,
    STATE(52), 1,
      sym_comment,
  [924] = 4,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(202), 1,
      aux_sym_template_name_token1,
    STATE(53), 1,
      sym_comment,
    STATE(58), 1,
      sym_workout_name,
  [937] = 4,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      aux_sym_attribute_value_token1,
    STATE(22), 1,
      sym_attribute_value,
    STATE(54), 1,
      sym_comment,
  [950] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      aux_sym__entry_token1,
    STATE(24), 1,
      sym__line_break,
    STATE(55), 1,
      sym_comment,
  [963] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      aux_sym__entry_token1,
    STATE(6), 1,
      sym__line_break,
    STATE(56), 1,
      sym_comment,
  [976] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      aux_sym__entry_token1,
    STATE(8), 1,
      sym__line_break,
    STATE(57), 1,
      sym_comment,
  [989] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      aux_sym__entry_token1,
    STATE(9), 1,
      sym__line_break,
    STATE(58), 1,
      sym_comment,
  [1002] = 4,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_attribute_value_token1,
    STATE(42), 1,
      sym_measurement_value,
    STATE(59), 1,
      sym_comment,
  [1015] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      aux_sym__entry_token1,
    STATE(50), 1,
      sym__line_break,
    STATE(60), 1,
      sym_comment,
  [1028] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_comment,
  [1038] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym_comment,
  [1048] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      sym_exercise_name,
    STATE(63), 1,
      sym_comment,
  [1058] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      aux_sym__entry_token1,
    STATE(64), 1,
      sym_comment,
  [1068] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym_comment,
  [1078] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      sym_pr_type,
    STATE(66), 1,
      sym_comment,
  [1088] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      anon_sym_PR,
    STATE(67), 1,
      sym_comment,
  [1098] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym_comment,
  [1108] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_Measurements,
    STATE(69), 1,
      sym_comment,
  [1118] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(234), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_comment,
  [1128] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_comment,
  [1138] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_comment,
  [1148] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      sym_logged_exercise_details,
    STATE(73), 1,
      sym_comment,
  [1158] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      aux_sym__entry_token1,
    STATE(74), 1,
      sym_comment,
  [1168] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
  [1178] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      sym_weight,
    STATE(76), 1,
      sym_comment,
  [1188] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      aux_sym__entry_token1,
    STATE(77), 1,
      sym_comment,
  [1198] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      sym_file_path,
    STATE(78), 1,
      sym_comment,
  [1208] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_comment,
  [1218] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_comment,
  [1228] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_comment,
  [1238] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_comment,
  [1248] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      aux_sym__entry_token1,
    STATE(83), 1,
      sym_comment,
  [1258] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      aux_sym_include_token1,
    STATE(84), 1,
      sym_comment,
  [1268] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
  [1278] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 377,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 419,
  [SMALL_STATE(21)] = 440,
  [SMALL_STATE(22)] = 453,
  [SMALL_STATE(23)] = 474,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 506,
  [SMALL_STATE(26)] = 519,
  [SMALL_STATE(27)] = 532,
  [SMALL_STATE(28)] = 554,
  [SMALL_STATE(29)] = 574,
  [SMALL_STATE(30)] = 594,
  [SMALL_STATE(31)] = 612,
  [SMALL_STATE(32)] = 634,
  [SMALL_STATE(33)] = 654,
  [SMALL_STATE(34)] = 673,
  [SMALL_STATE(35)] = 690,
  [SMALL_STATE(36)] = 703,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 735,
  [SMALL_STATE(39)] = 748,
  [SMALL_STATE(40)] = 760,
  [SMALL_STATE(41)] = 776,
  [SMALL_STATE(42)] = 787,
  [SMALL_STATE(43)] = 800,
  [SMALL_STATE(44)] = 813,
  [SMALL_STATE(45)] = 824,
  [SMALL_STATE(46)] = 835,
  [SMALL_STATE(47)] = 848,
  [SMALL_STATE(48)] = 861,
  [SMALL_STATE(49)] = 874,
  [SMALL_STATE(50)] = 887,
  [SMALL_STATE(51)] = 898,
  [SMALL_STATE(52)] = 911,
  [SMALL_STATE(53)] = 924,
  [SMALL_STATE(54)] = 937,
  [SMALL_STATE(55)] = 950,
  [SMALL_STATE(56)] = 963,
  [SMALL_STATE(57)] = 976,
  [SMALL_STATE(58)] = 989,
  [SMALL_STATE(59)] = 1002,
  [SMALL_STATE(60)] = 1015,
  [SMALL_STATE(61)] = 1028,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1048,
  [SMALL_STATE(64)] = 1058,
  [SMALL_STATE(65)] = 1068,
  [SMALL_STATE(66)] = 1078,
  [SMALL_STATE(67)] = 1088,
  [SMALL_STATE(68)] = 1098,
  [SMALL_STATE(69)] = 1108,
  [SMALL_STATE(70)] = 1118,
  [SMALL_STATE(71)] = 1128,
  [SMALL_STATE(72)] = 1138,
  [SMALL_STATE(73)] = 1148,
  [SMALL_STATE(74)] = 1158,
  [SMALL_STATE(75)] = 1168,
  [SMALL_STATE(76)] = 1178,
  [SMALL_STATE(77)] = 1188,
  [SMALL_STATE(78)] = 1198,
  [SMALL_STATE(79)] = 1208,
  [SMALL_STATE(80)] = 1218,
  [SMALL_STATE(81)] = 1228,
  [SMALL_STATE(82)] = 1238,
  [SMALL_STATE(83)] = 1248,
  [SMALL_STATE(84)] = 1258,
  [SMALL_STATE(85)] = 1268,
  [SMALL_STATE(86)] = 1278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_entry, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_entry, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_entry, 5, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pr_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_measurement_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logged_exercise, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_record, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pr_record, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercises_block, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_block, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exercise, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 2, 0, 0), SHIFT_REPEAT(65),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat1, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_break, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercise_repeat2, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exercises_block_repeat1, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_break, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_block_repeat1, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_exercise, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_name, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logged_exercise_name, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workout_name, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr_exercise_name, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_details, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_exercise_name, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_value, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
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