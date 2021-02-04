#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  sym_symbol = 30,
  sym_symbol_pair = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym_alphabet = 34,
  sym_sets = 35,
  sym_set = 36,
  sym_definitions = 37,
  sym_definition = 38,
  sym_rules = 39,
  sym_arrow = 40,
  sym_rule = 41,
  sym_context = 42,
  sym_variable_keyword = 43,
  sym_variables = 44,
  sym_pattern = 45,
  aux_sym_alphabet_repeat1 = 46,
  aux_sym_sets_repeat1 = 47,
  aux_sym_definitions_repeat1 = 48,
  aux_sym_rules_repeat1 = 49,
  aux_sym_rule_repeat1 = 50,
  aux_sym_variables_repeat1 = 51,
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
  [sym_symbol_pair] = "symbol_pair",
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
  [sym_symbol_pair] = sym_symbol_pair,
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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_symbol_pair_character_set_1(int32_t lookahead) {
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
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(105);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(166);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(130);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(112);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(130);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(112);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead) &&
          lookahead != ']') ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(130);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(154);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(136);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(154);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(165);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'r' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(83);
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
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(98);
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
      if (lookahead == 'e') ADVANCE(94);
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
      if (lookahead == 'n') ADVANCE(100);
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
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(76);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(10);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(130);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(129);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_alphabet_header);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_sets_header);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_definitions_header);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_definitions_header);
      if (lookahead == '%') ADVANCE(70);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(70);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_rule_name);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_except);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_except);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_where);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '%') ADVANCE(70);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_matched);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_matched);
      if (lookahead == '%') ADVANCE(70);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_in_keyword);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_lpar);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_rpar);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_loptional);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_roptional);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_suffix_op);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_suffix_op);
      if (lookahead == ',') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ignore_op);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ignore_op);
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bool_op);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bool_op);
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_replace_op);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_compose_op);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word_boundary);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(122);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(126);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(125);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(95);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(121);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(127);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(123);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 't') ADVANCE(93);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(120);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(167);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(153);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(140);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(97);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(99);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(133);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(139);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(134);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(141);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(138);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(145);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(147);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(151);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(137);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(143);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(149);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(146);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 's') ADVANCE(82);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 's') ADVANCE(80);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 't') ADVANCE(132);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 't') ADVANCE(142);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(144);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(135);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(70);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_symbol_pair);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '0') ADVANCE(156);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(170);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
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
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 73},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym_alphabet] = STATE(60),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(11), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 11,
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
  [28] = 6,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(19), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(15), 10,
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
  [58] = 4,
    ACTIONS(13), 1,
      sym_comment,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(19), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(15), 12,
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
  [84] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_rule_name,
    ACTIONS(25), 1,
      sym_locus,
    ACTIONS(27), 1,
      sym_except,
    ACTIONS(29), 1,
      sym_where,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(14), 1,
      sym_pattern,
    STATE(88), 1,
      sym_variables,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(11), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [130] = 12,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 4,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_compose_op,
  [172] = 11,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [212] = 11,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_bool_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [252] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(15), 12,
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
  [275] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(57), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(55), 12,
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
  [298] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_locus,
    ACTIONS(66), 1,
      sym_except,
    ACTIONS(69), 1,
      sym_lpar,
    ACTIONS(72), 1,
      sym_loptional,
    ACTIONS(75), 1,
      sym_prefix_op,
    STATE(14), 1,
      sym_pattern,
    ACTIONS(61), 2,
      sym_rule_name,
      sym_where,
    ACTIONS(78), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(81), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(11), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [339] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(11), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 12,
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
  [362] = 11,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(86), 1,
      sym_ignore_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(7), 2,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(11), 2,
      sym_locus,
      sym_bool_op,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [400] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(86), 1,
      sym_ignore_op,
    ACTIONS(88), 1,
      sym_locus,
    ACTIONS(90), 1,
      sym_bool_op,
    ACTIONS(92), 1,
      sym_replace_op,
    ACTIONS(94), 1,
      sym_compose_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [442] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(11), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 8,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [468] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(96), 1,
      sym_semicolon,
    ACTIONS(98), 1,
      sym_compose_op,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [510] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(86), 1,
      sym_ignore_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(19), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(15), 7,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [538] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(100), 1,
      sym_roptional,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [580] = 4,
    ACTIONS(13), 1,
      sym_comment,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(19), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(15), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [604] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(102), 1,
      sym_roptional,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [646] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(104), 1,
      sym_roptional,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [688] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(86), 1,
      sym_ignore_op,
    ACTIONS(90), 1,
      sym_bool_op,
    ACTIONS(92), 1,
      sym_replace_op,
    ACTIONS(94), 1,
      sym_compose_op,
    ACTIONS(106), 1,
      sym_locus,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [730] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(102), 1,
      sym_rpar,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [772] = 12,
    ACTIONS(11), 1,
      sym_locus,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(86), 1,
      sym_ignore_op,
    ACTIONS(90), 1,
      sym_bool_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(7), 2,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [812] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(108), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [854] = 13,
    ACTIONS(7), 1,
      sym_compose_op,
    ACTIONS(11), 1,
      sym_locus,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(86), 1,
      sym_ignore_op,
    ACTIONS(90), 1,
      sym_bool_op,
    ACTIONS(92), 1,
      sym_replace_op,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [896] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(110), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [938] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(112), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [980] = 13,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(47), 1,
      sym_bool_op,
    ACTIONS(49), 1,
      sym_replace_op,
    ACTIONS(98), 1,
      sym_compose_op,
    ACTIONS(100), 1,
      sym_rpar,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1022] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(57), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(55), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [1043] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(19), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(15), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [1064] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(11), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(7), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [1085] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(116), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1105] = 10,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_locus,
    ACTIONS(27), 1,
      sym_except,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(14), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(5), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [1139] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(120), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1159] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(124), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1179] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(128), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1199] = 8,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(110), 1,
      sym_semicolon,
    STATE(25), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1226] = 8,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(88), 1,
      sym_locus,
    STATE(22), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [1253] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(130), 4,
      sym_locus,
      sym_except,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(132), 5,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
  [1270] = 8,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(96), 1,
      sym_semicolon,
    STATE(27), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1297] = 8,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    ACTIONS(134), 1,
      sym_semicolon,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1324] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(23), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1348] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(8), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1372] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1396] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1420] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(20), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1444] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(4), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1468] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(2), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1492] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(18), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1516] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(28), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1540] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1564] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(15), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [1588] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(13), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [1612] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(24), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [1636] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(26), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [1660] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(19), 1,
      sym_pattern,
    ACTIONS(37), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(39), 2,
      sym_symbol,
      sym_symbol_pair,
  [1684] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_lpar,
    ACTIONS(43), 1,
      sym_loptional,
    ACTIONS(45), 1,
      sym_prefix_op,
    STATE(29), 1,
      sym_pattern,
    ACTIONS(51), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(53), 2,
      sym_symbol,
      sym_symbol_pair,
  [1708] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_semicolon,
    ACTIONS(140), 1,
      sym_symbol,
    STATE(63), 1,
      aux_sym_variables_repeat1,
    STATE(94), 1,
      sym_variable_keyword,
    ACTIONS(138), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [1728] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_sets_header,
    ACTIONS(144), 1,
      sym_definitions_header,
    ACTIONS(146), 1,
      sym_rules_header,
    STATE(69), 1,
      sym_sets,
    STATE(86), 1,
      sym_definitions,
    STATE(96), 1,
      sym_rules,
  [1750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LT_EQ,
    STATE(34), 1,
      sym_arrow,
    ACTIONS(148), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [1765] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_symbol,
    ACTIONS(152), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(64), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1780] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_semicolon,
    ACTIONS(160), 1,
      sym_symbol,
    STATE(63), 1,
      aux_sym_variables_repeat1,
    ACTIONS(158), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [1797] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_symbol,
    ACTIONS(163), 2,
      sym_definitions_header,
      sym_rules_header,
    STATE(64), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym_rule_name,
    STATE(68), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1826] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_semicolon,
    STATE(70), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(174), 2,
      sym_symbol,
      sym_symbol_pair,
  [1840] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_semicolon,
    STATE(70), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(174), 2,
      sym_symbol,
      sym_symbol_pair,
  [1854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      sym_rule_name,
    STATE(68), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_definitions_header,
    ACTIONS(146), 1,
      sym_rules_header,
    STATE(83), 1,
      sym_definitions,
    STATE(90), 1,
      sym_rules,
  [1884] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_semicolon,
    STATE(70), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(185), 2,
      sym_symbol,
      sym_symbol_pair,
  [1898] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_rules_header,
    ACTIONS(190), 1,
      sym_symbol,
    STATE(71), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [1912] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_semicolon,
    ACTIONS(195), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [1924] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_rules_header,
    ACTIONS(199), 1,
      sym_symbol,
    STATE(71), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [1938] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_semicolon,
    ACTIONS(203), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [1950] = 3,
    ACTIONS(13), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(205), 2,
      sym_symbol,
      sym_symbol_pair,
  [1961] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_symbol,
    STATE(62), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1972] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(207), 3,
      sym_definitions_header,
      sym_rules_header,
      sym_symbol,
  [1981] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_symbol,
    STATE(73), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_rule_name,
    STATE(65), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [2012] = 3,
    ACTIONS(13), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(211), 2,
      sym_symbol,
      sym_symbol_pair,
  [2023] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_loptional,
    ACTIONS(215), 1,
      sym_symbol,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_rules_header,
    STATE(97), 1,
      sym_rules,
  [2043] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_symbol,
    STATE(59), 1,
      aux_sym_variables_repeat1,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_rules_header,
    STATE(90), 1,
      sym_rules,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [2087] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym_rules_header,
      sym_symbol,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [2102] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_symbol_pair,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_eq,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_eq,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_semicolon,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_semicolon,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_in_keyword,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 298,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 362,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 442,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 510,
  [SMALL_STATE(18)] = 538,
  [SMALL_STATE(19)] = 580,
  [SMALL_STATE(20)] = 604,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 688,
  [SMALL_STATE(23)] = 730,
  [SMALL_STATE(24)] = 772,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 854,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 980,
  [SMALL_STATE(30)] = 1022,
  [SMALL_STATE(31)] = 1043,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1085,
  [SMALL_STATE(34)] = 1105,
  [SMALL_STATE(35)] = 1139,
  [SMALL_STATE(36)] = 1159,
  [SMALL_STATE(37)] = 1179,
  [SMALL_STATE(38)] = 1199,
  [SMALL_STATE(39)] = 1226,
  [SMALL_STATE(40)] = 1253,
  [SMALL_STATE(41)] = 1270,
  [SMALL_STATE(42)] = 1297,
  [SMALL_STATE(43)] = 1324,
  [SMALL_STATE(44)] = 1348,
  [SMALL_STATE(45)] = 1372,
  [SMALL_STATE(46)] = 1396,
  [SMALL_STATE(47)] = 1420,
  [SMALL_STATE(48)] = 1444,
  [SMALL_STATE(49)] = 1468,
  [SMALL_STATE(50)] = 1492,
  [SMALL_STATE(51)] = 1516,
  [SMALL_STATE(52)] = 1540,
  [SMALL_STATE(53)] = 1564,
  [SMALL_STATE(54)] = 1588,
  [SMALL_STATE(55)] = 1612,
  [SMALL_STATE(56)] = 1636,
  [SMALL_STATE(57)] = 1660,
  [SMALL_STATE(58)] = 1684,
  [SMALL_STATE(59)] = 1708,
  [SMALL_STATE(60)] = 1728,
  [SMALL_STATE(61)] = 1750,
  [SMALL_STATE(62)] = 1765,
  [SMALL_STATE(63)] = 1780,
  [SMALL_STATE(64)] = 1797,
  [SMALL_STATE(65)] = 1812,
  [SMALL_STATE(66)] = 1826,
  [SMALL_STATE(67)] = 1840,
  [SMALL_STATE(68)] = 1854,
  [SMALL_STATE(69)] = 1868,
  [SMALL_STATE(70)] = 1884,
  [SMALL_STATE(71)] = 1898,
  [SMALL_STATE(72)] = 1912,
  [SMALL_STATE(73)] = 1924,
  [SMALL_STATE(74)] = 1938,
  [SMALL_STATE(75)] = 1950,
  [SMALL_STATE(76)] = 1961,
  [SMALL_STATE(77)] = 1972,
  [SMALL_STATE(78)] = 1981,
  [SMALL_STATE(79)] = 1992,
  [SMALL_STATE(80)] = 2003,
  [SMALL_STATE(81)] = 2012,
  [SMALL_STATE(82)] = 2023,
  [SMALL_STATE(83)] = 2033,
  [SMALL_STATE(84)] = 2043,
  [SMALL_STATE(85)] = 2053,
  [SMALL_STATE(86)] = 2061,
  [SMALL_STATE(87)] = 2071,
  [SMALL_STATE(88)] = 2079,
  [SMALL_STATE(89)] = 2087,
  [SMALL_STATE(90)] = 2095,
  [SMALL_STATE(91)] = 2102,
  [SMALL_STATE(92)] = 2109,
  [SMALL_STATE(93)] = 2116,
  [SMALL_STATE(94)] = 2123,
  [SMALL_STATE(95)] = 2130,
  [SMALL_STATE(96)] = 2137,
  [SMALL_STATE(97)] = 2144,
  [SMALL_STATE(98)] = 2151,
  [SMALL_STATE(99)] = 2158,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(42),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(39),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(58),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(50),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(57),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(30),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(30),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(98),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2), SHIFT_REPEAT(93),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(91),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(70),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2), SHIFT_REPEAT(92),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitions, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_keyword, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
