#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  aux_sym_symbol_token1 = 30,
  anon_sym_0 = 31,
  aux_sym__imm_sym_or_0_token1 = 32,
  anon_sym_02 = 33,
  sym_colon = 34,
  anon_sym_COLON = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym_alphabet = 38,
  sym_sets = 39,
  sym_set = 40,
  sym_definitions = 41,
  sym_definition = 42,
  sym_rules = 43,
  sym_arrow = 44,
  sym_rule = 45,
  sym_context = 46,
  sym_variable_keyword = 47,
  sym_variables = 48,
  sym_pattern = 49,
  sym_symbol = 50,
  sym__sym_or_0 = 51,
  sym__imm_sym_or_0 = 52,
  sym_symbol_pair = 53,
  aux_sym_alphabet_repeat1 = 54,
  aux_sym_sets_repeat1 = 55,
  aux_sym_definitions_repeat1 = 56,
  aux_sym_rules_repeat1 = 57,
  aux_sym_rule_repeat1 = 58,
  aux_sym_variables_repeat1 = 59,
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
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_0] = "0",
  [aux_sym__imm_sym_or_0_token1] = "_imm_sym_or_0_token1",
  [anon_sym_02] = "0",
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
  [sym_symbol] = "symbol",
  [sym__sym_or_0] = "symbol",
  [sym__imm_sym_or_0] = "symbol",
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
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_0] = anon_sym_0,
  [aux_sym__imm_sym_or_0_token1] = aux_sym__imm_sym_or_0_token1,
  [anon_sym_02] = anon_sym_0,
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
  [sym_symbol] = sym_symbol,
  [sym__sym_or_0] = sym_symbol,
  [sym__imm_sym_or_0] = sym_symbol,
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
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__imm_sym_or_0_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_02] = {
    .visible = true,
    .named = false,
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__sym_or_0] = {
    .visible = true,
    .named = true,
  },
  [sym__imm_sym_or_0] = {
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

static inline bool aux_sym_symbol_token1_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '=' || (c < '|'
      ? (c < '['
        ? c == '?'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(151);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(151);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead) &&
          lookahead != ']') ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead) &&
          lookahead != ']') ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(151);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead) &&
          lookahead != ']') ADVANCE(154);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '$' || ';' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(154);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(18);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'r' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(114);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(151);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_alphabet_header);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_sets_header);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_definitions_header);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_definitions_header);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_rule_name);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(70);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_except);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_except);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_where);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_matched);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_matched);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_in_keyword);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_lpar);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_rpar);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_loptional);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_roptional);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_suffix_op);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_suffix_op);
      if (lookahead == ',') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ignore_op);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ignore_op);
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bool_op);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bool_op);
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_replace_op);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_compose_op);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word_boundary);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(150);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(125);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(133);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(96);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(98);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(142);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(141);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(94);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(122);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(131);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(143);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(123);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(134);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(124);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(130);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(138);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(140);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(147);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(129);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(136);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(144);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(139);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(145);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(126);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 's') ADVANCE(81);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 's') ADVANCE(79);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 't') ADVANCE(92);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 't') ADVANCE(121);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 't') ADVANCE(135);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(137);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(120);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(127);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__imm_sym_or_0_token1);
      if (lookahead == '%') ADVANCE(70);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__imm_sym_or_0_token1);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_02);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 9},
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
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_02] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym_alphabet] = STATE(80),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_comment,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(9), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [34] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(9), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 12,
      sym_semicolon,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [72] = 18,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_rule_name,
    ACTIONS(21), 1,
      sym_locus,
    ACTIONS(23), 1,
      sym_except,
    ACTIONS(25), 1,
      sym_where,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(26), 1,
      sym_pattern,
    STATE(104), 1,
      sym_variables,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(10), 2,
      sym_context,
      aux_sym_rule_repeat1,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [130] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(43), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 13,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [166] = 15,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(43), 1,
      sym_bool_op,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [218] = 15,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [270] = 16,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 4,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_compose_op,
  [324] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(67), 1,
      anon_sym_02,
    STATE(34), 1,
      sym__imm_sym_or_0,
    ACTIONS(63), 3,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_0,
    ACTIONS(61), 13,
      sym_semicolon,
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
  [357] = 16,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_locus,
    ACTIONS(76), 1,
      sym_except,
    ACTIONS(79), 1,
      sym_lpar,
    ACTIONS(82), 1,
      sym_loptional,
    ACTIONS(85), 1,
      sym_prefix_op,
    ACTIONS(91), 1,
      aux_sym_symbol_token1,
    ACTIONS(94), 1,
      anon_sym_0,
    ACTIONS(97), 1,
      sym_colon,
    STATE(26), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(71), 2,
      sym_rule_name,
      sym_where,
    ACTIONS(88), 2,
      sym_word_boundary,
      sym_any,
    STATE(10), 2,
      sym_context,
      aux_sym_rule_repeat1,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [410] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(67), 1,
      anon_sym_02,
    STATE(38), 1,
      sym__imm_sym_or_0,
    ACTIONS(102), 3,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_0,
    ACTIONS(100), 13,
      sym_semicolon,
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
  [443] = 6,
    ACTIONS(11), 1,
      sym_comment,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(9), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(7), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [475] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_suffix_op,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(43), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(41), 10,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [509] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_suffix_op,
    ACTIONS(106), 1,
      sym_ignore_op,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(9), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(7), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [545] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(108), 1,
      sym_rpar,
    ACTIONS(110), 1,
      sym_compose_op,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [599] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(112), 1,
      sym_roptional,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [653] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    ACTIONS(41), 1,
      sym_compose_op,
    ACTIONS(43), 1,
      sym_locus,
    ACTIONS(104), 1,
      sym_suffix_op,
    ACTIONS(106), 1,
      sym_ignore_op,
    ACTIONS(114), 1,
      sym_bool_op,
    ACTIONS(116), 1,
      sym_replace_op,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [707] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(108), 1,
      sym_roptional,
    ACTIONS(110), 1,
      sym_compose_op,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [761] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(118), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [815] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(120), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [869] = 16,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    ACTIONS(43), 1,
      sym_locus,
    ACTIONS(104), 1,
      sym_suffix_op,
    ACTIONS(106), 1,
      sym_ignore_op,
    ACTIONS(114), 1,
      sym_bool_op,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(41), 2,
      sym_replace_op,
      sym_compose_op,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [921] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    ACTIONS(104), 1,
      sym_suffix_op,
    ACTIONS(106), 1,
      sym_ignore_op,
    ACTIONS(114), 1,
      sym_bool_op,
    ACTIONS(116), 1,
      sym_replace_op,
    ACTIONS(122), 1,
      sym_locus,
    ACTIONS(124), 1,
      sym_compose_op,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [975] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(126), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1029] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(128), 1,
      sym_roptional,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1083] = 15,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    ACTIONS(104), 1,
      sym_suffix_op,
    ACTIONS(106), 1,
      sym_ignore_op,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(41), 2,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(43), 2,
      sym_locus,
      sym_bool_op,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [1133] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    ACTIONS(104), 1,
      sym_suffix_op,
    ACTIONS(106), 1,
      sym_ignore_op,
    ACTIONS(114), 1,
      sym_bool_op,
    ACTIONS(116), 1,
      sym_replace_op,
    ACTIONS(124), 1,
      sym_compose_op,
    ACTIONS(130), 1,
      sym_locus,
    STATE(14), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [1187] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(132), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1241] = 17,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_ignore_op,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(128), 1,
      sym_rpar,
    STATE(3), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1295] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(136), 1,
      anon_sym_02,
    STATE(42), 1,
      sym__imm_sym_or_0,
    ACTIONS(102), 4,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_0,
    ACTIONS(100), 10,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1326] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(140), 3,
      sym_bool_op,
      aux_sym_symbol_token1,
      sym_colon,
    ACTIONS(138), 13,
      sym_semicolon,
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
      anon_sym_0,
  [1353] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(136), 1,
      anon_sym_02,
    STATE(41), 1,
      sym__imm_sym_or_0,
    ACTIONS(63), 4,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_0,
    ACTIONS(61), 10,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      sym_colon,
  [1384] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(144), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [1408] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(41), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [1432] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(148), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [1456] = 14,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_locus,
    ACTIONS(23), 1,
      sym_except,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(26), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(4), 2,
      sym_context,
      aux_sym_rule_repeat1,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [1502] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(7), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [1526] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(154), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(152), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [1550] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(63), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(61), 14,
      sym_semicolon,
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
      anon_sym_0,
      sym_colon,
  [1574] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(140), 4,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
      sym_colon,
    ACTIONS(138), 10,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
  [1599] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(154), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(152), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1621] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(150), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(148), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1643] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(63), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(61), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1665] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(144), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1687] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(41), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1709] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(9), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(7), 11,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1731] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    ACTIONS(130), 1,
      sym_locus,
    STATE(22), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [1770] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(156), 1,
      sym_semicolon,
    STATE(23), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1809] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(160), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1830] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(120), 1,
      sym_semicolon,
    STATE(19), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1869] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1890] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(126), 1,
      sym_semicolon,
    STATE(20), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [1929] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(168), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1950] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [1971] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(6), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2007] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(2), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2043] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(5), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2079] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(15), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2115] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(7), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2151] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(8), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2187] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(12), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [2223] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(18), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2259] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(28), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2295] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(27), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2331] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(16), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2367] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(13), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [2403] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_lpar,
    ACTIONS(47), 1,
      sym_loptional,
    ACTIONS(49), 1,
      sym_prefix_op,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(24), 1,
      sym_pattern,
    STATE(115), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(37), 2,
      sym_symbol,
      sym_symbol_pair,
  [2439] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(17), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [2475] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(25), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [2511] = 11,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_lpar,
    ACTIONS(29), 1,
      sym_loptional,
    ACTIONS(31), 1,
      sym_prefix_op,
    ACTIONS(35), 1,
      aux_sym_symbol_token1,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(39), 1,
      sym_colon,
    STATE(21), 1,
      sym_pattern,
    STATE(121), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(40), 2,
      sym_symbol,
      sym_symbol_pair,
  [2547] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(174), 3,
      sym_locus,
      sym_except,
      aux_sym_symbol_token1,
    ACTIONS(176), 7,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      sym_colon,
  [2565] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(178), 1,
      sym_semicolon,
    STATE(115), 1,
      sym__sym_or_0,
    STATE(72), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2589] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_semicolon,
    ACTIONS(182), 1,
      aux_sym_symbol_token1,
    ACTIONS(185), 1,
      anon_sym_0,
    ACTIONS(188), 1,
      sym_colon,
    STATE(115), 1,
      sym__sym_or_0,
    STATE(72), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2613] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    ACTIONS(191), 1,
      sym_semicolon,
    STATE(115), 1,
      sym__sym_or_0,
    STATE(72), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2637] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LT_EQ,
    ACTIONS(193), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(195), 1,
      anon_sym_02,
    STATE(96), 1,
      sym__imm_sym_or_0,
    ACTIONS(61), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2658] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(115), 1,
      sym__sym_or_0,
    STATE(71), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2679] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      sym_colon,
    STATE(115), 1,
      sym__sym_or_0,
    STATE(73), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2700] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LT_EQ,
    ACTIONS(193), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(195), 1,
      anon_sym_02,
    STATE(89), 1,
      sym__imm_sym_or_0,
    ACTIONS(100), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2721] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_semicolon,
    ACTIONS(201), 1,
      aux_sym_symbol_token1,
    STATE(82), 1,
      aux_sym_variables_repeat1,
    STATE(110), 1,
      sym_variable_keyword,
    STATE(112), 1,
      sym_symbol,
    ACTIONS(199), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [2744] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    STATE(111), 1,
      sym_symbol,
    ACTIONS(203), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(79), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [2762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_sets_header,
    ACTIONS(210), 1,
      sym_definitions_header,
    ACTIONS(212), 1,
      sym_rules_header,
    STATE(87), 1,
      sym_sets,
    STATE(106), 1,
      sym_definitions,
    STATE(118), 1,
      sym_rules,
  [2784] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_symbol_token1,
    STATE(111), 1,
      sym_symbol,
    ACTIONS(214), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(79), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [2802] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_semicolon,
    ACTIONS(220), 1,
      aux_sym_symbol_token1,
    STATE(82), 1,
      aux_sym_variables_repeat1,
    STATE(112), 1,
      sym_symbol,
    ACTIONS(218), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [2822] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      sym_rules_header,
    STATE(113), 1,
      sym_symbol,
    STATE(85), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [2839] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(225), 1,
      aux_sym_symbol_token1,
    ACTIONS(227), 1,
      sym_colon,
    STATE(86), 1,
      sym_symbol_pair,
    STATE(119), 1,
      sym__sym_or_0,
  [2858] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_rules_header,
    ACTIONS(231), 1,
      aux_sym_symbol_token1,
    STATE(113), 1,
      sym_symbol,
    STATE(85), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [2875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LT_EQ,
    STATE(35), 1,
      sym_arrow,
    ACTIONS(234), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_definitions_header,
    ACTIONS(212), 1,
      sym_rules_header,
    STATE(108), 1,
      sym_definitions,
    STATE(122), 1,
      sym_rules,
  [2906] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_symbol_token1,
    STATE(111), 1,
      sym_symbol,
    STATE(81), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [2920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LT_EQ,
    ACTIONS(61), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2932] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_semicolon,
    ACTIONS(240), 3,
      anon_sym_mixed,
      anon_sym_matched,
      aux_sym_symbol_token1,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym_rule_name,
    STATE(97), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [2958] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_semicolon,
    ACTIONS(248), 3,
      anon_sym_mixed,
      anon_sym_matched,
      aux_sym_symbol_token1,
  [2970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LT_EQ,
    ACTIONS(144), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2982] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_symbol_token1,
    STATE(113), 1,
      sym_symbol,
    STATE(83), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [2996] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_semicolon,
    ACTIONS(140), 3,
      anon_sym_mixed,
      anon_sym_matched,
      aux_sym_symbol_token1,
  [3008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LT_EQ,
    ACTIONS(148), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [3020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      sym_rule_name,
    STATE(97), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [3043] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(257), 3,
      sym_definitions_header,
      sym_rules_header,
      aux_sym_symbol_token1,
  [3052] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_loptional,
    ACTIONS(261), 1,
      aux_sym_symbol_token1,
    STATE(90), 1,
      sym_symbol,
  [3065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_rule_name,
    STATE(91), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [3076] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_symbol_token1,
    STATE(78), 1,
      aux_sym_variables_repeat1,
    STATE(112), 1,
      sym_symbol,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym_eq,
      sym_in_keyword,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_rules_header,
    STATE(122), 1,
      sym_rules,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_rules_header,
    STATE(114), 1,
      sym_rules,
  [3141] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym_rules_header,
      aux_sym_symbol_token1,
  [3149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_semicolon,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_eq,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_in_keyword,
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_eq,
  [3177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [3184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COLON,
  [3191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_semicolon,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [3212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [3219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [3226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 357,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 509,
  [SMALL_STATE(15)] = 545,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 653,
  [SMALL_STATE(18)] = 707,
  [SMALL_STATE(19)] = 761,
  [SMALL_STATE(20)] = 815,
  [SMALL_STATE(21)] = 869,
  [SMALL_STATE(22)] = 921,
  [SMALL_STATE(23)] = 975,
  [SMALL_STATE(24)] = 1029,
  [SMALL_STATE(25)] = 1083,
  [SMALL_STATE(26)] = 1133,
  [SMALL_STATE(27)] = 1187,
  [SMALL_STATE(28)] = 1241,
  [SMALL_STATE(29)] = 1295,
  [SMALL_STATE(30)] = 1326,
  [SMALL_STATE(31)] = 1353,
  [SMALL_STATE(32)] = 1384,
  [SMALL_STATE(33)] = 1408,
  [SMALL_STATE(34)] = 1432,
  [SMALL_STATE(35)] = 1456,
  [SMALL_STATE(36)] = 1502,
  [SMALL_STATE(37)] = 1526,
  [SMALL_STATE(38)] = 1550,
  [SMALL_STATE(39)] = 1574,
  [SMALL_STATE(40)] = 1599,
  [SMALL_STATE(41)] = 1621,
  [SMALL_STATE(42)] = 1643,
  [SMALL_STATE(43)] = 1665,
  [SMALL_STATE(44)] = 1687,
  [SMALL_STATE(45)] = 1709,
  [SMALL_STATE(46)] = 1731,
  [SMALL_STATE(47)] = 1770,
  [SMALL_STATE(48)] = 1809,
  [SMALL_STATE(49)] = 1830,
  [SMALL_STATE(50)] = 1869,
  [SMALL_STATE(51)] = 1890,
  [SMALL_STATE(52)] = 1929,
  [SMALL_STATE(53)] = 1950,
  [SMALL_STATE(54)] = 1971,
  [SMALL_STATE(55)] = 2007,
  [SMALL_STATE(56)] = 2043,
  [SMALL_STATE(57)] = 2079,
  [SMALL_STATE(58)] = 2115,
  [SMALL_STATE(59)] = 2151,
  [SMALL_STATE(60)] = 2187,
  [SMALL_STATE(61)] = 2223,
  [SMALL_STATE(62)] = 2259,
  [SMALL_STATE(63)] = 2295,
  [SMALL_STATE(64)] = 2331,
  [SMALL_STATE(65)] = 2367,
  [SMALL_STATE(66)] = 2403,
  [SMALL_STATE(67)] = 2439,
  [SMALL_STATE(68)] = 2475,
  [SMALL_STATE(69)] = 2511,
  [SMALL_STATE(70)] = 2547,
  [SMALL_STATE(71)] = 2565,
  [SMALL_STATE(72)] = 2589,
  [SMALL_STATE(73)] = 2613,
  [SMALL_STATE(74)] = 2637,
  [SMALL_STATE(75)] = 2658,
  [SMALL_STATE(76)] = 2679,
  [SMALL_STATE(77)] = 2700,
  [SMALL_STATE(78)] = 2721,
  [SMALL_STATE(79)] = 2744,
  [SMALL_STATE(80)] = 2762,
  [SMALL_STATE(81)] = 2784,
  [SMALL_STATE(82)] = 2802,
  [SMALL_STATE(83)] = 2822,
  [SMALL_STATE(84)] = 2839,
  [SMALL_STATE(85)] = 2858,
  [SMALL_STATE(86)] = 2875,
  [SMALL_STATE(87)] = 2890,
  [SMALL_STATE(88)] = 2906,
  [SMALL_STATE(89)] = 2920,
  [SMALL_STATE(90)] = 2932,
  [SMALL_STATE(91)] = 2944,
  [SMALL_STATE(92)] = 2958,
  [SMALL_STATE(93)] = 2970,
  [SMALL_STATE(94)] = 2982,
  [SMALL_STATE(95)] = 2996,
  [SMALL_STATE(96)] = 3008,
  [SMALL_STATE(97)] = 3020,
  [SMALL_STATE(98)] = 3034,
  [SMALL_STATE(99)] = 3043,
  [SMALL_STATE(100)] = 3052,
  [SMALL_STATE(101)] = 3065,
  [SMALL_STATE(102)] = 3076,
  [SMALL_STATE(103)] = 3089,
  [SMALL_STATE(104)] = 3097,
  [SMALL_STATE(105)] = 3105,
  [SMALL_STATE(106)] = 3113,
  [SMALL_STATE(107)] = 3123,
  [SMALL_STATE(108)] = 3131,
  [SMALL_STATE(109)] = 3141,
  [SMALL_STATE(110)] = 3149,
  [SMALL_STATE(111)] = 3156,
  [SMALL_STATE(112)] = 3163,
  [SMALL_STATE(113)] = 3170,
  [SMALL_STATE(114)] = 3177,
  [SMALL_STATE(115)] = 3184,
  [SMALL_STATE(116)] = 3191,
  [SMALL_STATE(117)] = 3198,
  [SMALL_STATE(118)] = 3205,
  [SMALL_STATE(119)] = 3212,
  [SMALL_STATE(120)] = 3219,
  [SMALL_STATE(121)] = 3226,
  [SMALL_STATE(122)] = 3233,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(47),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(46),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(62),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(66),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(60),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(40),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(39),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(117),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sym_or_0, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_sym_or_0, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_sym_or_0, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(30),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(117),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2), SHIFT_REPEAT(103),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(103),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitions, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(103),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(84),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_keyword, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
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
