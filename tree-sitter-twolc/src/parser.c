#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
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
  sym_rules = 37,
  sym_arrow = 38,
  sym_rule = 39,
  sym_context = 40,
  sym_variable_keyword = 41,
  sym_variables = 42,
  sym_pattern = 43,
  aux_sym_alphabet_repeat1 = 44,
  aux_sym_sets_repeat1 = 45,
  aux_sym_rules_repeat1 = 46,
  aux_sym_rule_repeat1 = 47,
  aux_sym_variables_repeat1 = 48,
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
  [sym_rules] = "rules",
  [sym_arrow] = "arrow",
  [sym_rule] = "rule",
  [sym_context] = "context",
  [sym_variable_keyword] = "variable_keyword",
  [sym_variables] = "variables",
  [sym_pattern] = "pattern",
  [aux_sym_alphabet_repeat1] = "alphabet_repeat1",
  [aux_sym_sets_repeat1] = "sets_repeat1",
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
  [sym_rules] = sym_rules,
  [sym_arrow] = sym_arrow,
  [sym_rule] = sym_rule,
  [sym_context] = sym_context,
  [sym_variable_keyword] = sym_variable_keyword,
  [sym_variables] = sym_variables,
  [sym_pattern] = sym_pattern,
  [aux_sym_alphabet_repeat1] = aux_sym_alphabet_repeat1,
  [aux_sym_sets_repeat1] = aux_sym_sets_repeat1,
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
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead)) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          (lookahead < '\'' || '<' < lookahead) &&
          lookahead != ']') ADVANCE(127);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(143);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(143);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(143);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          (lookahead < '$' || '=' < lookahead) &&
          lookahead != '?' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'r' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == ':') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(114);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(148);
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
      if (lookahead == '>') ADVANCE(112);
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
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(96);
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
      if (lookahead == 'e') ADVANCE(92);
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
      if (lookahead == 'n') ADVANCE(98);
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
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(75);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0 &&
          (lookahead < '&' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(127);
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
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
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
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_rule_name);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_locus);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_except);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_except);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_where);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_matched);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_matched);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_in_keyword);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_lpar);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_rpar);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_loptional);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_roptional);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_suffix_op);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_suffix_op);
      if (lookahead == ',') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ignore_op);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ignore_op);
      if (lookahead == '<') ADVANCE(20);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bool_op);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bool_op);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_replace_op);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_compose_op);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word_boundary);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(120);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(124);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(123);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(93);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(119);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(125);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(121);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 't') ADVANCE(91);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(118);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == ':') ADVANCE(148);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(141);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(136);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(95);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(97);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(131);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(138);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(132);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(135);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(134);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 's') ADVANCE(80);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 't') ADVANCE(130);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(137);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(133);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(69);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol_pair);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '0') ADVANCE(144);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(68);
      if (!sym_symbol_pair_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead == '%') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol_pair);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '=') ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
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
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
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
    [sym_source_file] = STATE(87),
    [sym_alphabet] = STATE(63),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_rule_name,
    ACTIONS(11), 1,
      sym_locus,
    ACTIONS(13), 1,
      sym_except,
    ACTIONS(15), 1,
      sym_where,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(28), 1,
      sym_pattern,
    STATE(74), 1,
      sym_variables,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(9), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [46] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 4,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_compose_op,
  [88] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [128] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(49), 1,
      sym_bool_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 5,
      sym_semicolon,
      sym_rpar,
      sym_roptional,
      sym_replace_op,
      sym_compose_op,
  [168] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_suffix_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(49), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 11,
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
  [196] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(53), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 10,
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
  [226] = 4,
    ACTIONS(27), 1,
      sym_comment,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(53), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 12,
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
  [252] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_locus,
    ACTIONS(62), 1,
      sym_except,
    ACTIONS(65), 1,
      sym_lpar,
    ACTIONS(68), 1,
      sym_loptional,
    ACTIONS(71), 1,
      sym_prefix_op,
    STATE(28), 1,
      sym_pattern,
    ACTIONS(57), 2,
      sym_rule_name,
      sym_where,
    ACTIONS(74), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(77), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(9), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [293] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(49), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 12,
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
  [316] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(53), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 12,
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
  [339] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(82), 3,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(80), 12,
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
  [362] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(49), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 8,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [388] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(86), 1,
      sym_rpar,
    ACTIONS(88), 1,
      sym_compose_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [430] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(88), 1,
      sym_compose_op,
    ACTIONS(90), 1,
      sym_semicolon,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [472] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(92), 1,
      sym_ignore_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(53), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 7,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [500] = 13,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_compose_op,
    ACTIONS(49), 1,
      sym_locus,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(92), 1,
      sym_ignore_op,
    ACTIONS(94), 1,
      sym_bool_op,
    ACTIONS(96), 1,
      sym_replace_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [542] = 12,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_locus,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(92), 1,
      sym_ignore_op,
    ACTIONS(94), 1,
      sym_bool_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 2,
      sym_replace_op,
      sym_compose_op,
  [582] = 11,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(92), 1,
      sym_ignore_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 2,
      sym_replace_op,
      sym_compose_op,
    ACTIONS(49), 2,
      sym_locus,
      sym_bool_op,
  [620] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(86), 1,
      sym_roptional,
    ACTIONS(88), 1,
      sym_compose_op,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [662] = 4,
    ACTIONS(27), 1,
      sym_comment,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(53), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [686] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(88), 1,
      sym_compose_op,
    ACTIONS(98), 1,
      sym_roptional,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [728] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(88), 1,
      sym_compose_op,
    ACTIONS(98), 1,
      sym_rpar,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [770] = 13,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(92), 1,
      sym_ignore_op,
    ACTIONS(94), 1,
      sym_bool_op,
    ACTIONS(96), 1,
      sym_replace_op,
    ACTIONS(100), 1,
      sym_locus,
    ACTIONS(102), 1,
      sym_compose_op,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [812] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(88), 1,
      sym_compose_op,
    ACTIONS(104), 1,
      sym_semicolon,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [854] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(88), 1,
      sym_compose_op,
    ACTIONS(106), 1,
      sym_semicolon,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [896] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(37), 1,
      sym_suffix_op,
    ACTIONS(39), 1,
      sym_ignore_op,
    ACTIONS(41), 1,
      sym_bool_op,
    ACTIONS(43), 1,
      sym_replace_op,
    ACTIONS(88), 1,
      sym_compose_op,
    ACTIONS(108), 1,
      sym_roptional,
    STATE(7), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [938] = 13,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_suffix_op,
    ACTIONS(92), 1,
      sym_ignore_op,
    ACTIONS(94), 1,
      sym_bool_op,
    ACTIONS(96), 1,
      sym_replace_op,
    ACTIONS(102), 1,
      sym_compose_op,
    ACTIONS(110), 1,
      sym_locus,
    STATE(16), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [980] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(49), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(29), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [1001] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(53), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(51), 9,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_suffix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_compose_op,
      sym_word_boundary,
      sym_any,
  [1022] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(82), 4,
      sym_locus,
      sym_bool_op,
      sym_symbol,
      sym_symbol_pair,
    ACTIONS(80), 9,
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
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(114), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1063] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(118), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1083] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(122), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1103] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_word_boundary,
      sym_any,
    ACTIONS(126), 6,
      sym_rule_name,
      sym_locus,
      sym_except,
      sym_where,
      sym_symbol,
      sym_symbol_pair,
  [1123] = 10,
    ACTIONS(11), 1,
      sym_locus,
    ACTIONS(13), 1,
      sym_except,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(28), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
    STATE(2), 2,
      sym_context,
      aux_sym_rule_repeat1,
  [1157] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(106), 1,
      sym_semicolon,
    STATE(25), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1184] = 8,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_locus,
    STATE(24), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [1211] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(128), 1,
      sym_semicolon,
    STATE(26), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1238] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    ACTIONS(104), 1,
      sym_semicolon,
    STATE(15), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1265] = 3,
    ACTIONS(27), 1,
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
  [1282] = 7,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(18), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [1306] = 7,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(17), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [1330] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(20), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1354] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(14), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1378] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(8), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1402] = 7,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(13), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [1426] = 7,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(21), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [1450] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(22), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1474] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(23), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1498] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(3), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1522] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(4), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1546] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(5), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1570] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(6), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1594] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_lpar,
    ACTIONS(33), 1,
      sym_loptional,
    ACTIONS(35), 1,
      sym_prefix_op,
    STATE(27), 1,
      sym_pattern,
    ACTIONS(45), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(47), 2,
      sym_symbol,
      sym_symbol_pair,
  [1618] = 7,
    ACTIONS(17), 1,
      sym_lpar,
    ACTIONS(19), 1,
      sym_loptional,
    ACTIONS(21), 1,
      sym_prefix_op,
    ACTIONS(27), 1,
      sym_comment,
    STATE(19), 1,
      sym_pattern,
    ACTIONS(23), 2,
      sym_word_boundary,
      sym_any,
    ACTIONS(25), 2,
      sym_symbol,
      sym_symbol_pair,
  [1642] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_semicolon,
    ACTIONS(138), 1,
      sym_symbol,
    STATE(58), 1,
      aux_sym_variables_repeat1,
    STATE(88), 1,
      sym_variable_keyword,
    ACTIONS(136), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [1662] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_semicolon,
    ACTIONS(144), 1,
      sym_symbol,
    STATE(58), 1,
      aux_sym_variables_repeat1,
    ACTIONS(142), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LT_EQ,
    STATE(36), 1,
      sym_arrow,
    ACTIONS(147), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [1694] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_semicolon,
    STATE(60), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(153), 2,
      sym_symbol,
      sym_symbol_pair,
  [1708] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_semicolon,
    STATE(60), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(158), 2,
      sym_symbol,
      sym_symbol_pair,
  [1722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_rule_name,
    STATE(62), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_sets_header,
    ACTIONS(167), 1,
      sym_rules_header,
    STATE(80), 1,
      sym_sets,
    STATE(83), 1,
      sym_rules,
  [1752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_rule_name,
    STATE(62), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1766] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_semicolon,
    ACTIONS(175), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [1778] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_rules_header,
    ACTIONS(179), 1,
      sym_symbol,
    STATE(66), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1792] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_semicolon,
    ACTIONS(184), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [1804] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_rules_header,
    ACTIONS(188), 1,
      sym_symbol,
    STATE(66), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1818] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_semicolon,
    STATE(60), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(158), 2,
      sym_symbol,
      sym_symbol_pair,
  [1832] = 3,
    ACTIONS(27), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(192), 2,
      sym_symbol,
      sym_symbol_pair,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_rule_name,
    STATE(64), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [1854] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_symbol,
    STATE(68), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [1865] = 3,
    ACTIONS(27), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_alphabet_repeat1,
    ACTIONS(194), 2,
      sym_symbol,
      sym_symbol_pair,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [1884] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_symbol,
    STATE(57), 1,
      aux_sym_variables_repeat1,
  [1894] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(198), 2,
      sym_rules_header,
      sym_symbol,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [1910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [1918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      sym_sets_header,
      sym_rules_header,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_rules_header,
    STATE(84), 1,
      sym_rules,
  [1936] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_loptional,
    ACTIONS(208), 1,
      sym_symbol,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_eq,
  [1953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_in_keyword,
  [1974] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_symbol_pair,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [1988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_semicolon,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_semicolon,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 362,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 430,
  [SMALL_STATE(16)] = 472,
  [SMALL_STATE(17)] = 500,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 662,
  [SMALL_STATE(22)] = 686,
  [SMALL_STATE(23)] = 728,
  [SMALL_STATE(24)] = 770,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 854,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 980,
  [SMALL_STATE(30)] = 1001,
  [SMALL_STATE(31)] = 1022,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1063,
  [SMALL_STATE(34)] = 1083,
  [SMALL_STATE(35)] = 1103,
  [SMALL_STATE(36)] = 1123,
  [SMALL_STATE(37)] = 1157,
  [SMALL_STATE(38)] = 1184,
  [SMALL_STATE(39)] = 1211,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1265,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1306,
  [SMALL_STATE(44)] = 1330,
  [SMALL_STATE(45)] = 1354,
  [SMALL_STATE(46)] = 1378,
  [SMALL_STATE(47)] = 1402,
  [SMALL_STATE(48)] = 1426,
  [SMALL_STATE(49)] = 1450,
  [SMALL_STATE(50)] = 1474,
  [SMALL_STATE(51)] = 1498,
  [SMALL_STATE(52)] = 1522,
  [SMALL_STATE(53)] = 1546,
  [SMALL_STATE(54)] = 1570,
  [SMALL_STATE(55)] = 1594,
  [SMALL_STATE(56)] = 1618,
  [SMALL_STATE(57)] = 1642,
  [SMALL_STATE(58)] = 1662,
  [SMALL_STATE(59)] = 1679,
  [SMALL_STATE(60)] = 1694,
  [SMALL_STATE(61)] = 1708,
  [SMALL_STATE(62)] = 1722,
  [SMALL_STATE(63)] = 1736,
  [SMALL_STATE(64)] = 1752,
  [SMALL_STATE(65)] = 1766,
  [SMALL_STATE(66)] = 1778,
  [SMALL_STATE(67)] = 1792,
  [SMALL_STATE(68)] = 1804,
  [SMALL_STATE(69)] = 1818,
  [SMALL_STATE(70)] = 1832,
  [SMALL_STATE(71)] = 1843,
  [SMALL_STATE(72)] = 1854,
  [SMALL_STATE(73)] = 1865,
  [SMALL_STATE(74)] = 1876,
  [SMALL_STATE(75)] = 1884,
  [SMALL_STATE(76)] = 1894,
  [SMALL_STATE(77)] = 1902,
  [SMALL_STATE(78)] = 1910,
  [SMALL_STATE(79)] = 1918,
  [SMALL_STATE(80)] = 1926,
  [SMALL_STATE(81)] = 1936,
  [SMALL_STATE(82)] = 1946,
  [SMALL_STATE(83)] = 1953,
  [SMALL_STATE(84)] = 1960,
  [SMALL_STATE(85)] = 1967,
  [SMALL_STATE(86)] = 1974,
  [SMALL_STATE(87)] = 1981,
  [SMALL_STATE(88)] = 1988,
  [SMALL_STATE(89)] = 1995,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(39),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(50),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(49),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(48),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(31),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(31),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(85),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 2), SHIFT_REPEAT(60),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(86),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2), SHIFT_REPEAT(82),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_keyword, 1),
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
