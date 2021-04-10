#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_pattern_start = 1,
  sym_named_pattern_start = 2,
  sym_lexicon_start = 3,
  sym_alias = 4,
  sym_left_sieve = 5,
  sym_right_sieve = 6,
  anon_sym_PIPE = 7,
  sym_colon = 8,
  anon_sym_STAR = 9,
  anon_sym_PLUS = 10,
  anon_sym_QMARK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_DASH = 14,
  anon_sym_COMMA = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_CARET = 18,
  sym_lexicon_string = 19,
  sym_escaped_char = 20,
  sym_comment = 21,
  sym_identifier = 22,
  sym_tag = 23,
  sym_number = 24,
  anon_sym_LF = 25,
  sym__ws = 26,
  sym_source_file = 27,
  sym_pattern_block = 28,
  sym_pattern_or = 29,
  sym_pattern_line = 30,
  sym_pattern_operator = 31,
  sym_anonymous_pattern = 32,
  sym_lexicon_reference = 33,
  sym__modifiable_pat_tok = 34,
  sym_pattern_token = 35,
  sym__tag_or_neg = 36,
  sym__tag_list = 37,
  sym_tag_setting = 38,
  sym_tag_distribution_operator = 39,
  sym_tag_distribution = 40,
  sym__tag_filter_segment = 41,
  sym_tag_filter = 42,
  sym_anonymous_lexicon = 43,
  sym_lexicon_block = 44,
  sym_lexicon_line = 45,
  aux_sym__lexicon_side = 46,
  sym_lexicon_segment = 47,
  sym_alias_command = 48,
  sym__nl = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_pattern_block_repeat1 = 51,
  aux_sym_pattern_line_repeat1 = 52,
  aux_sym__tag_list_repeat1 = 53,
  aux_sym_tag_filter_repeat1 = 54,
  aux_sym_lexicon_block_repeat1 = 55,
  aux_sym_lexicon_line_repeat1 = 56,
  aux_sym__nl_repeat1 = 57,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_pattern_start] = "pattern_start",
  [sym_named_pattern_start] = "named_pattern_start",
  [sym_lexicon_start] = "lexicon_start",
  [sym_alias] = "alias",
  [sym_left_sieve] = "left_sieve",
  [sym_right_sieve] = "right_sieve",
  [anon_sym_PIPE] = "|",
  [sym_colon] = "colon",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_CARET] = "^",
  [sym_lexicon_string] = "lexicon_string",
  [sym_escaped_char] = "escaped_char",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_tag] = "tag",
  [sym_number] = "number",
  [anon_sym_LF] = "\n",
  [sym__ws] = "_ws",
  [sym_source_file] = "source_file",
  [sym_pattern_block] = "pattern_block",
  [sym_pattern_or] = "pattern_or",
  [sym_pattern_line] = "pattern_line",
  [sym_pattern_operator] = "pattern_operator",
  [sym_anonymous_pattern] = "anonymous_pattern",
  [sym_lexicon_reference] = "lexicon_reference",
  [sym__modifiable_pat_tok] = "_modifiable_pat_tok",
  [sym_pattern_token] = "pattern_token",
  [sym__tag_or_neg] = "_tag_or_neg",
  [sym__tag_list] = "_tag_list",
  [sym_tag_setting] = "tag_setting",
  [sym_tag_distribution_operator] = "tag_distribution_operator",
  [sym_tag_distribution] = "tag_distribution",
  [sym__tag_filter_segment] = "_tag_filter_segment",
  [sym_tag_filter] = "tag_filter",
  [sym_anonymous_lexicon] = "anonymous_lexicon",
  [sym_lexicon_block] = "lexicon_block",
  [sym_lexicon_line] = "lexicon_line",
  [aux_sym__lexicon_side] = "_lexicon_side",
  [sym_lexicon_segment] = "lexicon_segment",
  [sym_alias_command] = "alias_command",
  [sym__nl] = "_nl",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_pattern_block_repeat1] = "pattern_block_repeat1",
  [aux_sym_pattern_line_repeat1] = "pattern_line_repeat1",
  [aux_sym__tag_list_repeat1] = "_tag_list_repeat1",
  [aux_sym_tag_filter_repeat1] = "tag_filter_repeat1",
  [aux_sym_lexicon_block_repeat1] = "lexicon_block_repeat1",
  [aux_sym_lexicon_line_repeat1] = "lexicon_line_repeat1",
  [aux_sym__nl_repeat1] = "_nl_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_pattern_start] = sym_pattern_start,
  [sym_named_pattern_start] = sym_named_pattern_start,
  [sym_lexicon_start] = sym_lexicon_start,
  [sym_alias] = sym_alias,
  [sym_left_sieve] = sym_left_sieve,
  [sym_right_sieve] = sym_right_sieve,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_colon] = sym_colon,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_lexicon_string] = sym_lexicon_string,
  [sym_escaped_char] = sym_escaped_char,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_tag] = sym_tag,
  [sym_number] = sym_number,
  [anon_sym_LF] = anon_sym_LF,
  [sym__ws] = sym__ws,
  [sym_source_file] = sym_source_file,
  [sym_pattern_block] = sym_pattern_block,
  [sym_pattern_or] = sym_pattern_or,
  [sym_pattern_line] = sym_pattern_line,
  [sym_pattern_operator] = sym_pattern_operator,
  [sym_anonymous_pattern] = sym_anonymous_pattern,
  [sym_lexicon_reference] = sym_lexicon_reference,
  [sym__modifiable_pat_tok] = sym__modifiable_pat_tok,
  [sym_pattern_token] = sym_pattern_token,
  [sym__tag_or_neg] = sym__tag_or_neg,
  [sym__tag_list] = sym__tag_list,
  [sym_tag_setting] = sym_tag_setting,
  [sym_tag_distribution_operator] = sym_tag_distribution_operator,
  [sym_tag_distribution] = sym_tag_distribution,
  [sym__tag_filter_segment] = sym__tag_filter_segment,
  [sym_tag_filter] = sym_tag_filter,
  [sym_anonymous_lexicon] = sym_anonymous_lexicon,
  [sym_lexicon_block] = sym_lexicon_block,
  [sym_lexicon_line] = sym_lexicon_line,
  [aux_sym__lexicon_side] = aux_sym__lexicon_side,
  [sym_lexicon_segment] = sym_lexicon_segment,
  [sym_alias_command] = sym_alias_command,
  [sym__nl] = sym__nl,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_pattern_block_repeat1] = aux_sym_pattern_block_repeat1,
  [aux_sym_pattern_line_repeat1] = aux_sym_pattern_line_repeat1,
  [aux_sym__tag_list_repeat1] = aux_sym__tag_list_repeat1,
  [aux_sym_tag_filter_repeat1] = aux_sym_tag_filter_repeat1,
  [aux_sym_lexicon_block_repeat1] = aux_sym_lexicon_block_repeat1,
  [aux_sym_lexicon_line_repeat1] = aux_sym_lexicon_line_repeat1,
  [aux_sym__nl_repeat1] = aux_sym__nl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_start] = {
    .visible = true,
    .named = true,
  },
  [sym_named_pattern_start] = {
    .visible = true,
    .named = true,
  },
  [sym_lexicon_start] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_left_sieve] = {
    .visible = true,
    .named = true,
  },
  [sym_right_sieve] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_lexicon_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_block] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_or] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_line] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_lexicon_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__modifiable_pat_tok] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_token] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_or_neg] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_list] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_distribution_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_distribution] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_filter_segment] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_lexicon] = {
    .visible = true,
    .named = true,
  },
  [sym_lexicon_block] = {
    .visible = true,
    .named = true,
  },
  [sym_lexicon_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__lexicon_side] = {
    .visible = false,
    .named = false,
  },
  [sym_lexicon_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_command] = {
    .visible = true,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tag_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_filter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexicon_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexicon_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__nl_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= '+')))
    : (c <= ':' || (c < '['
      ? (c < '>'
        ? c == '<'
        : c <= '?')
      : (c <= '[' || (c < '|'
        ? c == ']'
        : c <= '|')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead == 'L') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '^') ADVANCE(46);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ']') ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '^') ADVANCE(46);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '(' || ',' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'I') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'X') ADVANCE(11);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < ')' || '+' < lookahead) &&
          lookahead != '?' &&
          lookahead != ']') ADVANCE(84);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_pattern_start);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_named_pattern_start);
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_lexicon_start);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_alias);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_left_sieve);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_right_sieve);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'O') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'X') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '|') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('(' <= lookahead && lookahead <= ',') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(82);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(80);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(78);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(79);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(70);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(69);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(74);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(29);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(28);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(76);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(31);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(72);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(81);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(73);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '(' || ',' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pattern_start] = ACTIONS(1),
    [sym_named_pattern_start] = ACTIONS(1),
    [sym_lexicon_start] = ACTIONS(1),
    [sym_alias] = ACTIONS(1),
    [sym_left_sieve] = ACTIONS(1),
    [sym_right_sieve] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_escaped_char] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(154),
    [sym_pattern_block] = STATE(40),
    [sym_lexicon_block] = STATE(40),
    [sym_alias_command] = STATE(40),
    [sym__nl] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_pattern_start] = ACTIONS(7),
    [sym_named_pattern_start] = ACTIONS(9),
    [sym_lexicon_start] = ACTIONS(11),
    [sym_alias] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(15),
    [sym__ws] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(87), 1,
      sym_pattern_token,
    STATE(104), 1,
      sym_pattern_or,
    ACTIONS(21), 2,
      sym_named_pattern_start,
      sym_alias,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(3), 2,
      sym_pattern_line,
      aux_sym_pattern_block_repeat1,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [52] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      sym_colon,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(87), 1,
      sym_pattern_token,
    STATE(104), 1,
      sym_pattern_or,
    ACTIONS(37), 2,
      sym_named_pattern_start,
      sym_alias,
    ACTIONS(39), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(3), 2,
      sym_pattern_line,
      aux_sym_pattern_block_repeat1,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [104] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(87), 1,
      sym_pattern_token,
    STATE(104), 1,
      sym_pattern_or,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    ACTIONS(59), 2,
      sym_named_pattern_start,
      sym_alias,
    STATE(3), 2,
      sym_pattern_line,
      aux_sym_pattern_block_repeat1,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__nl_repeat1,
    ACTIONS(65), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(63), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__nl_repeat1,
    ACTIONS(72), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(70), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [210] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(87), 1,
      sym_pattern_token,
    STATE(104), 1,
      sym_pattern_or,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(2), 2,
      sym_pattern_line,
      aux_sym_pattern_block_repeat1,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
  [253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__nl_repeat1,
    ACTIONS(78), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(76), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__nl_repeat1,
    ACTIONS(78), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(82), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym__nl_repeat1,
    ACTIONS(84), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(76), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [334] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(87), 1,
      sym_pattern_token,
    STATE(104), 1,
      sym_pattern_or,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(4), 2,
      sym_pattern_line,
      aux_sym_pattern_block_repeat1,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
  [377] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(104), 1,
      sym_pattern_or,
    STATE(109), 1,
      sym_pattern_token,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
  [419] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(104), 1,
      sym_pattern_or,
    STATE(109), 1,
      sym_pattern_token,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
  [458] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_colon,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(60), 1,
      sym_lexicon_reference,
    STATE(63), 1,
      sym__modifiable_pat_tok,
    STATE(104), 1,
      sym_pattern_or,
    STATE(111), 1,
      sym_pattern_token,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(52), 2,
      sym_anonymous_pattern,
      sym_anonymous_lexicon,
  [497] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    ACTIONS(94), 1,
      sym_lexicon_string,
    ACTIONS(96), 1,
      sym_escaped_char,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(90), 2,
      sym_named_pattern_start,
      sym_alias,
    STATE(16), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [529] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_colon,
    ACTIONS(105), 1,
      sym_lexicon_string,
    ACTIONS(108), 1,
      sym_escaped_char,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(100), 2,
      sym_named_pattern_start,
      sym_alias,
    STATE(16), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [581] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    ACTIONS(94), 1,
      sym_lexicon_string,
    ACTIONS(96), 1,
      sym_escaped_char,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(117), 2,
      sym_named_pattern_start,
      sym_alias,
    STATE(16), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [613] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    ACTIONS(94), 1,
      sym_lexicon_string,
    ACTIONS(96), 1,
      sym_escaped_char,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(121), 2,
      sym_named_pattern_start,
      sym_alias,
    STATE(16), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_identifier,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__nl_repeat1,
    ACTIONS(127), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(76), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym__nl_repeat1,
    ACTIONS(129), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(70), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__nl_repeat1,
    ACTIONS(131), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(63), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__nl_repeat1,
    ACTIONS(134), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(76), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__nl_repeat1,
    ACTIONS(134), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(82), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym__nl_repeat1,
    ACTIONS(136), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(80), 6,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym__nl_repeat1,
    ACTIONS(138), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(61), 6,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_number,
    STATE(64), 1,
      sym_tag_filter,
    ACTIONS(141), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym__nl_repeat1,
    ACTIONS(147), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(68), 6,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym__nl_repeat1,
    ACTIONS(149), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(74), 6,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym__nl_repeat1,
    ACTIONS(136), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(74), 6,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_PIPE,
      sym_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_tag_filter,
    ACTIONS(151), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [931] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pattern_start,
    ACTIONS(9), 1,
      sym_named_pattern_start,
    ACTIONS(11), 1,
      sym_lexicon_start,
    ACTIONS(13), 1,
      sym_alias,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(39), 4,
      sym_pattern_block,
      sym_lexicon_block,
      sym_alias_command,
      aux_sym_source_file_repeat1,
  [956] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      sym_tag,
    ACTIONS(161), 1,
      sym__ws,
    STATE(146), 1,
      sym_tag_distribution_operator,
    ACTIONS(155), 2,
      anon_sym_PIPE,
      anon_sym_CARET,
    STATE(118), 3,
      sym__tag_or_neg,
      sym_tag_distribution,
      sym__tag_filter_segment,
  [981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_colon,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      aux_sym__lexicon_side,
    STATE(119), 1,
      sym_tag_setting,
    ACTIONS(169), 2,
      sym_lexicon_string,
      sym_escaped_char,
    ACTIONS(167), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [1006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pattern_start,
    ACTIONS(9), 1,
      sym_named_pattern_start,
    ACTIONS(11), 1,
      sym_lexicon_start,
    ACTIONS(13), 1,
      sym_alias,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(33), 4,
      sym_pattern_block,
      sym_lexicon_block,
      sym_alias_command,
      aux_sym_source_file_repeat1,
  [1031] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(173), 1,
      sym_tag,
    ACTIONS(175), 1,
      sym__ws,
    STATE(146), 1,
      sym_tag_distribution_operator,
    ACTIONS(155), 2,
      anon_sym_PIPE,
      anon_sym_CARET,
    STATE(90), 3,
      sym__tag_or_neg,
      sym_tag_distribution,
      sym__tag_filter_segment,
  [1056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      sym_tag,
    ACTIONS(179), 1,
      sym__ws,
    STATE(146), 1,
      sym_tag_distribution_operator,
    ACTIONS(155), 2,
      anon_sym_PIPE,
      anon_sym_CARET,
    STATE(122), 3,
      sym__tag_or_neg,
      sym_tag_distribution,
      sym__tag_filter_segment,
  [1081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_pattern_start,
    ACTIONS(186), 1,
      sym_named_pattern_start,
    ACTIONS(189), 1,
      sym_lexicon_start,
    ACTIONS(192), 1,
      sym_alias,
    STATE(39), 4,
      sym_pattern_block,
      sym_lexicon_block,
      sym_alias_command,
      aux_sym_source_file_repeat1,
  [1106] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_pattern_start,
    ACTIONS(9), 1,
      sym_named_pattern_start,
    ACTIONS(11), 1,
      sym_lexicon_start,
    ACTIONS(13), 1,
      sym_alias,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(39), 4,
      sym_pattern_block,
      sym_lexicon_block,
      sym_alias_command,
      aux_sym_source_file_repeat1,
  [1131] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      aux_sym__lexicon_side,
    STATE(113), 1,
      sym_tag_setting,
    ACTIONS(169), 2,
      sym_lexicon_string,
      sym_escaped_char,
    ACTIONS(195), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [1169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      aux_sym__lexicon_side,
    STATE(119), 1,
      sym_tag_setting,
    ACTIONS(201), 2,
      sym_lexicon_string,
      sym_escaped_char,
    ACTIONS(167), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [1191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(203), 1,
      sym_tag,
    STATE(146), 1,
      sym_tag_distribution_operator,
    ACTIONS(155), 2,
      anon_sym_PIPE,
      anon_sym_CARET,
    STATE(92), 3,
      sym__tag_or_neg,
      sym_tag_distribution,
      sym__tag_filter_segment,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym__lexicon_side,
    ACTIONS(207), 2,
      sym_lexicon_string,
      sym_escaped_char,
    ACTIONS(205), 5,
      sym_colon,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [1231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      aux_sym__lexicon_side,
    STATE(127), 1,
      sym_tag_setting,
    ACTIONS(212), 2,
      sym_lexicon_string,
      sym_escaped_char,
    ACTIONS(210), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [1253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(71), 1,
      sym_lexicon_reference,
    ACTIONS(214), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(216), 1,
      sym_tag,
    STATE(146), 1,
      sym_tag_distribution_operator,
    ACTIONS(155), 2,
      anon_sym_PIPE,
      anon_sym_CARET,
    STATE(112), 3,
      sym__tag_or_neg,
      sym_tag_distribution,
      sym__tag_filter_segment,
  [1293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      aux_sym__lexicon_side,
    STATE(127), 1,
      sym_tag_setting,
    ACTIONS(169), 2,
      sym_lexicon_string,
      sym_escaped_char,
    ACTIONS(210), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [1315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      sym_tag,
    STATE(146), 1,
      sym_tag_distribution_operator,
    ACTIONS(155), 2,
      anon_sym_PIPE,
      anon_sym_CARET,
    STATE(122), 3,
      sym__tag_or_neg,
      sym_tag_distribution,
      sym__tag_filter_segment,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      sym_named_pattern_start,
      sym_alias,
      sym_lexicon_string,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_colon,
      sym_escaped_char,
  [1353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_tag_filter,
    ACTIONS(222), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym__ws,
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym__ws,
  [1423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
    STATE(15), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym__ws,
  [1457] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
    STATE(19), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
  [1478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_colon,
    ACTIONS(222), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_pattern_operator,
    ACTIONS(240), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym__ws,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym__ws,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 7,
      sym_colon,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(88), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
    STATE(18), 2,
      sym_lexicon_line,
      aux_sym_lexicon_block_repeat1,
  [1609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__nl_repeat1,
    ACTIONS(250), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(74), 3,
      sym_colon,
      sym_lexicon_string,
      sym_escaped_char,
  [1625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    ACTIONS(252), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(134), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym__nl_repeat1,
    ACTIONS(256), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(68), 3,
      sym_colon,
      sym_lexicon_string,
      sym_escaped_char,
  [1673] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    ACTIONS(258), 1,
      sym__ws,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(137), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym__nl_repeat1,
    ACTIONS(260), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(74), 3,
      sym_colon,
      sym_lexicon_string,
      sym_escaped_char,
  [1709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__nl_repeat1,
    ACTIONS(250), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(80), 3,
      sym_colon,
      sym_lexicon_string,
      sym_escaped_char,
  [1725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__nl_repeat1,
    ACTIONS(262), 2,
      anon_sym_LF,
      sym__ws,
    ACTIONS(61), 3,
      sym_colon,
      sym_lexicon_string,
      sym_escaped_char,
  [1741] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      sym_number,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 1,
      sym__ws,
    STATE(57), 1,
      sym__nl,
    STATE(128), 1,
      sym_tag_setting,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [1775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(135), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_colon,
    STATE(35), 1,
      aux_sym__lexicon_side,
    STATE(134), 1,
      sym_lexicon_segment,
    ACTIONS(96), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      sym_tag,
    ACTIONS(273), 1,
      sym__ws,
    STATE(95), 1,
      sym__tag_or_neg,
    STATE(148), 1,
      sym__tag_list,
  [1828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      sym_tag,
    ACTIONS(275), 1,
      sym__ws,
    STATE(95), 1,
      sym__tag_or_neg,
    STATE(150), 1,
      sym__tag_list,
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_named_pattern_start,
    ACTIONS(277), 4,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [1860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 1,
      sym__ws,
    STATE(59), 1,
      sym__nl,
    STATE(110), 1,
      sym_tag_setting,
  [1879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    ACTIONS(286), 1,
      sym__ws,
    STATE(85), 1,
      aux_sym_tag_filter_repeat1,
  [1895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(289), 1,
      sym_tag,
    ACTIONS(291), 1,
      sym__ws,
    STATE(123), 1,
      sym__tag_or_neg,
  [1911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      sym__ws,
    STATE(17), 1,
      sym__nl,
    STATE(89), 1,
      aux_sym_pattern_line_repeat1,
  [1927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      sym__ws,
    STATE(42), 1,
      sym__nl,
    STATE(91), 1,
      aux_sym_lexicon_line_repeat1,
  [1943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      sym__ws,
    STATE(20), 1,
      sym__nl,
    STATE(96), 1,
      aux_sym_pattern_line_repeat1,
  [1959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      sym__ws,
    STATE(97), 1,
      aux_sym_tag_filter_repeat1,
  [1975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      sym__ws,
    STATE(51), 1,
      sym__nl,
    STATE(129), 1,
      aux_sym_lexicon_line_repeat1,
  [1991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      sym__ws,
    STATE(93), 1,
      aux_sym_tag_filter_repeat1,
  [2007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(311), 1,
      sym__ws,
    STATE(85), 1,
      aux_sym_tag_filter_repeat1,
  [2023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      sym_tag,
    STATE(95), 1,
      sym__tag_or_neg,
    STATE(149), 1,
      sym__tag_list,
  [2039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 1,
      sym__ws,
    STATE(107), 1,
      aux_sym__tag_list_repeat1,
  [2055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__ws,
    STATE(96), 1,
      aux_sym_pattern_line_repeat1,
    ACTIONS(319), 2,
      anon_sym_RPAREN,
      anon_sym_LF,
  [2069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      sym__ws,
    STATE(85), 1,
      aux_sym_tag_filter_repeat1,
  [2085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      sym_tag,
    STATE(95), 1,
      sym__tag_or_neg,
    STATE(143), 1,
      sym__tag_list,
  [2101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      sym_tag,
    STATE(116), 1,
      sym__tag_or_neg,
  [2114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      sym__ws,
    STATE(7), 1,
      sym__nl,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__ws,
  [2136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      sym__ws,
    STATE(83), 1,
      sym__nl,
  [2149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      sym__ws,
    STATE(11), 1,
      sym__nl,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym__tag_list_repeat1,
  [2193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym__tag_list_repeat1,
  [2206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [2224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 1,
      sym__ws,
    STATE(68), 1,
      sym__nl,
  [2237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      sym__ws,
    STATE(120), 1,
      aux_sym_pattern_line_repeat1,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__ws,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [2268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__ws,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [2286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__ws,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_RPAREN,
      anon_sym_LF,
      sym__ws,
  [2306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__ws,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [2324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__ws,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_pattern_line_repeat1,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [2346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__ws,
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__ws,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym__tag_list_repeat1,
  [2379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__tag_list_repeat1,
  [2392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__ws,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      sym__ws,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 1,
      sym__ws,
    STATE(59), 1,
      sym__nl,
  [2423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      sym__ws,
    STATE(129), 1,
      aux_sym_lexicon_line_repeat1,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_COMMA,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_COMMA,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(78), 1,
      sym_lexicon_reference,
  [2476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_LF,
      sym__ws,
  [2484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    ACTIONS(384), 1,
      sym__ws,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    ACTIONS(390), 1,
      sym__ws,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_tag,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__ws,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACK,
  [2590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
  [2597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
  [2604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
  [2611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
  [2618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_identifier,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LF,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__ws,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym__ws,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym__ws,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LF,
  [2667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 183,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 419,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 561,
  [SMALL_STATE(18)] = 581,
  [SMALL_STATE(19)] = 613,
  [SMALL_STATE(20)] = 645,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 688,
  [SMALL_STATE(23)] = 711,
  [SMALL_STATE(24)] = 734,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 780,
  [SMALL_STATE(27)] = 802,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 846,
  [SMALL_STATE(30)] = 868,
  [SMALL_STATE(31)] = 890,
  [SMALL_STATE(32)] = 912,
  [SMALL_STATE(33)] = 931,
  [SMALL_STATE(34)] = 956,
  [SMALL_STATE(35)] = 981,
  [SMALL_STATE(36)] = 1006,
  [SMALL_STATE(37)] = 1031,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1081,
  [SMALL_STATE(40)] = 1106,
  [SMALL_STATE(41)] = 1131,
  [SMALL_STATE(42)] = 1153,
  [SMALL_STATE(43)] = 1169,
  [SMALL_STATE(44)] = 1191,
  [SMALL_STATE(45)] = 1213,
  [SMALL_STATE(46)] = 1231,
  [SMALL_STATE(47)] = 1253,
  [SMALL_STATE(48)] = 1271,
  [SMALL_STATE(49)] = 1293,
  [SMALL_STATE(50)] = 1315,
  [SMALL_STATE(51)] = 1337,
  [SMALL_STATE(52)] = 1353,
  [SMALL_STATE(53)] = 1371,
  [SMALL_STATE(54)] = 1384,
  [SMALL_STATE(55)] = 1397,
  [SMALL_STATE(56)] = 1410,
  [SMALL_STATE(57)] = 1423,
  [SMALL_STATE(58)] = 1444,
  [SMALL_STATE(59)] = 1457,
  [SMALL_STATE(60)] = 1478,
  [SMALL_STATE(61)] = 1493,
  [SMALL_STATE(62)] = 1506,
  [SMALL_STATE(63)] = 1519,
  [SMALL_STATE(64)] = 1536,
  [SMALL_STATE(65)] = 1549,
  [SMALL_STATE(66)] = 1562,
  [SMALL_STATE(67)] = 1575,
  [SMALL_STATE(68)] = 1588,
  [SMALL_STATE(69)] = 1609,
  [SMALL_STATE(70)] = 1625,
  [SMALL_STATE(71)] = 1645,
  [SMALL_STATE(72)] = 1657,
  [SMALL_STATE(73)] = 1673,
  [SMALL_STATE(74)] = 1693,
  [SMALL_STATE(75)] = 1709,
  [SMALL_STATE(76)] = 1725,
  [SMALL_STATE(77)] = 1741,
  [SMALL_STATE(78)] = 1763,
  [SMALL_STATE(79)] = 1775,
  [SMALL_STATE(80)] = 1792,
  [SMALL_STATE(81)] = 1809,
  [SMALL_STATE(82)] = 1828,
  [SMALL_STATE(83)] = 1847,
  [SMALL_STATE(84)] = 1860,
  [SMALL_STATE(85)] = 1879,
  [SMALL_STATE(86)] = 1895,
  [SMALL_STATE(87)] = 1911,
  [SMALL_STATE(88)] = 1927,
  [SMALL_STATE(89)] = 1943,
  [SMALL_STATE(90)] = 1959,
  [SMALL_STATE(91)] = 1975,
  [SMALL_STATE(92)] = 1991,
  [SMALL_STATE(93)] = 2007,
  [SMALL_STATE(94)] = 2023,
  [SMALL_STATE(95)] = 2039,
  [SMALL_STATE(96)] = 2055,
  [SMALL_STATE(97)] = 2069,
  [SMALL_STATE(98)] = 2085,
  [SMALL_STATE(99)] = 2101,
  [SMALL_STATE(100)] = 2114,
  [SMALL_STATE(101)] = 2127,
  [SMALL_STATE(102)] = 2136,
  [SMALL_STATE(103)] = 2149,
  [SMALL_STATE(104)] = 2162,
  [SMALL_STATE(105)] = 2171,
  [SMALL_STATE(106)] = 2180,
  [SMALL_STATE(107)] = 2193,
  [SMALL_STATE(108)] = 2206,
  [SMALL_STATE(109)] = 2215,
  [SMALL_STATE(110)] = 2224,
  [SMALL_STATE(111)] = 2237,
  [SMALL_STATE(112)] = 2250,
  [SMALL_STATE(113)] = 2259,
  [SMALL_STATE(114)] = 2268,
  [SMALL_STATE(115)] = 2277,
  [SMALL_STATE(116)] = 2286,
  [SMALL_STATE(117)] = 2297,
  [SMALL_STATE(118)] = 2306,
  [SMALL_STATE(119)] = 2315,
  [SMALL_STATE(120)] = 2324,
  [SMALL_STATE(121)] = 2337,
  [SMALL_STATE(122)] = 2346,
  [SMALL_STATE(123)] = 2355,
  [SMALL_STATE(124)] = 2366,
  [SMALL_STATE(125)] = 2379,
  [SMALL_STATE(126)] = 2392,
  [SMALL_STATE(127)] = 2401,
  [SMALL_STATE(128)] = 2410,
  [SMALL_STATE(129)] = 2423,
  [SMALL_STATE(130)] = 2436,
  [SMALL_STATE(131)] = 2446,
  [SMALL_STATE(132)] = 2456,
  [SMALL_STATE(133)] = 2466,
  [SMALL_STATE(134)] = 2476,
  [SMALL_STATE(135)] = 2484,
  [SMALL_STATE(136)] = 2494,
  [SMALL_STATE(137)] = 2502,
  [SMALL_STATE(138)] = 2512,
  [SMALL_STATE(139)] = 2520,
  [SMALL_STATE(140)] = 2527,
  [SMALL_STATE(141)] = 2534,
  [SMALL_STATE(142)] = 2541,
  [SMALL_STATE(143)] = 2548,
  [SMALL_STATE(144)] = 2555,
  [SMALL_STATE(145)] = 2562,
  [SMALL_STATE(146)] = 2569,
  [SMALL_STATE(147)] = 2576,
  [SMALL_STATE(148)] = 2583,
  [SMALL_STATE(149)] = 2590,
  [SMALL_STATE(150)] = 2597,
  [SMALL_STATE(151)] = 2604,
  [SMALL_STATE(152)] = 2611,
  [SMALL_STATE(153)] = 2618,
  [SMALL_STATE(154)] = 2625,
  [SMALL_STATE(155)] = 2632,
  [SMALL_STATE(156)] = 2639,
  [SMALL_STATE(157)] = 2646,
  [SMALL_STATE(158)] = 2653,
  [SMALL_STATE(159)] = 2660,
  [SMALL_STATE(160)] = 2667,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_block, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_block, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_block_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(104),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(105),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(133),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(14),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(73),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_block, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_block, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nl_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__nl_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__nl_repeat1, 2), SHIFT_REPEAT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nl, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nl, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nl, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nl, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_block, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_block, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexicon_block_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(43),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_line, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_line, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_block, 7),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_block, 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_block, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_block, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_line, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_line, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__nl_repeat1, 2), SHIFT_REPEAT(23),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__nl_repeat1, 2), SHIFT_REPEAT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_reference, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_reference, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_line, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_line, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lexicon_side, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lexicon_side, 2), SHIFT_REPEAT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifiable_pat_tok, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_line, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_line, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifiable_pat_tok, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_filter, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_reference, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lexicon, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_pattern, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_pattern, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_filter, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_filter, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_token, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lexicon, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lexicon, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_filter, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifiable_pat_tok, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__nl_repeat1, 2), SHIFT_REPEAT(76),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_command, 6),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_command, 6),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_filter_repeat1, 2), SHIFT_REPEAT(34),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_filter_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_filter_repeat1, 2), SHIFT_REPEAT(144),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_list, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(13),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_or_neg, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_or, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_list, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_setting, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_filter_repeat1, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_distribution, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_operator, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tag_list_repeat1, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_token, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_setting, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_filter_repeat1, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tag_list_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_list, 3),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tag_list_repeat1, 2), SHIFT_REPEAT(86),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_distribution, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexicon_line_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lexicon_line_repeat1, 2), SHIFT_REPEAT(80),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tag_list_repeat1, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_distribution_operator, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [418] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lexd(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
