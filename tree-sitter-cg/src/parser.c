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
#define STATE_COUNT 451
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
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
  sym_subreading = 60,
  aux_sym_setname_token1 = 61,
  aux_sym_setname_t_token1 = 62,
  sym_ntag = 63,
  sym_qtag = 64,
  aux_sym_comment_token1 = 65,
  aux_sym_comment_token2 = 66,
  sym_source_file = 67,
  sym_special_list_name = 68,
  sym_set_special_list = 69,
  sym_static_sets = 70,
  sym_mapping_prefix = 71,
  sym_subreadings = 72,
  sym_parentheses = 73,
  sym_list = 74,
  sym_set = 75,
  sym_include = 76,
  sym_section_header = 77,
  aux_sym__context = 78,
  sym__if_context = 79,
  sym__rule_target = 80,
  sym__shared_rule_end = 81,
  sym__rule_tag = 82,
  sym_rule = 83,
  sym_rule_substitute_etc = 84,
  sym_rule_map_etc = 85,
  sym__to_from = 86,
  sym_rule_parentchild = 87,
  sym__child_specifier = 88,
  sym_rule_move = 89,
  sym_rule_switch = 90,
  sym_rule_relation = 91,
  sym_rule_relations = 92,
  sym_rule_addcohort = 93,
  sym_rule_external = 94,
  sym_template = 95,
  sym_contexttest = 96,
  sym_inlineset = 97,
  sym_inlineset_single = 98,
  sym_taglist = 99,
  sym_compotag = 100,
  sym_filepath = 101,
  sym_tag = 102,
  sym_contextpos = 103,
  sym_ruleflag = 104,
  sym_setname = 105,
  sym_setname_t = 106,
  sym_comment = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_static_sets_repeat1 = 109,
  aux_sym_parentheses_repeat1 = 110,
  aux_sym_contexttest_repeat1 = 111,
  aux_sym_contexttest_repeat2 = 112,
  aux_sym_inlineset_repeat1 = 113,
  aux_sym_taglist_repeat1 = 114,
  aux_sym_compotag_repeat1 = 115,
  aux_sym_ruleflag_repeat1 = 116,
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
  [sym_subreading] = "subreading",
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
  [sym_subreading] = sym_subreading,
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
  [sym_subreading] = {
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
      if (eof) ADVANCE(450);
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == ',') ADVANCE(506);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(457);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == 'T') ADVANCE(514);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(517);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(519);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(532);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(516);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(522);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(518);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(524);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(528);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(508);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == ';') ADVANCE(457);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(675);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(689);
      if (lookahead == '\\') ADVANCE(448);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == ',') ADVANCE(506);
      if (lookahead == ';') ADVANCE(457);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(338);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(508);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == 'T') ADVANCE(677);
      if (lookahead == '[') ADVANCE(505);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == 'T') ADVANCE(677);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(433);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(512);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == ';') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(569);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(575);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ':') ADVANCE(485);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ';') ADVANCE(457);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(672);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(391);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(388);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(392);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(393);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 36:
      if (lookahead == '\\') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(674);
      END_STATE();
    case 39:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(359);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(427);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(540);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 178:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 179:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 180:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(480);
      END_STATE();
    case 181:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      END_STATE();
    case 182:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(404);
      END_STATE();
    case 183:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 184:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 185:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 186:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 187:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 188:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(324);
      END_STATE();
    case 189:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 190:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 191:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 192:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 193:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 194:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(493);
      END_STATE();
    case 196:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(545);
      END_STATE();
    case 197:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(492);
      END_STATE();
    case 198:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 199:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(170);
      END_STATE();
    case 200:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 201:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 202:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 203:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 204:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 236:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(501);
      END_STATE();
    case 237:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(272);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(442);
      END_STATE();
    case 327:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 328:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(542);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 329:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 330:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 331:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      END_STATE();
    case 332:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      END_STATE();
    case 377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      END_STATE();
    case 378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      END_STATE();
    case 379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(476);
      END_STATE();
    case 382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(471);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(547);
      END_STATE();
    case 384:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      END_STATE();
    case 385:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 386:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 387:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 388:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 389:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 390:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 391:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 392:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 393:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 407:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 408:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 410:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 412:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 413:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 414:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 415:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 416:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 418:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 419:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 420:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 422:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 423:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 424:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 425:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 426:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 427:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 432:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 433:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 434:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 435:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 436:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 437:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 438:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 439:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 440:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(462);
      END_STATE();
    case 441:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(547);
      END_STATE();
    case 442:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(540);
      END_STATE();
    case 443:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      END_STATE();
    case 444:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 445:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 446:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 447:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 448:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 449:
      if (eof) ADVANCE(450);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(692);
      if (lookahead == '(') ADVANCE(478);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == ',') ADVANCE(506);
      if (lookahead == ':') ADVANCE(484);
      if (lookahead == ';') ADVANCE(457);
      if (lookahead == '=') ADVANCE(456);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(338);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(433);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(449)
      END_STATE();
    case 450:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_END);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_END);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 453:
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
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(512);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_special_list_name_token1);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_special_list_name_token2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_special_list_name_token3);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_STATIC_SETS);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_MAPPING_PREFIX);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_SUBREADINGS);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_RTL);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_LTR);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_PARENTHESES);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_LIST);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_SET);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_INCLUDE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_section_header_token2);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_section_header_token3);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_section_header_token4);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_section_header_token5);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_section_header_token6);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_section_header_token7);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_section_header_token8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_IF);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_TARGET);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_TARGET);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_TO);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_FROM);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_WITHCHILD);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_NOCHILD);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_BEFORE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_AFTER);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_WITH);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ONCE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ALWAYS);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_TEMPLATE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_context_modifier);
      END_STATE();
    case 498:
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
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_BARRIER);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_BARRIER);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_LINK);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_LINK);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_OR);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 505:
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
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_set_op);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_set_op);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(512);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_prefix);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(402);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(481);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ruletype);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ruletype_substitute_etc);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ruletype_parentchild);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ruletype_relation);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ruletype_relations);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ruletype_addcohort);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ruletype_move);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ruletype_switch);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ruletype_external);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ruleflag_name);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ruleflag_name);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ruleflag_name);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_subreading);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_subreading);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(610);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(620);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(589);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
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
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == '#') ADVANCE(674);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '#') ADVANCE(674);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(673);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(681);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 688:
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
          lookahead != ';') ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_qtag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(696);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(556);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead == '#') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(696);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(696);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 449},
  [2] = {.lex_state = 449},
  [3] = {.lex_state = 449},
  [4] = {.lex_state = 449},
  [5] = {.lex_state = 449},
  [6] = {.lex_state = 449},
  [7] = {.lex_state = 449},
  [8] = {.lex_state = 449},
  [9] = {.lex_state = 449},
  [10] = {.lex_state = 449},
  [11] = {.lex_state = 449},
  [12] = {.lex_state = 449},
  [13] = {.lex_state = 449},
  [14] = {.lex_state = 449},
  [15] = {.lex_state = 449},
  [16] = {.lex_state = 449},
  [17] = {.lex_state = 449},
  [18] = {.lex_state = 449},
  [19] = {.lex_state = 449},
  [20] = {.lex_state = 449},
  [21] = {.lex_state = 449},
  [22] = {.lex_state = 449},
  [23] = {.lex_state = 449},
  [24] = {.lex_state = 449},
  [25] = {.lex_state = 449},
  [26] = {.lex_state = 449},
  [27] = {.lex_state = 449},
  [28] = {.lex_state = 449},
  [29] = {.lex_state = 449},
  [30] = {.lex_state = 449},
  [31] = {.lex_state = 449},
  [32] = {.lex_state = 449},
  [33] = {.lex_state = 449},
  [34] = {.lex_state = 449},
  [35] = {.lex_state = 449},
  [36] = {.lex_state = 449},
  [37] = {.lex_state = 449},
  [38] = {.lex_state = 449},
  [39] = {.lex_state = 449},
  [40] = {.lex_state = 449},
  [41] = {.lex_state = 449},
  [42] = {.lex_state = 449},
  [43] = {.lex_state = 449},
  [44] = {.lex_state = 449},
  [45] = {.lex_state = 449},
  [46] = {.lex_state = 449},
  [47] = {.lex_state = 449},
  [48] = {.lex_state = 449},
  [49] = {.lex_state = 449},
  [50] = {.lex_state = 449},
  [51] = {.lex_state = 449},
  [52] = {.lex_state = 449},
  [53] = {.lex_state = 449},
  [54] = {.lex_state = 449},
  [55] = {.lex_state = 449},
  [56] = {.lex_state = 449},
  [57] = {.lex_state = 449},
  [58] = {.lex_state = 449},
  [59] = {.lex_state = 449},
  [60] = {.lex_state = 449},
  [61] = {.lex_state = 449},
  [62] = {.lex_state = 449},
  [63] = {.lex_state = 449},
  [64] = {.lex_state = 449},
  [65] = {.lex_state = 449},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 26},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 26},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 26},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 26},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 26},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 26},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 26},
  [170] = {.lex_state = 26},
  [171] = {.lex_state = 26},
  [172] = {.lex_state = 26},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 26},
  [177] = {.lex_state = 26},
  [178] = {.lex_state = 26},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 26},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 26},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 26},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 26},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 25},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 17},
  [206] = {.lex_state = 17},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 22},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 22},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 22},
  [220] = {.lex_state = 449},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 449},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 449},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 449},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 449},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 17},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 16},
  [276] = {.lex_state = 22},
  [277] = {.lex_state = 20},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 20},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 22},
  [283] = {.lex_state = 449},
  [284] = {.lex_state = 22},
  [285] = {.lex_state = 23},
  [286] = {.lex_state = 19},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 449},
  [292] = {.lex_state = 449},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 449},
  [295] = {.lex_state = 449},
  [296] = {.lex_state = 20},
  [297] = {.lex_state = 449},
  [298] = {.lex_state = 449},
  [299] = {.lex_state = 449},
  [300] = {.lex_state = 449},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 449},
  [303] = {.lex_state = 17},
  [304] = {.lex_state = 449},
  [305] = {.lex_state = 449},
  [306] = {.lex_state = 449},
  [307] = {.lex_state = 449},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 449},
  [310] = {.lex_state = 449},
  [311] = {.lex_state = 6},
  [312] = {.lex_state = 449},
  [313] = {.lex_state = 449},
  [314] = {.lex_state = 449},
  [315] = {.lex_state = 21},
  [316] = {.lex_state = 449},
  [317] = {.lex_state = 21},
  [318] = {.lex_state = 449},
  [319] = {.lex_state = 449},
  [320] = {.lex_state = 449},
  [321] = {.lex_state = 449},
  [322] = {.lex_state = 449},
  [323] = {.lex_state = 449},
  [324] = {.lex_state = 449},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 23},
  [327] = {.lex_state = 449},
  [328] = {.lex_state = 23},
  [329] = {.lex_state = 449},
  [330] = {.lex_state = 26},
  [331] = {.lex_state = 26},
  [332] = {.lex_state = 449},
  [333] = {.lex_state = 23},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 449},
  [336] = {.lex_state = 449},
  [337] = {.lex_state = 449},
  [338] = {.lex_state = 449},
  [339] = {.lex_state = 449},
  [340] = {.lex_state = 449},
  [341] = {.lex_state = 449},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 449},
  [345] = {.lex_state = 449},
  [346] = {.lex_state = 449},
  [347] = {.lex_state = 449},
  [348] = {.lex_state = 449},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 449},
  [351] = {.lex_state = 449},
  [352] = {.lex_state = 449},
  [353] = {.lex_state = 449},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 449},
  [356] = {.lex_state = 449},
  [357] = {.lex_state = 449},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 449},
  [361] = {.lex_state = 449},
  [362] = {.lex_state = 449},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 449},
  [365] = {.lex_state = 449},
  [366] = {.lex_state = 449},
  [367] = {.lex_state = 449},
  [368] = {.lex_state = 449},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 449},
  [373] = {.lex_state = 449},
  [374] = {.lex_state = 4},
  [375] = {.lex_state = 449},
  [376] = {.lex_state = 449},
  [377] = {.lex_state = 449},
  [378] = {.lex_state = 449},
  [379] = {.lex_state = 449},
  [380] = {.lex_state = 449},
  [381] = {.lex_state = 449},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 449},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 449},
  [386] = {.lex_state = 17},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 449},
  [389] = {.lex_state = 449},
  [390] = {.lex_state = 449},
  [391] = {.lex_state = 449},
  [392] = {.lex_state = 449},
  [393] = {.lex_state = 449},
  [394] = {.lex_state = 449},
  [395] = {.lex_state = 449},
  [396] = {.lex_state = 449},
  [397] = {.lex_state = 449},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 449},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 449},
  [403] = {.lex_state = 449},
  [404] = {.lex_state = 449},
  [405] = {.lex_state = 449},
  [406] = {.lex_state = 9},
  [407] = {.lex_state = 449},
  [408] = {.lex_state = 693},
  [409] = {.lex_state = 449},
  [410] = {.lex_state = 449},
  [411] = {.lex_state = 449},
  [412] = {.lex_state = 449},
  [413] = {.lex_state = 9},
  [414] = {.lex_state = 449},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 449},
  [417] = {.lex_state = 449},
  [418] = {.lex_state = 449},
  [419] = {.lex_state = 449},
  [420] = {.lex_state = 10},
  [421] = {.lex_state = 449},
  [422] = {.lex_state = 4},
  [423] = {.lex_state = 449},
  [424] = {.lex_state = 11},
  [425] = {.lex_state = 449},
  [426] = {.lex_state = 449},
  [427] = {.lex_state = 449},
  [428] = {.lex_state = 449},
  [429] = {.lex_state = 449},
  [430] = {.lex_state = 449},
  [431] = {.lex_state = 449},
  [432] = {.lex_state = 9},
  [433] = {.lex_state = 449},
  [434] = {.lex_state = 449},
  [435] = {.lex_state = 449},
  [436] = {.lex_state = 449},
  [437] = {.lex_state = 9},
  [438] = {.lex_state = 449},
  [439] = {.lex_state = 9},
  [440] = {.lex_state = 449},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 449},
  [443] = {.lex_state = 9},
  [444] = {.lex_state = 9},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 9},
  [447] = {.lex_state = 9},
  [448] = {.lex_state = 449},
  [449] = {(TSStateId)(-1)},
  [450] = {(TSStateId)(-1)},
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
    [sym_subreading] = ACTIONS(1),
    [aux_sym_setname_t_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(415),
    [sym_special_list_name] = STATE(416),
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
    STATE(416), 1,
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
    STATE(416), 1,
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
    STATE(63), 1,
      sym_comment,
    ACTIONS(354), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(352), 27,
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
  [2924] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(358), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(356), 27,
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
  [2969] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(362), 4,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(360), 27,
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
  [3014] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      sym_set_op,
    STATE(66), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(364), 13,
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
  [3045] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      sym_set_op,
    STATE(66), 1,
      aux_sym_inlineset_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(368), 13,
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
  [3076] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(370), 15,
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
  [3103] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(374), 1,
      sym_set_op,
    STATE(69), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
    ACTIONS(372), 13,
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
  [3132] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(377), 14,
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
  [3158] = 17,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      sym_ruleflag_name,
    ACTIONS(389), 1,
      sym_subreading,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(71), 1,
      sym_comment,
    STATE(76), 1,
      sym__rule_tag,
    STATE(106), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(192), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3210] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(372), 14,
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
  [3236] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(395), 14,
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
  [3262] = 17,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      sym_ruleflag_name,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      sym_subreading,
    STATE(56), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(74), 1,
      sym_comment,
    STATE(78), 1,
      sym__rule_tag,
    STATE(105), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(192), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3314] = 15,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(75), 1,
      sym_comment,
    STATE(91), 1,
      sym__rule_tag,
    STATE(139), 1,
      sym_inlineset,
    STATE(164), 1,
      sym_ruleflag,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(266), 1,
      sym__rule_target,
  [3360] = 15,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(387), 1,
      sym_ruleflag_name,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      sym_subreading,
    STATE(56), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(76), 1,
      sym_comment,
    STATE(105), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(192), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3406] = 15,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(77), 1,
      sym_comment,
    STATE(92), 1,
      sym__rule_tag,
    STATE(139), 1,
      sym_inlineset,
    STATE(170), 1,
      sym_ruleflag,
    STATE(187), 1,
      sym__rule_target,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
  [3452] = 15,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(387), 1,
      sym_ruleflag_name,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      sym_subreading,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(78), 1,
      sym_comment,
    STATE(102), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(192), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3498] = 15,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(79), 1,
      sym_comment,
    STATE(97), 1,
      sym__rule_tag,
    STATE(139), 1,
      sym_inlineset,
    STATE(157), 1,
      sym_ruleflag,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(251), 1,
      sym__rule_target,
  [3544] = 15,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(80), 1,
      sym_comment,
    STATE(95), 1,
      sym__rule_tag,
    STATE(139), 1,
      sym_inlineset,
    STATE(188), 1,
      sym_ruleflag,
    STATE(189), 1,
      sym__rule_target,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
  [3590] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_BARRIER,
    ACTIONS(409), 1,
      sym_LINK,
    ACTIONS(411), 1,
      aux_sym_setname_t_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(81), 1,
      sym_comment,
    ACTIONS(405), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(300), 2,
      sym_inlineset,
      sym_setname_t,
  [3629] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(419), 1,
      sym_subreading,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(82), 1,
      sym_comment,
    STATE(107), 1,
      sym__rule_tag,
    STATE(194), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(238), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [3672] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(53), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(83), 1,
      sym_comment,
    STATE(120), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3715] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(15), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(84), 1,
      sym_comment,
    STATE(123), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3758] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(19), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(85), 1,
      sym_comment,
    STATE(135), 1,
      sym_ruleflag,
    STATE(139), 1,
      sym_inlineset,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym__rule_target,
  [3801] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      aux_sym_setname_t_token1,
    ACTIONS(425), 1,
      sym_BARRIER,
    ACTIONS(427), 1,
      sym_LINK,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(86), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(295), 2,
      sym_inlineset,
      sym_setname_t,
  [3840] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_subreading,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(87), 1,
      sym_comment,
    STATE(101), 1,
      sym__rule_tag,
    STATE(138), 1,
      sym_inlineset,
    STATE(198), 1,
      sym_ruleflag,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [3883] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(435), 1,
      sym_subreading,
    STATE(88), 1,
      sym_comment,
    STATE(103), 1,
      sym__rule_tag,
    STATE(190), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(260), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [3926] = 14,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(437), 1,
      sym_subreading,
    STATE(89), 1,
      sym_comment,
    STATE(104), 1,
      sym__rule_tag,
    STATE(124), 1,
      sym_inlineset,
    STATE(195), 1,
      sym_ruleflag,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [3969] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(90), 1,
      sym_comment,
    STATE(148), 1,
      sym__rule_tag,
    STATE(264), 1,
      sym_ruleflag,
    STATE(267), 1,
      sym_inlineset,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [4009] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(91), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(157), 1,
      sym_ruleflag,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(251), 1,
      sym__rule_target,
  [4049] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(92), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(188), 1,
      sym_ruleflag,
    STATE(189), 1,
      sym__rule_target,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
  [4089] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(93), 1,
      sym_comment,
    STATE(149), 1,
      sym__rule_tag,
    STATE(186), 1,
      sym_inlineset,
    STATE(215), 1,
      sym_ruleflag,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [4129] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(94), 1,
      sym_comment,
    STATE(146), 1,
      sym__rule_tag,
    STATE(261), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(354), 1,
      sym_inlineset,
  [4169] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(95), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(174), 1,
      sym_ruleflag,
    STATE(175), 1,
      sym__rule_target,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
  [4209] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(96), 1,
      sym_comment,
    STATE(115), 1,
      sym__rule_tag,
    STATE(240), 1,
      sym_inlineset,
    STATE(242), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [4249] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(97), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(171), 1,
      sym_ruleflag,
    STATE(217), 1,
      aux_sym_ruleflag_repeat1,
    STATE(225), 1,
      sym__rule_target,
  [4289] = 13,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_ruletype,
    ACTIONS(445), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(447), 1,
      sym_ruletype_parentchild,
    ACTIONS(449), 1,
      sym_ruletype_relation,
    ACTIONS(451), 1,
      sym_ruletype_relations,
    ACTIONS(453), 1,
      sym_ruletype_map_etc,
    ACTIONS(455), 1,
      sym_ruletype_addcohort,
    ACTIONS(457), 1,
      sym_ruletype_move,
    ACTIONS(459), 1,
      sym_ruletype_switch,
    ACTIONS(461), 1,
      sym_ruletype_external,
    STATE(98), 1,
      sym_comment,
  [4329] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(99), 1,
      sym_comment,
    STATE(141), 1,
      sym__rule_tag,
    STATE(183), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(239), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [4369] = 13,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(100), 1,
      sym_comment,
    STATE(133), 1,
      sym__rule_tag,
    STATE(206), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(387), 1,
      sym_inlineset,
  [4409] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(463), 1,
      sym_subreading,
    STATE(101), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(201), 1,
      sym_ruleflag,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [4446] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(465), 1,
      sym_subreading,
    STATE(25), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(102), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [4483] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(467), 1,
      sym_subreading,
    STATE(103), 1,
      sym_comment,
    STATE(199), 1,
      sym_ruleflag,
    STATE(212), 1,
      sym_inlineset,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [4520] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_subreading,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(104), 1,
      sym_comment,
    STATE(138), 1,
      sym_inlineset,
    STATE(198), 1,
      sym_ruleflag,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [4557] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      sym_subreading,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(105), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [4594] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      sym_subreading,
    STATE(56), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(106), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [4631] = 12,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(435), 1,
      sym_subreading,
    STATE(107), 1,
      sym_comment,
    STATE(190), 1,
      sym_ruleflag,
    STATE(226), 1,
      aux_sym_ruleflag_repeat1,
    STATE(260), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [4668] = 11,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    ACTIONS(475), 1,
      sym_ruleflag_name,
    STATE(108), 1,
      sym_comment,
    STATE(169), 1,
      sym__child_specifier,
    STATE(200), 1,
      sym__rule_tag,
    STATE(271), 1,
      aux_sym_ruleflag_repeat1,
    STATE(329), 1,
      sym_ruleflag,
  [4702] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(109), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [4736] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(110), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(383), 1,
      sym_contexttest,
  [4770] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(111), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(385), 1,
      sym_contexttest,
  [4804] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(112), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_taglist_repeat1,
    ACTIONS(487), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [4834] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(495), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [4854] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(114), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [4888] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(115), 1,
      sym_comment,
    STATE(264), 1,
      sym_ruleflag,
    STATE(267), 1,
      sym_inlineset,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [4922] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(116), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(366), 1,
      sym_contexttest,
  [4956] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(117), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(417), 1,
      sym_contexttest,
  [4990] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(118), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5024] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__context,
    ACTIONS(497), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5048] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(120), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5082] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(121), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5116] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(122), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5150] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(123), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5184] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(124), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5218] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(125), 2,
      aux_sym__context,
      sym_comment,
    ACTIONS(501), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5240] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      aux_sym__context,
    STATE(126), 1,
      sym_comment,
    ACTIONS(506), 6,
      sym_semicolon,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5264] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(127), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5298] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(128), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5332] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(129), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5366] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(130), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5400] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(131), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5434] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      sym_ntag,
    ACTIONS(516), 1,
      sym_qtag,
    ACTIONS(508), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(132), 2,
      sym_comment,
      aux_sym_taglist_repeat1,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [5462] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(133), 1,
      sym_comment,
    STATE(261), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(354), 1,
      sym_inlineset,
  [5496] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(134), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5530] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(135), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5564] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(136), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5598] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(137), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(448), 1,
      sym_contexttest,
  [5632] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(138), 1,
      sym_comment,
    STATE(139), 1,
      sym_inlineset,
    STATE(234), 1,
      sym__rule_target,
  [5666] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(139), 1,
      sym_comment,
    ACTIONS(519), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [5686] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(140), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(381), 1,
      sym_contexttest,
  [5720] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(141), 1,
      sym_comment,
    STATE(186), 1,
      sym_inlineset,
    STATE(215), 1,
      sym_ruleflag,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [5754] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(142), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(410), 1,
      sym_contexttest,
  [5788] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(143), 1,
      sym_comment,
    STATE(234), 1,
      sym__rule_target,
  [5822] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(144), 1,
      sym_comment,
    STATE(234), 1,
      sym__rule_target,
  [5856] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(145), 1,
      sym_comment,
    STATE(234), 1,
      sym__rule_target,
  [5890] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(146), 1,
      sym_comment,
    STATE(235), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(370), 1,
      sym_inlineset,
  [5924] = 11,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    ACTIONS(475), 1,
      sym_ruleflag_name,
    STATE(147), 1,
      sym_comment,
    STATE(166), 1,
      sym__child_specifier,
    STATE(202), 1,
      sym__rule_tag,
    STATE(271), 1,
      aux_sym_ruleflag_repeat1,
    STATE(332), 1,
      sym_ruleflag,
  [5958] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(148), 1,
      sym_comment,
    STATE(210), 1,
      sym_inlineset,
    STATE(233), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [5992] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    STATE(149), 1,
      sym_comment,
    STATE(172), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(232), 1,
      sym_ruleflag,
    STATE(274), 1,
      aux_sym_ruleflag_repeat1,
    STATE(282), 1,
      sym_setname,
  [6026] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(150), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(400), 1,
      sym_contexttest,
  [6060] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_context_modifier,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(81), 1,
      sym_contextpos,
    STATE(151), 1,
      sym_comment,
    STATE(283), 1,
      sym_setname_t,
    STATE(356), 1,
      sym_contexttest,
  [6094] = 11,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym__shared_rule_end,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(152), 1,
      sym_comment,
    STATE(234), 1,
      sym__rule_target,
  [6128] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(153), 1,
      sym_comment,
    STATE(347), 1,
      sym__if_context,
    STATE(390), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6157] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(154), 1,
      sym_comment,
    STATE(314), 1,
      sym__if_context,
    STATE(431), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6186] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(112), 1,
      aux_sym_taglist_repeat1,
    STATE(155), 1,
      sym_comment,
    STATE(402), 1,
      sym_taglist,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [6215] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(156), 1,
      sym_comment,
    STATE(197), 1,
      sym__rule_target,
  [6246] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(157), 1,
      sym_comment,
    STATE(225), 1,
      sym__rule_target,
  [6277] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(112), 1,
      aux_sym_taglist_repeat1,
    STATE(158), 1,
      sym_comment,
    STATE(391), 1,
      sym_taglist,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [6306] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(525), 7,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_TO,
      sym_FROM,
      sym_BEFORE,
      sym_AFTER,
      sym_WITH,
  [6325] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(112), 1,
      aux_sym_taglist_repeat1,
    STATE(160), 1,
      sym_comment,
    STATE(389), 1,
      sym_taglist,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [6354] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(112), 1,
      aux_sym_taglist_repeat1,
    STATE(161), 1,
      sym_comment,
    STATE(438), 1,
      sym_taglist,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [6383] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(162), 1,
      sym_comment,
    STATE(312), 1,
      sym__if_context,
    STATE(425), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6412] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(154), 1,
      sym__rule_target,
    STATE(163), 1,
      sym_comment,
  [6443] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(164), 1,
      sym_comment,
    STATE(251), 1,
      sym__rule_target,
  [6474] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(165), 1,
      sym_comment,
    STATE(341), 1,
      sym__if_context,
    STATE(423), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6503] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(166), 1,
      sym_comment,
    STATE(196), 1,
      sym__rule_target,
  [6534] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(167), 1,
      sym_comment,
    STATE(313), 1,
      sym__if_context,
    STATE(436), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6563] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(168), 1,
      sym_comment,
    STATE(353), 1,
      sym__if_context,
    STATE(414), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6592] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(169), 1,
      sym_comment,
    STATE(204), 1,
      sym__rule_target,
  [6623] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(170), 1,
      sym_comment,
    STATE(189), 1,
      sym__rule_target,
  [6654] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(171), 1,
      sym_comment,
    STATE(254), 1,
      sym__rule_target,
  [6685] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(167), 1,
      sym__rule_target,
    STATE(172), 1,
      sym_comment,
  [6716] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(173), 1,
      sym_comment,
    STATE(321), 1,
      sym__if_context,
    STATE(419), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6745] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(174), 1,
      sym_comment,
    STATE(184), 1,
      sym__rule_target,
  [6776] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(175), 1,
      sym_comment,
    STATE(324), 1,
      sym__if_context,
    STATE(409), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [6805] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(165), 1,
      sym__rule_target,
    STATE(176), 1,
      sym_comment,
  [6836] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(168), 1,
      sym__rule_target,
    STATE(177), 1,
      sym_comment,
  [6867] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(162), 1,
      sym__rule_target,
    STATE(178), 1,
      sym_comment,
  [6898] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(112), 1,
      aux_sym_taglist_repeat1,
    STATE(179), 1,
      sym_comment,
    STATE(442), 1,
      sym_taglist,
    STATE(253), 2,
      sym_compotag,
      sym_tag,
  [6927] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(153), 1,
      sym__rule_target,
    STATE(180), 1,
      sym_comment,
  [6958] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(527), 3,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(529), 4,
      sym_BARRIER,
      sym_LINK,
      aux_sym_setname_token1,
      aux_sym_setname_t_token1,
  [6979] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(182), 1,
      sym_comment,
    STATE(191), 1,
      sym__rule_target,
  [7010] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(183), 1,
      sym_comment,
    STATE(185), 1,
      sym__rule_target,
  [7041] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(184), 1,
      sym_comment,
    STATE(327), 1,
      sym__if_context,
    STATE(440), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [7070] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(185), 1,
      sym_comment,
    STATE(310), 1,
      sym__if_context,
    STATE(434), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [7099] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(173), 1,
      sym__rule_target,
    STATE(186), 1,
      sym_comment,
  [7130] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(187), 1,
      sym_comment,
    STATE(307), 1,
      sym__if_context,
    STATE(428), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [7159] = 10,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      sym_TARGET,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
    STATE(175), 1,
      sym__rule_target,
    STATE(188), 1,
      sym_comment,
  [7190] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(189), 1,
      sym_comment,
    STATE(318), 1,
      sym__if_context,
    STATE(412), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [7219] = 9,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(467), 1,
      sym_subreading,
    STATE(190), 1,
      sym_comment,
    STATE(212), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [7247] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(191), 1,
      sym_comment,
    STATE(369), 1,
      sym__if_context,
    ACTIONS(531), 2,
      sym_BEFORE,
      sym_AFTER,
  [7273] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(387), 1,
      sym_ruleflag_name,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(535), 3,
      sym_TARGET,
      sym_subreading,
      aux_sym_setname_token1,
  [7297] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 1,
      sym_ruleflag_name,
    STATE(193), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
    ACTIONS(539), 3,
      sym_TARGET,
      sym_subreading,
      aux_sym_setname_token1,
  [7319] = 9,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(435), 1,
      sym_subreading,
    STATE(194), 1,
      sym_comment,
    STATE(260), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [7347] = 9,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_subreading,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(138), 1,
      sym_inlineset,
    STATE(195), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7375] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(196), 1,
      sym_comment,
    STATE(358), 1,
      sym__if_context,
    ACTIONS(544), 2,
      sym_BEFORE,
      sym_AFTER,
  [7401] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(197), 1,
      sym_comment,
    STATE(359), 1,
      sym__if_context,
    ACTIONS(546), 2,
      sym_BEFORE,
      sym_AFTER,
  [7427] = 9,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(463), 1,
      sym_subreading,
    STATE(129), 1,
      sym_inlineset,
    STATE(198), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7455] = 9,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    ACTIONS(548), 1,
      sym_subreading,
    STATE(199), 1,
      sym_comment,
    STATE(255), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [7483] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    ACTIONS(475), 1,
      sym_ruleflag_name,
    STATE(166), 1,
      sym__child_specifier,
    STATE(200), 1,
      sym_comment,
    STATE(271), 1,
      aux_sym_ruleflag_repeat1,
    STATE(332), 1,
      sym_ruleflag,
  [7511] = 9,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    ACTIONS(550), 1,
      sym_subreading,
    STATE(130), 1,
      sym_inlineset,
    STATE(201), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7539] = 9,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    ACTIONS(475), 1,
      sym_ruleflag_name,
    STATE(182), 1,
      sym__child_specifier,
    STATE(202), 1,
      sym_comment,
    STATE(271), 1,
      aux_sym_ruleflag_repeat1,
    STATE(346), 1,
      sym_ruleflag,
  [7567] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_comment,
    ACTIONS(554), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [7589] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    STATE(119), 1,
      aux_sym__context,
    STATE(204), 1,
      sym_comment,
    STATE(374), 1,
      sym__if_context,
    ACTIONS(558), 2,
      sym_BEFORE,
      sym_AFTER,
  [7615] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(205), 1,
      sym_comment,
    STATE(350), 1,
      sym_inlineset,
  [7640] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(206), 1,
      sym_comment,
    STATE(354), 1,
      sym_inlineset,
  [7665] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_compotag_repeat1,
    STATE(342), 1,
      sym_tag,
  [7690] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(208), 1,
      sym_comment,
    ACTIONS(562), 5,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ONCE,
      sym_ALWAYS,
      sym_ruleflag_name,
  [7707] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(209), 1,
      sym_comment,
    STATE(255), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [7732] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(180), 1,
      sym_inlineset,
    STATE(210), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7757] = 6,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(566), 1,
      sym_set_op,
    ACTIONS(564), 2,
      sym_TARGET,
      aux_sym_setname_token1,
    STATE(211), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
  [7778] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(145), 1,
      sym_inlineset,
    STATE(212), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7803] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      sym_ruleflag_name,
    ACTIONS(539), 2,
      sym_TARGET,
      aux_sym_setname_token1,
    STATE(213), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [7824] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(130), 1,
      sym_inlineset,
    STATE(214), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7849] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(172), 1,
      sym_inlineset,
    STATE(215), 1,
      sym_comment,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(282), 1,
      sym_setname,
  [7874] = 7,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      sym_set_op,
    STATE(211), 1,
      aux_sym_inlineset_repeat1,
    STATE(216), 1,
      sym_comment,
    ACTIONS(572), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7897] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      sym_ruleflag_name,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      aux_sym_ruleflag_repeat1,
    STATE(217), 1,
      sym_comment,
    ACTIONS(535), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7920] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym_comment,
    ACTIONS(578), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [7939] = 7,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      sym_set_op,
    STATE(216), 1,
      aux_sym_inlineset_repeat1,
    STATE(219), 1,
      sym_comment,
    ACTIONS(580), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7962] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_WITHCHILD,
    ACTIONS(584), 1,
      sym_NOCHILD,
    STATE(220), 1,
      sym_comment,
    STATE(316), 1,
      aux_sym__context,
    STATE(362), 1,
      sym__child_specifier,
  [7987] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(586), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym_comment,
    ACTIONS(554), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [8008] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(590), 1,
      sym_ntag,
    STATE(222), 1,
      sym_comment,
    ACTIONS(588), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [8027] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(592), 1,
      sym_ruleflag_name,
    ACTIONS(539), 2,
      sym_subreading,
      aux_sym_setname_token1,
    STATE(223), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [8048] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(224), 1,
      sym_comment,
    STATE(407), 1,
      sym_inlineset,
  [8073] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    ACTIONS(595), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(225), 1,
      sym_comment,
    STATE(422), 1,
      sym__if_context,
  [8098] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_ruleflag_name,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      aux_sym_ruleflag_repeat1,
    STATE(226), 1,
      sym_comment,
    ACTIONS(535), 2,
      sym_subreading,
      aux_sym_setname_token1,
  [8121] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(597), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym_comment,
    ACTIONS(554), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [8142] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(228), 1,
      sym_comment,
    STATE(309), 1,
      sym_inlineset,
  [8167] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_WITHCHILD,
    ACTIONS(584), 1,
      sym_NOCHILD,
    STATE(229), 1,
      sym_comment,
    STATE(338), 1,
      aux_sym__context,
    STATE(388), 1,
      sym__child_specifier,
  [8192] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(113), 1,
      sym_inlineset,
    STATE(230), 1,
      sym_comment,
  [8217] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_WITHCHILD,
    ACTIONS(584), 1,
      sym_NOCHILD,
    STATE(231), 1,
      sym_comment,
    STATE(345), 1,
      aux_sym__context,
    STATE(372), 1,
      sym__child_specifier,
  [8242] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(177), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(232), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8267] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(233), 1,
      sym_comment,
    STATE(258), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [8292] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    ACTIONS(599), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(234), 1,
      sym_comment,
    STATE(418), 1,
      sym__if_context,
  [8317] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(235), 1,
      sym_comment,
    STATE(382), 1,
      sym_inlineset,
  [8342] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(236), 1,
      sym_comment,
    STATE(260), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [8367] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_compotag_repeat1,
    STATE(342), 1,
      sym_tag,
  [8392] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(127), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(238), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8417] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(186), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(239), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8442] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(178), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8467] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      sym_ntag,
    ACTIONS(608), 1,
      sym_qtag,
    STATE(342), 1,
      sym_tag,
    STATE(241), 2,
      sym_comment,
      aux_sym_compotag_repeat1,
  [8490] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(242), 1,
      sym_comment,
    STATE(267), 1,
      sym_inlineset,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [8515] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(138), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(243), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8540] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(244), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
    STATE(331), 1,
      sym_inlineset,
  [8565] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(109), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(245), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8590] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_WITHCHILD,
    ACTIONS(584), 1,
      sym_NOCHILD,
    STATE(246), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym__context,
    STATE(368), 1,
      sym__child_specifier,
  [8615] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(247), 1,
      sym_comment,
    STATE(411), 1,
      sym_inlineset,
  [8640] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(613), 1,
      sym_ntag,
    STATE(248), 1,
      sym_comment,
    ACTIONS(611), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [8659] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(249), 1,
      sym_comment,
    STATE(344), 1,
      sym_inlineset,
  [8684] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(250), 1,
      sym_comment,
    STATE(379), 1,
      sym_inlineset,
  [8709] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    ACTIONS(615), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(251), 1,
      sym_comment,
    STATE(401), 1,
      sym__if_context,
  [8734] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(252), 1,
      sym_comment,
    STATE(336), 1,
      sym_inlineset,
  [8759] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(619), 1,
      sym_ntag,
    STATE(253), 1,
      sym_comment,
    ACTIONS(617), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [8778] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    ACTIONS(621), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(254), 1,
      sym_comment,
    STATE(399), 1,
      sym__if_context,
  [8803] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(152), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(255), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8828] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_comment,
    ACTIONS(623), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [8847] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(136), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(257), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8872] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(176), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(258), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8897] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(245), 1,
      sym_inlineset,
    STATE(259), 1,
      sym_comment,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [8922] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(114), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(260), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [8947] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_inlineset_single,
    STATE(70), 1,
      sym_setname,
    STATE(261), 1,
      sym_comment,
    STATE(370), 1,
      sym_inlineset,
  [8972] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(212), 1,
      sym_inlineset,
    STATE(262), 1,
      sym_comment,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [8997] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(129), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(263), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [9022] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(210), 1,
      sym_inlineset,
    STATE(264), 1,
      sym_comment,
    STATE(290), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [9047] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_WITHCHILD,
    ACTIONS(584), 1,
      sym_NOCHILD,
    STATE(265), 1,
      sym_comment,
    STATE(305), 1,
      aux_sym__context,
    STATE(365), 1,
      sym__child_specifier,
  [9072] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_IF,
    ACTIONS(625), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(266), 1,
      sym_comment,
    STATE(398), 1,
      sym__if_context,
  [9097] = 8,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(163), 1,
      sym_inlineset,
    STATE(219), 1,
      sym_inlineset_single,
    STATE(267), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [9122] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      sym_semicolon,
    ACTIONS(629), 1,
      aux_sym_setname_token1,
    STATE(268), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_static_sets_repeat1,
    STATE(371), 1,
      sym_setname,
  [9144] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(207), 1,
      aux_sym_compotag_repeat1,
    STATE(269), 1,
      sym_comment,
    STATE(342), 1,
      sym_tag,
  [9166] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(631), 1,
      sym_ruleflag_name,
    ACTIONS(537), 2,
      sym_WITHCHILD,
      sym_NOCHILD,
    STATE(270), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [9184] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(475), 1,
      sym_ruleflag_name,
    STATE(270), 1,
      aux_sym_ruleflag_repeat1,
    STATE(271), 1,
      sym_comment,
    ACTIONS(533), 2,
      sym_WITHCHILD,
      sym_NOCHILD,
  [9204] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(634), 1,
      anon_sym_COLON,
    STATE(272), 1,
      sym_comment,
    ACTIONS(552), 3,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
  [9222] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      aux_sym_setname_token1,
    ACTIONS(636), 1,
      sym_ruleflag_name,
    STATE(273), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [9242] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      sym_ruleflag_name,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      aux_sym_setname_token1,
    STATE(273), 1,
      aux_sym_ruleflag_repeat1,
    STATE(274), 1,
      sym_comment,
  [9264] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(275), 1,
      sym_comment,
    ACTIONS(554), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [9284] = 5,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(276), 1,
      sym_comment,
    ACTIONS(564), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [9302] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      sym_comment,
    ACTIONS(578), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [9320] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      sym_comment,
    ACTIONS(641), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [9338] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(276), 1,
      sym_inlineset_single,
    STATE(279), 1,
      sym_comment,
    STATE(282), 1,
      sym_setname,
  [9360] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      sym_comment,
    ACTIONS(623), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [9378] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_setname,
    STATE(72), 1,
      sym_inlineset_single,
    STATE(281), 1,
      sym_comment,
  [9400] = 5,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(282), 1,
      sym_comment,
    ACTIONS(643), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [9418] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(645), 1,
      sym_BARRIER,
    ACTIONS(647), 1,
      sym_LINK,
    STATE(283), 1,
      sym_comment,
    ACTIONS(405), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9438] = 5,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(284), 1,
      sym_comment,
    ACTIONS(649), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [9456] = 6,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(564), 1,
      aux_sym_setname_token1,
    ACTIONS(651), 1,
      sym_set_op,
    STATE(285), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
  [9476] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym_comment,
    ACTIONS(578), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [9494] = 7,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      aux_sym_setname_token1,
    ACTIONS(654), 1,
      sym_set_op,
    STATE(285), 1,
      aux_sym_inlineset_repeat1,
    STATE(287), 1,
      sym_comment,
  [9516] = 7,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_setname_token1,
    STATE(288), 1,
      sym_comment,
    STATE(326), 1,
      sym_inlineset_single,
    STATE(333), 1,
      sym_setname,
  [9538] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_comment,
    ACTIONS(623), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [9556] = 7,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(580), 1,
      aux_sym_setname_token1,
    ACTIONS(654), 1,
      sym_set_op,
    STATE(287), 1,
      aux_sym_inlineset_repeat1,
    STATE(290), 1,
      sym_comment,
  [9578] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(291), 1,
      sym_comment,
    ACTIONS(656), 4,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_BARRIER,
      sym_LINK,
  [9594] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(660), 1,
      sym_OR,
    STATE(292), 1,
      sym_comment,
    STATE(304), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(658), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9614] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(483), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      sym_ntag,
    STATE(86), 1,
      sym_contextpos,
    STATE(293), 1,
      sym_comment,
    STATE(300), 1,
      sym_setname_t,
  [9636] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(469), 1,
      anon_sym_COLON,
    STATE(294), 1,
      sym_comment,
    STATE(376), 1,
      sym__rule_tag,
    ACTIONS(662), 2,
      sym_ONCE,
      sym_ALWAYS,
  [9656] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(664), 1,
      sym_BARRIER,
    ACTIONS(666), 1,
      sym_LINK,
    STATE(295), 1,
      sym_comment,
    ACTIONS(658), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9676] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_comment,
    ACTIONS(670), 3,
      sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [9694] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(674), 1,
      sym_OR,
    ACTIONS(672), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(297), 2,
      sym_comment,
      aux_sym_contexttest_repeat2,
  [9712] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(469), 1,
      anon_sym_COLON,
    STATE(298), 1,
      sym_comment,
    STATE(378), 1,
      sym__rule_tag,
    ACTIONS(677), 2,
      sym_ONCE,
      sym_ALWAYS,
  [9732] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(679), 1,
      sym_semicolon,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym_compotag,
    STATE(299), 2,
      sym_comment,
      aux_sym_parentheses_repeat1,
  [9752] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(684), 1,
      sym_BARRIER,
    ACTIONS(686), 1,
      sym_LINK,
    STATE(300), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9772] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(491), 1,
      sym_ntag,
    ACTIONS(493), 1,
      sym_qtag,
    STATE(237), 1,
      aux_sym_compotag_repeat1,
    STATE(301), 1,
      sym_comment,
    STATE(342), 1,
      sym_tag,
  [9794] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(688), 1,
      sym_semicolon,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    STATE(299), 1,
      aux_sym_parentheses_repeat1,
    STATE(302), 1,
      sym_comment,
    STATE(357), 1,
      sym_compotag,
  [9816] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(692), 1,
      sym_semicolon,
    ACTIONS(694), 1,
      aux_sym_setname_token1,
    STATE(371), 1,
      sym_setname,
    STATE(303), 2,
      sym_comment,
      aux_sym_static_sets_repeat1,
  [9836] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(660), 1,
      sym_OR,
    STATE(297), 1,
      aux_sym_contexttest_repeat2,
    STATE(304), 1,
      sym_comment,
    ACTIONS(697), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9856] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(305), 1,
      sym_comment,
  [9875] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(306), 1,
      sym_comment,
  [9894] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(307), 1,
      sym_comment,
    STATE(412), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [9911] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(703), 1,
      sym_ntag,
    ACTIONS(705), 1,
      sym_qtag,
    STATE(83), 1,
      sym_filepath,
    STATE(308), 1,
      sym_comment,
  [9930] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_contexttest_repeat1,
  [9949] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(310), 1,
      sym_comment,
    STATE(419), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [9966] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(311), 1,
      sym_comment,
    ACTIONS(576), 3,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
  [9981] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(312), 1,
      sym_comment,
    STATE(431), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [9998] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(313), 1,
      sym_comment,
    STATE(414), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10015] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(314), 1,
      sym_comment,
    STATE(390), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10032] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_comment,
    ACTIONS(578), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [10049] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(316), 1,
      sym_comment,
  [10068] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym_comment,
    ACTIONS(623), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [10085] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(318), 1,
      sym_comment,
    STATE(409), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10102] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(713), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(319), 1,
      sym_comment,
  [10121] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(320), 1,
      sym_comment,
  [10140] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(321), 1,
      sym_comment,
    STATE(436), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10157] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(322), 1,
      sym_comment,
  [10176] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(719), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(323), 1,
      sym_comment,
  [10195] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(324), 1,
      sym_comment,
    STATE(440), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10212] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(703), 1,
      sym_ntag,
    ACTIONS(705), 1,
      sym_qtag,
    STATE(85), 1,
      sym_filepath,
    STATE(325), 1,
      sym_comment,
  [10231] = 5,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(326), 1,
      sym_comment,
    ACTIONS(564), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [10248] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(327), 1,
      sym_comment,
    STATE(427), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10265] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(328), 1,
      sym_comment,
    ACTIONS(641), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [10282] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    STATE(166), 1,
      sym__child_specifier,
    STATE(329), 1,
      sym_comment,
  [10301] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(330), 1,
      sym_comment,
    ACTIONS(723), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [10318] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_comment,
    ACTIONS(727), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [10335] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    STATE(182), 1,
      sym__child_specifier,
    STATE(332), 1,
      sym_comment,
  [10354] = 5,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(333), 1,
      sym_comment,
    ACTIONS(643), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [10371] = 5,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(334), 1,
      sym_comment,
    ACTIONS(649), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [10388] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(335), 1,
      sym_comment,
  [10407] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(731), 1,
      sym_LINK,
    STATE(336), 1,
      sym_comment,
    ACTIONS(697), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10424] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(337), 1,
      sym_comment,
    ACTIONS(733), 3,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_OR,
  [10439] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(735), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(338), 1,
      sym_comment,
  [10458] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_contexttest_repeat1,
  [10477] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RBRACK,
    STATE(340), 2,
      sym_comment,
      aux_sym_contexttest_repeat1,
  [10494] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(341), 1,
      sym_comment,
    STATE(392), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10511] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(746), 1,
      sym_ntag,
    STATE(342), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_RPAREN,
      sym_qtag,
  [10528] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(703), 1,
      sym_ntag,
    ACTIONS(705), 1,
      sym_qtag,
    STATE(84), 1,
      sym_filepath,
    STATE(343), 1,
      sym_comment,
  [10547] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(666), 1,
      sym_LINK,
    STATE(344), 1,
      sym_comment,
    ACTIONS(658), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10564] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(748), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(345), 1,
      sym_comment,
  [10583] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      sym_WITHCHILD,
    ACTIONS(473), 1,
      sym_NOCHILD,
    STATE(156), 1,
      sym__child_specifier,
    STATE(346), 1,
      sym_comment,
  [10602] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(347), 1,
      sym_comment,
    STATE(423), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10619] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(348), 1,
      sym_comment,
  [10638] = 6,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(629), 1,
      aux_sym_setname_token1,
    STATE(268), 1,
      aux_sym_static_sets_repeat1,
    STATE(349), 1,
      sym_comment,
    STATE(371), 1,
      sym_setname,
  [10657] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(754), 1,
      sym_LINK,
    STATE(350), 1,
      sym_comment,
    ACTIONS(752), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10674] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      aux_sym_parentheses_repeat1,
    STATE(351), 1,
      sym_comment,
    STATE(357), 1,
      sym_compotag,
  [10693] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(756), 1,
      sym_semicolon,
    STATE(125), 1,
      aux_sym__context,
    STATE(352), 1,
      sym_comment,
  [10712] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(353), 1,
      sym_comment,
    STATE(403), 1,
      sym__to_from,
    ACTIONS(523), 2,
      sym_TO,
      sym_FROM,
  [10729] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(354), 1,
      sym_comment,
    ACTIONS(758), 2,
      sym_BEFORE,
      sym_AFTER,
  [10743] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(323), 1,
      aux_sym__context,
    STATE(355), 1,
      sym_comment,
  [10759] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(356), 1,
      sym_comment,
    ACTIONS(658), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10773] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(357), 1,
      sym_comment,
    ACTIONS(760), 2,
      sym_semicolon,
      anon_sym_LPAREN,
  [10787] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(358), 1,
      sym_comment,
    ACTIONS(531), 2,
      sym_BEFORE,
      sym_AFTER,
  [10801] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(359), 1,
      sym_comment,
    ACTIONS(762), 2,
      sym_BEFORE,
      sym_AFTER,
  [10815] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      aux_sym__context,
    STATE(360), 1,
      sym_comment,
  [10831] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      aux_sym__context,
    STATE(361), 1,
      sym_comment,
  [10847] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      aux_sym__context,
    STATE(362), 1,
      sym_comment,
  [10863] = 5,
    ACTIONS(370), 1,
      sym_semicolon,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(649), 1,
      aux_sym_setname_token1,
    STATE(363), 1,
      sym_comment,
  [10879] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(364), 1,
      sym_comment,
    ACTIONS(764), 2,
      sym_RTL,
      sym_LTR,
  [10893] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      aux_sym__context,
    STATE(365), 1,
      sym_comment,
  [10909] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(366), 1,
      sym_comment,
    ACTIONS(752), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10923] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      aux_sym__context,
    STATE(367), 1,
      sym_comment,
  [10939] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      aux_sym__context,
    STATE(368), 1,
      sym_comment,
  [10955] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(369), 1,
      sym_comment,
    ACTIONS(546), 2,
      sym_BEFORE,
      sym_AFTER,
  [10969] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(370), 1,
      sym_comment,
    ACTIONS(766), 2,
      sym_BEFORE,
      sym_AFTER,
  [10983] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(768), 1,
      sym_semicolon,
    ACTIONS(770), 1,
      aux_sym_setname_token1,
    STATE(371), 1,
      sym_comment,
  [10999] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      aux_sym__context,
    STATE(372), 1,
      sym_comment,
  [11015] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      aux_sym__context,
    STATE(373), 1,
      sym_comment,
  [11031] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(374), 1,
      sym_comment,
    ACTIONS(544), 2,
      sym_BEFORE,
      sym_AFTER,
  [11045] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      aux_sym__context,
    STATE(375), 1,
      sym_comment,
  [11061] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(376), 1,
      sym_comment,
    ACTIONS(677), 2,
      sym_ONCE,
      sym_ALWAYS,
  [11075] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(377), 1,
      sym_comment,
    ACTIONS(588), 2,
      sym_semicolon,
      anon_sym_LPAREN,
  [11089] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(378), 1,
      sym_comment,
    ACTIONS(772), 2,
      sym_ONCE,
      sym_ALWAYS,
  [11103] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(379), 1,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11117] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
      aux_sym__context,
    STATE(380), 1,
      sym_comment,
  [11133] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(381), 1,
      sym_comment,
    ACTIONS(774), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [11147] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(382), 1,
      sym_comment,
    ACTIONS(776), 2,
      sym_BEFORE,
      sym_AFTER,
  [11161] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(383), 1,
      sym_comment,
    ACTIONS(697), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [11175] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(384), 1,
      sym_comment,
    STATE(435), 1,
      sym_setname,
  [11191] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(385), 1,
      sym_comment,
    ACTIONS(778), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [11205] = 5,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(391), 1,
      aux_sym_setname_token1,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    STATE(386), 1,
      sym_comment,
    STATE(433), 1,
      sym_setname,
  [11221] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(387), 1,
      sym_comment,
    ACTIONS(780), 2,
      sym_BEFORE,
      sym_AFTER,
  [11235] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      aux_sym__context,
    STATE(388), 1,
      sym_comment,
  [11251] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_comment,
  [11264] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(784), 1,
      sym_semicolon,
    STATE(390), 1,
      sym_comment,
  [11277] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(786), 1,
      sym_semicolon,
    STATE(391), 1,
      sym_comment,
  [11290] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(788), 1,
      sym_semicolon,
    STATE(392), 1,
      sym_comment,
  [11303] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(790), 1,
      sym_eq,
    STATE(393), 1,
      sym_comment,
  [11316] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(792), 1,
      sym_eq,
    STATE(394), 1,
      sym_comment,
  [11329] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(794), 1,
      sym_eq,
    STATE(395), 1,
      sym_comment,
  [11342] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(396), 1,
      sym_comment,
  [11355] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(798), 1,
      sym_eq,
    STATE(397), 1,
      sym_comment,
  [11368] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      sym_WITH,
    STATE(398), 1,
      sym_comment,
  [11381] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(800), 1,
      sym_WITH,
    STATE(399), 1,
      sym_comment,
  [11394] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(802), 1,
      sym_semicolon,
    STATE(400), 1,
      sym_comment,
  [11407] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(595), 1,
      sym_WITH,
    STATE(401), 1,
      sym_comment,
  [11420] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(804), 1,
      sym_semicolon,
    STATE(402), 1,
      sym_comment,
  [11433] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(806), 1,
      sym_semicolon,
    STATE(403), 1,
      sym_comment,
  [11446] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(808), 1,
      sym_eq,
    STATE(404), 1,
      sym_comment,
  [11459] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(810), 1,
      sym_eq,
    STATE(405), 1,
      sym_comment,
  [11472] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(812), 1,
      sym_ntag,
    STATE(406), 1,
      sym_comment,
  [11485] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
    STATE(407), 1,
      sym_comment,
  [11498] = 4,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(393), 1,
      aux_sym_comment_token1,
    ACTIONS(814), 1,
      aux_sym_comment_token2,
    STATE(408), 1,
      sym_comment,
  [11511] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      sym_semicolon,
    STATE(409), 1,
      sym_comment,
  [11524] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_comment,
  [11537] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(820), 1,
      sym_semicolon,
    STATE(411), 1,
      sym_comment,
  [11550] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(822), 1,
      sym_semicolon,
    STATE(412), 1,
      sym_comment,
  [11563] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(824), 1,
      sym_ntag,
    STATE(413), 1,
      sym_comment,
  [11576] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(826), 1,
      sym_semicolon,
    STATE(414), 1,
      sym_comment,
  [11589] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    STATE(415), 1,
      sym_comment,
  [11602] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(830), 1,
      sym_eq,
    STATE(416), 1,
      sym_comment,
  [11615] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_comment,
  [11628] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(834), 1,
      sym_semicolon,
    STATE(418), 1,
      sym_comment,
  [11641] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(836), 1,
      sym_semicolon,
    STATE(419), 1,
      sym_comment,
  [11654] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(838), 1,
      sym_rawpath,
    STATE(420), 1,
      sym_comment,
  [11667] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(840), 1,
      sym_semicolon,
    STATE(421), 1,
      sym_comment,
  [11680] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(621), 1,
      sym_WITH,
    STATE(422), 1,
      sym_comment,
  [11693] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(842), 1,
      sym_semicolon,
    STATE(423), 1,
      sym_comment,
  [11706] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(844), 1,
      sym_prefix,
    STATE(424), 1,
      sym_comment,
  [11719] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(846), 1,
      sym_semicolon,
    STATE(425), 1,
      sym_comment,
  [11732] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(426), 1,
      sym_comment,
  [11745] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(848), 1,
      sym_semicolon,
    STATE(427), 1,
      sym_comment,
  [11758] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(850), 1,
      sym_semicolon,
    STATE(428), 1,
      sym_comment,
  [11771] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(852), 1,
      sym_semicolon,
    STATE(429), 1,
      sym_comment,
  [11784] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(854), 1,
      sym_semicolon,
    STATE(430), 1,
      sym_comment,
  [11797] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(856), 1,
      sym_semicolon,
    STATE(431), 1,
      sym_comment,
  [11810] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(858), 1,
      sym_ntag,
    STATE(432), 1,
      sym_comment,
  [11823] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(860), 1,
      sym_eq,
    STATE(433), 1,
      sym_comment,
  [11836] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(862), 1,
      sym_semicolon,
    STATE(434), 1,
      sym_comment,
  [11849] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(864), 1,
      sym_eq,
    STATE(435), 1,
      sym_comment,
  [11862] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(866), 1,
      sym_semicolon,
    STATE(436), 1,
      sym_comment,
  [11875] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(868), 1,
      sym_ntag,
    STATE(437), 1,
      sym_comment,
  [11888] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_comment,
  [11901] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(872), 1,
      sym_ntag,
    STATE(439), 1,
      sym_comment,
  [11914] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(874), 1,
      sym_semicolon,
    STATE(440), 1,
      sym_comment,
  [11927] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(876), 1,
      sym_ntag,
    STATE(441), 1,
      sym_comment,
  [11940] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_comment,
  [11953] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(880), 1,
      sym_ntag,
    STATE(443), 1,
      sym_comment,
  [11966] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(882), 1,
      sym_ntag,
    STATE(444), 1,
      sym_comment,
  [11979] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(884), 1,
      sym_ntag,
    STATE(445), 1,
      sym_comment,
  [11992] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(886), 1,
      sym_ntag,
    STATE(446), 1,
      sym_comment,
  [12005] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(379), 1,
      sym_END,
    ACTIONS(888), 1,
      sym_ntag,
    STATE(447), 1,
      sym_comment,
  [12018] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_comment,
  [12031] = 1,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
  [12035] = 1,
    ACTIONS(894), 1,
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
  [SMALL_STATE(64)] = 2924,
  [SMALL_STATE(65)] = 2969,
  [SMALL_STATE(66)] = 3014,
  [SMALL_STATE(67)] = 3045,
  [SMALL_STATE(68)] = 3076,
  [SMALL_STATE(69)] = 3103,
  [SMALL_STATE(70)] = 3132,
  [SMALL_STATE(71)] = 3158,
  [SMALL_STATE(72)] = 3210,
  [SMALL_STATE(73)] = 3236,
  [SMALL_STATE(74)] = 3262,
  [SMALL_STATE(75)] = 3314,
  [SMALL_STATE(76)] = 3360,
  [SMALL_STATE(77)] = 3406,
  [SMALL_STATE(78)] = 3452,
  [SMALL_STATE(79)] = 3498,
  [SMALL_STATE(80)] = 3544,
  [SMALL_STATE(81)] = 3590,
  [SMALL_STATE(82)] = 3629,
  [SMALL_STATE(83)] = 3672,
  [SMALL_STATE(84)] = 3715,
  [SMALL_STATE(85)] = 3758,
  [SMALL_STATE(86)] = 3801,
  [SMALL_STATE(87)] = 3840,
  [SMALL_STATE(88)] = 3883,
  [SMALL_STATE(89)] = 3926,
  [SMALL_STATE(90)] = 3969,
  [SMALL_STATE(91)] = 4009,
  [SMALL_STATE(92)] = 4049,
  [SMALL_STATE(93)] = 4089,
  [SMALL_STATE(94)] = 4129,
  [SMALL_STATE(95)] = 4169,
  [SMALL_STATE(96)] = 4209,
  [SMALL_STATE(97)] = 4249,
  [SMALL_STATE(98)] = 4289,
  [SMALL_STATE(99)] = 4329,
  [SMALL_STATE(100)] = 4369,
  [SMALL_STATE(101)] = 4409,
  [SMALL_STATE(102)] = 4446,
  [SMALL_STATE(103)] = 4483,
  [SMALL_STATE(104)] = 4520,
  [SMALL_STATE(105)] = 4557,
  [SMALL_STATE(106)] = 4594,
  [SMALL_STATE(107)] = 4631,
  [SMALL_STATE(108)] = 4668,
  [SMALL_STATE(109)] = 4702,
  [SMALL_STATE(110)] = 4736,
  [SMALL_STATE(111)] = 4770,
  [SMALL_STATE(112)] = 4804,
  [SMALL_STATE(113)] = 4834,
  [SMALL_STATE(114)] = 4854,
  [SMALL_STATE(115)] = 4888,
  [SMALL_STATE(116)] = 4922,
  [SMALL_STATE(117)] = 4956,
  [SMALL_STATE(118)] = 4990,
  [SMALL_STATE(119)] = 5024,
  [SMALL_STATE(120)] = 5048,
  [SMALL_STATE(121)] = 5082,
  [SMALL_STATE(122)] = 5116,
  [SMALL_STATE(123)] = 5150,
  [SMALL_STATE(124)] = 5184,
  [SMALL_STATE(125)] = 5218,
  [SMALL_STATE(126)] = 5240,
  [SMALL_STATE(127)] = 5264,
  [SMALL_STATE(128)] = 5298,
  [SMALL_STATE(129)] = 5332,
  [SMALL_STATE(130)] = 5366,
  [SMALL_STATE(131)] = 5400,
  [SMALL_STATE(132)] = 5434,
  [SMALL_STATE(133)] = 5462,
  [SMALL_STATE(134)] = 5496,
  [SMALL_STATE(135)] = 5530,
  [SMALL_STATE(136)] = 5564,
  [SMALL_STATE(137)] = 5598,
  [SMALL_STATE(138)] = 5632,
  [SMALL_STATE(139)] = 5666,
  [SMALL_STATE(140)] = 5686,
  [SMALL_STATE(141)] = 5720,
  [SMALL_STATE(142)] = 5754,
  [SMALL_STATE(143)] = 5788,
  [SMALL_STATE(144)] = 5822,
  [SMALL_STATE(145)] = 5856,
  [SMALL_STATE(146)] = 5890,
  [SMALL_STATE(147)] = 5924,
  [SMALL_STATE(148)] = 5958,
  [SMALL_STATE(149)] = 5992,
  [SMALL_STATE(150)] = 6026,
  [SMALL_STATE(151)] = 6060,
  [SMALL_STATE(152)] = 6094,
  [SMALL_STATE(153)] = 6128,
  [SMALL_STATE(154)] = 6157,
  [SMALL_STATE(155)] = 6186,
  [SMALL_STATE(156)] = 6215,
  [SMALL_STATE(157)] = 6246,
  [SMALL_STATE(158)] = 6277,
  [SMALL_STATE(159)] = 6306,
  [SMALL_STATE(160)] = 6325,
  [SMALL_STATE(161)] = 6354,
  [SMALL_STATE(162)] = 6383,
  [SMALL_STATE(163)] = 6412,
  [SMALL_STATE(164)] = 6443,
  [SMALL_STATE(165)] = 6474,
  [SMALL_STATE(166)] = 6503,
  [SMALL_STATE(167)] = 6534,
  [SMALL_STATE(168)] = 6563,
  [SMALL_STATE(169)] = 6592,
  [SMALL_STATE(170)] = 6623,
  [SMALL_STATE(171)] = 6654,
  [SMALL_STATE(172)] = 6685,
  [SMALL_STATE(173)] = 6716,
  [SMALL_STATE(174)] = 6745,
  [SMALL_STATE(175)] = 6776,
  [SMALL_STATE(176)] = 6805,
  [SMALL_STATE(177)] = 6836,
  [SMALL_STATE(178)] = 6867,
  [SMALL_STATE(179)] = 6898,
  [SMALL_STATE(180)] = 6927,
  [SMALL_STATE(181)] = 6958,
  [SMALL_STATE(182)] = 6979,
  [SMALL_STATE(183)] = 7010,
  [SMALL_STATE(184)] = 7041,
  [SMALL_STATE(185)] = 7070,
  [SMALL_STATE(186)] = 7099,
  [SMALL_STATE(187)] = 7130,
  [SMALL_STATE(188)] = 7159,
  [SMALL_STATE(189)] = 7190,
  [SMALL_STATE(190)] = 7219,
  [SMALL_STATE(191)] = 7247,
  [SMALL_STATE(192)] = 7273,
  [SMALL_STATE(193)] = 7297,
  [SMALL_STATE(194)] = 7319,
  [SMALL_STATE(195)] = 7347,
  [SMALL_STATE(196)] = 7375,
  [SMALL_STATE(197)] = 7401,
  [SMALL_STATE(198)] = 7427,
  [SMALL_STATE(199)] = 7455,
  [SMALL_STATE(200)] = 7483,
  [SMALL_STATE(201)] = 7511,
  [SMALL_STATE(202)] = 7539,
  [SMALL_STATE(203)] = 7567,
  [SMALL_STATE(204)] = 7589,
  [SMALL_STATE(205)] = 7615,
  [SMALL_STATE(206)] = 7640,
  [SMALL_STATE(207)] = 7665,
  [SMALL_STATE(208)] = 7690,
  [SMALL_STATE(209)] = 7707,
  [SMALL_STATE(210)] = 7732,
  [SMALL_STATE(211)] = 7757,
  [SMALL_STATE(212)] = 7778,
  [SMALL_STATE(213)] = 7803,
  [SMALL_STATE(214)] = 7824,
  [SMALL_STATE(215)] = 7849,
  [SMALL_STATE(216)] = 7874,
  [SMALL_STATE(217)] = 7897,
  [SMALL_STATE(218)] = 7920,
  [SMALL_STATE(219)] = 7939,
  [SMALL_STATE(220)] = 7962,
  [SMALL_STATE(221)] = 7987,
  [SMALL_STATE(222)] = 8008,
  [SMALL_STATE(223)] = 8027,
  [SMALL_STATE(224)] = 8048,
  [SMALL_STATE(225)] = 8073,
  [SMALL_STATE(226)] = 8098,
  [SMALL_STATE(227)] = 8121,
  [SMALL_STATE(228)] = 8142,
  [SMALL_STATE(229)] = 8167,
  [SMALL_STATE(230)] = 8192,
  [SMALL_STATE(231)] = 8217,
  [SMALL_STATE(232)] = 8242,
  [SMALL_STATE(233)] = 8267,
  [SMALL_STATE(234)] = 8292,
  [SMALL_STATE(235)] = 8317,
  [SMALL_STATE(236)] = 8342,
  [SMALL_STATE(237)] = 8367,
  [SMALL_STATE(238)] = 8392,
  [SMALL_STATE(239)] = 8417,
  [SMALL_STATE(240)] = 8442,
  [SMALL_STATE(241)] = 8467,
  [SMALL_STATE(242)] = 8490,
  [SMALL_STATE(243)] = 8515,
  [SMALL_STATE(244)] = 8540,
  [SMALL_STATE(245)] = 8565,
  [SMALL_STATE(246)] = 8590,
  [SMALL_STATE(247)] = 8615,
  [SMALL_STATE(248)] = 8640,
  [SMALL_STATE(249)] = 8659,
  [SMALL_STATE(250)] = 8684,
  [SMALL_STATE(251)] = 8709,
  [SMALL_STATE(252)] = 8734,
  [SMALL_STATE(253)] = 8759,
  [SMALL_STATE(254)] = 8778,
  [SMALL_STATE(255)] = 8803,
  [SMALL_STATE(256)] = 8828,
  [SMALL_STATE(257)] = 8847,
  [SMALL_STATE(258)] = 8872,
  [SMALL_STATE(259)] = 8897,
  [SMALL_STATE(260)] = 8922,
  [SMALL_STATE(261)] = 8947,
  [SMALL_STATE(262)] = 8972,
  [SMALL_STATE(263)] = 8997,
  [SMALL_STATE(264)] = 9022,
  [SMALL_STATE(265)] = 9047,
  [SMALL_STATE(266)] = 9072,
  [SMALL_STATE(267)] = 9097,
  [SMALL_STATE(268)] = 9122,
  [SMALL_STATE(269)] = 9144,
  [SMALL_STATE(270)] = 9166,
  [SMALL_STATE(271)] = 9184,
  [SMALL_STATE(272)] = 9204,
  [SMALL_STATE(273)] = 9222,
  [SMALL_STATE(274)] = 9242,
  [SMALL_STATE(275)] = 9264,
  [SMALL_STATE(276)] = 9284,
  [SMALL_STATE(277)] = 9302,
  [SMALL_STATE(278)] = 9320,
  [SMALL_STATE(279)] = 9338,
  [SMALL_STATE(280)] = 9360,
  [SMALL_STATE(281)] = 9378,
  [SMALL_STATE(282)] = 9400,
  [SMALL_STATE(283)] = 9418,
  [SMALL_STATE(284)] = 9438,
  [SMALL_STATE(285)] = 9456,
  [SMALL_STATE(286)] = 9476,
  [SMALL_STATE(287)] = 9494,
  [SMALL_STATE(288)] = 9516,
  [SMALL_STATE(289)] = 9538,
  [SMALL_STATE(290)] = 9556,
  [SMALL_STATE(291)] = 9578,
  [SMALL_STATE(292)] = 9594,
  [SMALL_STATE(293)] = 9614,
  [SMALL_STATE(294)] = 9636,
  [SMALL_STATE(295)] = 9656,
  [SMALL_STATE(296)] = 9676,
  [SMALL_STATE(297)] = 9694,
  [SMALL_STATE(298)] = 9712,
  [SMALL_STATE(299)] = 9732,
  [SMALL_STATE(300)] = 9752,
  [SMALL_STATE(301)] = 9772,
  [SMALL_STATE(302)] = 9794,
  [SMALL_STATE(303)] = 9816,
  [SMALL_STATE(304)] = 9836,
  [SMALL_STATE(305)] = 9856,
  [SMALL_STATE(306)] = 9875,
  [SMALL_STATE(307)] = 9894,
  [SMALL_STATE(308)] = 9911,
  [SMALL_STATE(309)] = 9930,
  [SMALL_STATE(310)] = 9949,
  [SMALL_STATE(311)] = 9966,
  [SMALL_STATE(312)] = 9981,
  [SMALL_STATE(313)] = 9998,
  [SMALL_STATE(314)] = 10015,
  [SMALL_STATE(315)] = 10032,
  [SMALL_STATE(316)] = 10049,
  [SMALL_STATE(317)] = 10068,
  [SMALL_STATE(318)] = 10085,
  [SMALL_STATE(319)] = 10102,
  [SMALL_STATE(320)] = 10121,
  [SMALL_STATE(321)] = 10140,
  [SMALL_STATE(322)] = 10157,
  [SMALL_STATE(323)] = 10176,
  [SMALL_STATE(324)] = 10195,
  [SMALL_STATE(325)] = 10212,
  [SMALL_STATE(326)] = 10231,
  [SMALL_STATE(327)] = 10248,
  [SMALL_STATE(328)] = 10265,
  [SMALL_STATE(329)] = 10282,
  [SMALL_STATE(330)] = 10301,
  [SMALL_STATE(331)] = 10318,
  [SMALL_STATE(332)] = 10335,
  [SMALL_STATE(333)] = 10354,
  [SMALL_STATE(334)] = 10371,
  [SMALL_STATE(335)] = 10388,
  [SMALL_STATE(336)] = 10407,
  [SMALL_STATE(337)] = 10424,
  [SMALL_STATE(338)] = 10439,
  [SMALL_STATE(339)] = 10458,
  [SMALL_STATE(340)] = 10477,
  [SMALL_STATE(341)] = 10494,
  [SMALL_STATE(342)] = 10511,
  [SMALL_STATE(343)] = 10528,
  [SMALL_STATE(344)] = 10547,
  [SMALL_STATE(345)] = 10564,
  [SMALL_STATE(346)] = 10583,
  [SMALL_STATE(347)] = 10602,
  [SMALL_STATE(348)] = 10619,
  [SMALL_STATE(349)] = 10638,
  [SMALL_STATE(350)] = 10657,
  [SMALL_STATE(351)] = 10674,
  [SMALL_STATE(352)] = 10693,
  [SMALL_STATE(353)] = 10712,
  [SMALL_STATE(354)] = 10729,
  [SMALL_STATE(355)] = 10743,
  [SMALL_STATE(356)] = 10759,
  [SMALL_STATE(357)] = 10773,
  [SMALL_STATE(358)] = 10787,
  [SMALL_STATE(359)] = 10801,
  [SMALL_STATE(360)] = 10815,
  [SMALL_STATE(361)] = 10831,
  [SMALL_STATE(362)] = 10847,
  [SMALL_STATE(363)] = 10863,
  [SMALL_STATE(364)] = 10879,
  [SMALL_STATE(365)] = 10893,
  [SMALL_STATE(366)] = 10909,
  [SMALL_STATE(367)] = 10923,
  [SMALL_STATE(368)] = 10939,
  [SMALL_STATE(369)] = 10955,
  [SMALL_STATE(370)] = 10969,
  [SMALL_STATE(371)] = 10983,
  [SMALL_STATE(372)] = 10999,
  [SMALL_STATE(373)] = 11015,
  [SMALL_STATE(374)] = 11031,
  [SMALL_STATE(375)] = 11045,
  [SMALL_STATE(376)] = 11061,
  [SMALL_STATE(377)] = 11075,
  [SMALL_STATE(378)] = 11089,
  [SMALL_STATE(379)] = 11103,
  [SMALL_STATE(380)] = 11117,
  [SMALL_STATE(381)] = 11133,
  [SMALL_STATE(382)] = 11147,
  [SMALL_STATE(383)] = 11161,
  [SMALL_STATE(384)] = 11175,
  [SMALL_STATE(385)] = 11191,
  [SMALL_STATE(386)] = 11205,
  [SMALL_STATE(387)] = 11221,
  [SMALL_STATE(388)] = 11235,
  [SMALL_STATE(389)] = 11251,
  [SMALL_STATE(390)] = 11264,
  [SMALL_STATE(391)] = 11277,
  [SMALL_STATE(392)] = 11290,
  [SMALL_STATE(393)] = 11303,
  [SMALL_STATE(394)] = 11316,
  [SMALL_STATE(395)] = 11329,
  [SMALL_STATE(396)] = 11342,
  [SMALL_STATE(397)] = 11355,
  [SMALL_STATE(398)] = 11368,
  [SMALL_STATE(399)] = 11381,
  [SMALL_STATE(400)] = 11394,
  [SMALL_STATE(401)] = 11407,
  [SMALL_STATE(402)] = 11420,
  [SMALL_STATE(403)] = 11433,
  [SMALL_STATE(404)] = 11446,
  [SMALL_STATE(405)] = 11459,
  [SMALL_STATE(406)] = 11472,
  [SMALL_STATE(407)] = 11485,
  [SMALL_STATE(408)] = 11498,
  [SMALL_STATE(409)] = 11511,
  [SMALL_STATE(410)] = 11524,
  [SMALL_STATE(411)] = 11537,
  [SMALL_STATE(412)] = 11550,
  [SMALL_STATE(413)] = 11563,
  [SMALL_STATE(414)] = 11576,
  [SMALL_STATE(415)] = 11589,
  [SMALL_STATE(416)] = 11602,
  [SMALL_STATE(417)] = 11615,
  [SMALL_STATE(418)] = 11628,
  [SMALL_STATE(419)] = 11641,
  [SMALL_STATE(420)] = 11654,
  [SMALL_STATE(421)] = 11667,
  [SMALL_STATE(422)] = 11680,
  [SMALL_STATE(423)] = 11693,
  [SMALL_STATE(424)] = 11706,
  [SMALL_STATE(425)] = 11719,
  [SMALL_STATE(426)] = 11732,
  [SMALL_STATE(427)] = 11745,
  [SMALL_STATE(428)] = 11758,
  [SMALL_STATE(429)] = 11771,
  [SMALL_STATE(430)] = 11784,
  [SMALL_STATE(431)] = 11797,
  [SMALL_STATE(432)] = 11810,
  [SMALL_STATE(433)] = 11823,
  [SMALL_STATE(434)] = 11836,
  [SMALL_STATE(435)] = 11849,
  [SMALL_STATE(436)] = 11862,
  [SMALL_STATE(437)] = 11875,
  [SMALL_STATE(438)] = 11888,
  [SMALL_STATE(439)] = 11901,
  [SMALL_STATE(440)] = 11914,
  [SMALL_STATE(441)] = 11927,
  [SMALL_STATE(442)] = 11940,
  [SMALL_STATE(443)] = 11953,
  [SMALL_STATE(444)] = 11966,
  [SMALL_STATE(445)] = 11979,
  [SMALL_STATE(446)] = 11992,
  [SMALL_STATE(447)] = 12005,
  [SMALL_STATE(448)] = 12018,
  [SMALL_STATE(449)] = 12031,
  [SMALL_STATE(450)] = 12035,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(404),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(397),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(395),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(394),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(393),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(384),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(406),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 7),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 9),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 9),
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
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 8),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 6),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subreadings, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subreadings, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_prefix, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_prefix, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_special_list, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_special_list, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 8),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 8),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 8),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 8),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 8),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 8),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 7),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 7),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 11),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 11),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_sets, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_sets, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 7),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 7),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 7),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 6),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 6),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 7),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 6),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 6),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 6),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(281),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglist, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_target, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context, 2), SHIFT_REPEAT(117),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(269),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(248),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(248),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_target, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contextpos, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contextpos, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleflag, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruleflag, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(203),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_tag, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(279),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(221),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compotag, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compotag, 3),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(227),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(248),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(248),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_tag, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(272),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(275),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setname, 1),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(288),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname_t, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2), SHIFT_REPEAT(396),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2), SHIFT_REPEAT(301),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 2),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 2), SHIFT_REPEAT(363),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__to_from, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 1),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2), SHIFT_REPEAT(250),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 5),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 7),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_list_name, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [828] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
