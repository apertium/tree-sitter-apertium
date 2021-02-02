#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_pattern_start = 1,
  sym_named_pattern_start = 2,
  sym_lexicon_start = 3,
  sym_alias = 4,
  sym_left_sieve = 5,
  sym_right_sieve = 6,
  sym_colon = 7,
  anon_sym_LF = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  aux_sym_lexicon_line_token1 = 13,
  sym_lexicon_string = 14,
  sym_escaped_char = 15,
  anon_sym_POUND = 16,
  aux_sym_comment_token1 = 17,
  sym_identifier = 18,
  sym_number = 19,
  sym_source_file = 20,
  sym_pattern_block = 21,
  sym_pattern_line = 22,
  sym_pattern_token = 23,
  sym_anonymous_lexicon = 24,
  sym_lexicon_block = 25,
  sym_lexicon_line = 26,
  aux_sym__lexicon_side = 27,
  sym_lexicon_segment = 28,
  sym_comment = 29,
  sym_alias_command = 30,
  sym__empty_line = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_pattern_block_repeat1 = 33,
  aux_sym_pattern_line_repeat1 = 34,
  aux_sym_lexicon_block_repeat1 = 35,
  aux_sym_lexicon_line_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_pattern_start] = "pattern_start",
  [sym_named_pattern_start] = "named_pattern_start",
  [sym_lexicon_start] = "lexicon_start",
  [sym_alias] = "ALIAS",
  [sym_left_sieve] = "left_sieve",
  [sym_right_sieve] = "right_sieve",
  [sym_colon] = "colon",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_lexicon_line_token1] = "lexicon_line_token1",
  [sym_lexicon_string] = "lexicon_string",
  [sym_escaped_char] = "escaped_char",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_pattern_block] = "pattern_block",
  [sym_pattern_line] = "pattern_line",
  [sym_pattern_token] = "pattern_token",
  [sym_anonymous_lexicon] = "anonymous_lexicon",
  [sym_lexicon_block] = "lexicon_block",
  [sym_lexicon_line] = "lexicon_line",
  [aux_sym__lexicon_side] = "_lexicon_side",
  [sym_lexicon_segment] = "lexicon_segment",
  [sym_comment] = "comment",
  [sym_alias_command] = "alias_command",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_pattern_block_repeat1] = "pattern_block_repeat1",
  [aux_sym_pattern_line_repeat1] = "pattern_line_repeat1",
  [aux_sym_lexicon_block_repeat1] = "lexicon_block_repeat1",
  [aux_sym_lexicon_line_repeat1] = "lexicon_line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_pattern_start] = sym_pattern_start,
  [sym_named_pattern_start] = sym_named_pattern_start,
  [sym_lexicon_start] = sym_lexicon_start,
  [sym_alias] = sym_alias,
  [sym_left_sieve] = sym_left_sieve,
  [sym_right_sieve] = sym_right_sieve,
  [sym_colon] = sym_colon,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_lexicon_line_token1] = aux_sym_lexicon_line_token1,
  [sym_lexicon_string] = sym_lexicon_string,
  [sym_escaped_char] = sym_escaped_char,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_pattern_block] = sym_pattern_block,
  [sym_pattern_line] = sym_pattern_line,
  [sym_pattern_token] = sym_pattern_token,
  [sym_anonymous_lexicon] = sym_anonymous_lexicon,
  [sym_lexicon_block] = sym_lexicon_block,
  [sym_lexicon_line] = sym_lexicon_line,
  [aux_sym__lexicon_side] = aux_sym__lexicon_side,
  [sym_lexicon_segment] = sym_lexicon_segment,
  [sym_comment] = sym_comment,
  [sym_alias_command] = sym_alias_command,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_pattern_block_repeat1] = aux_sym_pattern_block_repeat1,
  [aux_sym_pattern_line_repeat1] = aux_sym_pattern_line_repeat1,
  [aux_sym_lexicon_block_repeat1] = aux_sym_lexicon_block_repeat1,
  [aux_sym_lexicon_line_repeat1] = aux_sym_lexicon_line_repeat1,
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
    .named = false,
  },
  [sym_left_sieve] = {
    .visible = true,
    .named = true,
  },
  [sym_right_sieve] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lexicon_line_token1] = {
    .visible = false,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_pattern_block] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_line] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_token] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_command] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
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
  [aux_sym_lexicon_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexicon_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    ('(' <= lookahead && lookahead <= '+') ||
    lookahead == '<' ||
    lookahead == '>' ||
    lookahead == '?' ||
    lookahead == '[' ||
    lookahead == ']' ||
    lookahead == '|';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(11);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < ')' || '+' < lookahead) &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < ')' || '+' < lookahead) &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'X') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(72);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < ')' || '+' < lookahead) &&
          lookahead != '?' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(88);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == 'A') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(11);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_pattern_start);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_pattern_start);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_pattern_start);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_named_pattern_start);
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_named_pattern_start);
      if (lookahead == 'S') ADVANCE(31);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_named_pattern_start);
      if (lookahead == 'S') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_lexicon_start);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_lexicon_start);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_lexicon_start);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_alias);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_left_sieve);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_right_sieve);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_lexicon_line_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'I') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'S') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead == 'X') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_lexicon_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(86);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(84);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(82);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(87);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(74);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(73);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(78);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(33);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(80);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(81);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(76);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(85);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 71},
  [74] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pattern_start] = ACTIONS(1),
    [sym_named_pattern_start] = ACTIONS(1),
    [sym_lexicon_start] = ACTIONS(1),
    [sym_alias] = ACTIONS(1),
    [sym_left_sieve] = ACTIONS(1),
    [sym_right_sieve] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_lexicon_line_token1] = ACTIONS(3),
    [sym_escaped_char] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_pattern_block] = STATE(47),
    [sym_lexicon_block] = STATE(47),
    [sym_comment] = STATE(1),
    [sym_alias_command] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_pattern_start] = ACTIONS(9),
    [sym_named_pattern_start] = ACTIONS(11),
    [sym_lexicon_start] = ACTIONS(13),
    [sym_alias] = ACTIONS(15),
    [aux_sym_lexicon_line_token1] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [2] = {
    [sym_pattern_line] = STATE(14),
    [sym_pattern_token] = STATE(30),
    [sym_anonymous_lexicon] = STATE(38),
    [sym_comment] = STATE(2),
    [sym__empty_line] = STATE(14),
    [aux_sym_pattern_block_repeat1] = STATE(6),
    [aux_sym_pattern_line_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_pattern_start] = ACTIONS(21),
    [sym_named_pattern_start] = ACTIONS(21),
    [sym_lexicon_start] = ACTIONS(21),
    [sym_alias] = ACTIONS(21),
    [sym_left_sieve] = ACTIONS(23),
    [sym_right_sieve] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_lexicon_line_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [3] = {
    [sym_pattern_line] = STATE(14),
    [sym_pattern_token] = STATE(30),
    [sym_anonymous_lexicon] = STATE(38),
    [sym_comment] = STATE(3),
    [sym__empty_line] = STATE(14),
    [aux_sym_pattern_block_repeat1] = STATE(4),
    [aux_sym_pattern_line_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_pattern_start] = ACTIONS(37),
    [sym_named_pattern_start] = ACTIONS(37),
    [sym_lexicon_start] = ACTIONS(37),
    [sym_alias] = ACTIONS(37),
    [sym_left_sieve] = ACTIONS(23),
    [sym_right_sieve] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_lexicon_line_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [4] = {
    [sym_pattern_line] = STATE(14),
    [sym_pattern_token] = STATE(30),
    [sym_anonymous_lexicon] = STATE(38),
    [sym_comment] = STATE(4),
    [sym__empty_line] = STATE(14),
    [aux_sym_pattern_block_repeat1] = STATE(4),
    [aux_sym_pattern_line_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_pattern_start] = ACTIONS(41),
    [sym_named_pattern_start] = ACTIONS(41),
    [sym_lexicon_start] = ACTIONS(41),
    [sym_alias] = ACTIONS(41),
    [sym_left_sieve] = ACTIONS(43),
    [sym_right_sieve] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(52),
    [aux_sym_lexicon_line_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_identifier] = ACTIONS(55),
  },
  [5] = {
    [sym_pattern_line] = STATE(14),
    [sym_pattern_token] = STATE(30),
    [sym_anonymous_lexicon] = STATE(38),
    [sym_comment] = STATE(5),
    [sym__empty_line] = STATE(14),
    [aux_sym_pattern_block_repeat1] = STATE(3),
    [aux_sym_pattern_line_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_pattern_start] = ACTIONS(60),
    [sym_named_pattern_start] = ACTIONS(60),
    [sym_lexicon_start] = ACTIONS(60),
    [sym_alias] = ACTIONS(60),
    [sym_left_sieve] = ACTIONS(23),
    [sym_right_sieve] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_lexicon_line_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [6] = {
    [sym_pattern_line] = STATE(14),
    [sym_pattern_token] = STATE(30),
    [sym_anonymous_lexicon] = STATE(38),
    [sym_comment] = STATE(6),
    [sym__empty_line] = STATE(14),
    [aux_sym_pattern_block_repeat1] = STATE(4),
    [aux_sym_pattern_line_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_pattern_start] = ACTIONS(60),
    [sym_named_pattern_start] = ACTIONS(60),
    [sym_lexicon_start] = ACTIONS(60),
    [sym_alias] = ACTIONS(60),
    [sym_left_sieve] = ACTIONS(23),
    [sym_right_sieve] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_lexicon_line_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_colon,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_lexicon_string,
    ACTIONS(72), 1,
      sym_escaped_char,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_lexicon_block_repeat1,
    STATE(40), 1,
      aux_sym__lexicon_side,
    STATE(60), 1,
      sym_lexicon_segment,
    STATE(17), 2,
      sym_lexicon_line,
      sym__empty_line,
    ACTIONS(64), 4,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [44] = 13,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      sym_colon,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_lexicon_string,
    ACTIONS(72), 1,
      sym_escaped_char,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_lexicon_block_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym__lexicon_side,
    STATE(60), 1,
      sym_lexicon_segment,
    STATE(17), 2,
      sym_lexicon_line,
      sym__empty_line,
    ACTIONS(76), 4,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [88] = 13,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      sym_colon,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_lexicon_string,
    ACTIONS(72), 1,
      sym_escaped_char,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_lexicon_block_repeat1,
    STATE(40), 1,
      aux_sym__lexicon_side,
    STATE(60), 1,
      sym_lexicon_segment,
    STATE(17), 2,
      sym_lexicon_line,
      sym__empty_line,
    ACTIONS(80), 4,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [132] = 12,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym_colon,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      sym_lexicon_string,
    ACTIONS(95), 1,
      sym_escaped_char,
    STATE(40), 1,
      aux_sym__lexicon_side,
    STATE(60), 1,
      sym_lexicon_segment,
    STATE(10), 2,
      sym_comment,
      aux_sym_lexicon_block_repeat1,
    STATE(17), 2,
      sym_lexicon_line,
      sym__empty_line,
    ACTIONS(84), 4,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [174] = 13,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_colon,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_lexicon_string,
    ACTIONS(72), 1,
      sym_escaped_char,
    STATE(9), 1,
      aux_sym_lexicon_block_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym__lexicon_side,
    STATE(60), 1,
      sym_lexicon_segment,
    STATE(17), 2,
      sym_lexicon_line,
      sym__empty_line,
    ACTIONS(64), 4,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [218] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(100), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_identifier,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [243] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(104), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_identifier,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [268] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(108), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_identifier,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [293] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      sym_colon,
      anon_sym_LF,
      sym_escaped_char,
    ACTIONS(112), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_lexicon_string,
  [316] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      sym_colon,
      anon_sym_LF,
      sym_escaped_char,
    ACTIONS(104), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_lexicon_string,
  [339] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      sym_colon,
      anon_sym_LF,
      sym_escaped_char,
    ACTIONS(116), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_lexicon_string,
  [362] = 11,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(18), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_pattern_line_repeat1,
    STATE(32), 1,
      sym_pattern_token,
    STATE(33), 1,
      sym_anonymous_lexicon,
    ACTIONS(118), 2,
      sym_left_sieve,
      sym_right_sieve,
  [397] = 11,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_pattern_line_repeat1,
    STATE(30), 1,
      sym_pattern_token,
    STATE(38), 1,
      sym_anonymous_lexicon,
    ACTIONS(23), 2,
      sym_left_sieve,
      sym_right_sieve,
  [432] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      sym_colon,
      anon_sym_LF,
      sym_escaped_char,
    ACTIONS(132), 5,
      sym_pattern_start,
      sym_named_pattern_start,
      sym_lexicon_start,
      sym_alias,
      sym_lexicon_string,
  [455] = 10,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(32), 1,
      sym_pattern_token,
    STATE(33), 1,
      sym_anonymous_lexicon,
    ACTIONS(134), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(21), 2,
      sym_comment,
      aux_sym_pattern_line_repeat1,
  [488] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_pattern_start,
    ACTIONS(11), 1,
      sym_named_pattern_start,
    ACTIONS(13), 1,
      sym_lexicon_start,
    ACTIONS(15), 1,
      sym_alias,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 3,
      sym_pattern_block,
      sym_lexicon_block,
      sym_alias_command,
  [521] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_pattern_start,
    ACTIONS(155), 1,
      sym_named_pattern_start,
    ACTIONS(158), 1,
      sym_lexicon_start,
    ACTIONS(161), 1,
      sym_alias,
    STATE(23), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(47), 3,
      sym_pattern_block,
      sym_lexicon_block,
      sym_alias_command,
  [552] = 11,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_pattern_line_repeat1,
    STATE(32), 1,
      sym_pattern_token,
    STATE(33), 1,
      sym_anonymous_lexicon,
    ACTIONS(118), 2,
      sym_left_sieve,
      sym_right_sieve,
  [587] = 11,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_pattern_line_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(32), 1,
      sym_pattern_token,
    STATE(33), 1,
      sym_anonymous_lexicon,
    ACTIONS(118), 2,
      sym_left_sieve,
      sym_right_sieve,
  [622] = 10,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(30), 1,
      sym_pattern_token,
    STATE(38), 1,
      sym_anonymous_lexicon,
    ACTIONS(168), 2,
      sym_left_sieve,
      sym_right_sieve,
    STATE(26), 2,
      sym_comment,
      aux_sym_pattern_line_repeat1,
  [655] = 11,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_pattern_line_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(32), 1,
      sym_pattern_token,
    STATE(33), 1,
      sym_anonymous_lexicon,
    ACTIONS(118), 2,
      sym_left_sieve,
      sym_right_sieve,
  [690] = 6,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      sym_number,
    STATE(28), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(182), 4,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LBRACK,
  [713] = 6,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      sym_number,
    STATE(29), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(182), 4,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [736] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(30), 1,
      sym_comment,
    ACTIONS(186), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [756] = 5,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(31), 1,
      sym_comment,
    ACTIONS(190), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [776] = 5,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(32), 1,
      sym_comment,
    ACTIONS(186), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [796] = 5,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(33), 1,
      sym_comment,
    ACTIONS(182), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [816] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(34), 1,
      sym_comment,
    ACTIONS(190), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [836] = 5,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
    ACTIONS(194), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [856] = 5,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(36), 1,
      sym_comment,
    ACTIONS(198), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [876] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
    ACTIONS(198), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [896] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(38), 1,
      sym_comment,
    ACTIONS(182), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [916] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(39), 1,
      sym_comment,
    ACTIONS(194), 5,
      sym_left_sieve,
      sym_right_sieve,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [936] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_colon,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      aux_sym_lexicon_line_token1,
    STATE(40), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__lexicon_side,
    ACTIONS(72), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [959] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(208), 2,
      sym_colon,
      anon_sym_RBRACK,
    ACTIONS(210), 2,
      sym_lexicon_string,
      sym_escaped_char,
    STATE(41), 2,
      aux_sym__lexicon_side,
      sym_comment,
  [978] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(215), 1,
      sym_named_pattern_start,
    STATE(42), 1,
      sym_comment,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [997] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(217), 1,
      sym_colon,
    STATE(43), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym__lexicon_side,
    STATE(66), 1,
      sym_lexicon_segment,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1020] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(66), 1,
      sym_colon,
    STATE(40), 1,
      aux_sym__lexicon_side,
    STATE(44), 1,
      sym_comment,
    STATE(63), 1,
      sym_lexicon_segment,
    ACTIONS(72), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1043] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    ACTIONS(221), 1,
      sym_colon,
    STATE(41), 1,
      aux_sym__lexicon_side,
    STATE(45), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1066] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(208), 2,
      sym_colon,
      anon_sym_LF,
    ACTIONS(225), 2,
      sym_lexicon_string,
      sym_escaped_char,
    STATE(46), 2,
      aux_sym__lexicon_side,
      sym_comment,
  [1085] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(230), 1,
      sym_named_pattern_start,
    STATE(47), 1,
      sym_comment,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym_pattern_start,
      sym_lexicon_start,
      sym_alias,
  [1104] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(217), 1,
      sym_colon,
    STATE(45), 1,
      aux_sym__lexicon_side,
    STATE(48), 1,
      sym_comment,
    STATE(71), 1,
      sym_lexicon_segment,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1127] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__lexicon_side,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1147] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      aux_sym_lexicon_line_token1,
    STATE(50), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__lexicon_side,
    ACTIONS(72), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1167] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      aux_sym_lexicon_line_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(236), 4,
      sym_colon,
      anon_sym_LF,
      sym_lexicon_string,
      sym_escaped_char,
  [1183] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym__lexicon_side,
    STATE(52), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1203] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym__lexicon_side,
    STATE(53), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1223] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      aux_sym_lexicon_line_token1,
    STATE(46), 1,
      aux_sym__lexicon_side,
    STATE(54), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1243] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      aux_sym_lexicon_line_token1,
    STATE(46), 1,
      aux_sym__lexicon_side,
    STATE(55), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1263] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__lexicon_side,
    STATE(56), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1283] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(236), 4,
      sym_colon,
      anon_sym_RBRACK,
      sym_lexicon_string,
      sym_escaped_char,
  [1299] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      aux_sym_lexicon_line_token1,
    STATE(54), 1,
      aux_sym__lexicon_side,
    STATE(58), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_lexicon_string,
      sym_escaped_char,
  [1319] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym_lexicon_line_token1,
    STATE(59), 2,
      sym_comment,
      aux_sym_lexicon_line_repeat1,
  [1333] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(251), 1,
      aux_sym_lexicon_line_token1,
    STATE(60), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_lexicon_line_repeat1,
  [1349] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(253), 1,
      anon_sym_LF,
    STATE(59), 1,
      aux_sym_lexicon_line_repeat1,
    STATE(61), 1,
      sym_comment,
  [1365] = 5,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      sym_number,
    STATE(62), 1,
      sym_comment,
  [1381] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      aux_sym_lexicon_line_token1,
    STATE(63), 1,
      sym_comment,
  [1394] = 4,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym_comment,
  [1407] = 4,
    ACTIONS(3), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_comment,
  [1420] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_comment,
  [1433] = 4,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
  [1446] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_comment,
  [1459] = 4,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [1472] = 4,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
  [1485] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_comment,
  [1498] = 4,
    ACTIONS(17), 1,
      aux_sym_lexicon_line_token1,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
  [1511] = 1,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
  [1515] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 293,
  [SMALL_STATE(16)] = 316,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 362,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 432,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 488,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 587,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 655,
  [SMALL_STATE(28)] = 690,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 736,
  [SMALL_STATE(31)] = 756,
  [SMALL_STATE(32)] = 776,
  [SMALL_STATE(33)] = 796,
  [SMALL_STATE(34)] = 816,
  [SMALL_STATE(35)] = 836,
  [SMALL_STATE(36)] = 856,
  [SMALL_STATE(37)] = 876,
  [SMALL_STATE(38)] = 896,
  [SMALL_STATE(39)] = 916,
  [SMALL_STATE(40)] = 936,
  [SMALL_STATE(41)] = 959,
  [SMALL_STATE(42)] = 978,
  [SMALL_STATE(43)] = 997,
  [SMALL_STATE(44)] = 1020,
  [SMALL_STATE(45)] = 1043,
  [SMALL_STATE(46)] = 1066,
  [SMALL_STATE(47)] = 1085,
  [SMALL_STATE(48)] = 1104,
  [SMALL_STATE(49)] = 1127,
  [SMALL_STATE(50)] = 1147,
  [SMALL_STATE(51)] = 1167,
  [SMALL_STATE(52)] = 1183,
  [SMALL_STATE(53)] = 1203,
  [SMALL_STATE(54)] = 1223,
  [SMALL_STATE(55)] = 1243,
  [SMALL_STATE(56)] = 1263,
  [SMALL_STATE(57)] = 1283,
  [SMALL_STATE(58)] = 1299,
  [SMALL_STATE(59)] = 1319,
  [SMALL_STATE(60)] = 1333,
  [SMALL_STATE(61)] = 1349,
  [SMALL_STATE(62)] = 1365,
  [SMALL_STATE(63)] = 1381,
  [SMALL_STATE(64)] = 1394,
  [SMALL_STATE(65)] = 1407,
  [SMALL_STATE(66)] = 1420,
  [SMALL_STATE(67)] = 1433,
  [SMALL_STATE(68)] = 1446,
  [SMALL_STATE(69)] = 1459,
  [SMALL_STATE(70)] = 1472,
  [SMALL_STATE(71)] = 1485,
  [SMALL_STATE(72)] = 1498,
  [SMALL_STATE(73)] = 1511,
  [SMALL_STATE(74)] = 1515,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_block, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_block, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_block, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_block, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_block_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(18),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(43),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_block_repeat1, 2), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_block, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_block, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_block, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_block, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_block, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_block, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_block, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_block, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexicon_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(58),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(16),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(51),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 2), SHIFT_REPEAT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_line, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_line, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_block_repeat1, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_block_repeat1, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_line, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_line, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexicon_block_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexicon_block_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_line, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_line, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(33),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(24),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(48),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(38),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(18),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(43),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_line_repeat1, 2), SHIFT_REPEAT(28),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_token, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_token, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_line_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_line_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_token, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_token, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lexicon, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lexicon, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_token, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_token, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_segment, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lexicon_side, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lexicon_side, 2), SHIFT_REPEAT(57),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_command, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_command, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lexicon_side, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lexicon_side, 2), SHIFT_REPEAT(51),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_segment, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lexicon_side, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lexicon_side, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexicon_segment, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lexicon_segment, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lexicon_line_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lexicon_line_repeat1, 2), SHIFT_REPEAT(44),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lexicon_line_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
