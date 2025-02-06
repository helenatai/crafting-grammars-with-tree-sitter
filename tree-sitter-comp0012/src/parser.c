#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_var = 10,
  anon_sym_EQ = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  sym_num = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  sym_comment = 17,
  sym_source_file = 18,
  sym_block = 19,
  sym__value = 20,
  sym_argument_list = 21,
  sym_method_call = 22,
  sym__expression = 23,
  sym_list = 24,
  sym_assignment = 25,
  sym__statement = 26,
  sym_bool = 27,
  sym_string = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_argument_list_repeat1 = 30,
  aux_sym_list_repeat1 = 31,
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
  field_name = 1,
  field_receiver = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_receiver] = "receiver",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_name, 2},
    {field_receiver, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(33);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '"') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(5);
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
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 14:
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
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
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_block] = STATE(4),
    [sym__value] = STATE(4),
    [sym_method_call] = STATE(4),
    [sym__expression] = STATE(4),
    [sym_list] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym__statement] = STATE(4),
    [sym_bool] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_num] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_var] = ACTIONS(32),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_num] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(5),
    [sym__value] = STATE(5),
    [sym_method_call] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_bool] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_num] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_num] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_num] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_num,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [31] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [52] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [83] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [104] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 6,
      sym__value,
      sym__expression,
      sym_list,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(97), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_DQUOTE,
  [321] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(137), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym__value,
      sym_bool,
      sym_string,
  [346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_num,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 3,
      sym__value,
      sym_bool,
      sym_string,
  [368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_num,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 3,
      sym__value,
      sym_bool,
      sym_string,
  [387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_list_repeat1,
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_list_repeat1,
  [413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_list_repeat1,
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_argument_list,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_identifier,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_identifier,
  [472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [479] = 2,
    ACTIONS(170), 1,
      aux_sym_string_token1,
    ACTIONS(172), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 267,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 368,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 436,
  [SMALL_STATE(29)] = 444,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 458,
  [SMALL_STATE(32)] = 465,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 479,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(6),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
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
