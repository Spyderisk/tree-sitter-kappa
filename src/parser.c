#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LBRACE_POUND_RBRACE = 6,
  anon_sym_LBRACK = 7,
  anon_sym_DOT = 8,
  anon_sym__ = 9,
  anon_sym_POUND = 10,
  anon_sym_RBRACK = 11,
  anon_sym_PIPE = 12,
  anon_sym_AT = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_LT_DASH_GT = 15,
  sym_counter = 16,
  sym_token = 17,
  sym_algebraic_expression = 18,
  aux_sym_name_token1 = 19,
  aux_sym_name_token2 = 20,
  sym_label = 21,
  sym_number = 22,
  sym_source_file = 23,
  sym_agent_name = 24,
  sym_site_name = 25,
  sym_state_name = 26,
  sym_agent = 27,
  sym_site = 28,
  sym_interface = 29,
  sym_more_interface = 30,
  sym_internal_state = 31,
  sym_link_state = 32,
  sym_name = 33,
  aux_sym_source_file_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_POUND_RBRACE] = "{#}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [anon_sym_POUND] = "#",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH_GT] = "<->",
  [sym_counter] = "counter",
  [sym_token] = "token",
  [sym_algebraic_expression] = "algebraic_expression",
  [aux_sym_name_token1] = "name_token1",
  [aux_sym_name_token2] = "name_token2",
  [sym_label] = "label",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_agent_name] = "agent_name",
  [sym_site_name] = "site_name",
  [sym_state_name] = "state_name",
  [sym_agent] = "agent",
  [sym_site] = "site",
  [sym_interface] = "interface",
  [sym_more_interface] = "more_interface",
  [sym_internal_state] = "internal_state",
  [sym_link_state] = "link_state",
  [sym_name] = "name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_POUND_RBRACE] = anon_sym_LBRACE_POUND_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [sym_counter] = sym_counter,
  [sym_token] = sym_token,
  [sym_algebraic_expression] = sym_algebraic_expression,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [aux_sym_name_token2] = aux_sym_name_token2,
  [sym_label] = sym_label,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_agent_name] = sym_agent_name,
  [sym_site_name] = sym_site_name,
  [sym_state_name] = sym_state_name,
  [sym_agent] = sym_agent,
  [sym_site] = sym_site,
  [sym_interface] = sym_interface,
  [sym_more_interface] = sym_more_interface,
  [sym_internal_state] = sym_internal_state,
  [sym_link_state] = sym_link_state,
  [sym_name] = sym_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_counter] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_algebraic_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_agent_name] = {
    .visible = true,
    .named = true,
  },
  [sym_site_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_agent] = {
    .visible = true,
    .named = true,
  },
  [sym_site] = {
    .visible = true,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_more_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_internal_state] = {
    .visible = true,
    .named = true,
  },
  [sym_link_state] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '#', 20,
        '\'', 8,
        '(', 11,
        ')', 12,
        ',', 13,
        '-', 4,
        '.', 18,
        '<', 3,
        '@', 23,
        '[', 17,
        ']', 21,
        '_', 19,
        'a', 33,
        'c', 35,
        't', 36,
        '{', 14,
        '|', 22,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 11,
        ')', 12,
        ',', 13,
        '.', 18,
        '[', 17,
        ']', 21,
        '_', 7,
        'c', 35,
        '{', 14,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(1);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '_') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_counter);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_algebraic_expression);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'k') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [sym_counter] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [sym_algebraic_expression] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [aux_sym_name_token2] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_agent_name] = STATE(27),
    [sym_agent] = STATE(11),
    [sym_name] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_name_token1] = ACTIONS(5),
    [aux_sym_name_token2] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(7), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_POUND_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_RBRACK,
      aux_sym_name_token2,
  [17] = 7,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND_RBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_link_state,
    STATE(12), 1,
      sym_internal_state,
    ACTIONS(19), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(11), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_name_token2,
  [42] = 9,
    ACTIONS(5), 1,
      aux_sym_name_token2,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      sym_counter,
    ACTIONS(27), 1,
      aux_sym_name_token1,
    STATE(3), 1,
      sym_site_name,
    STATE(5), 1,
      sym_name,
    STATE(6), 1,
      sym_site,
    STATE(29), 1,
      sym_more_interface,
  [70] = 2,
    ACTIONS(31), 3,
      anon_sym_LBRACE,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(29), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE_POUND_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym_name_token2,
  [84] = 9,
    ACTIONS(5), 1,
      aux_sym_name_token2,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      sym_counter,
    ACTIONS(27), 1,
      aux_sym_name_token1,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_site_name,
    STATE(5), 1,
      sym_name,
    STATE(6), 1,
      sym_site,
    STATE(34), 1,
      sym_more_interface,
  [112] = 9,
    ACTIONS(5), 1,
      aux_sym_name_token2,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      sym_counter,
    ACTIONS(27), 1,
      aux_sym_name_token1,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_site_name,
    STATE(5), 1,
      sym_name,
    STATE(6), 1,
      sym_site,
    STATE(35), 1,
      sym_more_interface,
  [140] = 5,
    ACTIONS(39), 1,
      sym_number,
    STATE(5), 1,
      sym_name,
    STATE(33), 1,
      sym_site_name,
    ACTIONS(27), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    ACTIONS(37), 3,
      anon_sym_DOT,
      anon_sym__,
      anon_sym_POUND,
  [159] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND_RBRACE,
    STATE(20), 1,
      sym_internal_state,
    ACTIONS(43), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(41), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_name_token2,
  [178] = 8,
    ACTIONS(5), 1,
      aux_sym_name_token2,
    ACTIONS(25), 1,
      sym_counter,
    ACTIONS(27), 1,
      aux_sym_name_token1,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_site_name,
    STATE(4), 1,
      sym_site,
    STATE(5), 1,
      sym_name,
    STATE(28), 1,
      sym_interface,
  [203] = 5,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_name,
    STATE(27), 1,
      sym_agent_name,
    ACTIONS(5), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(13), 2,
      sym_agent,
      aux_sym_source_file_repeat1,
  [221] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_link_state,
    ACTIONS(43), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(41), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_name_token2,
  [237] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_name,
    STATE(27), 1,
      sym_agent_name,
    ACTIONS(51), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
    STATE(13), 2,
      sym_agent,
      aux_sym_source_file_repeat1,
  [255] = 2,
    ACTIONS(56), 3,
      anon_sym_LBRACE,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(54), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE_POUND_RBRACE,
      aux_sym_name_token2,
  [267] = 2,
    ACTIONS(60), 3,
      anon_sym_LBRACE,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(58), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE_POUND_RBRACE,
      aux_sym_name_token2,
  [279] = 2,
    ACTIONS(64), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(62), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      aux_sym_name_token2,
  [290] = 6,
    ACTIONS(5), 1,
      aux_sym_name_token2,
    ACTIONS(25), 1,
      sym_counter,
    ACTIONS(27), 1,
      aux_sym_name_token1,
    STATE(3), 1,
      sym_site_name,
    STATE(5), 1,
      sym_name,
    STATE(7), 1,
      sym_site,
  [309] = 2,
    ACTIONS(68), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(66), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      aux_sym_name_token2,
  [320] = 2,
    ACTIONS(19), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(11), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_name_token2,
  [330] = 2,
    ACTIONS(72), 2,
      sym_counter,
      aux_sym_name_token1,
    ACTIONS(70), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_name_token2,
  [340] = 3,
    STATE(30), 1,
      sym_state_name,
    STATE(31), 1,
      sym_name,
    ACTIONS(5), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [351] = 3,
    STATE(25), 1,
      sym_name,
    STATE(36), 1,
      sym_agent_name,
    ACTIONS(5), 2,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [362] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [368] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      aux_sym_name_token1,
      aux_sym_name_token2,
  [374] = 1,
    ACTIONS(78), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [379] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [383] = 1,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
  [387] = 1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
  [391] = 1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [395] = 1,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
  [399] = 1,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
  [403] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
  [407] = 1,
    ACTIONS(94), 1,
      anon_sym_DOT,
  [411] = 1,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
  [415] = 1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [419] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 351,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 391,
  [SMALL_STATE(30)] = 395,
  [SMALL_STATE(31)] = 399,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 411,
  [SMALL_STATE(35)] = 415,
  [SMALL_STATE(36)] = 419,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_name, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_name, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_interface, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_interface, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_state, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_state, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_state, 5, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_state, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internal_state, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internal_state, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internal_state, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internal_state, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_name, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_interface, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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

TS_PUBLIC const TSLanguage *tree_sitter_kappa(void) {
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
