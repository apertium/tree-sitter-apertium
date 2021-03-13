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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 419
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

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
  aux_sym_comment_token1 = 64,
  aux_sym_comment_token2 = 65,
  sym_source_file = 66,
  sym_special_list_name = 67,
  sym_set_special_list = 68,
  sym_static_sets = 69,
  sym_mapping_prefix = 70,
  sym_subreadings = 71,
  sym_parentheses = 72,
  sym_list = 73,
  sym_set = 74,
  sym_include = 75,
  sym_section_header = 76,
  aux_sym__context = 77,
  sym__if_context = 78,
  sym__rule_target = 79,
  sym__shared_rule_end = 80,
  sym__rule_tag = 81,
  sym_rule = 82,
  sym_rule_substitute_etc = 83,
  sym_rule_map_etc = 84,
  sym__to_from = 85,
  sym_rule_parentchild = 86,
  sym__child_specifier = 87,
  sym_rule_move = 88,
  sym_rule_switch = 89,
  sym_rule_relation = 90,
  sym_rule_relations = 91,
  sym_rule_addcohort = 92,
  sym_rule_external = 93,
  sym_template = 94,
  sym_contexttest = 95,
  sym_inlineset = 96,
  sym_inlineset_single = 97,
  sym_taglist = 98,
  sym_compotag = 99,
  sym_filepath = 100,
  sym_tag = 101,
  sym_contextpos = 102,
  sym_ruleflag = 103,
  sym_setname = 104,
  sym_setname_t = 105,
  sym_comment = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_static_sets_repeat1 = 108,
  aux_sym_parentheses_repeat1 = 109,
  aux_sym_contexttest_repeat1 = 110,
  aux_sym_contexttest_repeat2 = 111,
  aux_sym_inlineset_repeat1 = 112,
  aux_sym_taglist_repeat1 = 113,
  aux_sym_compotag_repeat1 = 114,
  aux_sym_ruleflag_repeat1 = 115,
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
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
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
  [sym_comment] = "comment",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
  [sym_comment] = sym_comment,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ':') ADVANCE(475);
      if (lookahead == ';') ADVANCE(448);
      if (lookahead == '=') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(508);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(510);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(523);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(524);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(517);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(509);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(515);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(519);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(499);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == ';') ADVANCE(448);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(656);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(669);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(670);
      if (lookahead == '\\') ADVANCE(439);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ';') ADVANCE(448);
      if (lookahead == '=') ADVANCE(447);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
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
          lookahead == 8745) ADVANCE(499);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(658);
      if (lookahead == '[') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == ':') ADVANCE(475);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
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
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'T') ADVANCE(658);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(425);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == ';') ADVANCE(448);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(554);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(558);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ';') ADVANCE(448);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(653);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(384);
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
          lookahead != ';') ADVANCE(655);
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
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
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
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
          lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
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
          lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(538);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(376);
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
          lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
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
          lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
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
          lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(538);
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
          lookahead == 'o') ADVANCE(477);
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
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
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
          lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
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
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
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
          lookahead == 'e') ADVANCE(367);
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
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
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
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
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
          lookahead == 'f') ADVANCE(393);
      END_STATE();
    case 170:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(525);
      END_STATE();
    case 171:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(471);
      END_STATE();
    case 172:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(314);
      END_STATE();
    case 173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(395);
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
          lookahead == 'f') ADVANCE(315);
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
          lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 184:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(525);
      END_STATE();
    case 186:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 187:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(536);
      END_STATE();
    case 188:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(483);
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
          lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 192:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(309);
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
          lookahead == 't') ADVANCE(330);
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
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
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
          lookahead == 'i') ADVANCE(385);
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
          lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(409);
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
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
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
          lookahead == 'k') ADVANCE(492);
      END_STATE();
    case 228:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(538);
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
          lookahead == 'l') ADVANCE(424);
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
          lookahead == 'l') ADVANCE(296);
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
          lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 256:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 257:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(320);
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
          lookahead == 'n') ADVANCE(375);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(434);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(227);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 317:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 318:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 319:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(533);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 320:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(531);
      END_STATE();
    case 321:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 322:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      END_STATE();
    case 323:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 324:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 325:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 327:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(449);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(464);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 384:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 424:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 425:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 426:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 427:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(423);
      END_STATE();
    case 428:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 429:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 430:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 431:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 432:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(453);
      END_STATE();
    case 433:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(538);
      END_STATE();
    case 434:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(531);
      END_STATE();
    case 435:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(538);
      END_STATE();
    case 436:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 437:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 438:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 439:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 440:
      if (eof) ADVANCE(441);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ':') ADVANCE(475);
      if (lookahead == ';') ADVANCE(448);
      if (lookahead == '=') ADVANCE(447);
      if (lookahead == ']') ADVANCE(498);
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
          lookahead == 'e') ADVANCE(277);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(425);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
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
      ACCEPT_TOKEN(sym_END);
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_special_list_name_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_special_list_name_token2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_special_list_name_token3);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_STATIC_SETS);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_MAPPING_PREFIX);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_SUBREADINGS);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_RTL);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_LTR);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_PARENTHESES);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_LIST);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_SET);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_INCLUDE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_section_header_token2);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_section_header_token3);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_section_header_token4);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_section_header_token5);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_section_header_token6);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_section_header_token7);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_section_header_token8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_IF);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(525);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_TARGET);
      END_STATE();
    case 474:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 476:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_TO);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_FROM);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_WITHCHILD);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_NOCHILD);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_BEFORE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_AFTER);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_WITH);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ONCE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ALWAYS);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_TEMPLATE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_context_modifier);
      END_STATE();
    case 489:
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
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_BARRIER);
      END_STATE();
    case 491:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_LINK);
      END_STATE();
    case 493:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_OR);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 496:
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
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_set_op);
      END_STATE();
    case 500:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_prefix);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == ':') ADVANCE(655);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(393);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 515:
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
    case 516:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(472);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ruletype);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ruletype_substitute_etc);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ruletype_parentchild);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ruletype_relation);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ruletype_relations);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ruletype_addcohort);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ruletype_move);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ruletype_switch);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ruletype_external);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ruleflag_name);
      END_STATE();
    case 539:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ':') ADVANCE(653);
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '_') ADVANCE(551);
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 547:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(587);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 554:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(632);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 574:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 593:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(548);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 635:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 644:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 653:
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
          lookahead != ';') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(654);
      END_STATE();
    case 655:
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
          lookahead != ';') ADVANCE(655);
      END_STATE();
    case 656:
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
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(654);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == ':') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 669:
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
          lookahead != ';') ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_qtag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(677);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(542);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead == '#') ADVANCE(671);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(677);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(677);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0) ADVANCE(677);
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
  [62] = {.lex_state = 440},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 17},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 17},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 20},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 20},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 440},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 440},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 440},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 16},
  [229] = {.lex_state = 440},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 440},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 440},
  [245] = {.lex_state = 440},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 440},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 15},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 440},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 440},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 440},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 18},
  [269] = {.lex_state = 440},
  [270] = {.lex_state = 440},
  [271] = {.lex_state = 440},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 440},
  [274] = {.lex_state = 440},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 440},
  [278] = {.lex_state = 440},
  [279] = {.lex_state = 440},
  [280] = {.lex_state = 440},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 440},
  [283] = {.lex_state = 440},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 440},
  [286] = {.lex_state = 19},
  [287] = {.lex_state = 440},
  [288] = {.lex_state = 440},
  [289] = {.lex_state = 17},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 440},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 20},
  [295] = {.lex_state = 440},
  [296] = {.lex_state = 440},
  [297] = {.lex_state = 440},
  [298] = {.lex_state = 440},
  [299] = {.lex_state = 20},
  [300] = {.lex_state = 19},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 19},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 440},
  [305] = {.lex_state = 440},
  [306] = {.lex_state = 440},
  [307] = {.lex_state = 440},
  [308] = {.lex_state = 440},
  [309] = {.lex_state = 440},
  [310] = {.lex_state = 440},
  [311] = {.lex_state = 440},
  [312] = {.lex_state = 440},
  [313] = {.lex_state = 440},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 440},
  [316] = {.lex_state = 440},
  [317] = {.lex_state = 440},
  [318] = {.lex_state = 440},
  [319] = {.lex_state = 440},
  [320] = {.lex_state = 440},
  [321] = {.lex_state = 440},
  [322] = {.lex_state = 440},
  [323] = {.lex_state = 440},
  [324] = {.lex_state = 440},
  [325] = {.lex_state = 440},
  [326] = {.lex_state = 440},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 15},
  [329] = {.lex_state = 440},
  [330] = {.lex_state = 440},
  [331] = {.lex_state = 440},
  [332] = {.lex_state = 440},
  [333] = {.lex_state = 440},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 440},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 440},
  [339] = {.lex_state = 440},
  [340] = {.lex_state = 440},
  [341] = {.lex_state = 440},
  [342] = {.lex_state = 440},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 440},
  [345] = {.lex_state = 440},
  [346] = {.lex_state = 440},
  [347] = {.lex_state = 4},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 440},
  [350] = {.lex_state = 440},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 440},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 440},
  [355] = {.lex_state = 440},
  [356] = {.lex_state = 440},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 440},
  [360] = {.lex_state = 440},
  [361] = {.lex_state = 440},
  [362] = {.lex_state = 440},
  [363] = {.lex_state = 440},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 440},
  [366] = {.lex_state = 440},
  [367] = {.lex_state = 440},
  [368] = {.lex_state = 440},
  [369] = {.lex_state = 440},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 440},
  [372] = {.lex_state = 440},
  [373] = {.lex_state = 440},
  [374] = {.lex_state = 440},
  [375] = {.lex_state = 440},
  [376] = {.lex_state = 440},
  [377] = {.lex_state = 440},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 440},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 440},
  [382] = {.lex_state = 440},
  [383] = {.lex_state = 440},
  [384] = {.lex_state = 440},
  [385] = {.lex_state = 674},
  [386] = {.lex_state = 440},
  [387] = {.lex_state = 440},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 10},
  [390] = {.lex_state = 440},
  [391] = {.lex_state = 9},
  [392] = {.lex_state = 440},
  [393] = {.lex_state = 440},
  [394] = {.lex_state = 440},
  [395] = {.lex_state = 9},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 440},
  [398] = {.lex_state = 440},
  [399] = {.lex_state = 440},
  [400] = {.lex_state = 440},
  [401] = {.lex_state = 440},
  [402] = {.lex_state = 440},
  [403] = {.lex_state = 440},
  [404] = {.lex_state = 440},
  [405] = {.lex_state = 440},
  [406] = {.lex_state = 440},
  [407] = {.lex_state = 440},
  [408] = {.lex_state = 440},
  [409] = {.lex_state = 9},
  [410] = {.lex_state = 440},
  [411] = {.lex_state = 9},
  [412] = {.lex_state = 4},
  [413] = {.lex_state = 9},
  [414] = {.lex_state = 440},
  [415] = {.lex_state = 9},
  [416] = {.lex_state = 440},
  [417] = {(TSStateId)(-1)},
  [418] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_END] = ACTIONS(3),
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
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(370),
    [sym_special_list_name] = STATE(372),
    [sym_set_special_list] = STATE(28),
    [sym_static_sets] = STATE(28),
    [sym_mapping_prefix] = STATE(28),
    [sym_subreadings] = STATE(28),
    [sym_parentheses] = STATE(28),
    [sym_list] = STATE(28),
    [sym_set] = STATE(28),
    [sym_include] = STATE(28),
    [sym_section_header] = STATE(28),
    [sym_rule] = STATE(28),
    [sym_rule_substitute_etc] = STATE(28),
    [sym_rule_map_etc] = STATE(28),
    [sym_rule_parentchild] = STATE(28),
    [sym_rule_move] = STATE(28),
    [sym_rule_switch] = STATE(28),
    [sym_rule_relation] = STATE(28),
    [sym_rule_relations] = STATE(28),
    [sym_rule_addcohort] = STATE(28),
    [sym_rule_external] = STATE(28),
    [sym_template] = STATE(28),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_END] = ACTIONS(3),
    [aux_sym_special_list_name_token1] = ACTIONS(7),
    [aux_sym_special_list_name_token2] = ACTIONS(7),
    [aux_sym_special_list_name_token3] = ACTIONS(7),
    [sym_STATIC_SETS] = ACTIONS(9),
    [sym_MAPPING_PREFIX] = ACTIONS(11),
    [sym_SUBREADINGS] = ACTIONS(13),
    [sym_PARENTHESES] = ACTIONS(15),
    [sym_LIST] = ACTIONS(17),
    [sym_SET] = ACTIONS(19),
    [sym_INCLUDE] = ACTIONS(21),
    [aux_sym_section_header_token1] = ACTIONS(23),
    [aux_sym_section_header_token2] = ACTIONS(23),
    [aux_sym_section_header_token3] = ACTIONS(23),
    [aux_sym_section_header_token4] = ACTIONS(23),
    [aux_sym_section_header_token5] = ACTIONS(23),
    [aux_sym_section_header_token6] = ACTIONS(23),
    [aux_sym_section_header_token7] = ACTIONS(23),
    [aux_sym_section_header_token8] = ACTIONS(23),
    [sym_TEMPLATE] = ACTIONS(25),
    [sym_ruletype] = ACTIONS(27),
    [sym_ruletype_substitute_etc] = ACTIONS(29),
    [sym_ruletype_parentchild] = ACTIONS(31),
    [sym_ruletype_relation] = ACTIONS(33),
    [sym_ruletype_relations] = ACTIONS(35),
    [sym_ruletype_map_etc] = ACTIONS(37),
    [sym_ruletype_addcohort] = ACTIONS(39),
    [sym_ruletype_move] = ACTIONS(41),
    [sym_ruletype_switch] = ACTIONS(43),
    [sym_ruletype_external] = ACTIONS(45),
    [sym_qtag] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      sym_STATIC_SETS,
    ACTIONS(11), 1,
      sym_MAPPING_PREFIX,
    ACTIONS(13), 1,
      sym_SUBREADINGS,
    ACTIONS(15), 1,
      sym_PARENTHESES,
    ACTIONS(17), 1,
      sym_LIST,
    ACTIONS(19), 1,
      sym_SET,
    ACTIONS(21), 1,
      sym_INCLUDE,
    ACTIONS(25), 1,
      sym_TEMPLATE,
    ACTIONS(27), 1,
      sym_ruletype,
    ACTIONS(29), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(31), 1,
      sym_ruletype_parentchild,
    ACTIONS(33), 1,
      sym_ruletype_relation,
    ACTIONS(35), 1,
      sym_ruletype_relations,
    ACTIONS(37), 1,
      sym_ruletype_map_etc,
    ACTIONS(39), 1,
      sym_ruletype_addcohort,
    ACTIONS(41), 1,
      sym_ruletype_move,
    ACTIONS(43), 1,
      sym_ruletype_switch,
    ACTIONS(45), 1,
      sym_ruletype_external,
    ACTIONS(47), 1,
      sym_qtag,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(372), 1,
      sym_special_list_name,
    ACTIONS(7), 3,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
    ACTIONS(23), 8,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
    STATE(28), 20,
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
  [113] = 27,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_STATIC_SETS,
    ACTIONS(59), 1,
      sym_MAPPING_PREFIX,
    ACTIONS(62), 1,
      sym_SUBREADINGS,
    ACTIONS(65), 1,
      sym_PARENTHESES,
    ACTIONS(68), 1,
      sym_LIST,
    ACTIONS(71), 1,
      sym_SET,
    ACTIONS(74), 1,
      sym_INCLUDE,
    ACTIONS(80), 1,
      sym_TEMPLATE,
    ACTIONS(83), 1,
      sym_ruletype,
    ACTIONS(86), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(89), 1,
      sym_ruletype_parentchild,
    ACTIONS(92), 1,
      sym_ruletype_relation,
    ACTIONS(95), 1,
      sym_ruletype_relations,
    ACTIONS(98), 1,
      sym_ruletype_map_etc,
    ACTIONS(101), 1,
      sym_ruletype_addcohort,
    ACTIONS(104), 1,
      sym_ruletype_move,
    ACTIONS(107), 1,
      sym_ruletype_switch,
    ACTIONS(110), 1,
      sym_ruletype_external,
    ACTIONS(113), 1,
      sym_qtag,
    STATE(372), 1,
      sym_special_list_name,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 3,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
    ACTIONS(77), 8,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
    STATE(28), 20,
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
  [224] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(118), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(116), 27,
      ts_builtin_sym_end,
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
  [269] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(122), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(120), 27,
      ts_builtin_sym_end,
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
  [314] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(126), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(124), 27,
      ts_builtin_sym_end,
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
  [359] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(130), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(128), 27,
      ts_builtin_sym_end,
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
  [404] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(134), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(132), 27,
      ts_builtin_sym_end,
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
  [449] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(138), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(136), 27,
      ts_builtin_sym_end,
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
  [494] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(142), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(140), 27,
      ts_builtin_sym_end,
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
  [539] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(146), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(144), 27,
      ts_builtin_sym_end,
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
  [584] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(150), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(148), 27,
      ts_builtin_sym_end,
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
  [629] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(154), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(152), 27,
      ts_builtin_sym_end,
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
  [674] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(158), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(156), 27,
      ts_builtin_sym_end,
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
  [719] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(162), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(160), 27,
      ts_builtin_sym_end,
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
  [764] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(166), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(164), 27,
      ts_builtin_sym_end,
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
  [809] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(170), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(168), 27,
      ts_builtin_sym_end,
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
  [854] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(174), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(172), 27,
      ts_builtin_sym_end,
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
  [899] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(178), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(176), 27,
      ts_builtin_sym_end,
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
  [944] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(182), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(180), 27,
      ts_builtin_sym_end,
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
  [989] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(186), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(184), 27,
      ts_builtin_sym_end,
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
  [1034] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(190), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(188), 27,
      ts_builtin_sym_end,
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
  [1079] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(194), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(192), 27,
      ts_builtin_sym_end,
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
  [1124] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(198), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(196), 27,
      ts_builtin_sym_end,
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
  [1169] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(202), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(200), 27,
      ts_builtin_sym_end,
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
  [1214] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(206), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(204), 27,
      ts_builtin_sym_end,
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
  [1259] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(210), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(208), 27,
      ts_builtin_sym_end,
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
  [1304] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(214), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(212), 27,
      ts_builtin_sym_end,
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
  [1349] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(218), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(216), 27,
      ts_builtin_sym_end,
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
  [1394] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(222), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(220), 27,
      ts_builtin_sym_end,
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
  [1439] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(226), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(224), 27,
      ts_builtin_sym_end,
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
  [1484] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(230), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(228), 27,
      ts_builtin_sym_end,
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
  [1529] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(234), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(232), 27,
      ts_builtin_sym_end,
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
  [1574] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(238), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(236), 27,
      ts_builtin_sym_end,
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
  [1619] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(242), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(240), 27,
      ts_builtin_sym_end,
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
  [1664] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(246), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(244), 27,
      ts_builtin_sym_end,
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
  [1709] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(250), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(248), 27,
      ts_builtin_sym_end,
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
  [1754] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(254), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(252), 27,
      ts_builtin_sym_end,
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
  [1799] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(258), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(256), 27,
      ts_builtin_sym_end,
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
  [1844] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(262), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(260), 27,
      ts_builtin_sym_end,
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
  [1889] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(266), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(264), 27,
      ts_builtin_sym_end,
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
  [1934] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(270), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(268), 27,
      ts_builtin_sym_end,
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
  [1979] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(274), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(272), 27,
      ts_builtin_sym_end,
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
  [2024] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(278), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(276), 27,
      ts_builtin_sym_end,
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
  [2069] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(282), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(280), 27,
      ts_builtin_sym_end,
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
  [2114] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(286), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(284), 27,
      ts_builtin_sym_end,
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
  [2159] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(290), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(288), 27,
      ts_builtin_sym_end,
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
  [2204] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(294), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(292), 27,
      ts_builtin_sym_end,
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
  [2249] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(298), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(296), 27,
      ts_builtin_sym_end,
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
  [2294] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(302), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(300), 27,
      ts_builtin_sym_end,
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
  [2339] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(306), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(304), 27,
      ts_builtin_sym_end,
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
  [2384] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(310), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(308), 27,
      ts_builtin_sym_end,
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
  [2429] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(314), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(312), 27,
      ts_builtin_sym_end,
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
  [2474] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(318), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(316), 27,
      ts_builtin_sym_end,
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
  [2519] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(322), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(320), 27,
      ts_builtin_sym_end,
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
  [2564] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(326), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(324), 27,
      ts_builtin_sym_end,
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
  [2609] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(330), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(328), 27,
      ts_builtin_sym_end,
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
  [2654] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(334), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(332), 27,
      ts_builtin_sym_end,
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
  [2699] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(338), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(336), 27,
      ts_builtin_sym_end,
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
  [2744] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(342), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(340), 27,
      ts_builtin_sym_end,
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
  [2789] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(346), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(344), 27,
      ts_builtin_sym_end,
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
  [2834] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(350), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(348), 27,
      ts_builtin_sym_end,
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
  [2879] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      sym_set_op,
    STATE(63), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
    ACTIONS(352), 13,
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
  [2908] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(357), 15,
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
  [2935] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      sym_set_op,
    STATE(65), 1,
      sym_comment,
    STATE(66), 1,
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
  [2966] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      sym_set_op,
    STATE(63), 1,
      aux_sym_inlineset_repeat1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(363), 13,
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
  [2997] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(365), 14,
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
  [3023] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(367), 14,
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
  [3049] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(352), 14,
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
  [3075] = 16,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(70), 1,
      sym_comment,
    STATE(77), 1,
      sym__rule_tag,
    STATE(110), 1,
      sym_inlineset,
    STATE(115), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3124] = 16,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(71), 1,
      sym_comment,
    STATE(78), 1,
      sym__rule_tag,
    STATE(108), 1,
      sym_ruleflag,
    STATE(110), 1,
      sym_inlineset,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3173] = 15,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(72), 1,
      sym_comment,
    STATE(92), 1,
      sym__rule_tag,
    STATE(110), 1,
      sym_inlineset,
    STATE(146), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(231), 1,
      sym__rule_target,
  [3219] = 15,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(73), 1,
      sym_comment,
    STATE(96), 1,
      sym__rule_tag,
    STATE(110), 1,
      sym_inlineset,
    STATE(161), 1,
      sym__rule_target,
    STATE(163), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
  [3265] = 15,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(74), 1,
      sym_comment,
    STATE(90), 1,
      sym__rule_tag,
    STATE(110), 1,
      sym_inlineset,
    STATE(175), 1,
      sym_ruleflag,
    STATE(176), 1,
      sym__rule_target,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
  [3311] = 15,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(75), 1,
      sym_comment,
    STATE(91), 1,
      sym__rule_tag,
    STATE(110), 1,
      sym_inlineset,
    STATE(169), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3357] = 12,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      sym_BARRIER,
    ACTIONS(387), 1,
      sym_LINK,
    ACTIONS(389), 1,
      aux_sym_setname_t_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(76), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(273), 2,
      sym_inlineset,
      sym_setname_t,
  [3396] = 14,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(77), 1,
      sym_comment,
    STATE(108), 1,
      sym_ruleflag,
    STATE(110), 1,
      sym_inlineset,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3439] = 14,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(78), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(122), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3482] = 14,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(79), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(125), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3525] = 14,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(80), 1,
      sym_comment,
    STATE(98), 1,
      sym_ruleflag,
    STATE(110), 1,
      sym_inlineset,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3568] = 14,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(81), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(119), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(237), 1,
      sym__rule_target,
  [3611] = 12,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(389), 1,
      aux_sym_setname_t_token1,
    ACTIONS(393), 1,
      sym_BARRIER,
    ACTIONS(395), 1,
      sym_LINK,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(82), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(245), 2,
      sym_inlineset,
      sym_setname_t,
  [3650] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(83), 1,
      sym_comment,
    STATE(135), 1,
      sym__rule_tag,
    STATE(165), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(236), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3690] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(84), 1,
      sym_comment,
    STATE(120), 1,
      sym_inlineset,
    STATE(137), 1,
      sym__rule_tag,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(230), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3730] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(85), 1,
      sym_comment,
    STATE(138), 1,
      sym__rule_tag,
    STATE(222), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(347), 1,
      sym_inlineset,
  [3770] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(86), 1,
      sym_comment,
    STATE(102), 1,
      sym__rule_tag,
    STATE(104), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(209), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3810] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(87), 1,
      sym_comment,
    STATE(132), 1,
      sym__rule_tag,
    STATE(174), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(214), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3850] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(88), 1,
      sym_comment,
    STATE(136), 1,
      sym__rule_tag,
    STATE(200), 1,
      sym_inlineset,
    STATE(216), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [3890] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(89), 1,
      sym_comment,
    STATE(141), 1,
      sym__rule_tag,
    STATE(206), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(351), 1,
      sym_inlineset,
  [3930] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(90), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(161), 1,
      sym__rule_target,
    STATE(163), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
  [3970] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(91), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(146), 1,
      sym_ruleflag,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
    STATE(231), 1,
      sym__rule_target,
  [4010] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(92), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(152), 1,
      sym_ruleflag,
    STATE(217), 1,
      sym__rule_target,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
  [4050] = 13,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      sym_ruletype,
    ACTIONS(411), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(413), 1,
      sym_ruletype_parentchild,
    ACTIONS(415), 1,
      sym_ruletype_relation,
    ACTIONS(417), 1,
      sym_ruletype_relations,
    ACTIONS(419), 1,
      sym_ruletype_map_etc,
    ACTIONS(421), 1,
      sym_ruletype_addcohort,
    ACTIONS(423), 1,
      sym_ruletype_move,
    ACTIONS(425), 1,
      sym_ruletype_switch,
    ACTIONS(427), 1,
      sym_ruletype_external,
    STATE(93), 1,
      sym_comment,
  [4090] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(94), 1,
      sym_comment,
    STATE(133), 1,
      sym__rule_tag,
    STATE(233), 1,
      sym_inlineset,
    STATE(235), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [4130] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(95), 1,
      sym_comment,
    STATE(139), 1,
      sym__rule_tag,
    STATE(188), 1,
      sym_inlineset,
    STATE(211), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [4170] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(96), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(154), 1,
      sym_ruleflag,
    STATE(180), 1,
      sym__rule_target,
    STATE(227), 1,
      aux_sym_ruleflag_repeat1,
  [4210] = 13,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(97), 1,
      sym_comment,
    STATE(128), 1,
      sym__rule_tag,
    STATE(187), 1,
      sym_ruleflag,
    STATE(218), 1,
      sym_inlineset,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [4250] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(98), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(237), 1,
      sym__rule_target,
  [4284] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(99), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(368), 1,
      sym_contexttest,
  [4318] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(100), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(349), 1,
      sym_contexttest,
  [4352] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(101), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_taglist_repeat1,
    ACTIONS(439), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [4382] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(102), 1,
      sym_comment,
    STATE(120), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(230), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [4416] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(103), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(237), 1,
      sym__rule_target,
  [4450] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(104), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(237), 1,
      sym__rule_target,
  [4484] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(105), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(237), 1,
      sym__rule_target,
  [4518] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__context,
    ACTIONS(447), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4542] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(107), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(376), 1,
      sym_contexttest,
  [4576] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(108), 1,
      sym_comment,
    STATE(110), 1,
      sym_inlineset,
    STATE(237), 1,
      sym__rule_target,
  [4610] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(109), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(390), 1,
      sym_contexttest,
  [4644] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(451), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4664] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(111), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [4698] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(112), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(359), 1,
      sym_contexttest,
  [4732] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(113), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [4766] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(114), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(339), 1,
      sym_contexttest,
  [4800] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(115), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [4834] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(453), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4854] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(117), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [4888] = 11,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    ACTIONS(461), 1,
      sym_ruleflag_name,
    STATE(118), 1,
      sym_comment,
    STATE(170), 1,
      sym__child_specifier,
    STATE(183), 1,
      sym__rule_tag,
    STATE(261), 1,
      aux_sym_ruleflag_repeat1,
    STATE(298), 1,
      sym_ruleflag,
  [4922] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(119), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [4956] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(120), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [4990] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(121), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5024] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(122), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5058] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(123), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5092] = 11,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    ACTIONS(461), 1,
      sym_ruleflag_name,
    STATE(124), 1,
      sym_comment,
    STATE(158), 1,
      sym__child_specifier,
    STATE(182), 1,
      sym__rule_tag,
    STATE(261), 1,
      aux_sym_ruleflag_repeat1,
    STATE(292), 1,
      sym_ruleflag,
  [5126] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(125), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5160] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(126), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(382), 1,
      sym_contexttest,
  [5194] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(127), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(329), 1,
      sym_contexttest,
  [5228] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(128), 1,
      sym_comment,
    STATE(233), 1,
      sym_inlineset,
    STATE(235), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [5262] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(129), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5296] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      sym_ntag,
    ACTIONS(471), 1,
      sym_qtag,
    ACTIONS(463), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(130), 2,
      sym_comment,
      aux_sym_taglist_repeat1,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [5324] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(131), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5358] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(132), 1,
      sym_comment,
    STATE(165), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(236), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [5392] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(133), 1,
      sym_comment,
    STATE(192), 1,
      sym_inlineset,
    STATE(221), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [5426] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    STATE(134), 2,
      aux_sym__context,
      sym_comment,
    ACTIONS(474), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5448] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(135), 1,
      sym_comment,
    STATE(162), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(223), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [5482] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(136), 1,
      sym_comment,
    STATE(204), 1,
      sym_inlineset,
    STATE(224), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [5516] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(131), 1,
      sym_inlineset,
    STATE(137), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(225), 1,
      sym_ruleflag,
    STATE(242), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [5550] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(138), 1,
      sym_comment,
    STATE(232), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(327), 1,
      sym_inlineset,
  [5584] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(139), 1,
      sym_comment,
    STATE(200), 1,
      sym_inlineset,
    STATE(216), 1,
      sym_ruleflag,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_setname,
  [5618] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      aux_sym__context,
    STATE(140), 1,
      sym_comment,
    ACTIONS(479), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5642] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(141), 1,
      sym_comment,
    STATE(222), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(347), 1,
      sym_inlineset,
  [5676] = 11,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(142), 1,
      sym_comment,
    STATE(237), 1,
      sym__rule_target,
  [5710] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_context_modifier,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(82), 1,
      sym_contextpos,
    STATE(143), 1,
      sym_comment,
    STATE(271), 1,
      sym_setname_t,
    STATE(352), 1,
      sym_contexttest,
  [5744] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(101), 1,
      aux_sym_taglist_repeat1,
    STATE(144), 1,
      sym_comment,
    STATE(400), 1,
      sym_taglist,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [5773] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(145), 1,
      sym_comment,
    STATE(172), 1,
      sym__rule_target,
  [5804] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(146), 1,
      sym_comment,
    STATE(217), 1,
      sym__rule_target,
  [5835] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(147), 1,
      sym_comment,
    STATE(283), 1,
      sym__if_context,
    STATE(401), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [5864] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(148), 1,
      sym_comment,
    STATE(309), 1,
      sym__if_context,
    STATE(381), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [5893] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(101), 1,
      aux_sym_taglist_repeat1,
    STATE(149), 1,
      sym_comment,
    STATE(406), 1,
      sym_taglist,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [5922] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(150), 1,
      sym_comment,
    STATE(159), 1,
      sym__rule_target,
  [5953] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(151), 1,
      sym_comment,
    ACTIONS(485), 7,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5972] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(152), 1,
      sym_comment,
    STATE(201), 1,
      sym__rule_target,
  [6003] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(153), 1,
      sym_comment,
    STATE(295), 1,
      sym__if_context,
    STATE(386), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6032] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(148), 1,
      sym__rule_target,
    STATE(154), 1,
      sym_comment,
  [6063] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(155), 1,
      sym_comment,
    STATE(171), 1,
      sym__rule_target,
  [6094] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(156), 1,
      sym_comment,
    STATE(296), 1,
      sym__if_context,
    STATE(383), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6123] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(157), 1,
      sym_comment,
    STATE(185), 1,
      sym__rule_target,
  [6154] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(158), 1,
      sym_comment,
    STATE(181), 1,
      sym__rule_target,
  [6185] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(159), 1,
      sym_comment,
    STATE(312), 1,
      sym__if_context,
    STATE(365), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6214] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(156), 1,
      sym__rule_target,
    STATE(160), 1,
      sym_comment,
  [6245] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(161), 1,
      sym_comment,
    STATE(282), 1,
      sym__if_context,
    STATE(407), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6274] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(153), 1,
      sym__rule_target,
    STATE(162), 1,
      sym_comment,
  [6305] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(163), 1,
      sym_comment,
    STATE(180), 1,
      sym__rule_target,
  [6336] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(164), 1,
      sym_comment,
    STATE(184), 1,
      sym__rule_target,
  [6367] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(165), 1,
      sym_comment,
    STATE(168), 1,
      sym__rule_target,
  [6398] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(101), 1,
      aux_sym_taglist_repeat1,
    STATE(166), 1,
      sym_comment,
    STATE(414), 1,
      sym_taglist,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [6427] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(487), 3,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(489), 4,
      sym_BARRIER,
      sym_LINK,
      aux_sym_setname_token1,
      aux_sym_setname_t_token1,
  [6448] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(168), 1,
      sym_comment,
    STATE(321), 1,
      sym__if_context,
    STATE(408), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6477] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(169), 1,
      sym_comment,
    STATE(231), 1,
      sym__rule_target,
  [6508] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(170), 1,
      sym_comment,
    STATE(186), 1,
      sym__rule_target,
  [6539] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(171), 1,
      sym_comment,
    STATE(323), 1,
      sym__if_context,
    STATE(398), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6568] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(172), 1,
      sym_comment,
    STATE(318), 1,
      sym__if_context,
    STATE(399), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6597] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(173), 1,
      sym_comment,
    STATE(178), 1,
      sym__rule_target,
  [6628] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(147), 1,
      sym__rule_target,
    STATE(174), 1,
      sym_comment,
  [6659] = 10,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_TARGET,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(110), 1,
      sym_inlineset,
    STATE(161), 1,
      sym__rule_target,
    STATE(175), 1,
      sym_comment,
  [6690] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(176), 1,
      sym_comment,
    STATE(325), 1,
      sym__if_context,
    STATE(394), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6719] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(101), 1,
      aux_sym_taglist_repeat1,
    STATE(177), 1,
      sym_comment,
    STATE(367), 1,
      sym_taglist,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [6748] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(178), 1,
      sym_comment,
    STATE(311), 1,
      sym__if_context,
    STATE(373), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6777] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(101), 1,
      aux_sym_taglist_repeat1,
    STATE(179), 1,
      sym_comment,
    STATE(410), 1,
      sym_taglist,
    STATE(210), 2,
      sym_compotag,
      sym_tag,
  [6806] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(180), 1,
      sym_comment,
    STATE(322), 1,
      sym__if_context,
    STATE(405), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [6835] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(181), 1,
      sym_comment,
    STATE(353), 1,
      sym__if_context,
    ACTIONS(491), 2,
      sym_BEFORE,
      sym_AFTER,
  [6861] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    ACTIONS(461), 1,
      sym_ruleflag_name,
    STATE(164), 1,
      sym__child_specifier,
    STATE(182), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_ruleflag_repeat1,
    STATE(297), 1,
      sym_ruleflag,
  [6889] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    ACTIONS(461), 1,
      sym_ruleflag_name,
    STATE(158), 1,
      sym__child_specifier,
    STATE(183), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_ruleflag_repeat1,
    STATE(292), 1,
      sym_ruleflag,
  [6917] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(184), 1,
      sym_comment,
    STATE(348), 1,
      sym__if_context,
    ACTIONS(493), 2,
      sym_BEFORE,
      sym_AFTER,
  [6943] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(185), 1,
      sym_comment,
    STATE(343), 1,
      sym__if_context,
    ACTIONS(495), 2,
      sym_BEFORE,
      sym_AFTER,
  [6969] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    STATE(106), 1,
      aux_sym__context,
    STATE(186), 1,
      sym_comment,
    STATE(335), 1,
      sym__if_context,
    ACTIONS(497), 2,
      sym_BEFORE,
      sym_AFTER,
  [6995] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(187), 1,
      sym_comment,
    STATE(233), 1,
      sym_inlineset,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [7020] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(150), 1,
      sym_inlineset,
    STATE(188), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [7045] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(189), 1,
      sym_comment,
    STATE(330), 1,
      sym_inlineset,
  [7070] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_compotag_repeat1,
    STATE(303), 1,
      sym_tag,
  [7095] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(173), 1,
      sym_inlineset,
    STATE(191), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [7120] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(111), 1,
      sym_inlineset,
    STATE(192), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [7145] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(142), 1,
      sym_inlineset,
    STATE(193), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [7170] = 6,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(503), 1,
      sym_set_op,
    ACTIONS(501), 2,
      sym_TARGET,
      aux_sym_setname_token1,
    STATE(194), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
  [7191] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(195), 1,
      sym_comment,
    STATE(403), 1,
      sym_inlineset,
  [7216] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(196), 1,
      sym_comment,
    STATE(319), 1,
      sym_inlineset,
  [7241] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      sym_WITHCHILD,
    ACTIONS(508), 1,
      sym_NOCHILD,
    STATE(197), 1,
      sym_comment,
    STATE(278), 1,
      aux_sym__context,
    STATE(336), 1,
      sym__child_specifier,
  [7266] = 7,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(512), 1,
      sym_set_op,
    STATE(194), 1,
      aux_sym_inlineset_repeat1,
    STATE(198), 1,
      sym_comment,
    ACTIONS(510), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7289] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(516), 1,
      sym_ntag,
    STATE(199), 1,
      sym_comment,
    ACTIONS(514), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [7308] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(160), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [7333] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    ACTIONS(518), 1,
      sym_WITH,
    STATE(106), 1,
      aux_sym__context,
    STATE(201), 1,
      sym_comment,
    STATE(378), 1,
      sym__if_context,
  [7358] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(202), 1,
      sym_comment,
    ACTIONS(520), 5,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ONCE,
      sym_ALWAYS,
      sym_ruleflag_name,
  [7375] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(203), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
    STATE(294), 1,
      sym_inlineset,
  [7400] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(155), 1,
      sym_inlineset,
    STATE(204), 1,
      sym_comment,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(242), 1,
      sym_setname,
  [7425] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(205), 1,
      sym_comment,
    STATE(316), 1,
      sym_inlineset,
  [7450] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(206), 1,
      sym_comment,
    STATE(347), 1,
      sym_inlineset,
  [7475] = 7,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(512), 1,
      sym_set_op,
    STATE(198), 1,
      aux_sym_inlineset_repeat1,
    STATE(207), 1,
      sym_comment,
    ACTIONS(522), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7498] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      sym_WITHCHILD,
    ACTIONS(508), 1,
      sym_NOCHILD,
    STATE(208), 1,
      sym_comment,
    STATE(277), 1,
      aux_sym__context,
    STATE(342), 1,
      sym__child_specifier,
  [7523] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(120), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(209), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [7548] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(526), 1,
      sym_ntag,
    STATE(210), 1,
      sym_comment,
    ACTIONS(524), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [7567] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(200), 1,
      sym_inlineset,
    STATE(211), 1,
      sym_comment,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [7592] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      sym_WITHCHILD,
    ACTIONS(508), 1,
      sym_NOCHILD,
    STATE(212), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym__context,
    STATE(354), 1,
      sym__child_specifier,
  [7617] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(530), 1,
      sym_ntag,
    STATE(213), 1,
      sym_comment,
    ACTIONS(528), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [7636] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(165), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(214), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [7661] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_comment,
    STATE(226), 1,
      aux_sym_compotag_repeat1,
    STATE(303), 1,
      sym_tag,
  [7686] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(204), 1,
      sym_inlineset,
    STATE(216), 1,
      sym_comment,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [7711] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    ACTIONS(534), 1,
      sym_WITH,
    STATE(106), 1,
      aux_sym__context,
    STATE(217), 1,
      sym_comment,
    STATE(412), 1,
      sym__if_context,
  [7736] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(113), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(218), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [7761] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(219), 1,
      sym_comment,
    STATE(361), 1,
      sym_inlineset,
  [7786] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(220), 1,
      sym_comment,
    STATE(315), 1,
      sym_inlineset,
  [7811] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(193), 1,
      sym_inlineset,
    STATE(221), 1,
      sym_comment,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [7836] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(222), 1,
      sym_comment,
    STATE(327), 1,
      sym_inlineset,
  [7861] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(145), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(223), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [7886] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(191), 1,
      sym_inlineset,
    STATE(224), 1,
      sym_comment,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [7911] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(117), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(225), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [7936] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      sym_ntag,
    ACTIONS(541), 1,
      sym_qtag,
    STATE(303), 1,
      sym_tag,
    STATE(226), 2,
      sym_comment,
      aux_sym_compotag_repeat1,
  [7959] = 7,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(377), 1,
      sym_ruleflag_name,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(546), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7982] = 6,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      sym_ruleflag_name,
    ACTIONS(550), 2,
      sym_TARGET,
      aux_sym_setname_token1,
    STATE(228), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [8003] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      sym_WITHCHILD,
    ACTIONS(508), 1,
      sym_NOCHILD,
    STATE(229), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym__context,
    STATE(356), 1,
      sym__child_specifier,
  [8028] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(131), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(230), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [8053] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    ACTIONS(555), 1,
      sym_WITH,
    STATE(106), 1,
      aux_sym__context,
    STATE(231), 1,
      sym_comment,
    STATE(388), 1,
      sym__if_context,
  [8078] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(232), 1,
      sym_comment,
    STATE(334), 1,
      sym_inlineset,
  [8103] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(105), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(233), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [8128] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    ACTIONS(557), 1,
      sym_WITH,
    STATE(106), 1,
      aux_sym__context,
    STATE(234), 1,
      sym_comment,
    STATE(396), 1,
      sym__if_context,
  [8153] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(192), 1,
      sym_inlineset,
    STATE(235), 1,
      sym_comment,
    STATE(246), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [8178] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(162), 1,
      sym_inlineset,
    STATE(207), 1,
      sym_inlineset_single,
    STATE(236), 1,
      sym_comment,
    STATE(242), 1,
      sym_setname,
  [8203] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym_IF,
    ACTIONS(559), 1,
      sym_semicolon,
    STATE(106), 1,
      aux_sym__context,
    STATE(237), 1,
      sym_comment,
    STATE(379), 1,
      sym__if_context,
  [8228] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      sym_WITHCHILD,
    ACTIONS(508), 1,
      sym_NOCHILD,
    STATE(238), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym__context,
    STATE(355), 1,
      sym__child_specifier,
  [8253] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(116), 1,
      sym_inlineset,
    STATE(239), 1,
      sym_comment,
  [8278] = 8,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(68), 1,
      sym_setname,
    STATE(240), 1,
      sym_comment,
    STATE(287), 1,
      sym_inlineset,
  [8303] = 6,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      anon_sym_COLON,
    STATE(241), 1,
      sym_comment,
    ACTIONS(563), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [8324] = 5,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(242), 1,
      sym_comment,
    ACTIONS(567), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [8342] = 5,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(243), 1,
      sym_comment,
    ACTIONS(569), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [8360] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(244), 1,
      sym_comment,
    STATE(340), 1,
      sym__rule_tag,
    ACTIONS(571), 2,
      sym_ONCE,
      sym_ALWAYS,
  [8380] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(573), 1,
      sym_BARRIER,
    ACTIONS(575), 1,
      sym_LINK,
    STATE(245), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8400] = 7,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      aux_sym_setname_token1,
    ACTIONS(577), 1,
      sym_set_op,
    STATE(246), 1,
      sym_comment,
    STATE(257), 1,
      aux_sym_inlineset_repeat1,
  [8422] = 7,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      aux_sym_setname_token1,
    STATE(247), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_ruleflag_repeat1,
  [8444] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      sym_OR,
    STATE(248), 1,
      sym_comment,
    STATE(259), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(579), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8464] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(583), 1,
      anon_sym_COLON,
    STATE(249), 1,
      sym_comment,
    ACTIONS(561), 3,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
  [8482] = 7,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_setname,
    STATE(69), 1,
      sym_inlineset_single,
    STATE(250), 1,
      sym_comment,
  [8504] = 6,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      aux_sym_setname_token1,
    ACTIONS(585), 1,
      sym_ruleflag_name,
    STATE(251), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [8524] = 7,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(588), 1,
      sym_semicolon,
    ACTIONS(590), 1,
      aux_sym_setname_token1,
    STATE(252), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_static_sets_repeat1,
    STATE(337), 1,
      sym_setname,
  [8546] = 6,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      aux_sym_setname_token1,
    ACTIONS(592), 1,
      sym_set_op,
    STATE(253), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
  [8566] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(254), 1,
      sym_comment,
    ACTIONS(595), 4,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_BARRIER,
      sym_LINK,
  [8582] = 5,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(255), 1,
      sym_comment,
    ACTIONS(597), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [8600] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_comment,
    ACTIONS(599), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [8618] = 7,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(510), 1,
      aux_sym_setname_token1,
    ACTIONS(577), 1,
      sym_set_op,
    STATE(253), 1,
      aux_sym_inlineset_repeat1,
    STATE(257), 1,
      sym_comment,
  [8640] = 6,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_COLON,
    STATE(258), 1,
      sym_comment,
    ACTIONS(563), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [8660] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(605), 1,
      sym_OR,
    ACTIONS(603), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(259), 2,
      sym_comment,
      aux_sym_contexttest_repeat2,
  [8678] = 7,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      aux_sym_setname_token1,
    STATE(260), 1,
      sym_comment,
    STATE(286), 1,
      sym_inlineset_single,
    STATE(300), 1,
      sym_setname,
  [8700] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(461), 1,
      sym_ruleflag_name,
    STATE(261), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(544), 2,
      sym_WITHCHILD,
      sym_NOCHILD,
  [8720] = 6,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(608), 1,
      sym_semicolon,
    ACTIONS(610), 1,
      aux_sym_setname_token1,
    STATE(337), 1,
      sym_setname,
    STATE(262), 2,
      sym_comment,
      aux_sym_static_sets_repeat1,
  [8740] = 7,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym_setname_token1,
    STATE(242), 1,
      sym_setname,
    STATE(263), 1,
      sym_comment,
    STATE(268), 1,
      sym_inlineset_single,
  [8762] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_comment,
    ACTIONS(615), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [8780] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(617), 1,
      sym_ruleflag_name,
    ACTIONS(548), 2,
      sym_WITHCHILD,
      sym_NOCHILD,
    STATE(265), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [8798] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(581), 1,
      sym_OR,
    STATE(248), 1,
      aux_sym_contexttest_repeat2,
    STATE(266), 1,
      sym_comment,
    ACTIONS(620), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8818] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_comment,
    ACTIONS(624), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [8836] = 5,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(268), 1,
      sym_comment,
    ACTIONS(501), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [8854] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(626), 1,
      sym_semicolon,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_parentheses_repeat1,
    STATE(331), 1,
      sym_compotag,
  [8876] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(270), 1,
      sym_comment,
    STATE(333), 1,
      sym__rule_tag,
    ACTIONS(630), 2,
      sym_ONCE,
      sym_ALWAYS,
  [8896] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(632), 1,
      sym_BARRIER,
    ACTIONS(634), 1,
      sym_LINK,
    STATE(271), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8916] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(215), 1,
      aux_sym_compotag_repeat1,
    STATE(272), 1,
      sym_comment,
    STATE(303), 1,
      sym_tag,
  [8938] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(636), 1,
      sym_BARRIER,
    ACTIONS(638), 1,
      sym_LINK,
    STATE(273), 1,
      sym_comment,
    ACTIONS(620), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8958] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(640), 1,
      sym_semicolon,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_compotag,
    STATE(274), 2,
      sym_comment,
      aux_sym_parentheses_repeat1,
  [8978] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(443), 1,
      sym_ntag,
    ACTIONS(445), 1,
      sym_qtag,
    STATE(190), 1,
      aux_sym_compotag_repeat1,
    STATE(275), 1,
      sym_comment,
    STATE(303), 1,
      sym_tag,
  [9000] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(435), 1,
      aux_sym_setname_t_token1,
    ACTIONS(437), 1,
      sym_ntag,
    STATE(76), 1,
      sym_contextpos,
    STATE(245), 1,
      sym_setname_t,
    STATE(276), 1,
      sym_comment,
  [9022] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(645), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(277), 1,
      sym_comment,
  [9041] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(278), 1,
      sym_comment,
  [9060] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(279), 1,
      sym_comment,
  [9079] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(651), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(280), 1,
      sym_comment,
  [9098] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(281), 1,
      sym_comment,
    ACTIONS(613), 3,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
  [9113] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(282), 1,
      sym_comment,
    STATE(405), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9130] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(283), 1,
      sym_comment,
    STATE(408), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9147] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(653), 1,
      sym_ntag,
    ACTIONS(655), 1,
      sym_qtag,
    STATE(80), 1,
      sym_filepath,
    STATE(284), 1,
      sym_comment,
  [9166] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(285), 1,
      sym_comment,
  [9185] = 5,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(286), 1,
      sym_comment,
    ACTIONS(501), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [9202] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(638), 1,
      sym_LINK,
    STATE(287), 1,
      sym_comment,
    ACTIONS(620), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9219] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      sym_comment,
    STATE(324), 1,
      aux_sym_contexttest_repeat1,
  [9238] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_comment,
    ACTIONS(615), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [9255] = 5,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(290), 1,
      sym_comment,
    ACTIONS(569), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [9272] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(653), 1,
      sym_ntag,
    ACTIONS(655), 1,
      sym_qtag,
    STATE(79), 1,
      sym_filepath,
    STATE(291), 1,
      sym_comment,
  [9291] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    STATE(164), 1,
      sym__child_specifier,
    STATE(292), 1,
      sym_comment,
  [9310] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    STATE(293), 1,
      sym_comment,
    ACTIONS(599), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [9327] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    STATE(294), 1,
      sym_comment,
    ACTIONS(665), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [9344] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(295), 1,
      sym_comment,
    STATE(399), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9361] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(296), 1,
      sym_comment,
    STATE(398), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9378] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    STATE(157), 1,
      sym__child_specifier,
    STATE(297), 1,
      sym_comment,
  [9397] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(457), 1,
      sym_WITHCHILD,
    ACTIONS(459), 1,
      sym_NOCHILD,
    STATE(158), 1,
      sym__child_specifier,
    STATE(298), 1,
      sym_comment,
  [9416] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    STATE(299), 1,
      sym_comment,
    ACTIONS(669), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [9433] = 5,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(300), 1,
      sym_comment,
    ACTIONS(567), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [9450] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(653), 1,
      sym_ntag,
    ACTIONS(655), 1,
      sym_qtag,
    STATE(81), 1,
      sym_filepath,
    STATE(301), 1,
      sym_comment,
  [9469] = 5,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(302), 1,
      sym_comment,
    ACTIONS(597), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [9486] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(673), 1,
      sym_ntag,
    STATE(303), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_RPAREN,
      sym_qtag,
  [9503] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(675), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(304), 1,
      sym_comment,
  [9522] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(305), 1,
      sym_comment,
  [9541] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(306), 1,
      sym_comment,
  [9560] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(307), 1,
      sym_comment,
    ACTIONS(681), 3,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_OR,
  [9575] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(308), 1,
      sym_comment,
  [9594] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(309), 1,
      sym_comment,
    STATE(363), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9611] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(685), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(310), 1,
      sym_comment,
  [9630] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(311), 1,
      sym_comment,
    STATE(369), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9647] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(312), 1,
      sym_comment,
    STATE(383), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9664] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(313), 1,
      sym_comment,
  [9683] = 6,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(590), 1,
      aux_sym_setname_token1,
    STATE(252), 1,
      aux_sym_static_sets_repeat1,
    STATE(314), 1,
      sym_comment,
    STATE(337), 1,
      sym_setname,
  [9702] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(691), 1,
      sym_LINK,
    STATE(315), 1,
      sym_comment,
    ACTIONS(689), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9719] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_contexttest_repeat1,
    STATE(316), 1,
      sym_comment,
  [9738] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(695), 1,
      sym_semicolon,
    STATE(134), 1,
      aux_sym__context,
    STATE(317), 1,
      sym_comment,
  [9757] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(318), 1,
      sym_comment,
    STATE(366), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9774] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(697), 1,
      sym_LINK,
    STATE(319), 1,
      sym_comment,
    ACTIONS(579), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9791] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      aux_sym_parentheses_repeat1,
    STATE(320), 1,
      sym_comment,
    STATE(331), 1,
      sym_compotag,
  [9810] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(321), 1,
      sym_comment,
    STATE(386), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9827] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(322), 1,
      sym_comment,
    STATE(381), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9844] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(323), 1,
      sym_comment,
    STATE(373), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9861] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    STATE(324), 2,
      sym_comment,
      aux_sym_contexttest_repeat1,
  [9878] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(325), 1,
      sym_comment,
    STATE(407), 1,
      sym__to_from,
    ACTIONS(483), 2,
      sym_TO,
      sym_FROM,
  [9895] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      aux_sym__context,
    STATE(326), 1,
      sym_comment,
  [9911] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(327), 1,
      sym_comment,
    ACTIONS(704), 2,
      sym_BEFORE,
      sym_AFTER,
  [9925] = 5,
    ACTIONS(357), 1,
      sym_semicolon,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(597), 1,
      aux_sym_setname_token1,
    STATE(328), 1,
      sym_comment,
  [9941] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(329), 1,
      sym_comment,
    ACTIONS(579), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9955] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(330), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9969] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(331), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym_semicolon,
      anon_sym_LPAREN,
  [9983] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      aux_sym__context,
    STATE(332), 1,
      sym_comment,
  [9999] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(333), 1,
      sym_comment,
    ACTIONS(708), 2,
      sym_ONCE,
      sym_ALWAYS,
  [10013] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(334), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym_BEFORE,
      sym_AFTER,
  [10027] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(335), 1,
      sym_comment,
    ACTIONS(491), 2,
      sym_BEFORE,
      sym_AFTER,
  [10041] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      aux_sym__context,
    STATE(336), 1,
      sym_comment,
  [10057] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(712), 1,
      sym_semicolon,
    ACTIONS(714), 1,
      aux_sym_setname_token1,
    STATE(337), 1,
      sym_comment,
  [10073] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      aux_sym__context,
    STATE(338), 1,
      sym_comment,
  [10089] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(339), 1,
      sym_comment,
    ACTIONS(620), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10103] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(340), 1,
      sym_comment,
    ACTIONS(630), 2,
      sym_ONCE,
      sym_ALWAYS,
  [10117] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      aux_sym__context,
    STATE(341), 1,
      sym_comment,
  [10133] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      aux_sym__context,
    STATE(342), 1,
      sym_comment,
  [10149] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(343), 1,
      sym_comment,
    ACTIONS(716), 2,
      sym_BEFORE,
      sym_AFTER,
  [10163] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      aux_sym__context,
    STATE(344), 1,
      sym_comment,
  [10179] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(345), 1,
      sym_comment,
    ACTIONS(718), 2,
      sym_RTL,
      sym_LTR,
  [10193] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      aux_sym__context,
    STATE(346), 1,
      sym_comment,
  [10209] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(347), 1,
      sym_comment,
    ACTIONS(720), 2,
      sym_BEFORE,
      sym_AFTER,
  [10223] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(348), 1,
      sym_comment,
    ACTIONS(495), 2,
      sym_BEFORE,
      sym_AFTER,
  [10237] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(349), 1,
      sym_comment,
    ACTIONS(689), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10251] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      aux_sym__context,
    STATE(350), 1,
      sym_comment,
  [10267] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(351), 1,
      sym_comment,
    ACTIONS(722), 2,
      sym_BEFORE,
      sym_AFTER,
  [10281] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(352), 1,
      sym_comment,
    ACTIONS(724), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10295] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(353), 1,
      sym_comment,
    ACTIONS(493), 2,
      sym_BEFORE,
      sym_AFTER,
  [10309] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      aux_sym__context,
    STATE(354), 1,
      sym_comment,
  [10325] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      aux_sym__context,
    STATE(355), 1,
      sym_comment,
  [10341] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      aux_sym__context,
    STATE(356), 1,
      sym_comment,
  [10357] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(357), 1,
      sym_comment,
    STATE(362), 1,
      sym_setname,
  [10373] = 5,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(379), 1,
      aux_sym_setname_token1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    STATE(358), 1,
      sym_comment,
    STATE(387), 1,
      sym_setname,
  [10389] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(359), 1,
      sym_comment,
    ACTIONS(726), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10403] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(360), 1,
      sym_comment,
    ACTIONS(528), 2,
      sym_semicolon,
      anon_sym_LPAREN,
  [10417] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_comment,
  [10430] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(728), 1,
      sym_eq,
    STATE(362), 1,
      sym_comment,
  [10443] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(730), 1,
      sym_semicolon,
    STATE(363), 1,
      sym_comment,
  [10456] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(732), 1,
      sym_ntag,
    STATE(364), 1,
      sym_comment,
  [10469] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(734), 1,
      sym_semicolon,
    STATE(365), 1,
      sym_comment,
  [10482] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(736), 1,
      sym_semicolon,
    STATE(366), 1,
      sym_comment,
  [10495] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym_comment,
  [10508] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_comment,
  [10521] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(742), 1,
      sym_semicolon,
    STATE(369), 1,
      sym_comment,
  [10534] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
    STATE(370), 1,
      sym_comment,
  [10547] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(746), 1,
      sym_eq,
    STATE(371), 1,
      sym_comment,
  [10560] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(748), 1,
      sym_eq,
    STATE(372), 1,
      sym_comment,
  [10573] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(750), 1,
      sym_semicolon,
    STATE(373), 1,
      sym_comment,
  [10586] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(752), 1,
      sym_eq,
    STATE(374), 1,
      sym_comment,
  [10599] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(754), 1,
      sym_eq,
    STATE(375), 1,
      sym_comment,
  [10612] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(756), 1,
      sym_semicolon,
    STATE(376), 1,
      sym_comment,
  [10625] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(758), 1,
      sym_eq,
    STATE(377), 1,
      sym_comment,
  [10638] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(760), 1,
      sym_WITH,
    STATE(378), 1,
      sym_comment,
  [10651] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(762), 1,
      sym_semicolon,
    STATE(379), 1,
      sym_comment,
  [10664] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(764), 1,
      sym_prefix,
    STATE(380), 1,
      sym_comment,
  [10677] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(766), 1,
      sym_semicolon,
    STATE(381), 1,
      sym_comment,
  [10690] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      sym_comment,
  [10703] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(770), 1,
      sym_semicolon,
    STATE(383), 1,
      sym_comment,
  [10716] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    STATE(384), 1,
      sym_comment,
  [10729] = 4,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
    ACTIONS(772), 1,
      aux_sym_comment_token2,
    STATE(385), 1,
      sym_comment,
  [10742] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(774), 1,
      sym_semicolon,
    STATE(386), 1,
      sym_comment,
  [10755] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(776), 1,
      sym_eq,
    STATE(387), 1,
      sym_comment,
  [10768] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(534), 1,
      sym_WITH,
    STATE(388), 1,
      sym_comment,
  [10781] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(778), 1,
      sym_rawpath,
    STATE(389), 1,
      sym_comment,
  [10794] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_comment,
  [10807] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(782), 1,
      sym_ntag,
    STATE(391), 1,
      sym_comment,
  [10820] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(784), 1,
      sym_semicolon,
    STATE(392), 1,
      sym_comment,
  [10833] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(786), 1,
      sym_eq,
    STATE(393), 1,
      sym_comment,
  [10846] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(788), 1,
      sym_semicolon,
    STATE(394), 1,
      sym_comment,
  [10859] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(790), 1,
      sym_ntag,
    STATE(395), 1,
      sym_comment,
  [10872] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(555), 1,
      sym_WITH,
    STATE(396), 1,
      sym_comment,
  [10885] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(397), 1,
      sym_comment,
  [10898] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(794), 1,
      sym_semicolon,
    STATE(398), 1,
      sym_comment,
  [10911] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(796), 1,
      sym_semicolon,
    STATE(399), 1,
      sym_comment,
  [10924] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(798), 1,
      sym_semicolon,
    STATE(400), 1,
      sym_comment,
  [10937] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(800), 1,
      sym_semicolon,
    STATE(401), 1,
      sym_comment,
  [10950] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(802), 1,
      sym_semicolon,
    STATE(402), 1,
      sym_comment,
  [10963] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(804), 1,
      sym_semicolon,
    STATE(403), 1,
      sym_comment,
  [10976] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(806), 1,
      sym_semicolon,
    STATE(404), 1,
      sym_comment,
  [10989] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(808), 1,
      sym_semicolon,
    STATE(405), 1,
      sym_comment,
  [11002] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(810), 1,
      sym_semicolon,
    STATE(406), 1,
      sym_comment,
  [11015] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(812), 1,
      sym_semicolon,
    STATE(407), 1,
      sym_comment,
  [11028] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(814), 1,
      sym_semicolon,
    STATE(408), 1,
      sym_comment,
  [11041] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(816), 1,
      sym_ntag,
    STATE(409), 1,
      sym_comment,
  [11054] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_comment,
  [11067] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(820), 1,
      sym_ntag,
    STATE(411), 1,
      sym_comment,
  [11080] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(518), 1,
      sym_WITH,
    STATE(412), 1,
      sym_comment,
  [11093] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(822), 1,
      sym_ntag,
    STATE(413), 1,
      sym_comment,
  [11106] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      sym_comment,
  [11119] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_END,
    ACTIONS(826), 1,
      sym_ntag,
    STATE(415), 1,
      sym_comment,
  [11132] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(828), 1,
      sym_eq,
    STATE(416), 1,
      sym_comment,
  [11145] = 1,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
  [11149] = 1,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 224,
  [SMALL_STATE(5)] = 269,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 359,
  [SMALL_STATE(8)] = 404,
  [SMALL_STATE(9)] = 449,
  [SMALL_STATE(10)] = 494,
  [SMALL_STATE(11)] = 539,
  [SMALL_STATE(12)] = 584,
  [SMALL_STATE(13)] = 629,
  [SMALL_STATE(14)] = 674,
  [SMALL_STATE(15)] = 719,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 809,
  [SMALL_STATE(18)] = 854,
  [SMALL_STATE(19)] = 899,
  [SMALL_STATE(20)] = 944,
  [SMALL_STATE(21)] = 989,
  [SMALL_STATE(22)] = 1034,
  [SMALL_STATE(23)] = 1079,
  [SMALL_STATE(24)] = 1124,
  [SMALL_STATE(25)] = 1169,
  [SMALL_STATE(26)] = 1214,
  [SMALL_STATE(27)] = 1259,
  [SMALL_STATE(28)] = 1304,
  [SMALL_STATE(29)] = 1349,
  [SMALL_STATE(30)] = 1394,
  [SMALL_STATE(31)] = 1439,
  [SMALL_STATE(32)] = 1484,
  [SMALL_STATE(33)] = 1529,
  [SMALL_STATE(34)] = 1574,
  [SMALL_STATE(35)] = 1619,
  [SMALL_STATE(36)] = 1664,
  [SMALL_STATE(37)] = 1709,
  [SMALL_STATE(38)] = 1754,
  [SMALL_STATE(39)] = 1799,
  [SMALL_STATE(40)] = 1844,
  [SMALL_STATE(41)] = 1889,
  [SMALL_STATE(42)] = 1934,
  [SMALL_STATE(43)] = 1979,
  [SMALL_STATE(44)] = 2024,
  [SMALL_STATE(45)] = 2069,
  [SMALL_STATE(46)] = 2114,
  [SMALL_STATE(47)] = 2159,
  [SMALL_STATE(48)] = 2204,
  [SMALL_STATE(49)] = 2249,
  [SMALL_STATE(50)] = 2294,
  [SMALL_STATE(51)] = 2339,
  [SMALL_STATE(52)] = 2384,
  [SMALL_STATE(53)] = 2429,
  [SMALL_STATE(54)] = 2474,
  [SMALL_STATE(55)] = 2519,
  [SMALL_STATE(56)] = 2564,
  [SMALL_STATE(57)] = 2609,
  [SMALL_STATE(58)] = 2654,
  [SMALL_STATE(59)] = 2699,
  [SMALL_STATE(60)] = 2744,
  [SMALL_STATE(61)] = 2789,
  [SMALL_STATE(62)] = 2834,
  [SMALL_STATE(63)] = 2879,
  [SMALL_STATE(64)] = 2908,
  [SMALL_STATE(65)] = 2935,
  [SMALL_STATE(66)] = 2966,
  [SMALL_STATE(67)] = 2997,
  [SMALL_STATE(68)] = 3023,
  [SMALL_STATE(69)] = 3049,
  [SMALL_STATE(70)] = 3075,
  [SMALL_STATE(71)] = 3124,
  [SMALL_STATE(72)] = 3173,
  [SMALL_STATE(73)] = 3219,
  [SMALL_STATE(74)] = 3265,
  [SMALL_STATE(75)] = 3311,
  [SMALL_STATE(76)] = 3357,
  [SMALL_STATE(77)] = 3396,
  [SMALL_STATE(78)] = 3439,
  [SMALL_STATE(79)] = 3482,
  [SMALL_STATE(80)] = 3525,
  [SMALL_STATE(81)] = 3568,
  [SMALL_STATE(82)] = 3611,
  [SMALL_STATE(83)] = 3650,
  [SMALL_STATE(84)] = 3690,
  [SMALL_STATE(85)] = 3730,
  [SMALL_STATE(86)] = 3770,
  [SMALL_STATE(87)] = 3810,
  [SMALL_STATE(88)] = 3850,
  [SMALL_STATE(89)] = 3890,
  [SMALL_STATE(90)] = 3930,
  [SMALL_STATE(91)] = 3970,
  [SMALL_STATE(92)] = 4010,
  [SMALL_STATE(93)] = 4050,
  [SMALL_STATE(94)] = 4090,
  [SMALL_STATE(95)] = 4130,
  [SMALL_STATE(96)] = 4170,
  [SMALL_STATE(97)] = 4210,
  [SMALL_STATE(98)] = 4250,
  [SMALL_STATE(99)] = 4284,
  [SMALL_STATE(100)] = 4318,
  [SMALL_STATE(101)] = 4352,
  [SMALL_STATE(102)] = 4382,
  [SMALL_STATE(103)] = 4416,
  [SMALL_STATE(104)] = 4450,
  [SMALL_STATE(105)] = 4484,
  [SMALL_STATE(106)] = 4518,
  [SMALL_STATE(107)] = 4542,
  [SMALL_STATE(108)] = 4576,
  [SMALL_STATE(109)] = 4610,
  [SMALL_STATE(110)] = 4644,
  [SMALL_STATE(111)] = 4664,
  [SMALL_STATE(112)] = 4698,
  [SMALL_STATE(113)] = 4732,
  [SMALL_STATE(114)] = 4766,
  [SMALL_STATE(115)] = 4800,
  [SMALL_STATE(116)] = 4834,
  [SMALL_STATE(117)] = 4854,
  [SMALL_STATE(118)] = 4888,
  [SMALL_STATE(119)] = 4922,
  [SMALL_STATE(120)] = 4956,
  [SMALL_STATE(121)] = 4990,
  [SMALL_STATE(122)] = 5024,
  [SMALL_STATE(123)] = 5058,
  [SMALL_STATE(124)] = 5092,
  [SMALL_STATE(125)] = 5126,
  [SMALL_STATE(126)] = 5160,
  [SMALL_STATE(127)] = 5194,
  [SMALL_STATE(128)] = 5228,
  [SMALL_STATE(129)] = 5262,
  [SMALL_STATE(130)] = 5296,
  [SMALL_STATE(131)] = 5324,
  [SMALL_STATE(132)] = 5358,
  [SMALL_STATE(133)] = 5392,
  [SMALL_STATE(134)] = 5426,
  [SMALL_STATE(135)] = 5448,
  [SMALL_STATE(136)] = 5482,
  [SMALL_STATE(137)] = 5516,
  [SMALL_STATE(138)] = 5550,
  [SMALL_STATE(139)] = 5584,
  [SMALL_STATE(140)] = 5618,
  [SMALL_STATE(141)] = 5642,
  [SMALL_STATE(142)] = 5676,
  [SMALL_STATE(143)] = 5710,
  [SMALL_STATE(144)] = 5744,
  [SMALL_STATE(145)] = 5773,
  [SMALL_STATE(146)] = 5804,
  [SMALL_STATE(147)] = 5835,
  [SMALL_STATE(148)] = 5864,
  [SMALL_STATE(149)] = 5893,
  [SMALL_STATE(150)] = 5922,
  [SMALL_STATE(151)] = 5953,
  [SMALL_STATE(152)] = 5972,
  [SMALL_STATE(153)] = 6003,
  [SMALL_STATE(154)] = 6032,
  [SMALL_STATE(155)] = 6063,
  [SMALL_STATE(156)] = 6094,
  [SMALL_STATE(157)] = 6123,
  [SMALL_STATE(158)] = 6154,
  [SMALL_STATE(159)] = 6185,
  [SMALL_STATE(160)] = 6214,
  [SMALL_STATE(161)] = 6245,
  [SMALL_STATE(162)] = 6274,
  [SMALL_STATE(163)] = 6305,
  [SMALL_STATE(164)] = 6336,
  [SMALL_STATE(165)] = 6367,
  [SMALL_STATE(166)] = 6398,
  [SMALL_STATE(167)] = 6427,
  [SMALL_STATE(168)] = 6448,
  [SMALL_STATE(169)] = 6477,
  [SMALL_STATE(170)] = 6508,
  [SMALL_STATE(171)] = 6539,
  [SMALL_STATE(172)] = 6568,
  [SMALL_STATE(173)] = 6597,
  [SMALL_STATE(174)] = 6628,
  [SMALL_STATE(175)] = 6659,
  [SMALL_STATE(176)] = 6690,
  [SMALL_STATE(177)] = 6719,
  [SMALL_STATE(178)] = 6748,
  [SMALL_STATE(179)] = 6777,
  [SMALL_STATE(180)] = 6806,
  [SMALL_STATE(181)] = 6835,
  [SMALL_STATE(182)] = 6861,
  [SMALL_STATE(183)] = 6889,
  [SMALL_STATE(184)] = 6917,
  [SMALL_STATE(185)] = 6943,
  [SMALL_STATE(186)] = 6969,
  [SMALL_STATE(187)] = 6995,
  [SMALL_STATE(188)] = 7020,
  [SMALL_STATE(189)] = 7045,
  [SMALL_STATE(190)] = 7070,
  [SMALL_STATE(191)] = 7095,
  [SMALL_STATE(192)] = 7120,
  [SMALL_STATE(193)] = 7145,
  [SMALL_STATE(194)] = 7170,
  [SMALL_STATE(195)] = 7191,
  [SMALL_STATE(196)] = 7216,
  [SMALL_STATE(197)] = 7241,
  [SMALL_STATE(198)] = 7266,
  [SMALL_STATE(199)] = 7289,
  [SMALL_STATE(200)] = 7308,
  [SMALL_STATE(201)] = 7333,
  [SMALL_STATE(202)] = 7358,
  [SMALL_STATE(203)] = 7375,
  [SMALL_STATE(204)] = 7400,
  [SMALL_STATE(205)] = 7425,
  [SMALL_STATE(206)] = 7450,
  [SMALL_STATE(207)] = 7475,
  [SMALL_STATE(208)] = 7498,
  [SMALL_STATE(209)] = 7523,
  [SMALL_STATE(210)] = 7548,
  [SMALL_STATE(211)] = 7567,
  [SMALL_STATE(212)] = 7592,
  [SMALL_STATE(213)] = 7617,
  [SMALL_STATE(214)] = 7636,
  [SMALL_STATE(215)] = 7661,
  [SMALL_STATE(216)] = 7686,
  [SMALL_STATE(217)] = 7711,
  [SMALL_STATE(218)] = 7736,
  [SMALL_STATE(219)] = 7761,
  [SMALL_STATE(220)] = 7786,
  [SMALL_STATE(221)] = 7811,
  [SMALL_STATE(222)] = 7836,
  [SMALL_STATE(223)] = 7861,
  [SMALL_STATE(224)] = 7886,
  [SMALL_STATE(225)] = 7911,
  [SMALL_STATE(226)] = 7936,
  [SMALL_STATE(227)] = 7959,
  [SMALL_STATE(228)] = 7982,
  [SMALL_STATE(229)] = 8003,
  [SMALL_STATE(230)] = 8028,
  [SMALL_STATE(231)] = 8053,
  [SMALL_STATE(232)] = 8078,
  [SMALL_STATE(233)] = 8103,
  [SMALL_STATE(234)] = 8128,
  [SMALL_STATE(235)] = 8153,
  [SMALL_STATE(236)] = 8178,
  [SMALL_STATE(237)] = 8203,
  [SMALL_STATE(238)] = 8228,
  [SMALL_STATE(239)] = 8253,
  [SMALL_STATE(240)] = 8278,
  [SMALL_STATE(241)] = 8303,
  [SMALL_STATE(242)] = 8324,
  [SMALL_STATE(243)] = 8342,
  [SMALL_STATE(244)] = 8360,
  [SMALL_STATE(245)] = 8380,
  [SMALL_STATE(246)] = 8400,
  [SMALL_STATE(247)] = 8422,
  [SMALL_STATE(248)] = 8444,
  [SMALL_STATE(249)] = 8464,
  [SMALL_STATE(250)] = 8482,
  [SMALL_STATE(251)] = 8504,
  [SMALL_STATE(252)] = 8524,
  [SMALL_STATE(253)] = 8546,
  [SMALL_STATE(254)] = 8566,
  [SMALL_STATE(255)] = 8582,
  [SMALL_STATE(256)] = 8600,
  [SMALL_STATE(257)] = 8618,
  [SMALL_STATE(258)] = 8640,
  [SMALL_STATE(259)] = 8660,
  [SMALL_STATE(260)] = 8678,
  [SMALL_STATE(261)] = 8700,
  [SMALL_STATE(262)] = 8720,
  [SMALL_STATE(263)] = 8740,
  [SMALL_STATE(264)] = 8762,
  [SMALL_STATE(265)] = 8780,
  [SMALL_STATE(266)] = 8798,
  [SMALL_STATE(267)] = 8818,
  [SMALL_STATE(268)] = 8836,
  [SMALL_STATE(269)] = 8854,
  [SMALL_STATE(270)] = 8876,
  [SMALL_STATE(271)] = 8896,
  [SMALL_STATE(272)] = 8916,
  [SMALL_STATE(273)] = 8938,
  [SMALL_STATE(274)] = 8958,
  [SMALL_STATE(275)] = 8978,
  [SMALL_STATE(276)] = 9000,
  [SMALL_STATE(277)] = 9022,
  [SMALL_STATE(278)] = 9041,
  [SMALL_STATE(279)] = 9060,
  [SMALL_STATE(280)] = 9079,
  [SMALL_STATE(281)] = 9098,
  [SMALL_STATE(282)] = 9113,
  [SMALL_STATE(283)] = 9130,
  [SMALL_STATE(284)] = 9147,
  [SMALL_STATE(285)] = 9166,
  [SMALL_STATE(286)] = 9185,
  [SMALL_STATE(287)] = 9202,
  [SMALL_STATE(288)] = 9219,
  [SMALL_STATE(289)] = 9238,
  [SMALL_STATE(290)] = 9255,
  [SMALL_STATE(291)] = 9272,
  [SMALL_STATE(292)] = 9291,
  [SMALL_STATE(293)] = 9310,
  [SMALL_STATE(294)] = 9327,
  [SMALL_STATE(295)] = 9344,
  [SMALL_STATE(296)] = 9361,
  [SMALL_STATE(297)] = 9378,
  [SMALL_STATE(298)] = 9397,
  [SMALL_STATE(299)] = 9416,
  [SMALL_STATE(300)] = 9433,
  [SMALL_STATE(301)] = 9450,
  [SMALL_STATE(302)] = 9469,
  [SMALL_STATE(303)] = 9486,
  [SMALL_STATE(304)] = 9503,
  [SMALL_STATE(305)] = 9522,
  [SMALL_STATE(306)] = 9541,
  [SMALL_STATE(307)] = 9560,
  [SMALL_STATE(308)] = 9575,
  [SMALL_STATE(309)] = 9594,
  [SMALL_STATE(310)] = 9611,
  [SMALL_STATE(311)] = 9630,
  [SMALL_STATE(312)] = 9647,
  [SMALL_STATE(313)] = 9664,
  [SMALL_STATE(314)] = 9683,
  [SMALL_STATE(315)] = 9702,
  [SMALL_STATE(316)] = 9719,
  [SMALL_STATE(317)] = 9738,
  [SMALL_STATE(318)] = 9757,
  [SMALL_STATE(319)] = 9774,
  [SMALL_STATE(320)] = 9791,
  [SMALL_STATE(321)] = 9810,
  [SMALL_STATE(322)] = 9827,
  [SMALL_STATE(323)] = 9844,
  [SMALL_STATE(324)] = 9861,
  [SMALL_STATE(325)] = 9878,
  [SMALL_STATE(326)] = 9895,
  [SMALL_STATE(327)] = 9911,
  [SMALL_STATE(328)] = 9925,
  [SMALL_STATE(329)] = 9941,
  [SMALL_STATE(330)] = 9955,
  [SMALL_STATE(331)] = 9969,
  [SMALL_STATE(332)] = 9983,
  [SMALL_STATE(333)] = 9999,
  [SMALL_STATE(334)] = 10013,
  [SMALL_STATE(335)] = 10027,
  [SMALL_STATE(336)] = 10041,
  [SMALL_STATE(337)] = 10057,
  [SMALL_STATE(338)] = 10073,
  [SMALL_STATE(339)] = 10089,
  [SMALL_STATE(340)] = 10103,
  [SMALL_STATE(341)] = 10117,
  [SMALL_STATE(342)] = 10133,
  [SMALL_STATE(343)] = 10149,
  [SMALL_STATE(344)] = 10163,
  [SMALL_STATE(345)] = 10179,
  [SMALL_STATE(346)] = 10193,
  [SMALL_STATE(347)] = 10209,
  [SMALL_STATE(348)] = 10223,
  [SMALL_STATE(349)] = 10237,
  [SMALL_STATE(350)] = 10251,
  [SMALL_STATE(351)] = 10267,
  [SMALL_STATE(352)] = 10281,
  [SMALL_STATE(353)] = 10295,
  [SMALL_STATE(354)] = 10309,
  [SMALL_STATE(355)] = 10325,
  [SMALL_STATE(356)] = 10341,
  [SMALL_STATE(357)] = 10357,
  [SMALL_STATE(358)] = 10373,
  [SMALL_STATE(359)] = 10389,
  [SMALL_STATE(360)] = 10403,
  [SMALL_STATE(361)] = 10417,
  [SMALL_STATE(362)] = 10430,
  [SMALL_STATE(363)] = 10443,
  [SMALL_STATE(364)] = 10456,
  [SMALL_STATE(365)] = 10469,
  [SMALL_STATE(366)] = 10482,
  [SMALL_STATE(367)] = 10495,
  [SMALL_STATE(368)] = 10508,
  [SMALL_STATE(369)] = 10521,
  [SMALL_STATE(370)] = 10534,
  [SMALL_STATE(371)] = 10547,
  [SMALL_STATE(372)] = 10560,
  [SMALL_STATE(373)] = 10573,
  [SMALL_STATE(374)] = 10586,
  [SMALL_STATE(375)] = 10599,
  [SMALL_STATE(376)] = 10612,
  [SMALL_STATE(377)] = 10625,
  [SMALL_STATE(378)] = 10638,
  [SMALL_STATE(379)] = 10651,
  [SMALL_STATE(380)] = 10664,
  [SMALL_STATE(381)] = 10677,
  [SMALL_STATE(382)] = 10690,
  [SMALL_STATE(383)] = 10703,
  [SMALL_STATE(384)] = 10716,
  [SMALL_STATE(385)] = 10729,
  [SMALL_STATE(386)] = 10742,
  [SMALL_STATE(387)] = 10755,
  [SMALL_STATE(388)] = 10768,
  [SMALL_STATE(389)] = 10781,
  [SMALL_STATE(390)] = 10794,
  [SMALL_STATE(391)] = 10807,
  [SMALL_STATE(392)] = 10820,
  [SMALL_STATE(393)] = 10833,
  [SMALL_STATE(394)] = 10846,
  [SMALL_STATE(395)] = 10859,
  [SMALL_STATE(396)] = 10872,
  [SMALL_STATE(397)] = 10885,
  [SMALL_STATE(398)] = 10898,
  [SMALL_STATE(399)] = 10911,
  [SMALL_STATE(400)] = 10924,
  [SMALL_STATE(401)] = 10937,
  [SMALL_STATE(402)] = 10950,
  [SMALL_STATE(403)] = 10963,
  [SMALL_STATE(404)] = 10976,
  [SMALL_STATE(405)] = 10989,
  [SMALL_STATE(406)] = 11002,
  [SMALL_STATE(407)] = 11015,
  [SMALL_STATE(408)] = 11028,
  [SMALL_STATE(409)] = 11041,
  [SMALL_STATE(410)] = 11054,
  [SMALL_STATE(411)] = 11067,
  [SMALL_STATE(412)] = 11080,
  [SMALL_STATE(413)] = 11093,
  [SMALL_STATE(414)] = 11106,
  [SMALL_STATE(415)] = 11119,
  [SMALL_STATE(416)] = 11132,
  [SMALL_STATE(417)] = 11145,
  [SMALL_STATE(418)] = 11149,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(416),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(375),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(371),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(389),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(364),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 10),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 10),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 10),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 9),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 9),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 9),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 9),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subreadings, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subreadings, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_prefix, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_prefix, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 8),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_sets, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_sets, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_special_list, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_special_list, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 8),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 8),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 8),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 8),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 7),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 7),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 7),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 7),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 7),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 6),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 11),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 11),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 6),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 6),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(250),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglist, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_target, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_target, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(275),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(199),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(199),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context, 2), SHIFT_REPEAT(126),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contextpos, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contextpos, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(263),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_tag, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compotag, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compotag, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(199),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(199),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleflag, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruleflag, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(241),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(258),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(260),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname_t, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setname, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_tag, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2), SHIFT_REPEAT(397),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 2), SHIFT_REPEAT(328),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(249),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2), SHIFT_REPEAT(272),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__to_from, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2), SHIFT_REPEAT(189),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 7),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 6),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [744] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_list_name, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
