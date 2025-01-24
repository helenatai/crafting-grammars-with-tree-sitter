#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
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
  anon_sym_var = 7,
  anon_sym_EQ = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_num = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym_block = 16,
  sym__value = 17,
  sym_argument_list = 18,
  sym_method_call = 19,
  sym__expression = 20,
  sym_assignment = 21,
  sym__statement = 22,
  sym_bool = 23,
  sym_string = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_argument_list_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
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
  [sym_assignment] = "assignment",
  [sym__statement] = "_statement",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_assignment] = sym_assignment,
  [sym__statement] = sym__statement,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(30);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '"') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(20);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(29);
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
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
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
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_block] = STATE(4),
    [sym__value] = STATE(4),
    [sym_method_call] = STATE(4),
    [sym__expression] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym__statement] = STATE(4),
    [sym_bool] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(30),
    [anon_sym_false] = ACTIONS(30),
    [sym_num] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(5),
    [sym__value] = STATE(5),
    [sym_method_call] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_bool] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(2),
    [sym__value] = STATE(2),
    [sym_method_call] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_num] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      sym_num,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [27] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym_num,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [54] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      sym_num,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 5,
      sym__value,
      sym__expression,
      sym_bool,
      sym_string,
      aux_sym_argument_list_repeat1,
  [81] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(77), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_num,
      anon_sym_DQUOTE,
  [119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_num,
      anon_sym_DQUOTE,
  [137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_var,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_num,
      anon_sym_DQUOTE,
  [239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_num,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 3,
      sym__value,
      sym_bool,
      sym_string,
  [258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_argument_list,
  [268] = 2,
    ACTIONS(119), 1,
      aux_sym_string_token1,
    ACTIONS(121), 1,
      sym_comment,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
  [296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 154,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 188,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 289,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 303,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
