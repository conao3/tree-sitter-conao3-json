#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COLON = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_string = 7,
  aux_sym_number_token1 = 8,
  anon_sym_0 = 9,
  aux_sym_number_token2 = 10,
  anon_sym_DOT = 11,
  aux_sym_number_token3 = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  sym_null = 15,
  sym_source_file = 16,
  sym__value = 17,
  sym_object = 18,
  sym_array = 19,
  sym_number = 20,
  sym_boolean = 21,
  aux_sym_object_repeat1 = 22,
  aux_sym_array_repeat1 = 23,
  aux_sym_number_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_0] = "0",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DOT] = ".",
  [aux_sym_number_token3] = "number_token3",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_array] = "array",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_number_repeat1] = "number_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string] = sym_string,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_0] = anon_sym_0,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_number_repeat1] = aux_sym_number_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 1,
        ',', 15,
        '.', 23,
        '0', 21,
        ':', 14,
        '[', 17,
        ']', 18,
        'f', 2,
        'n', 11,
        't', 8,
        '{', 13,
        '}', 16,
        '+', 20,
        '-', 20,
        'E', 24,
        'e', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_number_token2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_number_token3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_null);
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__value] = STATE(47),
    [sym_object] = STATE(47),
    [sym_array] = STATE(47),
    [sym_number] = STATE(47),
    [sym_boolean] = STATE(47),
    [aux_sym_number_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(7),
  },
  [2] = {
    [sym__value] = STATE(30),
    [sym_object] = STATE(30),
    [sym_array] = STATE(30),
    [sym_number] = STATE(30),
    [sym_boolean] = STATE(30),
    [aux_sym_number_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(17),
  },
  [3] = {
    [sym__value] = STATE(39),
    [sym_object] = STATE(39),
    [sym_array] = STATE(39),
    [sym_number] = STATE(39),
    [sym_boolean] = STATE(39),
    [aux_sym_number_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(19),
  },
  [4] = {
    [sym__value] = STATE(41),
    [sym_object] = STATE(41),
    [sym_array] = STATE(41),
    [sym_number] = STATE(41),
    [sym_boolean] = STATE(41),
    [aux_sym_number_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(21),
  },
  [5] = {
    [sym__value] = STATE(42),
    [sym_object] = STATE(42),
    [sym_array] = STATE(42),
    [sym_number] = STATE(42),
    [sym_boolean] = STATE(42),
    [aux_sym_number_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      aux_sym_number_token3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [20] = 3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(35), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
      aux_sym_number_token3,
  [36] = 5,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      aux_sym_number_token3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [56] = 4,
    ACTIONS(46), 1,
      aux_sym_number_token3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [73] = 4,
    ACTIONS(50), 1,
      aux_sym_number_token3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [90] = 3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [104] = 3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [118] = 3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [132] = 3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [146] = 3,
    STATE(7), 1,
      aux_sym_number_repeat1,
    ACTIONS(27), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [160] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [167] = 3,
    ACTIONS(60), 1,
      aux_sym_number_token1,
    STATE(14), 1,
      aux_sym_number_repeat1,
    ACTIONS(62), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [178] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [185] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [192] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [199] = 3,
    ACTIONS(70), 1,
      aux_sym_number_token1,
    STATE(11), 1,
      aux_sym_number_repeat1,
    ACTIONS(72), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [210] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [217] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [224] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [231] = 3,
    ACTIONS(80), 1,
      aux_sym_number_token1,
    STATE(12), 1,
      aux_sym_number_repeat1,
    ACTIONS(82), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [242] = 3,
    ACTIONS(84), 1,
      aux_sym_number_token1,
    STATE(13), 1,
      aux_sym_number_repeat1,
    ACTIONS(86), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [253] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_object_repeat1,
  [263] = 2,
    STATE(13), 1,
      aux_sym_number_repeat1,
    ACTIONS(86), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [271] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [281] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_array_repeat1,
  [291] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [301] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_object_repeat1,
  [311] = 2,
    STATE(9), 1,
      aux_sym_number_repeat1,
    ACTIONS(108), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [319] = 2,
    STATE(10), 1,
      aux_sym_number_repeat1,
    ACTIONS(110), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [327] = 2,
    STATE(12), 1,
      aux_sym_number_repeat1,
    ACTIONS(82), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [335] = 2,
    STATE(15), 1,
      aux_sym_number_repeat1,
    ACTIONS(112), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [343] = 2,
    STATE(8), 1,
      aux_sym_number_repeat1,
    ACTIONS(114), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [351] = 2,
    STATE(11), 1,
      aux_sym_number_repeat1,
    ACTIONS(72), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [359] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_object_repeat1,
  [369] = 2,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      sym_string,
  [376] = 1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [381] = 1,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [386] = 1,
    ACTIONS(124), 1,
      sym_string,
  [390] = 1,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [394] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [398] = 1,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [402] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 104,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 178,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 199,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 224,
  [SMALL_STATE(25)] = 231,
  [SMALL_STATE(26)] = 242,
  [SMALL_STATE(27)] = 253,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 271,
  [SMALL_STATE(30)] = 281,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 301,
  [SMALL_STATE(33)] = 311,
  [SMALL_STATE(34)] = 319,
  [SMALL_STATE(35)] = 327,
  [SMALL_STATE(36)] = 335,
  [SMALL_STATE(37)] = 343,
  [SMALL_STATE(38)] = 351,
  [SMALL_STATE(39)] = 359,
  [SMALL_STATE(40)] = 369,
  [SMALL_STATE(41)] = 376,
  [SMALL_STATE(42)] = 381,
  [SMALL_STATE(43)] = 386,
  [SMALL_STATE(44)] = 390,
  [SMALL_STATE(45)] = 394,
  [SMALL_STATE(46)] = 398,
  [SMALL_STATE(47)] = 402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 6, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 5, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 7, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_conao3_json(void) {
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
