#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_SEMI = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_num = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym_block = 28,
  sym__value = 29,
  sym_argument_list = 30,
  sym_method_call = 31,
  sym__expression = 32,
  sym_list = 33,
  sym_if_statement = 34,
  sym_condition = 35,
  sym_comparison_expression = 36,
  sym_comparison_operator = 37,
  sym_assignment = 38,
  sym__statement = 39,
  sym_bool = 40,
  sym_string = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_argument_list_repeat1 = 43,
  aux_sym_list_repeat1 = 44,
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
  [anon_sym_SEMI] = ";",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_SEMI] = {
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
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(14)
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '"') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(13);
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
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_block] = STATE(4),
    [sym__value] = STATE(27),
    [sym_method_call] = STATE(38),
    [sym__expression] = STATE(27),
    [sym_list] = STATE(27),
    [sym_if_statement] = STATE(4),
    [sym_comparison_expression] = STATE(27),
    [sym_assignment] = STATE(38),
    [sym__statement] = STATE(4),
    [sym_bool] = STATE(27),
    [sym_string] = STATE(27),
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
    [sym__value] = STATE(27),
    [sym_method_call] = STATE(38),
    [sym__expression] = STATE(27),
    [sym_list] = STATE(27),
    [sym_if_statement] = STATE(2),
    [sym_comparison_expression] = STATE(27),
    [sym_assignment] = STATE(38),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(27),
    [sym_string] = STATE(27),
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
    [sym__value] = STATE(27),
    [sym_method_call] = STATE(38),
    [sym__expression] = STATE(27),
    [sym_list] = STATE(27),
    [sym_if_statement] = STATE(5),
    [sym_comparison_expression] = STATE(27),
    [sym_assignment] = STATE(38),
    [sym__statement] = STATE(5),
    [sym_bool] = STATE(27),
    [sym_string] = STATE(27),
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
    [sym__value] = STATE(27),
    [sym_method_call] = STATE(38),
    [sym__expression] = STATE(27),
    [sym_list] = STATE(27),
    [sym_if_statement] = STATE(2),
    [sym_comparison_expression] = STATE(27),
    [sym_assignment] = STATE(38),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(27),
    [sym_string] = STATE(27),
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
    [sym__value] = STATE(27),
    [sym_method_call] = STATE(38),
    [sym__expression] = STATE(27),
    [sym_list] = STATE(27),
    [sym_if_statement] = STATE(2),
    [sym_comparison_expression] = STATE(27),
    [sym_assignment] = STATE(38),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(27),
    [sym_string] = STATE(27),
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
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 11,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_num,
      anon_sym_DQUOTE,
  [24] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 11,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_num,
      anon_sym_DQUOTE,
  [48] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 11,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_num,
      anon_sym_DQUOTE,
  [72] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 11,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_num,
      anon_sym_DQUOTE,
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 11,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_num,
      anon_sym_DQUOTE,
  [120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_num,
      anon_sym_DQUOTE,
  [145] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym_num,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [179] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      sym_num,
    STATE(12), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(108), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(102), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
    ACTIONS(106), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [241] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_num,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
    ACTIONS(114), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [323] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_comparison_expression,
      sym_bool,
      sym_string,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
    ACTIONS(126), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_else,
    ACTIONS(130), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [393] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_if,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [431] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(146), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 4,
      sym__value,
      sym_list,
      sym_bool,
      sym_string,
  [460] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(150), 1,
      sym_num,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 4,
      sym__value,
      sym_list,
      sym_bool,
      sym_string,
  [486] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      sym_num,
    ACTIONS(152), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 4,
      sym__value,
      sym_list,
      sym_bool,
      sym_string,
  [509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(160), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
  [527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(108), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_comparison_operator,
    ACTIONS(108), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 3,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_list_repeat1,
  [594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_list_repeat1,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_list_repeat1,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_argument_list,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
  [640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_condition,
  [668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SEMI,
  [675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
  [696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [703] = 2,
    ACTIONS(193), 1,
      aux_sym_string_token1,
    ACTIONS(195), 1,
      sym_comment,
  [710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SEMI,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
  [724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_SEMI,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_EQ,
  [738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
  [745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 295,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 393,
  [SMALL_STATE(22)] = 412,
  [SMALL_STATE(23)] = 431,
  [SMALL_STATE(24)] = 460,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 547,
  [SMALL_STATE(29)] = 567,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 607,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 640,
  [SMALL_STATE(36)] = 648,
  [SMALL_STATE(37)] = 658,
  [SMALL_STATE(38)] = 668,
  [SMALL_STATE(39)] = 675,
  [SMALL_STATE(40)] = 682,
  [SMALL_STATE(41)] = 689,
  [SMALL_STATE(42)] = 696,
  [SMALL_STATE(43)] = 703,
  [SMALL_STATE(44)] = 710,
  [SMALL_STATE(45)] = 717,
  [SMALL_STATE(46)] = 724,
  [SMALL_STATE(47)] = 731,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 745,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(6),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(43),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
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
