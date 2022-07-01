#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_semicolon = 1,
  sym_alphabet_header = 2,
  sym_sets_header = 3,
  sym_eq = 4,
  sym_definitions_header = 5,
  sym_rules_header = 6,
  anon_sym_EQ_GT = 7,
  anon_sym_LT_EQ = 8,
  anon_sym_LT_EQ_GT = 9,
  anon_sym_SLASH_LT_EQ = 10,
  sym_rule_name = 11,
  sym_locus = 12,
  sym_except = 13,
  sym_where = 14,
  anon_sym_mixed = 15,
  anon_sym_matched = 16,
  sym_in_keyword = 17,
  sym_lpar = 18,
  sym_rpar = 19,
  sym_loptional = 20,
  sym_roptional = 21,
  sym_prefix_op = 22,
  sym_suffix_op = 23,
  sym_ignore_op = 24,
  sym_bool_op = 25,
  sym_replace_op = 26,
  sym_compose_op = 27,
  sym_word_boundary = 28,
  sym_any = 29,
  sym_symbol = 30,
  sym__imm_sym = 31,
  sym_colon = 32,
  anon_sym_COLON = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym_alphabet = 36,
  sym_sets = 37,
  sym_set = 38,
  sym_definitions = 39,
  sym_definition = 40,
  sym_rules = 41,
  sym_arrow = 42,
  sym_rule = 43,
  sym_context = 44,
  sym_variable_keyword = 45,
  sym_variables = 46,
  sym_pattern = 47,
  sym_symbol_pair = 48,
  aux_sym_alphabet_repeat1 = 49,
  aux_sym_sets_repeat1 = 50,
  aux_sym_definitions_repeat1 = 51,
  aux_sym_rules_repeat1 = 52,
  aux_sym_rule_repeat1 = 53,
  aux_sym_variables_repeat1 = 54,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_semicolon] = "semicolon",
  [sym_alphabet_header] = "alphabet_header",
  [sym_sets_header] = "sets_header",
  [sym_eq] = "eq",
  [sym_definitions_header] = "definitions_header",
  [sym_rules_header] = "rules_header",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_SLASH_LT_EQ] = "/<=",
  [sym_rule_name] = "rule_name",
  [sym_locus] = "locus",
  [sym_except] = "except",
  [sym_where] = "where",
  [anon_sym_mixed] = "mixed",
  [anon_sym_matched] = "matched",
  [sym_in_keyword] = "in_keyword",
  [sym_lpar] = "lpar",
  [sym_rpar] = "rpar",
  [sym_loptional] = "loptional",
  [sym_roptional] = "roptional",
  [sym_prefix_op] = "prefix_op",
  [sym_suffix_op] = "suffix_op",
  [sym_ignore_op] = "ignore_op",
  [sym_bool_op] = "bool_op",
  [sym_replace_op] = "replace_op",
  [sym_compose_op] = "compose_op",
  [sym_word_boundary] = "word_boundary",
  [sym_any] = "any",
  [sym_symbol] = "symbol",
  [sym__imm_sym] = "symbol",
  [sym_colon] = "colon",
  [anon_sym_COLON] = "colon",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_alphabet] = "alphabet",
  [sym_sets] = "sets",
  [sym_set] = "set",
  [sym_definitions] = "definitions",
  [sym_definition] = "definition",
  [sym_rules] = "rules",
  [sym_arrow] = "arrow",
  [sym_rule] = "rule",
  [sym_context] = "context",
  [sym_variable_keyword] = "variable_keyword",
  [sym_variables] = "variables",
  [sym_pattern] = "pattern",
  [sym_symbol_pair] = "symbol_pair",
  [aux_sym_alphabet_repeat1] = "alphabet_repeat1",
  [aux_sym_sets_repeat1] = "sets_repeat1",
  [aux_sym_definitions_repeat1] = "definitions_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_variables_repeat1] = "variables_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_semicolon] = sym_semicolon,
  [sym_alphabet_header] = sym_alphabet_header,
  [sym_sets_header] = sym_sets_header,
  [sym_eq] = sym_eq,
  [sym_definitions_header] = sym_definitions_header,
  [sym_rules_header] = sym_rules_header,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_SLASH_LT_EQ] = anon_sym_SLASH_LT_EQ,
  [sym_rule_name] = sym_rule_name,
  [sym_locus] = sym_locus,
  [sym_except] = sym_except,
  [sym_where] = sym_where,
  [anon_sym_mixed] = anon_sym_mixed,
  [anon_sym_matched] = anon_sym_matched,
  [sym_in_keyword] = sym_in_keyword,
  [sym_lpar] = sym_lpar,
  [sym_rpar] = sym_rpar,
  [sym_loptional] = sym_loptional,
  [sym_roptional] = sym_roptional,
  [sym_prefix_op] = sym_prefix_op,
  [sym_suffix_op] = sym_suffix_op,
  [sym_ignore_op] = sym_ignore_op,
  [sym_bool_op] = sym_bool_op,
  [sym_replace_op] = sym_replace_op,
  [sym_compose_op] = sym_compose_op,
  [sym_word_boundary] = sym_word_boundary,
  [sym_any] = sym_any,
  [sym_symbol] = sym_symbol,
  [sym__imm_sym] = sym_symbol,
  [sym_colon] = sym_colon,
  [anon_sym_COLON] = sym_colon,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_alphabet] = sym_alphabet,
  [sym_sets] = sym_sets,
  [sym_set] = sym_set,
  [sym_definitions] = sym_definitions,
  [sym_definition] = sym_definition,
  [sym_rules] = sym_rules,
  [sym_arrow] = sym_arrow,
  [sym_rule] = sym_rule,
  [sym_context] = sym_context,
  [sym_variable_keyword] = sym_variable_keyword,
  [sym_variables] = sym_variables,
  [sym_pattern] = sym_pattern,
  [sym_symbol_pair] = sym_symbol_pair,
  [aux_sym_alphabet_repeat1] = aux_sym_alphabet_repeat1,
  [aux_sym_sets_repeat1] = aux_sym_sets_repeat1,
  [aux_sym_definitions_repeat1] = aux_sym_definitions_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_variables_repeat1] = aux_sym_variables_repeat1,
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
  [sym_definitions_header] = {
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
  [sym_except] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matched] = {
    .visible = true,
    .named = false,
  },
  [sym_in_keyword] = {
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
  [sym_loptional] = {
    .visible = true,
    .named = true,
  },
  [sym_roptional] = {
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
  [sym_word_boundary] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__imm_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [sym_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
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
  [sym_variable_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_pair] = {
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
  [aux_sym_definitions_repeat1] = {
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
  [aux_sym_variables_repeat1] = {
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

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '/' || (c < '['
      ? (c < '?'
        ? (c >= ':' && c <= '=')
        : c <= '?')
      : (c <= '_' || (c < '~'
        ? c == '|'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '/' || (c < '['
      ? (c < '?'
        ? (c >= ':' && c <= '=')
        : c <= '?')
      : (c <= '_' || (c < '~'
        ? c == '|'
        : c <= '~')))));
}

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < '$'
        ? c == '"'
        : c <= '/')))
    : (c <= '=' || (c < '|'
      ? (c < '['
        ? c == '?'
        : c <= '_')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(107);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ',' < lookahead) &&
          lookahead != '<') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(107);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ',' < lookahead) &&
          lookahead != '<') ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '&' || '/' < lookahead) &&
          (lookahead < ';' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '$' || '.' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(146);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '$' || '/' < lookahead) &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(146);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '$' || '/' < lookahead) &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(146);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '$' || '/' < lookahead) &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(146);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(147);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(107);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ',' < lookahead) &&
          lookahead != '<') ADVANCE(148);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(147);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '$' || '.' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(148);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'r' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (lookahead != 0 &&
          (lookahead < '&' || '-' < lookahead) &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(146);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_alphabet_header);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_sets_header);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_definitions_header);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_definitions_header);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_rule_name);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_except);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_except);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_where);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_matched);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_matched);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_in_keyword);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_lpar);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_rpar);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_loptional);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_roptional);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_suffix_op);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_suffix_op);
      if (lookahead == ',') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ignore_op);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ignore_op);
      if (lookahead == '<') ADVANCE(20);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bool_op);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bool_op);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_replace_op);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_compose_op);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word_boundary);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '%') ADVANCE(2);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(113);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(145);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(120);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(128);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(92);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(94);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(137);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(136);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(90);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(117);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(126);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(138);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(118);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(129);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(119);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(125);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(133);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(135);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(142);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(124);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(131);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(139);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(134);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(140);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(121);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 's') ADVANCE(80);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 's') ADVANCE(78);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 't') ADVANCE(88);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 't') ADVANCE(116);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 't') ADVANCE(130);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(132);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(115);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(122);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__imm_sym);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '%') ADVANCE(3);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(147);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__imm_sym);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 71},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 71},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 71},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_alphabet_header] = ACTIONS(1),
    [sym_sets_header] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_definitions_header] = ACTIONS(1),
    [sym_rules_header] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_SLASH_LT_EQ] = ACTIONS(1),
    [sym_rule_name] = ACTIONS(1),
    [sym_locus] = ACTIONS(1),
    [sym_except] = ACTIONS(1),
    [sym_where] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_matched] = ACTIONS(1),
    [sym_in_keyword] = ACTIONS(1),
    [sym_lpar] = ACTIONS(1),
    [sym_rpar] = ACTIONS(1),
    [sym_loptional] = ACTIONS(1),
    [sym_roptional] = ACTIONS(1),
    [sym_prefix_op] = ACTIONS(1),
    [sym_suffix_op] = ACTIONS(1),
    [sym_ignore_op] = ACTIONS(1),
    [sym_bool_op] = ACTIONS(1),
    [sym_compose_op] = ACTIONS(1),
    [sym_word_boundary] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym_alphabet] = STATE(51),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_bool_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(7), 6,
      sym_semicolon,
      sym_locus,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [46] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(29), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(27), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [76] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(29), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(27), 12,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [110] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(7), 5,
      sym_semicolon,
      sym_locus,
      sym_rpar,
      sym_roptional,
      sym_compose_op,
  [158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_suffix_op,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(19), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(7), 13,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [190] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(7), 6,
      sym_semicolon,
      sym_locus,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(37), 3,
      sym_bool_op,
      sym_symbol,
      sym_colon,
    ACTIONS(35), 13,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__imm_sym,
    ACTIONS(43), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(41), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym__imm_sym,
    ACTIONS(49), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(47), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [317] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(55), 1,
      sym_locus,
    ACTIONS(57), 1,
      sym_except,
    ACTIONS(59), 1,
      sym_where,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(26), 1,
      sym_pattern,
    STATE(77), 1,
      sym_variables,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_rule_name,
    STATE(14), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(27), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(61), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [414] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_locus,
    ACTIONS(70), 1,
      sym_except,
    ACTIONS(73), 1,
      sym_where,
    ACTIONS(75), 1,
      sym_lpar,
    ACTIONS(78), 1,
      sym_loptional,
    ACTIONS(81), 1,
      sym_prefix_op,
    ACTIONS(87), 1,
      sym_symbol,
    ACTIONS(90), 1,
      sym_colon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(26), 1,
      sym_pattern,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_rule_name,
    ACTIONS(84), 2,
      sym_word_boundary,
      sym_any,
    STATE(14), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(35), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(41), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 2,
      sym_bool_op,
      sym_symbol,
    ACTIONS(7), 14,
      sym_semicolon,
      sym_locus,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [532] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(93), 1,
      sym_roptional,
    ACTIONS(95), 1,
      sym_compose_op,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [579] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(97), 1,
      sym_locus,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [626] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(99), 1,
      sym_roptional,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [673] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(101), 1,
      sym_semicolon,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [720] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(99), 1,
      sym_rpar,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [767] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(103), 1,
      sym_semicolon,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [814] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(105), 1,
      sym_semicolon,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [861] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(107), 1,
      sym_semicolon,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [908] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(15), 1,
      sym_suffix_op,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(31), 1,
      sym_bool_op,
    ACTIONS(33), 1,
      sym_replace_op,
    ACTIONS(95), 1,
      sym_compose_op,
    ACTIONS(109), 1,
      sym_locus,
    STATE(4), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [955] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(55), 1,
      sym_locus,
    ACTIONS(57), 1,
      sym_except,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(26), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
    STATE(11), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      sym_except,
      sym_where,
      sym_symbol,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      sym_except,
      sym_where,
      sym_symbol,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      sym_except,
      sym_where,
      sym_symbol,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      sym_except,
      sym_where,
      sym_symbol,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1074] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(101), 1,
      sym_semicolon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(23), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1106] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(127), 1,
      sym_semicolon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(24), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1138] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(105), 1,
      sym_semicolon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1170] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    ACTIONS(109), 1,
      sym_locus,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(19), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1202] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(22), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1231] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(20), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1260] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(3), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym_except,
      sym_symbol,
    ACTIONS(129), 7,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1306] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(25), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1335] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(15), 1,
      sym_symbol_pair,
    STATE(18), 1,
      sym_pattern,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1364] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(6), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1393] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(2), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(7), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_lpar,
    ACTIONS(11), 1,
      sym_loptional,
    ACTIONS(13), 1,
      sym_prefix_op,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      sym_colon,
    STATE(5), 1,
      sym_pattern,
    STATE(15), 1,
      sym_symbol_pair,
    ACTIONS(21), 2,
      sym_word_boundary,
      sym_any,
  [1480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__imm_sym,
    ACTIONS(43), 2,
      anon_sym_LT_EQ,
      sym_symbol,
    ACTIONS(41), 5,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_colon,
  [1498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__imm_sym,
    ACTIONS(49), 2,
      anon_sym_LT_EQ,
      sym_symbol,
    ACTIONS(47), 5,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_colon,
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_LT_EQ,
      sym_symbol,
    ACTIONS(41), 5,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_colon,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      sym_symbol,
    ACTIONS(61), 5,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_colon,
  [1546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_semicolon,
    ACTIONS(141), 1,
      sym_symbol,
    STATE(56), 1,
      aux_sym_variables_repeat1,
    STATE(89), 1,
      sym_variable_keyword,
    ACTIONS(139), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [1566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_sets_header,
    ACTIONS(145), 1,
      sym_definitions_header,
    ACTIONS(147), 1,
      sym_rules_header,
    STATE(67), 1,
      sym_sets,
    STATE(78), 1,
      sym_definitions,
    STATE(88), 1,
      sym_rules,
  [1588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_semicolon,
    ACTIONS(151), 1,
      sym_symbol,
    ACTIONS(154), 1,
      sym_colon,
    STATE(52), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [1605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_semicolon,
    ACTIONS(159), 1,
      sym_symbol,
    ACTIONS(161), 1,
      sym_colon,
    STATE(52), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [1622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LT_EQ,
    STATE(27), 1,
      sym_arrow,
    ACTIONS(163), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [1637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_symbol,
    ACTIONS(167), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(55), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_semicolon,
    ACTIONS(176), 1,
      sym_symbol,
    STATE(56), 1,
      aux_sym_variables_repeat1,
    ACTIONS(174), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [1669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_symbol,
    ACTIONS(179), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(55), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_symbol,
    ACTIONS(161), 1,
      sym_colon,
    ACTIONS(183), 1,
      sym_semicolon,
    STATE(52), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [1701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_symbol,
    ACTIONS(161), 1,
      sym_colon,
    STATE(58), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [1715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_rule_name,
    STATE(60), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_rules_header,
    ACTIONS(192), 1,
      sym_symbol,
    STATE(61), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [1743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_symbol,
    ACTIONS(161), 1,
      sym_colon,
    STATE(53), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [1757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym_rule_name,
    STATE(60), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_rules_header,
    ACTIONS(201), 1,
      sym_symbol,
    STATE(61), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_semicolon,
    ACTIONS(205), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [1797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_semicolon,
    ACTIONS(209), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [1809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_definitions_header,
    ACTIONS(147), 1,
      sym_rules_header,
    STATE(75), 1,
      sym_definitions,
    STATE(87), 1,
      sym_rules,
  [1825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_semicolon,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(213), 2,
      sym_symbol,
      sym_colon,
  [1839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_colon,
    ACTIONS(217), 1,
      sym_symbol,
    STATE(54), 1,
      sym_symbol_pair,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_symbol,
    STATE(57), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_symbol,
    STATE(64), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      sym_definitions_header,
      sym_rules_header,
      sym_symbol,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_rule_name,
    STATE(63), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_rules_header,
    STATE(91), 1,
      sym_rules,
  [1913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_symbol,
    STATE(50), 1,
      aux_sym_variables_repeat1,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [1931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_rules_header,
    STATE(87), 1,
      sym_rules,
  [1941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_loptional,
    ACTIONS(227), 1,
      sym_symbol,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      sym_rules_header,
      sym_symbol,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [1975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_semicolon,
  [1982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_eq,
  [1989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_eq,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [2010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [2017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_semicolon,
  [2024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [2031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [2038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_in_keyword,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 317,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 414,
  [SMALL_STATE(15)] = 460,
  [SMALL_STATE(16)] = 484,
  [SMALL_STATE(17)] = 508,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 579,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 673,
  [SMALL_STATE(22)] = 720,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 814,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 908,
  [SMALL_STATE(27)] = 955,
  [SMALL_STATE(28)] = 994,
  [SMALL_STATE(29)] = 1014,
  [SMALL_STATE(30)] = 1034,
  [SMALL_STATE(31)] = 1054,
  [SMALL_STATE(32)] = 1074,
  [SMALL_STATE(33)] = 1106,
  [SMALL_STATE(34)] = 1138,
  [SMALL_STATE(35)] = 1170,
  [SMALL_STATE(36)] = 1202,
  [SMALL_STATE(37)] = 1231,
  [SMALL_STATE(38)] = 1260,
  [SMALL_STATE(39)] = 1289,
  [SMALL_STATE(40)] = 1306,
  [SMALL_STATE(41)] = 1335,
  [SMALL_STATE(42)] = 1364,
  [SMALL_STATE(43)] = 1393,
  [SMALL_STATE(44)] = 1422,
  [SMALL_STATE(45)] = 1451,
  [SMALL_STATE(46)] = 1480,
  [SMALL_STATE(47)] = 1498,
  [SMALL_STATE(48)] = 1516,
  [SMALL_STATE(49)] = 1531,
  [SMALL_STATE(50)] = 1546,
  [SMALL_STATE(51)] = 1566,
  [SMALL_STATE(52)] = 1588,
  [SMALL_STATE(53)] = 1605,
  [SMALL_STATE(54)] = 1622,
  [SMALL_STATE(55)] = 1637,
  [SMALL_STATE(56)] = 1652,
  [SMALL_STATE(57)] = 1669,
  [SMALL_STATE(58)] = 1684,
  [SMALL_STATE(59)] = 1701,
  [SMALL_STATE(60)] = 1715,
  [SMALL_STATE(61)] = 1729,
  [SMALL_STATE(62)] = 1743,
  [SMALL_STATE(63)] = 1757,
  [SMALL_STATE(64)] = 1771,
  [SMALL_STATE(65)] = 1785,
  [SMALL_STATE(66)] = 1797,
  [SMALL_STATE(67)] = 1809,
  [SMALL_STATE(68)] = 1825,
  [SMALL_STATE(69)] = 1839,
  [SMALL_STATE(70)] = 1852,
  [SMALL_STATE(71)] = 1863,
  [SMALL_STATE(72)] = 1874,
  [SMALL_STATE(73)] = 1883,
  [SMALL_STATE(74)] = 1894,
  [SMALL_STATE(75)] = 1903,
  [SMALL_STATE(76)] = 1913,
  [SMALL_STATE(77)] = 1923,
  [SMALL_STATE(78)] = 1931,
  [SMALL_STATE(79)] = 1941,
  [SMALL_STATE(80)] = 1951,
  [SMALL_STATE(81)] = 1959,
  [SMALL_STATE(82)] = 1967,
  [SMALL_STATE(83)] = 1975,
  [SMALL_STATE(84)] = 1982,
  [SMALL_STATE(85)] = 1989,
  [SMALL_STATE(86)] = 1996,
  [SMALL_STATE(87)] = 2003,
  [SMALL_STATE(88)] = 2010,
  [SMALL_STATE(89)] = 2017,
  [SMALL_STATE(90)] = 2024,
  [SMALL_STATE(91)] = 2031,
  [SMALL_STATE(92)] = 2038,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(33),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(35),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(36),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(37),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(38),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(15),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(8),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(68),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(47),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2), SHIFT_REPEAT(85),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(92),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(69),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(84),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitions, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_keyword, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
