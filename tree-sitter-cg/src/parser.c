#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 406
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  sym_END = 1,
  sym_eq = 2,
  sym_semicolon = 3,
  aux_sym_special_list_name_token1 = 4,
  aux_sym_special_list_name_token2 = 5,
  aux_sym_special_list_name_token3 = 6,
  sym_STATIC_SETS = 7,
  sym_MAPPING_PREFIX = 8,
  sym_SUBREADINGS = 9,
  sym_RTL = 10,
  sym_LTR = 11,
  sym_PARENTHESES = 12,
  sym_LIST = 13,
  sym_SET = 14,
  sym_INCLUDE = 15,
  aux_sym_section_header_token1 = 16,
  aux_sym_section_header_token2 = 17,
  aux_sym_section_header_token3 = 18,
  aux_sym_section_header_token4 = 19,
  aux_sym_section_header_token5 = 20,
  aux_sym_section_header_token6 = 21,
  aux_sym_section_header_token7 = 22,
  aux_sym_section_header_token8 = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_IF = 26,
  sym_TARGET = 27,
  anon_sym_COLON = 28,
  sym_TO = 29,
  sym_FROM = 30,
  sym_WITHCHILD = 31,
  sym_NOCHILD = 32,
  sym_BEFORE = 33,
  sym_AFTER = 34,
  sym_WITH = 35,
  sym_ONCE = 36,
  sym_ALWAYS = 37,
  sym_TEMPLATE = 38,
  sym_context_modifier = 39,
  sym_BARRIER = 40,
  sym_LINK = 41,
  sym_OR = 42,
  anon_sym_LBRACK = 43,
  anon_sym_COMMA = 44,
  anon_sym_RBRACK = 45,
  sym_set_op = 46,
  sym_rawpath = 47,
  sym_prefix = 48,
  sym_ruletype = 49,
  sym_ruletype_substitute_etc = 50,
  sym_ruletype_parentchild = 51,
  sym_ruletype_relation = 52,
  sym_ruletype_relations = 53,
  sym_ruletype_map_etc = 54,
  sym_ruletype_addcohort = 55,
  sym_ruletype_move = 56,
  sym_ruletype_switch = 57,
  sym_ruletype_external = 58,
  sym_ruleflag_name = 59,
  aux_sym_setname_token1 = 60,
  aux_sym_setname_t_token1 = 61,
  sym_ntag = 62,
  sym_qtag = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym_special_list_name = 66,
  sym_set_special_list = 67,
  sym_static_sets = 68,
  sym_mapping_prefix = 69,
  sym_subreadings = 70,
  sym_parentheses = 71,
  sym_list = 72,
  sym_set = 73,
  sym_include = 74,
  sym_section_header = 75,
  aux_sym__context = 76,
  sym__if_context = 77,
  sym__rule_target = 78,
  sym__shared_rule_end = 79,
  sym__rule_tag = 80,
  sym_rule = 81,
  sym_rule_substitute_etc = 82,
  sym_rule_map_etc = 83,
  sym__to_from = 84,
  sym_rule_parentchild = 85,
  sym__child_specifier = 86,
  sym_rule_move = 87,
  sym_rule_switch = 88,
  sym_rule_relation = 89,
  sym_rule_relations = 90,
  sym_rule_addcohort = 91,
  sym_rule_external = 92,
  sym_template = 93,
  sym_contexttest = 94,
  sym_inlineset = 95,
  sym_inlineset_single = 96,
  sym_taglist = 97,
  sym_compotag = 98,
  sym_filepath = 99,
  sym_tag = 100,
  sym_contextpos = 101,
  sym_ruleflag = 102,
  sym_setname = 103,
  sym_setname_t = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_static_sets_repeat1 = 106,
  aux_sym_parentheses_repeat1 = 107,
  aux_sym_contexttest_repeat1 = 108,
  aux_sym_contexttest_repeat2 = 109,
  aux_sym_inlineset_repeat1 = 110,
  aux_sym_taglist_repeat1 = 111,
  aux_sym_compotag_repeat1 = 112,
  aux_sym_ruleflag_repeat1 = 113,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_END] = "END",
  [sym_eq] = "eq",
  [sym_semicolon] = "semicolon",
  [aux_sym_special_list_name_token1] = "special_list_name_token1",
  [aux_sym_special_list_name_token2] = "special_list_name_token2",
  [aux_sym_special_list_name_token3] = "special_list_name_token3",
  [sym_STATIC_SETS] = "STATIC_SETS",
  [sym_MAPPING_PREFIX] = "MAPPING_PREFIX",
  [sym_SUBREADINGS] = "SUBREADINGS",
  [sym_RTL] = "RTL",
  [sym_LTR] = "LTR",
  [sym_PARENTHESES] = "PARENTHESES",
  [sym_LIST] = "LIST",
  [sym_SET] = "SET",
  [sym_INCLUDE] = "INCLUDE",
  [aux_sym_section_header_token1] = "section_header_token1",
  [aux_sym_section_header_token2] = "section_header_token2",
  [aux_sym_section_header_token3] = "section_header_token3",
  [aux_sym_section_header_token4] = "section_header_token4",
  [aux_sym_section_header_token5] = "section_header_token5",
  [aux_sym_section_header_token6] = "section_header_token6",
  [aux_sym_section_header_token7] = "section_header_token7",
  [aux_sym_section_header_token8] = "section_header_token8",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_IF] = "IF",
  [sym_TARGET] = "TARGET",
  [anon_sym_COLON] = ":",
  [sym_TO] = "TO",
  [sym_FROM] = "FROM",
  [sym_WITHCHILD] = "WITHCHILD",
  [sym_NOCHILD] = "NOCHILD",
  [sym_BEFORE] = "BEFORE",
  [sym_AFTER] = "AFTER",
  [sym_WITH] = "WITH",
  [sym_ONCE] = "ONCE",
  [sym_ALWAYS] = "ALWAYS",
  [sym_TEMPLATE] = "TEMPLATE",
  [sym_context_modifier] = "context_modifier",
  [sym_BARRIER] = "BARRIER",
  [sym_LINK] = "LINK",
  [sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_set_op] = "set_op",
  [sym_rawpath] = "rawpath",
  [sym_prefix] = "prefix",
  [sym_ruletype] = "ruletype",
  [sym_ruletype_substitute_etc] = "ruletype_substitute_etc",
  [sym_ruletype_parentchild] = "ruletype_parentchild",
  [sym_ruletype_relation] = "ruletype_relation",
  [sym_ruletype_relations] = "ruletype_relations",
  [sym_ruletype_map_etc] = "ruletype_map_etc",
  [sym_ruletype_addcohort] = "ruletype_addcohort",
  [sym_ruletype_move] = "ruletype_move",
  [sym_ruletype_switch] = "ruletype_switch",
  [sym_ruletype_external] = "ruletype_external",
  [sym_ruleflag_name] = "ruleflag_name",
  [aux_sym_setname_token1] = "setname_token1",
  [aux_sym_setname_t_token1] = "setname_t_token1",
  [sym_ntag] = "ntag",
  [sym_qtag] = "qtag",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_special_list_name] = "special_list_name",
  [sym_set_special_list] = "set_special_list",
  [sym_static_sets] = "static_sets",
  [sym_mapping_prefix] = "mapping_prefix",
  [sym_subreadings] = "subreadings",
  [sym_parentheses] = "parentheses",
  [sym_list] = "list",
  [sym_set] = "set",
  [sym_include] = "include",
  [sym_section_header] = "section_header",
  [aux_sym__context] = "_context",
  [sym__if_context] = "_if_context",
  [sym__rule_target] = "_rule_target",
  [sym__shared_rule_end] = "_shared_rule_end",
  [sym__rule_tag] = "_rule_tag",
  [sym_rule] = "rule",
  [sym_rule_substitute_etc] = "rule_substitute_etc",
  [sym_rule_map_etc] = "rule_map_etc",
  [sym__to_from] = "_to_from",
  [sym_rule_parentchild] = "rule_parentchild",
  [sym__child_specifier] = "_child_specifier",
  [sym_rule_move] = "rule_move",
  [sym_rule_switch] = "rule_switch",
  [sym_rule_relation] = "rule_relation",
  [sym_rule_relations] = "rule_relations",
  [sym_rule_addcohort] = "rule_addcohort",
  [sym_rule_external] = "rule_external",
  [sym_template] = "template",
  [sym_contexttest] = "contexttest",
  [sym_inlineset] = "inlineset",
  [sym_inlineset_single] = "inlineset_single",
  [sym_taglist] = "taglist",
  [sym_compotag] = "compotag",
  [sym_filepath] = "filepath",
  [sym_tag] = "tag",
  [sym_contextpos] = "contextpos",
  [sym_ruleflag] = "ruleflag",
  [sym_setname] = "setname",
  [sym_setname_t] = "setname_t",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_static_sets_repeat1] = "static_sets_repeat1",
  [aux_sym_parentheses_repeat1] = "parentheses_repeat1",
  [aux_sym_contexttest_repeat1] = "contexttest_repeat1",
  [aux_sym_contexttest_repeat2] = "contexttest_repeat2",
  [aux_sym_inlineset_repeat1] = "inlineset_repeat1",
  [aux_sym_taglist_repeat1] = "taglist_repeat1",
  [aux_sym_compotag_repeat1] = "compotag_repeat1",
  [aux_sym_ruleflag_repeat1] = "ruleflag_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_END] = sym_END,
  [sym_eq] = sym_eq,
  [sym_semicolon] = sym_semicolon,
  [aux_sym_special_list_name_token1] = aux_sym_special_list_name_token1,
  [aux_sym_special_list_name_token2] = aux_sym_special_list_name_token2,
  [aux_sym_special_list_name_token3] = aux_sym_special_list_name_token3,
  [sym_STATIC_SETS] = sym_STATIC_SETS,
  [sym_MAPPING_PREFIX] = sym_MAPPING_PREFIX,
  [sym_SUBREADINGS] = sym_SUBREADINGS,
  [sym_RTL] = sym_RTL,
  [sym_LTR] = sym_LTR,
  [sym_PARENTHESES] = sym_PARENTHESES,
  [sym_LIST] = sym_LIST,
  [sym_SET] = sym_SET,
  [sym_INCLUDE] = sym_INCLUDE,
  [aux_sym_section_header_token1] = aux_sym_section_header_token1,
  [aux_sym_section_header_token2] = aux_sym_section_header_token2,
  [aux_sym_section_header_token3] = aux_sym_section_header_token3,
  [aux_sym_section_header_token4] = aux_sym_section_header_token4,
  [aux_sym_section_header_token5] = aux_sym_section_header_token5,
  [aux_sym_section_header_token6] = aux_sym_section_header_token6,
  [aux_sym_section_header_token7] = aux_sym_section_header_token7,
  [aux_sym_section_header_token8] = aux_sym_section_header_token8,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_IF] = sym_IF,
  [sym_TARGET] = sym_TARGET,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_TO] = sym_TO,
  [sym_FROM] = sym_FROM,
  [sym_WITHCHILD] = sym_WITHCHILD,
  [sym_NOCHILD] = sym_NOCHILD,
  [sym_BEFORE] = sym_BEFORE,
  [sym_AFTER] = sym_AFTER,
  [sym_WITH] = sym_WITH,
  [sym_ONCE] = sym_ONCE,
  [sym_ALWAYS] = sym_ALWAYS,
  [sym_TEMPLATE] = sym_TEMPLATE,
  [sym_context_modifier] = sym_context_modifier,
  [sym_BARRIER] = sym_BARRIER,
  [sym_LINK] = sym_LINK,
  [sym_OR] = sym_OR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_set_op] = sym_set_op,
  [sym_rawpath] = sym_rawpath,
  [sym_prefix] = sym_prefix,
  [sym_ruletype] = sym_ruletype,
  [sym_ruletype_substitute_etc] = sym_ruletype_substitute_etc,
  [sym_ruletype_parentchild] = sym_ruletype_parentchild,
  [sym_ruletype_relation] = sym_ruletype_relation,
  [sym_ruletype_relations] = sym_ruletype_relations,
  [sym_ruletype_map_etc] = sym_ruletype_map_etc,
  [sym_ruletype_addcohort] = sym_ruletype_addcohort,
  [sym_ruletype_move] = sym_ruletype_move,
  [sym_ruletype_switch] = sym_ruletype_switch,
  [sym_ruletype_external] = sym_ruletype_external,
  [sym_ruleflag_name] = sym_ruleflag_name,
  [aux_sym_setname_token1] = aux_sym_setname_token1,
  [aux_sym_setname_t_token1] = aux_sym_setname_t_token1,
  [sym_ntag] = sym_ntag,
  [sym_qtag] = sym_qtag,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_special_list_name] = sym_special_list_name,
  [sym_set_special_list] = sym_set_special_list,
  [sym_static_sets] = sym_static_sets,
  [sym_mapping_prefix] = sym_mapping_prefix,
  [sym_subreadings] = sym_subreadings,
  [sym_parentheses] = sym_parentheses,
  [sym_list] = sym_list,
  [sym_set] = sym_set,
  [sym_include] = sym_include,
  [sym_section_header] = sym_section_header,
  [aux_sym__context] = aux_sym__context,
  [sym__if_context] = sym__if_context,
  [sym__rule_target] = sym__rule_target,
  [sym__shared_rule_end] = sym__shared_rule_end,
  [sym__rule_tag] = sym__rule_tag,
  [sym_rule] = sym_rule,
  [sym_rule_substitute_etc] = sym_rule_substitute_etc,
  [sym_rule_map_etc] = sym_rule_map_etc,
  [sym__to_from] = sym__to_from,
  [sym_rule_parentchild] = sym_rule_parentchild,
  [sym__child_specifier] = sym__child_specifier,
  [sym_rule_move] = sym_rule_move,
  [sym_rule_switch] = sym_rule_switch,
  [sym_rule_relation] = sym_rule_relation,
  [sym_rule_relations] = sym_rule_relations,
  [sym_rule_addcohort] = sym_rule_addcohort,
  [sym_rule_external] = sym_rule_external,
  [sym_template] = sym_template,
  [sym_contexttest] = sym_contexttest,
  [sym_inlineset] = sym_inlineset,
  [sym_inlineset_single] = sym_inlineset_single,
  [sym_taglist] = sym_taglist,
  [sym_compotag] = sym_compotag,
  [sym_filepath] = sym_filepath,
  [sym_tag] = sym_tag,
  [sym_contextpos] = sym_contextpos,
  [sym_ruleflag] = sym_ruleflag,
  [sym_setname] = sym_setname,
  [sym_setname_t] = sym_setname_t,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_static_sets_repeat1] = aux_sym_static_sets_repeat1,
  [aux_sym_parentheses_repeat1] = aux_sym_parentheses_repeat1,
  [aux_sym_contexttest_repeat1] = aux_sym_contexttest_repeat1,
  [aux_sym_contexttest_repeat2] = aux_sym_contexttest_repeat2,
  [aux_sym_inlineset_repeat1] = aux_sym_inlineset_repeat1,
  [aux_sym_taglist_repeat1] = aux_sym_taglist_repeat1,
  [aux_sym_compotag_repeat1] = aux_sym_compotag_repeat1,
  [aux_sym_ruleflag_repeat1] = aux_sym_ruleflag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_END] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_special_list_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_list_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_list_name_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_STATIC_SETS] = {
    .visible = true,
    .named = true,
  },
  [sym_MAPPING_PREFIX] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBREADINGS] = {
    .visible = true,
    .named = true,
  },
  [sym_RTL] = {
    .visible = true,
    .named = true,
  },
  [sym_LTR] = {
    .visible = true,
    .named = true,
  },
  [sym_PARENTHESES] = {
    .visible = true,
    .named = true,
  },
  [sym_LIST] = {
    .visible = true,
    .named = true,
  },
  [sym_SET] = {
    .visible = true,
    .named = true,
  },
  [sym_INCLUDE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_header_token8] = {
    .visible = false,
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
  [sym_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_TARGET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_TO] = {
    .visible = true,
    .named = true,
  },
  [sym_FROM] = {
    .visible = true,
    .named = true,
  },
  [sym_WITHCHILD] = {
    .visible = true,
    .named = true,
  },
  [sym_NOCHILD] = {
    .visible = true,
    .named = true,
  },
  [sym_BEFORE] = {
    .visible = true,
    .named = true,
  },
  [sym_AFTER] = {
    .visible = true,
    .named = true,
  },
  [sym_WITH] = {
    .visible = true,
    .named = true,
  },
  [sym_ONCE] = {
    .visible = true,
    .named = true,
  },
  [sym_ALWAYS] = {
    .visible = true,
    .named = true,
  },
  [sym_TEMPLATE] = {
    .visible = true,
    .named = true,
  },
  [sym_context_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_BARRIER] = {
    .visible = true,
    .named = true,
  },
  [sym_LINK] = {
    .visible = true,
    .named = true,
  },
  [sym_OR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_set_op] = {
    .visible = true,
    .named = true,
  },
  [sym_rawpath] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_substitute_etc] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_parentchild] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_relations] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_map_etc] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_addcohort] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_move] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_ruletype_external] = {
    .visible = true,
    .named = true,
  },
  [sym_ruleflag_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setname_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setname_t_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ntag] = {
    .visible = true,
    .named = true,
  },
  [sym_qtag] = {
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
  [sym_special_list_name] = {
    .visible = true,
    .named = true,
  },
  [sym_set_special_list] = {
    .visible = true,
    .named = true,
  },
  [sym_static_sets] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_subreadings] = {
    .visible = true,
    .named = true,
  },
  [sym_parentheses] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__context] = {
    .visible = false,
    .named = false,
  },
  [sym__if_context] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_target] = {
    .visible = false,
    .named = true,
  },
  [sym__shared_rule_end] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_substitute_etc] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_map_etc] = {
    .visible = true,
    .named = true,
  },
  [sym__to_from] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_parentchild] = {
    .visible = true,
    .named = true,
  },
  [sym__child_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_move] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_relations] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_addcohort] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_external] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_contexttest] = {
    .visible = true,
    .named = true,
  },
  [sym_inlineset] = {
    .visible = true,
    .named = true,
  },
  [sym_inlineset_single] = {
    .visible = true,
    .named = true,
  },
  [sym_taglist] = {
    .visible = true,
    .named = true,
  },
  [sym_compotag] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_contextpos] = {
    .visible = true,
    .named = true,
  },
  [sym_ruleflag] = {
    .visible = true,
    .named = true,
  },
  [sym_setname] = {
    .visible = true,
    .named = true,
  },
  [sym_setname_t] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_static_sets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parentheses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contexttest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contexttest_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inlineset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_taglist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compotag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ruleflag_repeat1] = {
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
      if (eof) ADVANCE(441);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(493);
      if (lookahead == ':') ADVANCE(471);
      if (lookahead == ';') ADVANCE(444);
      if (lookahead == '=') ADVANCE(443);
      if (lookahead == 'T') ADVANCE(499);
      if (lookahead == '[') ADVANCE(491);
      if (lookahead == ']') ADVANCE(494);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(516);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(517);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(501);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(495);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ';') ADVANCE(444);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(658);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(439);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(493);
      if (lookahead == ';') ADVANCE(444);
      if (lookahead == '=') ADVANCE(443);
      if (lookahead == ']') ADVANCE(494);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(495);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(649);
      if (lookahead == '[') ADVANCE(492);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == ':') ADVANCE(471);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == 'T') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(424);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(497);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ';') ADVANCE(444);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ';') ADVANCE(444);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(644);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 28:
      if (lookahead == '\\') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(646);
      END_STATE();
    case 31:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(531);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(375);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(344);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(418);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(525);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 169:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      END_STATE();
    case 170:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(518);
      END_STATE();
    case 171:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 172:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      END_STATE();
    case 173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(394);
      END_STATE();
    case 174:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 175:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(170);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 176:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 177:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 178:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 179:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(314);
      END_STATE();
    case 180:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 181:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 182:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 183:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 184:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 186:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(480);
      END_STATE();
    case 187:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(529);
      END_STATE();
    case 188:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(479);
      END_STATE();
    case 189:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 190:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 191:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 192:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 194:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 227:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(488);
      END_STATE();
    case 228:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 254:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 255:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 256:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 257:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 258:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(434);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 316:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 317:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 318:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(526);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 319:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 320:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(524);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 321:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(531);
      END_STATE();
    case 322:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 323:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 324:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 325:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(453);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(454);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(519);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(521);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 423:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 424:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 425:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 426:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 427:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 428:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 429:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 430:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 431:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 432:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(449);
      END_STATE();
    case 433:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(531);
      END_STATE();
    case 434:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(524);
      END_STATE();
    case 435:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(531);
      END_STATE();
    case 436:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(362);
      END_STATE();
    case 437:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 438:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      END_STATE();
    case 439:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 440:
      if (eof) ADVANCE(441);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '(') ADVANCE(465);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(493);
      if (lookahead == ':') ADVANCE(471);
      if (lookahead == ';') ADVANCE(444);
      if (lookahead == '=') ADVANCE(443);
      if (lookahead == ']') ADVANCE(494);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(424);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      END_STATE();
    case 441:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_END);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_special_list_name_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_special_list_name_token2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_special_list_name_token3);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_STATIC_SETS);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_MAPPING_PREFIX);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_SUBREADINGS);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_RTL);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_LTR);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_PARENTHESES);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_LIST);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_SET);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_INCLUDE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_section_header_token2);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_section_header_token3);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_section_header_token4);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_section_header_token5);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_section_header_token6);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_section_header_token7);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_section_header_token8);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_IF);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(518);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_TARGET);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_TARGET);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_TO);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_FROM);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_WITHCHILD);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_NOCHILD);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_BEFORE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_AFTER);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_WITH);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ONCE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ALWAYS);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_TEMPLATE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_context_modifier);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_context_modifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_BARRIER);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_BARRIER);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_LINK);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_LINK);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_OR);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_set_op);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_set_op);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_prefix);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == ':') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(468);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ruletype);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ruletype_substitute_etc);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ruletype_parentchild);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ruletype_relation);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ruletype_relations);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ruletype_addcohort);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ruletype_move);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ruletype_switch);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ruletype_external);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ruleflag_name);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ruleflag_name);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ':') ADVANCE(644);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '_') ADVANCE(544);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(579);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(541);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(645);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == ':') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_qtag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(535);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(661);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 440},
  [2] = {.lex_state = 440},
  [3] = {.lex_state = 440},
  [4] = {.lex_state = 440},
  [5] = {.lex_state = 440},
  [6] = {.lex_state = 440},
  [7] = {.lex_state = 440},
  [8] = {.lex_state = 440},
  [9] = {.lex_state = 440},
  [10] = {.lex_state = 440},
  [11] = {.lex_state = 440},
  [12] = {.lex_state = 440},
  [13] = {.lex_state = 440},
  [14] = {.lex_state = 440},
  [15] = {.lex_state = 440},
  [16] = {.lex_state = 440},
  [17] = {.lex_state = 440},
  [18] = {.lex_state = 440},
  [19] = {.lex_state = 440},
  [20] = {.lex_state = 440},
  [21] = {.lex_state = 440},
  [22] = {.lex_state = 440},
  [23] = {.lex_state = 440},
  [24] = {.lex_state = 440},
  [25] = {.lex_state = 440},
  [26] = {.lex_state = 440},
  [27] = {.lex_state = 440},
  [28] = {.lex_state = 440},
  [29] = {.lex_state = 440},
  [30] = {.lex_state = 440},
  [31] = {.lex_state = 440},
  [32] = {.lex_state = 440},
  [33] = {.lex_state = 440},
  [34] = {.lex_state = 440},
  [35] = {.lex_state = 440},
  [36] = {.lex_state = 440},
  [37] = {.lex_state = 440},
  [38] = {.lex_state = 440},
  [39] = {.lex_state = 440},
  [40] = {.lex_state = 440},
  [41] = {.lex_state = 440},
  [42] = {.lex_state = 440},
  [43] = {.lex_state = 440},
  [44] = {.lex_state = 440},
  [45] = {.lex_state = 440},
  [46] = {.lex_state = 440},
  [47] = {.lex_state = 440},
  [48] = {.lex_state = 440},
  [49] = {.lex_state = 440},
  [50] = {.lex_state = 440},
  [51] = {.lex_state = 440},
  [52] = {.lex_state = 440},
  [53] = {.lex_state = 440},
  [54] = {.lex_state = 440},
  [55] = {.lex_state = 440},
  [56] = {.lex_state = 440},
  [57] = {.lex_state = 440},
  [58] = {.lex_state = 440},
  [59] = {.lex_state = 440},
  [60] = {.lex_state = 440},
  [61] = {.lex_state = 440},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 20},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 20},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 20},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 20},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 440},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 440},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 440},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 440},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 440},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 440},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 440},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 15},
  [252] = {.lex_state = 440},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 440},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 440},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 440},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 440},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 18},
  [267] = {.lex_state = 440},
  [268] = {.lex_state = 440},
  [269] = {.lex_state = 440},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 440},
  [272] = {.lex_state = 440},
  [273] = {.lex_state = 440},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 440},
  [276] = {.lex_state = 440},
  [277] = {.lex_state = 440},
  [278] = {.lex_state = 20},
  [279] = {.lex_state = 440},
  [280] = {.lex_state = 440},
  [281] = {.lex_state = 440},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 440},
  [285] = {.lex_state = 440},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 440},
  [290] = {.lex_state = 440},
  [291] = {.lex_state = 19},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 440},
  [294] = {.lex_state = 440},
  [295] = {.lex_state = 440},
  [296] = {.lex_state = 440},
  [297] = {.lex_state = 440},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 440},
  [300] = {.lex_state = 440},
  [301] = {.lex_state = 440},
  [302] = {.lex_state = 440},
  [303] = {.lex_state = 440},
  [304] = {.lex_state = 440},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 440},
  [307] = {.lex_state = 440},
  [308] = {.lex_state = 440},
  [309] = {.lex_state = 440},
  [310] = {.lex_state = 440},
  [311] = {.lex_state = 15},
  [312] = {.lex_state = 440},
  [313] = {.lex_state = 440},
  [314] = {.lex_state = 440},
  [315] = {.lex_state = 440},
  [316] = {.lex_state = 440},
  [317] = {.lex_state = 440},
  [318] = {.lex_state = 440},
  [319] = {.lex_state = 440},
  [320] = {.lex_state = 440},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 440},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 440},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 440},
  [328] = {.lex_state = 440},
  [329] = {.lex_state = 440},
  [330] = {.lex_state = 440},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 440},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 440},
  [335] = {.lex_state = 440},
  [336] = {.lex_state = 440},
  [337] = {.lex_state = 440},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 440},
  [340] = {.lex_state = 440},
  [341] = {.lex_state = 440},
  [342] = {.lex_state = 440},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 440},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 440},
  [347] = {.lex_state = 15},
  [348] = {.lex_state = 440},
  [349] = {.lex_state = 440},
  [350] = {.lex_state = 15},
  [351] = {.lex_state = 440},
  [352] = {.lex_state = 440},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 440},
  [355] = {.lex_state = 440},
  [356] = {.lex_state = 440},
  [357] = {.lex_state = 440},
  [358] = {.lex_state = 440},
  [359] = {.lex_state = 9},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 440},
  [362] = {.lex_state = 440},
  [363] = {.lex_state = 440},
  [364] = {.lex_state = 440},
  [365] = {.lex_state = 440},
  [366] = {.lex_state = 440},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 440},
  [369] = {.lex_state = 440},
  [370] = {.lex_state = 440},
  [371] = {.lex_state = 440},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 440},
  [375] = {.lex_state = 440},
  [376] = {.lex_state = 440},
  [377] = {.lex_state = 440},
  [378] = {.lex_state = 440},
  [379] = {.lex_state = 440},
  [380] = {.lex_state = 440},
  [381] = {.lex_state = 440},
  [382] = {.lex_state = 440},
  [383] = {.lex_state = 440},
  [384] = {.lex_state = 440},
  [385] = {.lex_state = 440},
  [386] = {.lex_state = 440},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 440},
  [390] = {.lex_state = 11},
  [391] = {.lex_state = 440},
  [392] = {.lex_state = 440},
  [393] = {.lex_state = 440},
  [394] = {.lex_state = 4},
  [395] = {.lex_state = 440},
  [396] = {.lex_state = 440},
  [397] = {.lex_state = 440},
  [398] = {.lex_state = 9},
  [399] = {.lex_state = 440},
  [400] = {.lex_state = 9},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 440},
  [403] = {.lex_state = 9},
  [404] = {.lex_state = 440},
  [405] = {.lex_state = 9},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_END] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [aux_sym_special_list_name_token1] = ACTIONS(1),
    [aux_sym_special_list_name_token2] = ACTIONS(1),
    [aux_sym_special_list_name_token3] = ACTIONS(1),
    [sym_STATIC_SETS] = ACTIONS(1),
    [sym_MAPPING_PREFIX] = ACTIONS(1),
    [sym_SUBREADINGS] = ACTIONS(1),
    [sym_RTL] = ACTIONS(1),
    [sym_LTR] = ACTIONS(1),
    [sym_PARENTHESES] = ACTIONS(1),
    [sym_LIST] = ACTIONS(1),
    [sym_SET] = ACTIONS(1),
    [sym_INCLUDE] = ACTIONS(1),
    [aux_sym_section_header_token1] = ACTIONS(1),
    [aux_sym_section_header_token3] = ACTIONS(1),
    [aux_sym_section_header_token4] = ACTIONS(1),
    [aux_sym_section_header_token5] = ACTIONS(1),
    [aux_sym_section_header_token6] = ACTIONS(1),
    [aux_sym_section_header_token8] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_IF] = ACTIONS(1),
    [sym_TARGET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_TO] = ACTIONS(1),
    [sym_FROM] = ACTIONS(1),
    [sym_WITHCHILD] = ACTIONS(1),
    [sym_NOCHILD] = ACTIONS(1),
    [sym_BEFORE] = ACTIONS(1),
    [sym_AFTER] = ACTIONS(1),
    [sym_WITH] = ACTIONS(1),
    [sym_ONCE] = ACTIONS(1),
    [sym_ALWAYS] = ACTIONS(1),
    [sym_TEMPLATE] = ACTIONS(1),
    [sym_context_modifier] = ACTIONS(1),
    [sym_BARRIER] = ACTIONS(1),
    [sym_LINK] = ACTIONS(1),
    [sym_OR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_set_op] = ACTIONS(1),
    [sym_prefix] = ACTIONS(1),
    [sym_ruletype] = ACTIONS(1),
    [sym_ruletype_substitute_etc] = ACTIONS(1),
    [sym_ruletype_parentchild] = ACTIONS(1),
    [sym_ruletype_relation] = ACTIONS(1),
    [sym_ruletype_relations] = ACTIONS(1),
    [sym_ruletype_map_etc] = ACTIONS(1),
    [sym_ruletype_addcohort] = ACTIONS(1),
    [sym_ruletype_move] = ACTIONS(1),
    [sym_ruletype_switch] = ACTIONS(1),
    [sym_ruletype_external] = ACTIONS(1),
    [aux_sym_setname_t_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(372),
    [sym_special_list_name] = STATE(380),
    [sym_set_special_list] = STATE(3),
    [sym_static_sets] = STATE(3),
    [sym_mapping_prefix] = STATE(3),
    [sym_subreadings] = STATE(3),
    [sym_parentheses] = STATE(3),
    [sym_list] = STATE(3),
    [sym_set] = STATE(3),
    [sym_include] = STATE(3),
    [sym_section_header] = STATE(3),
    [sym_rule] = STATE(3),
    [sym_rule_substitute_etc] = STATE(3),
    [sym_rule_map_etc] = STATE(3),
    [sym_rule_parentchild] = STATE(3),
    [sym_rule_move] = STATE(3),
    [sym_rule_switch] = STATE(3),
    [sym_rule_relation] = STATE(3),
    [sym_rule_relations] = STATE(3),
    [sym_rule_addcohort] = STATE(3),
    [sym_rule_external] = STATE(3),
    [sym_template] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_special_list_name_token1] = ACTIONS(5),
    [aux_sym_special_list_name_token2] = ACTIONS(5),
    [aux_sym_special_list_name_token3] = ACTIONS(5),
    [sym_STATIC_SETS] = ACTIONS(7),
    [sym_MAPPING_PREFIX] = ACTIONS(9),
    [sym_SUBREADINGS] = ACTIONS(11),
    [sym_PARENTHESES] = ACTIONS(13),
    [sym_LIST] = ACTIONS(15),
    [sym_SET] = ACTIONS(17),
    [sym_INCLUDE] = ACTIONS(19),
    [aux_sym_section_header_token1] = ACTIONS(21),
    [aux_sym_section_header_token2] = ACTIONS(21),
    [aux_sym_section_header_token3] = ACTIONS(21),
    [aux_sym_section_header_token4] = ACTIONS(21),
    [aux_sym_section_header_token5] = ACTIONS(21),
    [aux_sym_section_header_token6] = ACTIONS(21),
    [aux_sym_section_header_token7] = ACTIONS(21),
    [aux_sym_section_header_token8] = ACTIONS(21),
    [sym_TEMPLATE] = ACTIONS(23),
    [sym_ruletype] = ACTIONS(25),
    [sym_ruletype_substitute_etc] = ACTIONS(27),
    [sym_ruletype_parentchild] = ACTIONS(29),
    [sym_ruletype_relation] = ACTIONS(31),
    [sym_ruletype_relations] = ACTIONS(33),
    [sym_ruletype_map_etc] = ACTIONS(35),
    [sym_ruletype_addcohort] = ACTIONS(37),
    [sym_ruletype_move] = ACTIONS(39),
    [sym_ruletype_switch] = ACTIONS(41),
    [sym_ruletype_external] = ACTIONS(43),
    [sym_qtag] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_STATIC_SETS,
    ACTIONS(55), 1,
      sym_MAPPING_PREFIX,
    ACTIONS(58), 1,
      sym_SUBREADINGS,
    ACTIONS(61), 1,
      sym_PARENTHESES,
    ACTIONS(64), 1,
      sym_LIST,
    ACTIONS(67), 1,
      sym_SET,
    ACTIONS(70), 1,
      sym_INCLUDE,
    ACTIONS(76), 1,
      sym_TEMPLATE,
    ACTIONS(79), 1,
      sym_ruletype,
    ACTIONS(82), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(85), 1,
      sym_ruletype_parentchild,
    ACTIONS(88), 1,
      sym_ruletype_relation,
    ACTIONS(91), 1,
      sym_ruletype_relations,
    ACTIONS(94), 1,
      sym_ruletype_map_etc,
    ACTIONS(97), 1,
      sym_ruletype_addcohort,
    ACTIONS(100), 1,
      sym_ruletype_move,
    ACTIONS(103), 1,
      sym_ruletype_switch,
    ACTIONS(106), 1,
      sym_ruletype_external,
    ACTIONS(109), 1,
      sym_qtag,
    STATE(380), 1,
      sym_special_list_name,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_END,
    ACTIONS(49), 3,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
    ACTIONS(73), 8,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
    STATE(2), 21,
      sym_set_special_list,
      sym_static_sets,
      sym_mapping_prefix,
      sym_subreadings,
      sym_parentheses,
      sym_list,
      sym_set,
      sym_include,
      sym_section_header,
      sym_rule,
      sym_rule_substitute_etc,
      sym_rule_map_etc,
      sym_rule_parentchild,
      sym_rule_move,
      sym_rule_switch,
      sym_rule_relation,
      sym_rule_relations,
      sym_rule_addcohort,
      sym_rule_external,
      sym_template,
      aux_sym_source_file_repeat1,
  [106] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_STATIC_SETS,
    ACTIONS(9), 1,
      sym_MAPPING_PREFIX,
    ACTIONS(11), 1,
      sym_SUBREADINGS,
    ACTIONS(13), 1,
      sym_PARENTHESES,
    ACTIONS(15), 1,
      sym_LIST,
    ACTIONS(17), 1,
      sym_SET,
    ACTIONS(19), 1,
      sym_INCLUDE,
    ACTIONS(23), 1,
      sym_TEMPLATE,
    ACTIONS(25), 1,
      sym_ruletype,
    ACTIONS(27), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(29), 1,
      sym_ruletype_parentchild,
    ACTIONS(31), 1,
      sym_ruletype_relation,
    ACTIONS(33), 1,
      sym_ruletype_relations,
    ACTIONS(35), 1,
      sym_ruletype_map_etc,
    ACTIONS(37), 1,
      sym_ruletype_addcohort,
    ACTIONS(39), 1,
      sym_ruletype_move,
    ACTIONS(41), 1,
      sym_ruletype_switch,
    ACTIONS(43), 1,
      sym_ruletype_external,
    ACTIONS(45), 1,
      sym_qtag,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym_END,
    STATE(380), 1,
      sym_special_list_name,
    ACTIONS(5), 3,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
    ACTIONS(21), 8,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
    STATE(2), 21,
      sym_set_special_list,
      sym_static_sets,
      sym_mapping_prefix,
      sym_subreadings,
      sym_parentheses,
      sym_list,
      sym_set,
      sym_include,
      sym_section_header,
      sym_rule,
      sym_rule_substitute_etc,
      sym_rule_map_etc,
      sym_rule_parentchild,
      sym_rule_move,
      sym_rule_switch,
      sym_rule_relation,
      sym_rule_relations,
      sym_rule_addcohort,
      sym_rule_external,
      sym_template,
      aux_sym_source_file_repeat1,
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(116), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(120), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(124), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(128), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(132), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(136), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(140), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(144), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(148), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(152), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(156), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(160), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(164), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(168), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(172), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(176), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(180), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(184), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(188), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(192), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(196), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(200), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(204), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(208), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(212), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(216), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(220), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(224), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(228), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(232), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(236), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(240), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(244), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(248), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(252), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(256), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(260), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(264), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(268), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(272), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(276), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(280), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(284), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(288), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(292), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(296), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(300), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(304), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(308), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(312), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(316), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(320), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(324), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(328), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(332), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(336), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(340), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(344), 28,
      ts_builtin_sym_end,
      sym_END,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_set_op,
    STATE(65), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(348), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 15,
      sym_eq,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_set_op,
    STATE(64), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(354), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_set_op,
    STATE(64), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(359), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 14,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 14,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 14,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2690] = 13,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(40), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(80), 1,
      sym__rule_tag,
    STATE(133), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [2731] = 13,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(79), 1,
      sym__rule_tag,
    STATE(109), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [2772] = 12,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(90), 1,
      sym__rule_tag,
    STATE(167), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(168), 2,
      sym__rule_target,
      sym_inlineset,
  [2810] = 12,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(86), 1,
      sym__rule_tag,
    STATE(174), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(149), 2,
      sym__rule_target,
      sym_inlineset,
  [2848] = 12,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(84), 1,
      sym__rule_tag,
    STATE(155), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(185), 2,
      sym__rule_target,
      sym_inlineset,
  [2886] = 12,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(89), 1,
      sym__rule_tag,
    STATE(143), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 2,
      sym__rule_target,
      sym_inlineset,
  [2924] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(36), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(122), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [2959] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(14), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(112), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [2994] = 10,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_BARRIER,
    ACTIONS(381), 1,
      sym_LINK,
    ACTIONS(383), 1,
      aux_sym_setname_t_token1,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    ACTIONS(377), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(258), 2,
      sym_inlineset,
      sym_setname_t,
  [3027] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(51), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(125), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3062] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(15), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(128), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3097] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(109), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3132] = 10,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_setname_t_token1,
    ACTIONS(387), 1,
      sym_BARRIER,
    ACTIONS(389), 1,
      sym_LINK,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    ACTIONS(385), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(244), 2,
      sym_inlineset,
      sym_setname_t,
  [3165] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_ruletype,
    ACTIONS(393), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(395), 1,
      sym_ruletype_parentchild,
    ACTIONS(397), 1,
      sym_ruletype_relation,
    ACTIONS(399), 1,
      sym_ruletype_relations,
    ACTIONS(401), 1,
      sym_ruletype_map_etc,
    ACTIONS(403), 1,
      sym_ruletype_addcohort,
    ACTIONS(405), 1,
      sym_ruletype_move,
    ACTIONS(407), 1,
      sym_ruletype_switch,
    ACTIONS(409), 1,
      sym_ruletype_external,
  [3199] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(123), 1,
      sym__rule_tag,
    STATE(200), 1,
      sym_ruleflag,
    STATE(205), 1,
      sym_inlineset,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [3233] = 10,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(143), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 2,
      sym__rule_target,
      sym_inlineset,
  [3265] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(138), 1,
      sym__rule_tag,
    STATE(197), 1,
      sym_inlineset,
    STATE(199), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [3299] = 10,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(167), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(168), 2,
      sym__rule_target,
      sym_inlineset,
  [3331] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(131), 1,
      sym__rule_tag,
    STATE(225), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(326), 1,
      sym_inlineset,
  [3365] = 11,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(129), 1,
      sym__rule_tag,
    STATE(221), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(345), 1,
      sym_inlineset,
  [3399] = 10,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(154), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(207), 2,
      sym__rule_target,
      sym_inlineset,
  [3431] = 10,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(156), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(146), 2,
      sym__rule_target,
      sym_inlineset,
  [3463] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(126), 1,
      sym_inlineset,
    STATE(132), 1,
      sym__rule_tag,
    STATE(186), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [3497] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(134), 1,
      sym__rule_tag,
    STATE(209), 1,
      sym_inlineset,
    STATE(211), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [3531] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(139), 1,
      sym__rule_tag,
    STATE(140), 1,
      sym_inlineset,
    STATE(227), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [3565] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(127), 1,
      sym__rule_tag,
    STATE(234), 1,
      sym_inlineset,
    STATE(236), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [3599] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(113), 1,
      sym__rule_tag,
    STATE(171), 1,
      sym_inlineset,
    STATE(220), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [3633] = 11,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(135), 1,
      sym__rule_tag,
    STATE(142), 1,
      sym_inlineset,
    STATE(208), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [3667] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(27), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3693] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(340), 1,
      sym_contexttest,
  [3721] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(437), 1,
      sym_NOCHILD,
    ACTIONS(439), 1,
      sym_ruleflag_name,
    STATE(165), 1,
      sym__child_specifier,
    STATE(181), 1,
      sym__rule_tag,
    STATE(243), 1,
      aux_sym_ruleflag_repeat1,
    STATE(309), 1,
      sym_ruleflag,
  [3749] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(57), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    ACTIONS(441), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(116), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [3811] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(344), 1,
      sym_contexttest,
  [3839] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(439), 1,
      sym_ruleflag_name,
    ACTIONS(451), 1,
      sym_NOCHILD,
    STATE(147), 1,
      sym__child_specifier,
    STATE(183), 1,
      sym__rule_tag,
    STATE(243), 1,
      aux_sym_ruleflag_repeat1,
    STATE(281), 1,
      sym_ruleflag,
  [3867] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(371), 1,
      sym_contexttest,
  [3895] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(35), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      aux_sym__context,
    ACTIONS(453), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [3939] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(358), 1,
      sym_contexttest,
  [3967] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(15), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      aux_sym__context,
    ACTIONS(457), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      aux_sym__context,
    ACTIONS(462), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4029] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(36), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4055] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(142), 1,
      sym_inlineset,
    STATE(208), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [4083] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(31), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4109] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(335), 1,
      sym_contexttest,
  [4137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      sym_ntag,
    ACTIONS(472), 1,
      sym_qtag,
    ACTIONS(464), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(116), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [4159] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(374), 1,
      sym_contexttest,
  [4187] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(54), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4213] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(53), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4239] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(355), 1,
      sym_contexttest,
  [4267] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(349), 1,
      sym_contexttest,
  [4295] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(26), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4321] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(197), 1,
      sym_inlineset,
    STATE(199), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [4349] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(39), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4375] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(14), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4401] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(44), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4427] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(209), 1,
      sym_inlineset,
    STATE(211), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [4455] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(4), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4481] = 9,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(225), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(326), 1,
      sym_inlineset,
  [4509] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(50), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4535] = 9,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(217), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(331), 1,
      sym_inlineset,
  [4563] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(118), 1,
      sym_inlineset,
    STATE(216), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [4591] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4617] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(193), 1,
      sym_inlineset,
    STATE(215), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [4645] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(164), 1,
      sym_inlineset,
    STATE(214), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [4673] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(28), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4699] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(47), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4725] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(189), 1,
      sym_inlineset,
    STATE(212), 1,
      sym_ruleflag,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [4753] = 9,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(126), 1,
      sym_inlineset,
    STATE(186), 1,
      sym_ruleflag,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(260), 1,
      aux_sym_ruleflag_repeat1,
  [4781] = 8,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(17), 1,
      sym__shared_rule_end,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4807] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_context_modifier,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(262), 1,
      sym_setname_t,
    STATE(329), 1,
      sym_contexttest,
  [4835] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(159), 2,
      sym__rule_target,
      sym_inlineset,
  [4858] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(207), 2,
      sym__rule_target,
      sym_inlineset,
  [4881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    STATE(377), 1,
      sym_taglist,
    STATE(101), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [4902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 7,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4915] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(299), 1,
      sym__if_context,
    STATE(357), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [4938] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(182), 2,
      sym__rule_target,
      sym_inlineset,
  [4961] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(285), 1,
      sym__if_context,
    STATE(381), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [4984] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(275), 1,
      sym__if_context,
    STATE(392), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5007] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(312), 1,
      sym__if_context,
    STATE(404), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5030] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(169), 2,
      sym__rule_target,
      sym_inlineset,
  [5053] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(157), 2,
      sym__rule_target,
      sym_inlineset,
  [5076] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    STATE(356), 1,
      sym_taglist,
    STATE(101), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5097] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(188), 2,
      sym__rule_target,
      sym_inlineset,
  [5120] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(237), 2,
      sym__rule_target,
      sym_inlineset,
  [5143] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(175), 2,
      sym__rule_target,
      sym_inlineset,
  [5166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(318), 1,
      sym__if_context,
    STATE(361), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5189] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(172), 2,
      sym__rule_target,
      sym_inlineset,
  [5212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(295), 1,
      sym__if_context,
    STATE(363), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5235] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(308), 1,
      sym__if_context,
    STATE(385), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    STATE(402), 1,
      sym_taglist,
    STATE(101), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5279] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(284), 1,
      sym__if_context,
    STATE(386), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5302] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(180), 2,
      sym__rule_target,
      sym_inlineset,
  [5325] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(162), 2,
      sym__rule_target,
      sym_inlineset,
  [5348] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(184), 2,
      sym__rule_target,
      sym_inlineset,
  [5371] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(481), 3,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(483), 4,
      sym_BARRIER,
      sym_LINK,
      aux_sym_setname_token1,
      aux_sym_setname_t_token1,
  [5386] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(146), 2,
      sym__rule_target,
      sym_inlineset,
  [5409] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(306), 1,
      sym__if_context,
    STATE(378), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5432] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(303), 1,
      sym__if_context,
    STATE(370), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5455] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    STATE(384), 1,
      sym_taglist,
    STATE(101), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5476] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(160), 2,
      sym__rule_target,
      sym_inlineset,
  [5499] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(289), 1,
      sym__if_context,
    STATE(375), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5522] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(148), 2,
      sym__rule_target,
      sym_inlineset,
  [5545] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(168), 2,
      sym__rule_target,
      sym_inlineset,
  [5568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(300), 1,
      sym__if_context,
    STATE(389), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [5591] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(150), 2,
      sym__rule_target,
      sym_inlineset,
  [5614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    STATE(399), 1,
      sym_taglist,
    STATE(101), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5635] = 7,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_TARGET,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(179), 2,
      sym__rule_target,
      sym_inlineset,
  [5658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(333), 1,
      sym__if_context,
    ACTIONS(485), 2,
      sym_BEFORE,
      sym_AFTER,
  [5678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(343), 1,
      sym__if_context,
    ACTIONS(487), 2,
      sym_BEFORE,
      sym_AFTER,
  [5698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(439), 1,
      sym_ruleflag_name,
    ACTIONS(451), 1,
      sym_NOCHILD,
    STATE(147), 1,
      sym__child_specifier,
    STATE(243), 1,
      aux_sym_ruleflag_repeat1,
    STATE(281), 1,
      sym_ruleflag,
  [5720] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(338), 1,
      sym__if_context,
    ACTIONS(489), 2,
      sym_BEFORE,
      sym_AFTER,
  [5740] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(439), 1,
      sym_ruleflag_name,
    ACTIONS(491), 1,
      sym_NOCHILD,
    STATE(163), 1,
      sym__child_specifier,
    STATE(243), 1,
      aux_sym_ruleflag_repeat1,
    STATE(307), 1,
      sym_ruleflag,
  [5762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    STATE(107), 1,
      aux_sym__context,
    STATE(325), 1,
      sym__if_context,
    ACTIONS(493), 2,
      sym_BEFORE,
      sym_AFTER,
  [5782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    ACTIONS(495), 1,
      sym_WITH,
    STATE(107), 1,
      aux_sym__context,
    STATE(387), 1,
      sym__if_context,
  [5801] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(118), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [5820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_ntag,
    ACTIONS(497), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [5833] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    ACTIONS(501), 1,
      sym_WITH,
    STATE(107), 1,
      aux_sym__context,
    STATE(367), 1,
      sym__if_context,
  [5852] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(137), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [5871] = 5,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_set_op,
    STATE(190), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(503), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [5888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym_WITHCHILD,
    ACTIONS(510), 1,
      sym_NOCHILD,
    STATE(297), 1,
      aux_sym__context,
    STATE(319), 1,
      sym__child_specifier,
  [5907] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(327), 1,
      sym_inlineset,
  [5926] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(152), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [5945] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(151), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [5964] = 5,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      sym_ruleflag_name,
    STATE(195), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(514), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [5981] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(136), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6000] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(100), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6019] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym_WITHCHILD,
    ACTIONS(519), 1,
      sym_NOCHILD,
    STATE(304), 1,
      aux_sym__context,
    STATE(346), 1,
      sym__child_specifier,
  [6038] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(189), 1,
      sym_inlineset,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6057] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(197), 1,
      sym_inlineset,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6076] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(279), 1,
      sym_inlineset,
  [6095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym_WITHCHILD,
    ACTIONS(521), 1,
      sym_NOCHILD,
    STATE(272), 1,
      aux_sym__context,
    STATE(337), 1,
      sym__child_specifier,
  [6114] = 5,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_set_op,
    STATE(190), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(523), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [6131] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(273), 1,
      sym_inlineset,
  [6150] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(114), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6169] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(379), 1,
      sym_inlineset,
  [6188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    ACTIONS(527), 1,
      sym_WITH,
    STATE(107), 1,
      aux_sym__context,
    STATE(394), 1,
      sym__if_context,
  [6207] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(164), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6226] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(173), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6245] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(278), 1,
      sym_inlineset,
  [6264] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(193), 1,
      sym_inlineset,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6283] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(196), 1,
      sym_inlineset,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(223), 2,
      sym_tag,
      aux_sym_compotag_repeat1,
  [6319] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(176), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6338] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(194), 1,
      sym_inlineset,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6357] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(106), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6376] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(323), 1,
      sym_inlineset,
  [6395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym_WITHCHILD,
    ACTIONS(531), 1,
      sym_NOCHILD,
    STATE(290), 1,
      aux_sym__context,
    STATE(341), 1,
      sym__child_specifier,
  [6414] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(310), 1,
      sym_inlineset,
  [6433] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(142), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6452] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(326), 1,
      sym_inlineset,
  [6471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_ntag,
    ACTIONS(533), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [6484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(539), 1,
      sym_ntag,
    ACTIONS(542), 1,
      sym_qtag,
    STATE(223), 2,
      sym_tag,
      aux_sym_compotag_repeat1,
  [6501] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(102), 1,
      sym_inlineset,
  [6520] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(331), 1,
      sym_inlineset,
  [6539] = 5,
    ACTIONS(371), 1,
      sym_ruleflag_name,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(547), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [6556] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(126), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 5,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ONCE,
      sym_ALWAYS,
      sym_ruleflag_name,
  [6586] = 5,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_set_op,
    STATE(203), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(551), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [6603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym_WITHCHILD,
    ACTIONS(553), 1,
      sym_NOCHILD,
    STATE(317), 1,
      aux_sym__context,
    STATE(324), 1,
      sym__child_specifier,
  [6622] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(276), 1,
      sym_inlineset,
  [6641] = 6,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(62), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(376), 1,
      sym_inlineset,
  [6660] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    ACTIONS(555), 1,
      sym_semicolon,
    STATE(107), 1,
      aux_sym__context,
    STATE(396), 1,
      sym__if_context,
  [6679] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(158), 1,
      sym_inlineset,
    STATE(229), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [6698] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(559), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [6713] = 6,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(209), 1,
      sym_inlineset,
    STATE(261), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_IF,
    ACTIONS(563), 1,
      sym_WITH,
    STATE(107), 1,
      aux_sym__context,
    STATE(388), 1,
      sym__if_context,
  [6751] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [6763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(557), 3,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
  [6775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_semicolon,
    STATE(252), 2,
      sym_compotag,
      aux_sym_parentheses_repeat1,
  [6789] = 3,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(573), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [6801] = 3,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(575), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [6813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_ruleflag_name,
    STATE(257), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(545), 2,
      sym_WITHCHILD,
      sym_NOCHILD,
  [6827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_BARRIER,
    ACTIONS(579), 1,
      sym_LINK,
    ACTIONS(377), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [6841] = 5,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_setname_token1,
    ACTIONS(581), 1,
      sym_set_op,
    STATE(245), 1,
      aux_sym_inlineset_repeat1,
  [6857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_ntag,
    ACTIONS(447), 1,
      sym_qtag,
    STATE(213), 2,
      sym_tag,
      aux_sym_compotag_repeat1,
  [6871] = 5,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(242), 1,
      sym_setname,
    STATE(266), 1,
      sym_inlineset_single,
  [6887] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_semicolon,
    ACTIONS(586), 1,
      aux_sym_setname_token1,
    STATE(248), 2,
      sym_setname,
      aux_sym_static_sets_repeat1,
  [6901] = 5,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      aux_sym_setname_token1,
    ACTIONS(589), 1,
      sym_ruleflag_name,
    STATE(249), 1,
      aux_sym_ruleflag_repeat1,
  [6917] = 5,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_setname_token1,
    ACTIONS(592), 1,
      sym_set_op,
    STATE(245), 1,
      aux_sym_inlineset_repeat1,
  [6933] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_semicolon,
    ACTIONS(596), 1,
      aux_sym_setname_token1,
    STATE(248), 2,
      sym_setname,
      aux_sym_static_sets_repeat1,
  [6947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_semicolon,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
    STATE(252), 2,
      sym_compotag,
      aux_sym_parentheses_repeat1,
  [6961] = 5,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      aux_sym_setname_token1,
    STATE(283), 1,
      sym_inlineset_single,
    STATE(291), 1,
      sym_setname,
  [6977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_OR,
    STATE(268), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(603), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [6991] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_setname_t_token1,
    ACTIONS(431), 1,
      sym_ntag,
    STATE(77), 1,
      sym_contextpos,
    STATE(244), 1,
      sym_setname_t,
  [7007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 4,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_BARRIER,
      sym_LINK,
  [7017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_ruleflag_name,
    STATE(257), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(512), 2,
      sym_WITHCHILD,
      sym_NOCHILD,
  [7031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_BARRIER,
    ACTIONS(616), 1,
      sym_LINK,
    ACTIONS(612), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7045] = 3,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(618), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [7057] = 5,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_ruleflag_name,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      aux_sym_setname_token1,
    STATE(249), 1,
      aux_sym_ruleflag_repeat1,
  [7073] = 5,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym_setname_token1,
    ACTIONS(592), 1,
      sym_set_op,
    STATE(250), 1,
      aux_sym_inlineset_repeat1,
  [7089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym_BARRIER,
    ACTIONS(622), 1,
      sym_LINK,
    ACTIONS(385), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7103] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7115] = 5,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(67), 1,
      sym_setname,
    STATE(68), 1,
      sym_inlineset_single,
  [7131] = 4,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(559), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7145] = 3,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(503), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [7157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
    STATE(336), 1,
      sym__rule_tag,
    ACTIONS(630), 2,
      sym_ONCE,
      sym_ALWAYS,
  [7171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_OR,
    STATE(268), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(632), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
    STATE(342), 1,
      sym__rule_tag,
    ACTIONS(637), 2,
      sym_ONCE,
      sym_ALWAYS,
  [7199] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_OR,
    STATE(254), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(612), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_LINK,
    ACTIONS(643), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 3,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
  [7258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(378), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_LINK,
    ACTIONS(612), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      aux_sym_contexttest_repeat1,
  [7293] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(653), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      aux_sym_contexttest_repeat1,
  [7317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(491), 1,
      sym_NOCHILD,
    STATE(163), 1,
      sym__child_specifier,
  [7343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_ntag,
    ACTIONS(661), 1,
      sym_qtag,
    STATE(76), 1,
      sym_filepath,
  [7356] = 3,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(503), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(404), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(361), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7389] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7400] = 3,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(618), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7411] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(381), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(663), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7446] = 3,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(575), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7457] = 3,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(573), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(665), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 3,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_OR,
  [7490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(386), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_ntag,
    ACTIONS(661), 1,
      sym_qtag,
    STATE(78), 1,
      sym_filepath,
  [7540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(389), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(391), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(675), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(351), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_ntag,
    ACTIONS(661), 1,
      sym_qtag,
    STATE(75), 1,
      sym_filepath,
  [7625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(357), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(679), 1,
      sym_NOCHILD,
    STATE(178), 1,
      sym__child_specifier,
  [7649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(363), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_WITHCHILD,
    ACTIONS(451), 1,
      sym_NOCHILD,
    STATE(147), 1,
      sym__child_specifier,
  [7673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_LINK,
    ACTIONS(603), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7684] = 3,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(596), 1,
      aux_sym_setname_token1,
    STATE(251), 2,
      sym_setname,
      aux_sym_static_sets_repeat1,
  [7695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(354), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(685), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RBRACK,
    STATE(315), 1,
      aux_sym_contexttest_repeat1,
  [7745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    STATE(240), 2,
      sym_compotag,
      aux_sym_parentheses_repeat1,
  [7756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_semicolon,
    STATE(110), 1,
      aux_sym__context,
  [7769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(370), 1,
      sym__to_from,
    ACTIONS(479), 2,
      sym_TO,
      sym_FROM,
  [7780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(293), 1,
      aux_sym__context,
  [7790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      aux_sym__context,
  [7800] = 3,
    ACTIONS(352), 1,
      sym_semicolon,
    ACTIONS(375), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_setname_token1,
  [7810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      aux_sym__context,
  [7820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      sym_BEFORE,
      sym_AFTER,
  [7828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      aux_sym__context,
  [7838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      sym_BEFORE,
      sym_AFTER,
  [7846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      sym_BEFORE,
      sym_AFTER,
  [7854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      sym_RTL,
      sym_LTR,
  [7870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      aux_sym__context,
  [7888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      sym_BEFORE,
      sym_AFTER,
  [7896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      aux_sym__context,
  [7906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym_BEFORE,
      sym_AFTER,
  [7914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      aux_sym__context,
  [7924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      sym_ONCE,
      sym_ALWAYS,
  [7940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(290), 1,
      aux_sym__context,
  [7950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      sym_BEFORE,
      sym_AFTER,
  [7958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      aux_sym__context,
  [7968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      aux_sym__context,
  [7986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 2,
      sym_ONCE,
      sym_ALWAYS,
  [7994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      sym_BEFORE,
      sym_AFTER,
  [8002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      sym_BEFORE,
      sym_AFTER,
  [8018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      aux_sym__context,
  [8028] = 3,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(364), 1,
      sym_setname,
  [8038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      aux_sym__context,
  [8048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8056] = 3,
    ACTIONS(373), 1,
      aux_sym_setname_token1,
    ACTIONS(375), 1,
      sym_comment,
    STATE(397), 1,
      sym_setname,
  [8066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_semicolon,
  [8073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_semicolon,
  [8080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_ntag,
  [8087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_semicolon,
  [8094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [8101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
  [8108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym_semicolon,
  [8115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [8122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_ntag,
  [8129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_rawpath,
  [8136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_semicolon,
  [8143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_eq,
  [8150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_semicolon,
  [8157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_eq,
  [8164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_eq,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_eq,
  [8178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      sym_WITH,
  [8185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_eq,
  [8192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_eq,
  [8199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_semicolon,
  [8206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
  [8220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
  [8227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_semicolon,
  [8234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_semicolon,
  [8241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_semicolon,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_semicolon,
  [8255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_semicolon,
  [8262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
  [8269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_eq,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_semicolon,
  [8283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
  [8290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_semicolon,
  [8297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_semicolon,
  [8304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_semicolon,
  [8311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_semicolon,
  [8318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_WITH,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_WITH,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_semicolon,
  [8339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_prefix,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_semicolon,
  [8353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_semicolon,
  [8360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_eq,
  [8367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_WITH,
  [8374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_semicolon,
  [8381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_semicolon,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_eq,
  [8395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_ntag,
  [8402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_ntag,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_ntag,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [8430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_ntag,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_semicolon,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_ntag,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 214,
  [SMALL_STATE(5)] = 254,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 334,
  [SMALL_STATE(8)] = 374,
  [SMALL_STATE(9)] = 414,
  [SMALL_STATE(10)] = 454,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 614,
  [SMALL_STATE(15)] = 654,
  [SMALL_STATE(16)] = 694,
  [SMALL_STATE(17)] = 734,
  [SMALL_STATE(18)] = 774,
  [SMALL_STATE(19)] = 814,
  [SMALL_STATE(20)] = 854,
  [SMALL_STATE(21)] = 894,
  [SMALL_STATE(22)] = 934,
  [SMALL_STATE(23)] = 974,
  [SMALL_STATE(24)] = 1014,
  [SMALL_STATE(25)] = 1054,
  [SMALL_STATE(26)] = 1094,
  [SMALL_STATE(27)] = 1134,
  [SMALL_STATE(28)] = 1174,
  [SMALL_STATE(29)] = 1214,
  [SMALL_STATE(30)] = 1254,
  [SMALL_STATE(31)] = 1294,
  [SMALL_STATE(32)] = 1334,
  [SMALL_STATE(33)] = 1374,
  [SMALL_STATE(34)] = 1414,
  [SMALL_STATE(35)] = 1454,
  [SMALL_STATE(36)] = 1494,
  [SMALL_STATE(37)] = 1534,
  [SMALL_STATE(38)] = 1574,
  [SMALL_STATE(39)] = 1614,
  [SMALL_STATE(40)] = 1654,
  [SMALL_STATE(41)] = 1694,
  [SMALL_STATE(42)] = 1734,
  [SMALL_STATE(43)] = 1774,
  [SMALL_STATE(44)] = 1814,
  [SMALL_STATE(45)] = 1854,
  [SMALL_STATE(46)] = 1894,
  [SMALL_STATE(47)] = 1934,
  [SMALL_STATE(48)] = 1974,
  [SMALL_STATE(49)] = 2014,
  [SMALL_STATE(50)] = 2054,
  [SMALL_STATE(51)] = 2094,
  [SMALL_STATE(52)] = 2134,
  [SMALL_STATE(53)] = 2174,
  [SMALL_STATE(54)] = 2214,
  [SMALL_STATE(55)] = 2254,
  [SMALL_STATE(56)] = 2294,
  [SMALL_STATE(57)] = 2334,
  [SMALL_STATE(58)] = 2374,
  [SMALL_STATE(59)] = 2414,
  [SMALL_STATE(60)] = 2454,
  [SMALL_STATE(61)] = 2494,
  [SMALL_STATE(62)] = 2534,
  [SMALL_STATE(63)] = 2559,
  [SMALL_STATE(64)] = 2580,
  [SMALL_STATE(65)] = 2605,
  [SMALL_STATE(66)] = 2630,
  [SMALL_STATE(67)] = 2650,
  [SMALL_STATE(68)] = 2670,
  [SMALL_STATE(69)] = 2690,
  [SMALL_STATE(70)] = 2731,
  [SMALL_STATE(71)] = 2772,
  [SMALL_STATE(72)] = 2810,
  [SMALL_STATE(73)] = 2848,
  [SMALL_STATE(74)] = 2886,
  [SMALL_STATE(75)] = 2924,
  [SMALL_STATE(76)] = 2959,
  [SMALL_STATE(77)] = 2994,
  [SMALL_STATE(78)] = 3027,
  [SMALL_STATE(79)] = 3062,
  [SMALL_STATE(80)] = 3097,
  [SMALL_STATE(81)] = 3132,
  [SMALL_STATE(82)] = 3165,
  [SMALL_STATE(83)] = 3199,
  [SMALL_STATE(84)] = 3233,
  [SMALL_STATE(85)] = 3265,
  [SMALL_STATE(86)] = 3299,
  [SMALL_STATE(87)] = 3331,
  [SMALL_STATE(88)] = 3365,
  [SMALL_STATE(89)] = 3399,
  [SMALL_STATE(90)] = 3431,
  [SMALL_STATE(91)] = 3463,
  [SMALL_STATE(92)] = 3497,
  [SMALL_STATE(93)] = 3531,
  [SMALL_STATE(94)] = 3565,
  [SMALL_STATE(95)] = 3599,
  [SMALL_STATE(96)] = 3633,
  [SMALL_STATE(97)] = 3667,
  [SMALL_STATE(98)] = 3693,
  [SMALL_STATE(99)] = 3721,
  [SMALL_STATE(100)] = 3749,
  [SMALL_STATE(101)] = 3775,
  [SMALL_STATE(102)] = 3797,
  [SMALL_STATE(103)] = 3811,
  [SMALL_STATE(104)] = 3839,
  [SMALL_STATE(105)] = 3867,
  [SMALL_STATE(106)] = 3895,
  [SMALL_STATE(107)] = 3921,
  [SMALL_STATE(108)] = 3939,
  [SMALL_STATE(109)] = 3967,
  [SMALL_STATE(110)] = 3993,
  [SMALL_STATE(111)] = 4011,
  [SMALL_STATE(112)] = 4029,
  [SMALL_STATE(113)] = 4055,
  [SMALL_STATE(114)] = 4083,
  [SMALL_STATE(115)] = 4109,
  [SMALL_STATE(116)] = 4137,
  [SMALL_STATE(117)] = 4159,
  [SMALL_STATE(118)] = 4187,
  [SMALL_STATE(119)] = 4213,
  [SMALL_STATE(120)] = 4239,
  [SMALL_STATE(121)] = 4267,
  [SMALL_STATE(122)] = 4295,
  [SMALL_STATE(123)] = 4321,
  [SMALL_STATE(124)] = 4349,
  [SMALL_STATE(125)] = 4375,
  [SMALL_STATE(126)] = 4401,
  [SMALL_STATE(127)] = 4427,
  [SMALL_STATE(128)] = 4455,
  [SMALL_STATE(129)] = 4481,
  [SMALL_STATE(130)] = 4509,
  [SMALL_STATE(131)] = 4535,
  [SMALL_STATE(132)] = 4563,
  [SMALL_STATE(133)] = 4591,
  [SMALL_STATE(134)] = 4617,
  [SMALL_STATE(135)] = 4645,
  [SMALL_STATE(136)] = 4673,
  [SMALL_STATE(137)] = 4699,
  [SMALL_STATE(138)] = 4725,
  [SMALL_STATE(139)] = 4753,
  [SMALL_STATE(140)] = 4781,
  [SMALL_STATE(141)] = 4807,
  [SMALL_STATE(142)] = 4835,
  [SMALL_STATE(143)] = 4858,
  [SMALL_STATE(144)] = 4881,
  [SMALL_STATE(145)] = 4902,
  [SMALL_STATE(146)] = 4915,
  [SMALL_STATE(147)] = 4938,
  [SMALL_STATE(148)] = 4961,
  [SMALL_STATE(149)] = 4984,
  [SMALL_STATE(150)] = 5007,
  [SMALL_STATE(151)] = 5030,
  [SMALL_STATE(152)] = 5053,
  [SMALL_STATE(153)] = 5076,
  [SMALL_STATE(154)] = 5097,
  [SMALL_STATE(155)] = 5120,
  [SMALL_STATE(156)] = 5143,
  [SMALL_STATE(157)] = 5166,
  [SMALL_STATE(158)] = 5189,
  [SMALL_STATE(159)] = 5212,
  [SMALL_STATE(160)] = 5235,
  [SMALL_STATE(161)] = 5258,
  [SMALL_STATE(162)] = 5279,
  [SMALL_STATE(163)] = 5302,
  [SMALL_STATE(164)] = 5325,
  [SMALL_STATE(165)] = 5348,
  [SMALL_STATE(166)] = 5371,
  [SMALL_STATE(167)] = 5386,
  [SMALL_STATE(168)] = 5409,
  [SMALL_STATE(169)] = 5432,
  [SMALL_STATE(170)] = 5455,
  [SMALL_STATE(171)] = 5476,
  [SMALL_STATE(172)] = 5499,
  [SMALL_STATE(173)] = 5522,
  [SMALL_STATE(174)] = 5545,
  [SMALL_STATE(175)] = 5568,
  [SMALL_STATE(176)] = 5591,
  [SMALL_STATE(177)] = 5614,
  [SMALL_STATE(178)] = 5635,
  [SMALL_STATE(179)] = 5658,
  [SMALL_STATE(180)] = 5678,
  [SMALL_STATE(181)] = 5698,
  [SMALL_STATE(182)] = 5720,
  [SMALL_STATE(183)] = 5740,
  [SMALL_STATE(184)] = 5762,
  [SMALL_STATE(185)] = 5782,
  [SMALL_STATE(186)] = 5801,
  [SMALL_STATE(187)] = 5820,
  [SMALL_STATE(188)] = 5833,
  [SMALL_STATE(189)] = 5852,
  [SMALL_STATE(190)] = 5871,
  [SMALL_STATE(191)] = 5888,
  [SMALL_STATE(192)] = 5907,
  [SMALL_STATE(193)] = 5926,
  [SMALL_STATE(194)] = 5945,
  [SMALL_STATE(195)] = 5964,
  [SMALL_STATE(196)] = 5981,
  [SMALL_STATE(197)] = 6000,
  [SMALL_STATE(198)] = 6019,
  [SMALL_STATE(199)] = 6038,
  [SMALL_STATE(200)] = 6057,
  [SMALL_STATE(201)] = 6076,
  [SMALL_STATE(202)] = 6095,
  [SMALL_STATE(203)] = 6114,
  [SMALL_STATE(204)] = 6131,
  [SMALL_STATE(205)] = 6150,
  [SMALL_STATE(206)] = 6169,
  [SMALL_STATE(207)] = 6188,
  [SMALL_STATE(208)] = 6207,
  [SMALL_STATE(209)] = 6226,
  [SMALL_STATE(210)] = 6245,
  [SMALL_STATE(211)] = 6264,
  [SMALL_STATE(212)] = 6283,
  [SMALL_STATE(213)] = 6302,
  [SMALL_STATE(214)] = 6319,
  [SMALL_STATE(215)] = 6338,
  [SMALL_STATE(216)] = 6357,
  [SMALL_STATE(217)] = 6376,
  [SMALL_STATE(218)] = 6395,
  [SMALL_STATE(219)] = 6414,
  [SMALL_STATE(220)] = 6433,
  [SMALL_STATE(221)] = 6452,
  [SMALL_STATE(222)] = 6471,
  [SMALL_STATE(223)] = 6484,
  [SMALL_STATE(224)] = 6501,
  [SMALL_STATE(225)] = 6520,
  [SMALL_STATE(226)] = 6539,
  [SMALL_STATE(227)] = 6556,
  [SMALL_STATE(228)] = 6575,
  [SMALL_STATE(229)] = 6586,
  [SMALL_STATE(230)] = 6603,
  [SMALL_STATE(231)] = 6622,
  [SMALL_STATE(232)] = 6641,
  [SMALL_STATE(233)] = 6660,
  [SMALL_STATE(234)] = 6679,
  [SMALL_STATE(235)] = 6698,
  [SMALL_STATE(236)] = 6713,
  [SMALL_STATE(237)] = 6732,
  [SMALL_STATE(238)] = 6751,
  [SMALL_STATE(239)] = 6763,
  [SMALL_STATE(240)] = 6775,
  [SMALL_STATE(241)] = 6789,
  [SMALL_STATE(242)] = 6801,
  [SMALL_STATE(243)] = 6813,
  [SMALL_STATE(244)] = 6827,
  [SMALL_STATE(245)] = 6841,
  [SMALL_STATE(246)] = 6857,
  [SMALL_STATE(247)] = 6871,
  [SMALL_STATE(248)] = 6887,
  [SMALL_STATE(249)] = 6901,
  [SMALL_STATE(250)] = 6917,
  [SMALL_STATE(251)] = 6933,
  [SMALL_STATE(252)] = 6947,
  [SMALL_STATE(253)] = 6961,
  [SMALL_STATE(254)] = 6977,
  [SMALL_STATE(255)] = 6991,
  [SMALL_STATE(256)] = 7007,
  [SMALL_STATE(257)] = 7017,
  [SMALL_STATE(258)] = 7031,
  [SMALL_STATE(259)] = 7045,
  [SMALL_STATE(260)] = 7057,
  [SMALL_STATE(261)] = 7073,
  [SMALL_STATE(262)] = 7089,
  [SMALL_STATE(263)] = 7103,
  [SMALL_STATE(264)] = 7115,
  [SMALL_STATE(265)] = 7131,
  [SMALL_STATE(266)] = 7145,
  [SMALL_STATE(267)] = 7157,
  [SMALL_STATE(268)] = 7171,
  [SMALL_STATE(269)] = 7185,
  [SMALL_STATE(270)] = 7199,
  [SMALL_STATE(271)] = 7211,
  [SMALL_STATE(272)] = 7225,
  [SMALL_STATE(273)] = 7238,
  [SMALL_STATE(274)] = 7249,
  [SMALL_STATE(275)] = 7258,
  [SMALL_STATE(276)] = 7269,
  [SMALL_STATE(277)] = 7280,
  [SMALL_STATE(278)] = 7293,
  [SMALL_STATE(279)] = 7304,
  [SMALL_STATE(280)] = 7317,
  [SMALL_STATE(281)] = 7330,
  [SMALL_STATE(282)] = 7343,
  [SMALL_STATE(283)] = 7356,
  [SMALL_STATE(284)] = 7367,
  [SMALL_STATE(285)] = 7378,
  [SMALL_STATE(286)] = 7389,
  [SMALL_STATE(287)] = 7400,
  [SMALL_STATE(288)] = 7411,
  [SMALL_STATE(289)] = 7422,
  [SMALL_STATE(290)] = 7433,
  [SMALL_STATE(291)] = 7446,
  [SMALL_STATE(292)] = 7457,
  [SMALL_STATE(293)] = 7468,
  [SMALL_STATE(294)] = 7481,
  [SMALL_STATE(295)] = 7490,
  [SMALL_STATE(296)] = 7501,
  [SMALL_STATE(297)] = 7514,
  [SMALL_STATE(298)] = 7527,
  [SMALL_STATE(299)] = 7540,
  [SMALL_STATE(300)] = 7551,
  [SMALL_STATE(301)] = 7562,
  [SMALL_STATE(302)] = 7575,
  [SMALL_STATE(303)] = 7588,
  [SMALL_STATE(304)] = 7599,
  [SMALL_STATE(305)] = 7612,
  [SMALL_STATE(306)] = 7625,
  [SMALL_STATE(307)] = 7636,
  [SMALL_STATE(308)] = 7649,
  [SMALL_STATE(309)] = 7660,
  [SMALL_STATE(310)] = 7673,
  [SMALL_STATE(311)] = 7684,
  [SMALL_STATE(312)] = 7695,
  [SMALL_STATE(313)] = 7706,
  [SMALL_STATE(314)] = 7719,
  [SMALL_STATE(315)] = 7732,
  [SMALL_STATE(316)] = 7745,
  [SMALL_STATE(317)] = 7756,
  [SMALL_STATE(318)] = 7769,
  [SMALL_STATE(319)] = 7780,
  [SMALL_STATE(320)] = 7790,
  [SMALL_STATE(321)] = 7800,
  [SMALL_STATE(322)] = 7810,
  [SMALL_STATE(323)] = 7820,
  [SMALL_STATE(324)] = 7828,
  [SMALL_STATE(325)] = 7838,
  [SMALL_STATE(326)] = 7846,
  [SMALL_STATE(327)] = 7854,
  [SMALL_STATE(328)] = 7862,
  [SMALL_STATE(329)] = 7870,
  [SMALL_STATE(330)] = 7878,
  [SMALL_STATE(331)] = 7888,
  [SMALL_STATE(332)] = 7896,
  [SMALL_STATE(333)] = 7906,
  [SMALL_STATE(334)] = 7914,
  [SMALL_STATE(335)] = 7924,
  [SMALL_STATE(336)] = 7932,
  [SMALL_STATE(337)] = 7940,
  [SMALL_STATE(338)] = 7950,
  [SMALL_STATE(339)] = 7958,
  [SMALL_STATE(340)] = 7968,
  [SMALL_STATE(341)] = 7976,
  [SMALL_STATE(342)] = 7986,
  [SMALL_STATE(343)] = 7994,
  [SMALL_STATE(344)] = 8002,
  [SMALL_STATE(345)] = 8010,
  [SMALL_STATE(346)] = 8018,
  [SMALL_STATE(347)] = 8028,
  [SMALL_STATE(348)] = 8038,
  [SMALL_STATE(349)] = 8048,
  [SMALL_STATE(350)] = 8056,
  [SMALL_STATE(351)] = 8066,
  [SMALL_STATE(352)] = 8073,
  [SMALL_STATE(353)] = 8080,
  [SMALL_STATE(354)] = 8087,
  [SMALL_STATE(355)] = 8094,
  [SMALL_STATE(356)] = 8101,
  [SMALL_STATE(357)] = 8108,
  [SMALL_STATE(358)] = 8115,
  [SMALL_STATE(359)] = 8122,
  [SMALL_STATE(360)] = 8129,
  [SMALL_STATE(361)] = 8136,
  [SMALL_STATE(362)] = 8143,
  [SMALL_STATE(363)] = 8150,
  [SMALL_STATE(364)] = 8157,
  [SMALL_STATE(365)] = 8164,
  [SMALL_STATE(366)] = 8171,
  [SMALL_STATE(367)] = 8178,
  [SMALL_STATE(368)] = 8185,
  [SMALL_STATE(369)] = 8192,
  [SMALL_STATE(370)] = 8199,
  [SMALL_STATE(371)] = 8206,
  [SMALL_STATE(372)] = 8213,
  [SMALL_STATE(373)] = 8220,
  [SMALL_STATE(374)] = 8227,
  [SMALL_STATE(375)] = 8234,
  [SMALL_STATE(376)] = 8241,
  [SMALL_STATE(377)] = 8248,
  [SMALL_STATE(378)] = 8255,
  [SMALL_STATE(379)] = 8262,
  [SMALL_STATE(380)] = 8269,
  [SMALL_STATE(381)] = 8276,
  [SMALL_STATE(382)] = 8283,
  [SMALL_STATE(383)] = 8290,
  [SMALL_STATE(384)] = 8297,
  [SMALL_STATE(385)] = 8304,
  [SMALL_STATE(386)] = 8311,
  [SMALL_STATE(387)] = 8318,
  [SMALL_STATE(388)] = 8325,
  [SMALL_STATE(389)] = 8332,
  [SMALL_STATE(390)] = 8339,
  [SMALL_STATE(391)] = 8346,
  [SMALL_STATE(392)] = 8353,
  [SMALL_STATE(393)] = 8360,
  [SMALL_STATE(394)] = 8367,
  [SMALL_STATE(395)] = 8374,
  [SMALL_STATE(396)] = 8381,
  [SMALL_STATE(397)] = 8388,
  [SMALL_STATE(398)] = 8395,
  [SMALL_STATE(399)] = 8402,
  [SMALL_STATE(400)] = 8409,
  [SMALL_STATE(401)] = 8416,
  [SMALL_STATE(402)] = 8423,
  [SMALL_STATE(403)] = 8430,
  [SMALL_STATE(404)] = 8437,
  [SMALL_STATE(405)] = 8444,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(366),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(360),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 6),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 10),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 9),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 9),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 9),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 9),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 8),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 8),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_sets, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_sets, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_prefix, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_prefix, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subreadings, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subreadings, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 8),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 8),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 11),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 8),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 8),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 7),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 7),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 7),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 7),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 7),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 6),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 10),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 10),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 6),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 6),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_special_list, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_special_list, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(264),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglist, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_target, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context, 2), SHIFT_REPEAT(105),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(246),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(187),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(187),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contextpos, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contextpos, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(247),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(235),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compotag, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compotag, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(187),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(187),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleflag, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruleflag, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_tag, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setname, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(253),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 2), SHIFT_REPEAT(321),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(265),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2), SHIFT_REPEAT(246),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname_t, 1),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(239),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2), SHIFT_REPEAT(382),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_tag, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__to_from, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2), SHIFT_REPEAT(192),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 7),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 6),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_list_name, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [754] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cg(void) {
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
