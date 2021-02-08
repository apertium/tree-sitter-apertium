#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  anon_sym_COLON = 34,
  anon_sym_COLON2 = 35,
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
  [anon_sym_COLON] = ":",
  [anon_sym_COLON2] = ":",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON2] = anon_sym_COLON,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
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

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_symbol,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_symbol_token1_character_set_1(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    ('$' <= lookahead && lookahead <= '=') ||
    lookahead == '?' ||
    ('[' <= lookahead && lookahead <= '^') ||
    lookahead == '|' ||
    lookahead == '~';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(156);
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
      if (lookahead == '%') ADVANCE(68);
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
    case 3:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(68);
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
    case 4:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(68);
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
    case 5:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(68);
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
    case 6:
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(158);
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
      if (lookahead == '%') ADVANCE(68);
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
      if (lookahead == '%') ADVANCE(68);
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
      if (lookahead == '%') ADVANCE(68);
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
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(156);
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
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == ':') ADVANCE(158);
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
      if (lookahead == '%') ADVANCE(69);
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
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(153);
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
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(158);
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
      if (lookahead == '%') ADVANCE(68);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(68);
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
      if (lookahead == '%') ADVANCE(68);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(68);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_except);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_except);
      if (lookahead == '%') ADVANCE(68);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_where);
      if (lookahead == '%') ADVANCE(68);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '%') ADVANCE(68);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_matched);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_matched);
      if (lookahead == '%') ADVANCE(68);
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
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(150);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(125);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(133);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(96);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(98);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(142);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(141);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(94);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(122);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(131);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(143);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(123);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(134);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(124);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(130);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(138);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(140);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(147);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(129);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(136);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(144);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(139);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(145);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(126);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 's') ADVANCE(81);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 's') ADVANCE(79);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 't') ADVANCE(92);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 't') ADVANCE(121);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 't') ADVANCE(135);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(137);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(120);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(127);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(68);
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
      if (lookahead == '%') ADVANCE(69);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COLON2);
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
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 3},
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
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym_alphabet] = STATE(82),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
      sym_comment,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(13), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    STATE(38), 2,
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
      anon_sym_COLON2,
  [38] = 6,
    ACTIONS(15), 1,
      sym_comment,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(13), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    STATE(38), 2,
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
      anon_sym_COLON2,
  [72] = 18,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(23), 1,
      sym_pattern,
    STATE(109), 1,
      sym_variables,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(9), 2,
      sym_context,
      aux_sym_rule_repeat1,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [130] = 7,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(15), 1,
      sym_comment,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(43), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    STATE(38), 2,
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
      anon_sym_COLON2,
  [166] = 15,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
      sym_comment,
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
      anon_sym_COLON2,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [218] = 15,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [270] = 16,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(41), 4,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_compose_op,
  [324] = 16,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_locus,
    ACTIONS(68), 1,
      sym_except,
    ACTIONS(71), 1,
      sym_lpar,
    ACTIONS(74), 1,
      sym_loptional,
    ACTIONS(77), 1,
      sym_prefix_op,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    ACTIONS(89), 1,
      anon_sym_COLON2,
    STATE(23), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(63), 2,
      sym_rule_name,
      sym_where,
    ACTIONS(80), 2,
      sym_word_boundary,
      sym_any,
    STATE(9), 2,
      sym_context,
      aux_sym_rule_repeat1,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [377] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(98), 1,
      anon_sym_02,
    STATE(31), 1,
      sym__imm_sym_or_0,
    ACTIONS(94), 3,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_0,
    ACTIONS(92), 13,
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
      anon_sym_COLON2,
  [410] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(106), 1,
      anon_sym_02,
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
      anon_sym_COLON2,
  [440] = 6,
    ACTIONS(15), 1,
      sym_comment,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(13), 3,
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
      anon_sym_COLON2,
  [472] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(108), 1,
      sym_roptional,
    ACTIONS(110), 1,
      sym_compose_op,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [526] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(112), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [580] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(114), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [634] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(116), 1,
      sym_roptional,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [688] = 8,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_suffix_op,
    ACTIONS(120), 1,
      sym_ignore_op,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(13), 3,
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
      anon_sym_COLON2,
  [724] = 17,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(118), 1,
      sym_suffix_op,
    ACTIONS(120), 1,
      sym_ignore_op,
    ACTIONS(122), 1,
      sym_locus,
    ACTIONS(124), 1,
      sym_bool_op,
    ACTIONS(126), 1,
      sym_replace_op,
    ACTIONS(128), 1,
      sym_compose_op,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [778] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(130), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [832] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_suffix_op,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    STATE(45), 2,
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
      anon_sym_COLON2,
  [866] = 15,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(118), 1,
      sym_suffix_op,
    ACTIONS(120), 1,
      sym_ignore_op,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
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
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [916] = 16,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(43), 1,
      sym_locus,
    ACTIONS(118), 1,
      sym_suffix_op,
    ACTIONS(120), 1,
      sym_ignore_op,
    ACTIONS(124), 1,
      sym_bool_op,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(41), 2,
      sym_replace_op,
      sym_compose_op,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [968] = 17,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(118), 1,
      sym_suffix_op,
    ACTIONS(120), 1,
      sym_ignore_op,
    ACTIONS(124), 1,
      sym_bool_op,
    ACTIONS(126), 1,
      sym_replace_op,
    ACTIONS(128), 1,
      sym_compose_op,
    ACTIONS(132), 1,
      sym_locus,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [1022] = 17,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(41), 1,
      sym_compose_op,
    ACTIONS(43), 1,
      sym_locus,
    ACTIONS(118), 1,
      sym_suffix_op,
    ACTIONS(120), 1,
      sym_ignore_op,
    ACTIONS(124), 1,
      sym_bool_op,
    ACTIONS(126), 1,
      sym_replace_op,
    STATE(17), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [1076] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(134), 1,
      sym_rpar,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1130] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(134), 1,
      sym_roptional,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1184] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(136), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1238] = 17,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(57), 1,
      sym_bool_op,
    ACTIONS(59), 1,
      sym_replace_op,
    ACTIONS(110), 1,
      sym_compose_op,
    ACTIONS(116), 1,
      sym_rpar,
    STATE(2), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1292] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(140), 3,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_COLON2,
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
  [1319] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(146), 1,
      anon_sym_02,
    STATE(40), 1,
      sym__imm_sym_or_0,
    ACTIONS(94), 4,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_0,
    ACTIONS(92), 10,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
      anon_sym_COLON2,
  [1350] = 3,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
  [1374] = 3,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
  [1398] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(156), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(158), 1,
      anon_sym_02,
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
      anon_sym_COLON2,
  [1426] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(162), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(160), 14,
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
      anon_sym_COLON2,
  [1450] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(13), 2,
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
      anon_sym_COLON2,
  [1474] = 3,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
  [1498] = 14,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(23), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(4), 2,
      sym_context,
      aux_sym_rule_repeat1,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [1544] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(164), 14,
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
      anon_sym_COLON2,
  [1568] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(140), 4,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
      anon_sym_COLON2,
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
  [1593] = 3,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
  [1615] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(162), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(160), 11,
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
      anon_sym_COLON2,
  [1637] = 3,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
  [1659] = 3,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
  [1681] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(13), 3,
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
      anon_sym_COLON2,
  [1703] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_locus,
      sym_bool_op,
      aux_sym_symbol_token1,
    ACTIONS(164), 11,
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
      anon_sym_COLON2,
  [1725] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(170), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      anon_sym_COLON2,
  [1746] = 12,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(130), 1,
      sym_semicolon,
    STATE(15), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1785] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(174), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      anon_sym_COLON2,
  [1806] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(178), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      anon_sym_COLON2,
  [1827] = 12,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(180), 1,
      sym_semicolon,
    STATE(19), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1866] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(184), 5,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      aux_sym_symbol_token1,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      anon_sym_COLON2,
  [1887] = 12,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(132), 1,
      sym_locus,
    STATE(18), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [1926] = 12,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    ACTIONS(114), 1,
      sym_semicolon,
    STATE(14), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [1965] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(12), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [2001] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(13), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2037] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(25), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2073] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(26), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2109] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(3), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2145] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(16), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2181] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(28), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2217] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(5), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2253] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(6), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2289] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(7), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2325] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(8), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2361] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(20), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [2397] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(21), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [2433] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(22), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [2469] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(27), 1,
      sym_pattern,
    STATE(110), 1,
      sym__sym_or_0,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    STATE(38), 2,
      sym_symbol,
      sym_symbol_pair,
  [2505] = 11,
    ACTIONS(15), 1,
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
      anon_sym_COLON2,
    STATE(24), 1,
      sym_pattern,
    STATE(120), 1,
      sym__sym_or_0,
    ACTIONS(33), 2,
      sym_word_boundary,
      sym_any,
    STATE(45), 2,
      sym_symbol,
      sym_symbol_pair,
  [2541] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(186), 3,
      sym_locus,
      sym_except,
      aux_sym_symbol_token1,
    ACTIONS(188), 7,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
      anon_sym_0,
      anon_sym_COLON2,
  [2559] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_semicolon,
    ACTIONS(192), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_0,
    ACTIONS(198), 1,
      anon_sym_COLON2,
    STATE(110), 1,
      sym__sym_or_0,
    STATE(71), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2583] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      anon_sym_COLON2,
    ACTIONS(201), 1,
      sym_semicolon,
    STATE(110), 1,
      sym__sym_or_0,
    STATE(71), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2607] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      anon_sym_COLON2,
    ACTIONS(203), 1,
      sym_semicolon,
    STATE(110), 1,
      sym__sym_or_0,
    STATE(71), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2631] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LT_EQ,
    ACTIONS(205), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(207), 1,
      anon_sym_02,
    STATE(97), 1,
      sym__imm_sym_or_0,
    ACTIONS(92), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2652] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_semicolon,
    ACTIONS(213), 1,
      aux_sym_symbol_token1,
    STATE(79), 1,
      aux_sym_variables_repeat1,
    STATE(111), 1,
      sym_symbol,
    STATE(112), 1,
      sym_variable_keyword,
    ACTIONS(211), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [2675] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      anon_sym_COLON2,
    STATE(110), 1,
      sym__sym_or_0,
    STATE(73), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2696] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    ACTIONS(55), 1,
      anon_sym_COLON2,
    STATE(110), 1,
      sym__sym_or_0,
    STATE(72), 3,
      sym_symbol,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [2717] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LT_EQ,
    ACTIONS(215), 1,
      aux_sym__imm_sym_or_0_token1,
    ACTIONS(217), 1,
      anon_sym_02,
    ACTIONS(100), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2735] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_semicolon,
    ACTIONS(223), 1,
      aux_sym_symbol_token1,
    STATE(79), 1,
      aux_sym_variables_repeat1,
    STATE(111), 1,
      sym_symbol,
    ACTIONS(221), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [2755] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_symbol_token1,
    STATE(118), 1,
      sym_symbol,
    ACTIONS(226), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(80), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [2773] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_symbol_token1,
    STATE(118), 1,
      sym_symbol,
    ACTIONS(231), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(80), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [2791] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_sets_header,
    ACTIONS(235), 1,
      sym_definitions_header,
    ACTIONS(237), 1,
      sym_rules_header,
    STATE(91), 1,
      sym_sets,
    STATE(103), 1,
      sym_definitions,
    STATE(116), 1,
      sym_rules,
  [2813] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_0,
    ACTIONS(239), 1,
      aux_sym_symbol_token1,
    ACTIONS(241), 1,
      anon_sym_COLON2,
    STATE(85), 1,
      sym_symbol_pair,
    STATE(117), 1,
      sym__sym_or_0,
  [2832] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_rules_header,
    ACTIONS(245), 1,
      aux_sym_symbol_token1,
    STATE(121), 1,
      sym_symbol,
    STATE(84), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [2849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_EQ,
    STATE(37), 1,
      sym_arrow,
    ACTIONS(248), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2864] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_symbol_token1,
    ACTIONS(252), 1,
      sym_rules_header,
    STATE(121), 1,
      sym_symbol,
    STATE(84), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [2881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym_rule_name,
    STATE(88), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [2895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      sym_rule_name,
    STATE(88), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [2909] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_symbol_token1,
    STATE(121), 1,
      sym_symbol,
    STATE(86), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [2923] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_semicolon,
    ACTIONS(265), 3,
      anon_sym_mixed,
      anon_sym_matched,
      aux_sym_symbol_token1,
  [2935] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_definitions_header,
    ACTIONS(237), 1,
      sym_rules_header,
    STATE(108), 1,
      sym_definitions,
    STATE(113), 1,
      sym_rules,
  [2951] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_semicolon,
    ACTIONS(269), 3,
      anon_sym_mixed,
      anon_sym_matched,
      aux_sym_symbol_token1,
  [2963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LT_EQ,
    ACTIONS(152), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [2975] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_symbol_token1,
    STATE(118), 1,
      sym_symbol,
    STATE(81), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [2989] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_semicolon,
    ACTIONS(140), 3,
      anon_sym_mixed,
      anon_sym_matched,
      aux_sym_symbol_token1,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LT_EQ,
    ACTIONS(160), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [3013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LT_EQ,
    ACTIONS(148), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [3025] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_symbol_token1,
    STATE(75), 1,
      aux_sym_variables_repeat1,
    STATE(111), 1,
      sym_symbol,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [3047] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_loptional,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(90), 1,
      sym_symbol,
  [3060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_rule_name,
    STATE(87), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [3071] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(277), 3,
      sym_definitions_header,
      sym_rules_header,
      aux_sym_symbol_token1,
  [3080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_rules_header,
    STATE(113), 1,
      sym_rules,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3098] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym_rules_header,
      aux_sym_symbol_token1,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym_eq,
      sym_in_keyword,
  [3114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_rules_header,
    STATE(115), 1,
      sym_rules,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_in_keyword,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_semicolon,
  [3161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [3168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [3175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [3196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_eq,
  [3203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON,
  [3217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_eq,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_semicolon,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 377,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 526,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 634,
  [SMALL_STATE(17)] = 688,
  [SMALL_STATE(18)] = 724,
  [SMALL_STATE(19)] = 778,
  [SMALL_STATE(20)] = 832,
  [SMALL_STATE(21)] = 866,
  [SMALL_STATE(22)] = 916,
  [SMALL_STATE(23)] = 968,
  [SMALL_STATE(24)] = 1022,
  [SMALL_STATE(25)] = 1076,
  [SMALL_STATE(26)] = 1130,
  [SMALL_STATE(27)] = 1184,
  [SMALL_STATE(28)] = 1238,
  [SMALL_STATE(29)] = 1292,
  [SMALL_STATE(30)] = 1319,
  [SMALL_STATE(31)] = 1350,
  [SMALL_STATE(32)] = 1374,
  [SMALL_STATE(33)] = 1398,
  [SMALL_STATE(34)] = 1426,
  [SMALL_STATE(35)] = 1450,
  [SMALL_STATE(36)] = 1474,
  [SMALL_STATE(37)] = 1498,
  [SMALL_STATE(38)] = 1544,
  [SMALL_STATE(39)] = 1568,
  [SMALL_STATE(40)] = 1593,
  [SMALL_STATE(41)] = 1615,
  [SMALL_STATE(42)] = 1637,
  [SMALL_STATE(43)] = 1659,
  [SMALL_STATE(44)] = 1681,
  [SMALL_STATE(45)] = 1703,
  [SMALL_STATE(46)] = 1725,
  [SMALL_STATE(47)] = 1746,
  [SMALL_STATE(48)] = 1785,
  [SMALL_STATE(49)] = 1806,
  [SMALL_STATE(50)] = 1827,
  [SMALL_STATE(51)] = 1866,
  [SMALL_STATE(52)] = 1887,
  [SMALL_STATE(53)] = 1926,
  [SMALL_STATE(54)] = 1965,
  [SMALL_STATE(55)] = 2001,
  [SMALL_STATE(56)] = 2037,
  [SMALL_STATE(57)] = 2073,
  [SMALL_STATE(58)] = 2109,
  [SMALL_STATE(59)] = 2145,
  [SMALL_STATE(60)] = 2181,
  [SMALL_STATE(61)] = 2217,
  [SMALL_STATE(62)] = 2253,
  [SMALL_STATE(63)] = 2289,
  [SMALL_STATE(64)] = 2325,
  [SMALL_STATE(65)] = 2361,
  [SMALL_STATE(66)] = 2397,
  [SMALL_STATE(67)] = 2433,
  [SMALL_STATE(68)] = 2469,
  [SMALL_STATE(69)] = 2505,
  [SMALL_STATE(70)] = 2541,
  [SMALL_STATE(71)] = 2559,
  [SMALL_STATE(72)] = 2583,
  [SMALL_STATE(73)] = 2607,
  [SMALL_STATE(74)] = 2631,
  [SMALL_STATE(75)] = 2652,
  [SMALL_STATE(76)] = 2675,
  [SMALL_STATE(77)] = 2696,
  [SMALL_STATE(78)] = 2717,
  [SMALL_STATE(79)] = 2735,
  [SMALL_STATE(80)] = 2755,
  [SMALL_STATE(81)] = 2773,
  [SMALL_STATE(82)] = 2791,
  [SMALL_STATE(83)] = 2813,
  [SMALL_STATE(84)] = 2832,
  [SMALL_STATE(85)] = 2849,
  [SMALL_STATE(86)] = 2864,
  [SMALL_STATE(87)] = 2881,
  [SMALL_STATE(88)] = 2895,
  [SMALL_STATE(89)] = 2909,
  [SMALL_STATE(90)] = 2923,
  [SMALL_STATE(91)] = 2935,
  [SMALL_STATE(92)] = 2951,
  [SMALL_STATE(93)] = 2963,
  [SMALL_STATE(94)] = 2975,
  [SMALL_STATE(95)] = 2989,
  [SMALL_STATE(96)] = 3001,
  [SMALL_STATE(97)] = 3013,
  [SMALL_STATE(98)] = 3025,
  [SMALL_STATE(99)] = 3038,
  [SMALL_STATE(100)] = 3047,
  [SMALL_STATE(101)] = 3060,
  [SMALL_STATE(102)] = 3071,
  [SMALL_STATE(103)] = 3080,
  [SMALL_STATE(104)] = 3090,
  [SMALL_STATE(105)] = 3098,
  [SMALL_STATE(106)] = 3106,
  [SMALL_STATE(107)] = 3114,
  [SMALL_STATE(108)] = 3122,
  [SMALL_STATE(109)] = 3132,
  [SMALL_STATE(110)] = 3140,
  [SMALL_STATE(111)] = 3147,
  [SMALL_STATE(112)] = 3154,
  [SMALL_STATE(113)] = 3161,
  [SMALL_STATE(114)] = 3168,
  [SMALL_STATE(115)] = 3175,
  [SMALL_STATE(116)] = 3182,
  [SMALL_STATE(117)] = 3189,
  [SMALL_STATE(118)] = 3196,
  [SMALL_STATE(119)] = 3203,
  [SMALL_STATE(120)] = 3210,
  [SMALL_STATE(121)] = 3217,
  [SMALL_STATE(122)] = 3224,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(50),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(52),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(60),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(59),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(54),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(45),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(39),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(114),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sym_or_0, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 2, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_sym_or_0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_sym_or_0, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(29),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(114),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(106),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2), SHIFT_REPEAT(106),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(106),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitions, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(83),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_keyword, 1),
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
