#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_if = 10,
  anon_sym_else = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_var = 18,
  anon_sym_EQ = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_num = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_token1 = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym_block = 27,
  sym__value = 28,
  sym_argument_list = 29,
  sym_method_call = 30,
  sym__expression = 31,
  sym_list = 32,
  sym_if_statement = 33,
  sym_condition = 34,
  sym_comparison_expression = 35,
  sym_comparison_operator = 36,
  sym_assignment = 37,
  sym__statement = 38,
  sym_bool = 39,
  sym_string = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_argument_list_repeat1 = 42,
  aux_sym_list_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_num] = "num",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym__value] = "_value",
  [sym_argument_list] = "argument_list",
  [sym_method_call] = "method_call",
  [sym__expression] = "_expression",
  [sym_list] = "list",
  [sym_if_statement] = "if_statement",
  [sym_condition] = "condition",
  [sym_comparison_expression] = "comparison_expression",
  [sym_comparison_operator] = "comparison_operator",
  [sym_assignment] = "assignment",
  [sym__statement] = "_statement",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_num] = sym_num,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym__value] = sym__value,
  [sym_argument_list] = sym_argument_list,
  [sym_method_call] = sym_method_call,
  [sym__expression] = sym__expression,
  [sym_list] = sym_list,
  [sym_if_statement] = sym_if_statement,
  [sym_condition] = sym_condition,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_assignment] = sym_assignment,
  [sym__statement] = sym__statement,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_condition = 2,
  field_consequence = 3,
  field_name = 4,
  field_receiver = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_name] = "name",
  [field_receiver] = "receiver",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
    {field_consequence, 2},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_name, 2},
    {field_receiver, 0},
  [6] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(48);
      END_STATE();
    case 11:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 12:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == '"') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(38);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_false);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym_block] = STATE(4),
    [sym__value] = STATE(11),
    [sym_method_call] = STATE(4),
    [sym__expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym_if_statement] = STATE(4),
    [sym_comparison_expression] = STATE(11),
    [sym_assignment] = STATE(4),
    [sym__statement] = STATE(4),
    [sym_bool] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_num] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(11),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym_if_statement] = STATE(2),
    [sym_comparison_expression] = STATE(11),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(34),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(40),
    [anon_sym_false] = ACTIONS(40),
    [sym_num] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(5),
    [sym__value] = STATE(11),
    [sym_method_call] = STATE(5),
    [sym__expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym_if_statement] = STATE(5),
    [sym_comparison_expression] = STATE(11),
    [sym_assignment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_bool] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_num] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(11),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym_if_statement] = STATE(2),
    [sym_comparison_expression] = STATE(11),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_num] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(11),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym_if_statement] = STATE(2),
    [sym_comparison_expression] = STATE(11),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_num] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [28] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [56] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_comparison_operator,
    ACTIONS(65), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [85] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(69), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_comparison_operator,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      anon_sym_if,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_num,
      anon_sym_DQUOTE,
  [223] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_num,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(101), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [257] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      sym_num,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_comparison_operator,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(118), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [319] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(114), 1,
      sym_num,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
    ACTIONS(124), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
    ACTIONS(128), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_else,
    ACTIONS(136), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [443] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    ACTIONS(168), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym__value,
      sym_bool,
      sym_string,
  [591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym__value,
      sym_bool,
      sym_string,
  [613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_comparison_operator,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_num,
    ACTIONS(176), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym__value,
      sym_bool,
      sym_string,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(182), 3,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_list_repeat1,
  [679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_list_repeat1,
  [692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_list_repeat1,
  [705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_argument_list,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_condition,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_EQ,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
  [781] = 2,
    ACTIONS(207), 1,
      aux_sym_string_token1,
    ACTIONS(209), 1,
      sym_comment,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 85,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 319,
  [SMALL_STATE(18)] = 353,
  [SMALL_STATE(19)] = 373,
  [SMALL_STATE(20)] = 393,
  [SMALL_STATE(21)] = 421,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 471,
  [SMALL_STATE(24)] = 490,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 528,
  [SMALL_STATE(27)] = 547,
  [SMALL_STATE(28)] = 566,
  [SMALL_STATE(29)] = 591,
  [SMALL_STATE(30)] = 613,
  [SMALL_STATE(31)] = 633,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 666,
  [SMALL_STATE(34)] = 679,
  [SMALL_STATE(35)] = 692,
  [SMALL_STATE(36)] = 705,
  [SMALL_STATE(37)] = 713,
  [SMALL_STATE(38)] = 723,
  [SMALL_STATE(39)] = 733,
  [SMALL_STATE(40)] = 743,
  [SMALL_STATE(41)] = 753,
  [SMALL_STATE(42)] = 760,
  [SMALL_STATE(43)] = 767,
  [SMALL_STATE(44)] = 774,
  [SMALL_STATE(45)] = 781,
  [SMALL_STATE(46)] = 788,
  [SMALL_STATE(47)] = 795,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(28),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(45),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_COMP0012Language(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
