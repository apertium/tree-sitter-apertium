#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_semicolon = 1,
  sym_alphabet_header = 2,
  sym_sets_header = 3,
  sym_eq = 4,
  sym_rules_header = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_LT_EQ_GT = 8,
  anon_sym_SLASH_LT_EQ = 9,
  sym_rule_name = 10,
  sym_locus = 11,
  sym_lpar = 12,
  sym_rpar = 13,
  sym_prefix_op = 14,
  sym_suffix_op = 15,
  sym_ignore_op = 16,
  sym_bool_op = 17,
  sym_replace_op = 18,
  sym_compose_op = 19,
  sym_symbol = 20,
  sym_symbol_pair = 21,
  sym_comment = 22,
  sym_source_file = 23,
  sym_alphabet = 24,
  sym_sets = 25,
  sym_set = 26,
  sym_rules = 27,
  sym_arrow = 28,
  sym_rule = 29,
  sym_context = 30,
  sym_pattern = 31,
  aux_sym_alphabet_repeat1 = 32,
  aux_sym_sets_repeat1 = 33,
  aux_sym_rules_repeat1 = 34,
  aux_sym_rule_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_semicolon] = "semicolon",
  [sym_alphabet_header] = "alphabet_header",
  [sym_sets_header] = "sets_header",
  [sym_eq] = "eq",
  [sym_rules_header] = "rules_header",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_SLASH_LT_EQ] = "/<=",
  [sym_rule_name] = "rule_name",
  [sym_locus] = "locus",
  [sym_lpar] = "lpar",
  [sym_rpar] = "rpar",
  [sym_prefix_op] = "prefix_op",
  [sym_suffix_op] = "suffix_op",
  [sym_ignore_op] = "ignore_op",
  [sym_bool_op] = "bool_op",
  [sym_replace_op] = "replace_op",
  [sym_compose_op] = "compose_op",
  [sym_symbol] = "symbol",
  [sym_symbol_pair] = "symbol_pair",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_alphabet] = "alphabet",
  [sym_sets] = "sets",
  [sym_set] = "set",
  [sym_rules] = "rules",
  [sym_arrow] = "arrow",
  [sym_rule] = "rule",
  [sym_context] = "context",
  [sym_pattern] = "pattern",
  [aux_sym_alphabet_repeat1] = "alphabet_repeat1",
  [aux_sym_sets_repeat1] = "sets_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_semicolon] = sym_semicolon,
  [sym_alphabet_header] = sym_alphabet_header,
  [sym_sets_header] = sym_sets_header,
  [sym_eq] = sym_eq,
  [sym_rules_header] = sym_rules_header,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_SLASH_LT_EQ] = anon_sym_SLASH_LT_EQ,
  [sym_rule_name] = sym_rule_name,
  [sym_locus] = sym_locus,
  [sym_lpar] = sym_lpar,
  [sym_rpar] = sym_rpar,
  [sym_prefix_op] = sym_prefix_op,
  [sym_suffix_op] = sym_suffix_op,
  [sym_ignore_op] = sym_ignore_op,
  [sym_bool_op] = sym_bool_op,
  [sym_replace_op] = sym_replace_op,
  [sym_compose_op] = sym_compose_op,
  [sym_symbol] = sym_symbol,
  [sym_symbol_pair] = sym_symbol_pair,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_alphabet] = sym_alphabet,
  [sym_sets] = sym_sets,
  [sym_set] = sym_set,
  [sym_rules] = sym_rules,
  [sym_arrow] = sym_arrow,
  [sym_rule] = sym_rule,
  [sym_context] = sym_context,
  [sym_pattern] = sym_pattern,
  [aux_sym_alphabet_repeat1] = aux_sym_alphabet_repeat1,
  [aux_sym_sets_repeat1] = aux_sym_sets_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_alphabet_header] = {
    .visible = true,
    .named = true,
  },
  [sym_sets_header] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_rules_header] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_locus] = {
    .visible = true,
    .named = true,
  },
  [sym_lpar] = {
    .visible = true,
    .named = true,
  },
  [sym_rpar] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_suffix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_ignore_op] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_op] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_op] = {
    .visible = true,
    .named = true,
  },
  [sym_compose_op] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_alphabet] = {
    .visible = true,
    .named = true,
  },
  [sym_sets] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alphabet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(31);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(57);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(61);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(57);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(57);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead) &&
          lookahead != ']') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'r' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(67);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_alphabet_header);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_sets_header);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_rule_name);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lpar);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_rpar);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_suffix_op);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ignore_op);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ignore_op);
      if (lookahead == '<') ADVANCE(15);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_bool_op);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_bool_op);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_replace_op);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_compose_op);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol_pair);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '$' || '=' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_alphabet_header] = ACTIONS(1),
    [sym_sets_header] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_rules_header] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_SLASH_LT_EQ] = ACTIONS(1),
    [sym_rule_name] = ACTIONS(1),
    [sym_locus] = ACTIONS(1),
    [sym_lpar] = ACTIONS(1),
    [sym_rpar] = ACTIONS(1),
    [sym_prefix_op] = ACTIONS(1),
    [sym_suffix_op] = ACTIONS(1),
    [sym_ignore_op] = ACTIONS(1),
    [sym_bool_op] = ACTIONS(1),
    [sym_compose_op] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym_alphabet] = STATE(59),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_bool_op,
    ACTIONS(19), 1,
      sym_replace_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 3,
      sym_semicolon,
      sym_rpar,
      sym_compose_op,
  [34] = 9,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_bool_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 4,
      sym_semicolon,
      sym_rpar,
      sym_replace_op,
      sym_compose_op,
  [66] = 9,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_bool_op,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 4,
      sym_semicolon,
      sym_rpar,
      sym_replace_op,
      sym_compose_op,
  [98] = 5,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(25), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 7,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [122] = 6,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(29), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(27), 6,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
  [148] = 4,
    ACTIONS(23), 1,
      sym_comment,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(29), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(27), 8,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [170] = 11,
    ACTIONS(7), 1,
      sym_compose_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_locus,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      sym_suffix_op,
    ACTIONS(37), 1,
      sym_ignore_op,
    ACTIONS(39), 1,
      sym_bool_op,
    ACTIONS(41), 1,
      sym_replace_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [205] = 11,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_bool_op,
    ACTIONS(19), 1,
      sym_replace_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_rpar,
    ACTIONS(47), 1,
      sym_compose_op,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [240] = 11,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_bool_op,
    ACTIONS(19), 1,
      sym_replace_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_compose_op,
    ACTIONS(49), 1,
      sym_rpar,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [275] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 8,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [294] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(29), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(27), 8,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [313] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(53), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 8,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [332] = 11,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      sym_suffix_op,
    ACTIONS(37), 1,
      sym_ignore_op,
    ACTIONS(39), 1,
      sym_bool_op,
    ACTIONS(41), 1,
      sym_replace_op,
    ACTIONS(55), 1,
      sym_locus,
    ACTIONS(57), 1,
      sym_compose_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [367] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_locus,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      sym_suffix_op,
    ACTIONS(37), 1,
      sym_ignore_op,
    ACTIONS(39), 1,
      sym_bool_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(7), 2,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [400] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      sym_suffix_op,
    ACTIONS(37), 1,
      sym_ignore_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(7), 2,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(25), 2,
      sym_locus,
      sym_bool_op,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [431] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_suffix_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(25), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 5,
      sym_lpar,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [454] = 11,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_bool_op,
    ACTIONS(19), 1,
      sym_replace_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_compose_op,
    ACTIONS(59), 1,
      sym_semicolon,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [489] = 11,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_bool_op,
    ACTIONS(19), 1,
      sym_replace_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_compose_op,
    ACTIONS(61), 1,
      sym_semicolon,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [524] = 4,
    ACTIONS(23), 1,
      sym_comment,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(29), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(27), 6,
      sym_lpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [545] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_suffix_op,
    ACTIONS(37), 1,
      sym_ignore_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(27), 4,
      sym_lpar,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(29), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
  [570] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 6,
      sym_lpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [588] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_rule_name,
    ACTIONS(67), 1,
      sym_locus,
    ACTIONS(70), 1,
      sym_lpar,
    ACTIONS(73), 1,
      sym_prefix_op,
    STATE(14), 1,
      sym_pattern,
    ACTIONS(76), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(23), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [618] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(29), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(27), 6,
      sym_lpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [636] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(53), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 6,
      sym_lpar,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
  [654] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_rule_name,
    ACTIONS(83), 1,
      sym_locus,
    STATE(14), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(23), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [684] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    ACTIONS(83), 1,
      sym_locus,
    STATE(14), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(26), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [708] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      sym_lpar,
      sym_prefix_op,
    ACTIONS(87), 4,
      sym_rule_name,
      sym_locus,
      sym_symbol,
      sym_symbol_pair,
  [723] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      sym_lpar,
      sym_prefix_op,
    ACTIONS(91), 4,
      sym_rule_name,
      sym_locus,
      sym_symbol,
      sym_symbol_pair,
  [738] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      sym_lpar,
      sym_prefix_op,
    ACTIONS(95), 4,
      sym_rule_name,
      sym_locus,
      sym_symbol,
      sym_symbol_pair,
  [753] = 6,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_semicolon,
    STATE(19), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [773] = 6,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_semicolon,
    STATE(18), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [793] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [810] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    STATE(20), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [827] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(9), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [844] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [861] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [878] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    STATE(15), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [895] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_prefix_op,
    STATE(8), 1,
      sym_pattern,
    ACTIONS(43), 2,
      sym_symbol,
      sym_symbol_pair,
  [912] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(10), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [929] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_lpar,
      sym_prefix_op,
    ACTIONS(99), 3,
      sym_locus,
      sym_symbol,
      sym_symbol_pair,
  [942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LT_EQ,
    STATE(27), 1,
      sym_arrow,
    ACTIONS(103), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [957] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(4), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [974] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(2), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [991] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [1008] = 5,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_comment,
    STATE(5), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_symbol,
      sym_symbol_pair,
  [1025] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_rules_header,
    ACTIONS(109), 1,
      sym_symbol,
    STATE(52), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym_rule_name,
    STATE(48), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1053] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_semicolon,
    STATE(51), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(118), 2,
      sym_symbol,
      sym_symbol_pair,
  [1067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      sym_rule_name,
    STATE(48), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1081] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_semicolon,
    STATE(51), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(126), 2,
      sym_symbol,
      sym_symbol_pair,
  [1095] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_rules_header,
    ACTIONS(131), 1,
      sym_symbol,
    STATE(52), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1109] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_semicolon,
    STATE(51), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(118), 2,
      sym_symbol,
      sym_symbol_pair,
  [1123] = 3,
    ACTIONS(23), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(136), 2,
      sym_symbol,
      sym_symbol_pair,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_rule_name,
    STATE(50), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1145] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_symbol,
    STATE(47), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1156] = 3,
    ACTIONS(23), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(138), 2,
      sym_symbol,
      sym_symbol_pair,
  [1167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_rules_header,
    STATE(62), 1,
      sym_rules,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_sets_header,
    STATE(58), 1,
      sym_sets,
  [1187] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_rules_header,
      sym_symbol,
  [1195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_eq,
  [1202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_sets_header,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [1223] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_symbol_pair,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 367,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 454,
  [SMALL_STATE(19)] = 489,
  [SMALL_STATE(20)] = 524,
  [SMALL_STATE(21)] = 545,
  [SMALL_STATE(22)] = 570,
  [SMALL_STATE(23)] = 588,
  [SMALL_STATE(24)] = 618,
  [SMALL_STATE(25)] = 636,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 723,
  [SMALL_STATE(30)] = 738,
  [SMALL_STATE(31)] = 753,
  [SMALL_STATE(32)] = 773,
  [SMALL_STATE(33)] = 793,
  [SMALL_STATE(34)] = 810,
  [SMALL_STATE(35)] = 827,
  [SMALL_STATE(36)] = 844,
  [SMALL_STATE(37)] = 861,
  [SMALL_STATE(38)] = 878,
  [SMALL_STATE(39)] = 895,
  [SMALL_STATE(40)] = 912,
  [SMALL_STATE(41)] = 929,
  [SMALL_STATE(42)] = 942,
  [SMALL_STATE(43)] = 957,
  [SMALL_STATE(44)] = 974,
  [SMALL_STATE(45)] = 991,
  [SMALL_STATE(46)] = 1008,
  [SMALL_STATE(47)] = 1025,
  [SMALL_STATE(48)] = 1039,
  [SMALL_STATE(49)] = 1053,
  [SMALL_STATE(50)] = 1067,
  [SMALL_STATE(51)] = 1081,
  [SMALL_STATE(52)] = 1095,
  [SMALL_STATE(53)] = 1109,
  [SMALL_STATE(54)] = 1123,
  [SMALL_STATE(55)] = 1134,
  [SMALL_STATE(56)] = 1145,
  [SMALL_STATE(57)] = 1156,
  [SMALL_STATE(58)] = 1167,
  [SMALL_STATE(59)] = 1177,
  [SMALL_STATE(60)] = 1187,
  [SMALL_STATE(61)] = 1195,
  [SMALL_STATE(62)] = 1202,
  [SMALL_STATE(63)] = 1209,
  [SMALL_STATE(64)] = 1216,
  [SMALL_STATE(65)] = 1223,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(35),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(34),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(65),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(51),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2), SHIFT_REPEAT(61),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twolc(void) {
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
