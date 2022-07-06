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
#define STATE_COUNT 517
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  sym_END = 1,
  sym_eq = 2,
  sym_pluseq = 3,
  sym_semicolon = 4,
  aux_sym_special_list_name_token1 = 5,
  aux_sym_special_list_name_token2 = 6,
  aux_sym_special_list_name_token3 = 7,
  aux_sym_special_list_name_token4 = 8,
  sym_STATIC_SETS = 9,
  sym_MAPPING_PREFIX = 10,
  sym_SUBREADINGS = 11,
  sym_RTL = 12,
  sym_LTR = 13,
  sym_OPTIONS = 14,
  sym_LIST_TAGS = 15,
  sym_PARENTHESES = 16,
  sym_LIST = 17,
  sym_SET = 18,
  sym_INCLUDE = 19,
  aux_sym_section_header_token1 = 20,
  aux_sym_section_header_token2 = 21,
  aux_sym_section_header_token3 = 22,
  aux_sym_section_header_token4 = 23,
  aux_sym_section_header_token5 = 24,
  aux_sym_section_header_token6 = 25,
  aux_sym_section_header_token7 = 26,
  aux_sym_section_header_token8 = 27,
  anon_sym_LF = 28,
  sym_ANCHOR = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  sym_IF = 32,
  sym_TARGET = 33,
  anon_sym_COLON = 34,
  aux_sym_rule_token1 = 35,
  sym_EXCEPT = 36,
  sym_BEFORE = 37,
  sym_AFTER = 38,
  sym_TO = 39,
  sym_FROM = 40,
  sym_WITHCHILD = 41,
  sym_NOCHILD = 42,
  sym_WITH = 43,
  sym_ONCE = 44,
  sym_ALWAYS = 45,
  sym_TEMPLATE = 46,
  sym_context_modifier = 47,
  sym_BARRIER = 48,
  sym_LINK = 49,
  sym_OR = 50,
  anon_sym_LBRACK = 51,
  anon_sym_COMMA = 52,
  anon_sym_RBRACK = 53,
  sym_set_op = 54,
  sym_rawpath = 55,
  sym_contextpos = 56,
  sym_prefix = 57,
  sym_ruletype = 58,
  sym_ruletype_substitute_etc = 59,
  sym_ruletype_parentchild = 60,
  sym_ruletype_relation = 61,
  sym_ruletype_relations = 62,
  sym_ruletype_map_etc = 63,
  sym_ruletype_addcohort = 64,
  sym_ruletype_mergecohorts = 65,
  sym_ruletype_move = 66,
  sym_ruletype_switch = 67,
  sym_ruletype_external = 68,
  sym_ruleflag_name = 69,
  sym_subreading = 70,
  aux_sym_setname_token1 = 71,
  aux_sym_setname_t_token1 = 72,
  sym_ntag = 73,
  sym_qtag = 74,
  aux_sym_comment_token1 = 75,
  aux_sym_comment_token2 = 76,
  sym_source_file = 77,
  sym_special_list_name = 78,
  sym_set_special_list = 79,
  sym_static_sets = 80,
  sym_mapping_prefix = 81,
  sym_subreadings = 82,
  sym_options = 83,
  sym_list_tags = 84,
  sym_parentheses = 85,
  sym_list = 86,
  sym_set = 87,
  sym_include = 88,
  sym_section_header = 89,
  sym_anchor = 90,
  aux_sym__context = 91,
  sym_rule_target = 92,
  sym__shared_rule_end = 93,
  sym_rule_name = 94,
  sym_rule = 95,
  sym_rule_substitute_etc = 96,
  sym_rule_map_etc = 97,
  sym__to_from = 98,
  sym_rule_parentchild = 99,
  sym__child_specifier = 100,
  sym_rule_move = 101,
  sym_rule_switch = 102,
  sym_rule_relation = 103,
  sym_rule_relations = 104,
  sym_rule_addcohort = 105,
  sym_rule_mergecohorts = 106,
  sym_rule_external = 107,
  sym_template = 108,
  sym_contexttest = 109,
  sym_inlineset = 110,
  sym_inlineset_single = 111,
  sym_taglist = 112,
  sym_compotag = 113,
  sym_filepath = 114,
  sym_tag = 115,
  sym_ruleflag = 116,
  sym_setname = 117,
  sym_setname_t = 118,
  sym_comment = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_static_sets_repeat1 = 121,
  aux_sym_options_repeat1 = 122,
  aux_sym_parentheses_repeat1 = 123,
  aux_sym_contexttest_repeat1 = 124,
  aux_sym_contexttest_repeat2 = 125,
  aux_sym_contexttest_repeat3 = 126,
  aux_sym_inlineset_repeat1 = 127,
  aux_sym_taglist_repeat1 = 128,
  aux_sym_compotag_repeat1 = 129,
  aux_sym_ruleflag_repeat1 = 130,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_END] = "END",
  [sym_eq] = "eq",
  [sym_pluseq] = "pluseq",
  [sym_semicolon] = "semicolon",
  [aux_sym_special_list_name_token1] = "special_list_name_token1",
  [aux_sym_special_list_name_token2] = "special_list_name_token2",
  [aux_sym_special_list_name_token3] = "special_list_name_token3",
  [aux_sym_special_list_name_token4] = "special_list_name_token4",
  [sym_STATIC_SETS] = "STATIC_SETS",
  [sym_MAPPING_PREFIX] = "MAPPING_PREFIX",
  [sym_SUBREADINGS] = "SUBREADINGS",
  [sym_RTL] = "RTL",
  [sym_LTR] = "LTR",
  [sym_OPTIONS] = "OPTIONS",
  [sym_LIST_TAGS] = "LIST_TAGS",
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
  [anon_sym_LF] = "\n",
  [sym_ANCHOR] = "ANCHOR",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_IF] = "IF",
  [sym_TARGET] = "TARGET",
  [anon_sym_COLON] = ":",
  [aux_sym_rule_token1] = "rule_token1",
  [sym_EXCEPT] = "EXCEPT",
  [sym_BEFORE] = "BEFORE",
  [sym_AFTER] = "AFTER",
  [sym_TO] = "TO",
  [sym_FROM] = "FROM",
  [sym_WITHCHILD] = "WITHCHILD",
  [sym_NOCHILD] = "NOCHILD",
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
  [sym_contextpos] = "contextpos",
  [sym_prefix] = "prefix",
  [sym_ruletype] = "ruletype",
  [sym_ruletype_substitute_etc] = "ruletype_substitute_etc",
  [sym_ruletype_parentchild] = "ruletype_parentchild",
  [sym_ruletype_relation] = "ruletype_relation",
  [sym_ruletype_relations] = "ruletype_relations",
  [sym_ruletype_map_etc] = "ruletype_map_etc",
  [sym_ruletype_addcohort] = "ruletype_addcohort",
  [sym_ruletype_mergecohorts] = "ruletype_mergecohorts",
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
  [sym_options] = "options",
  [sym_list_tags] = "list_tags",
  [sym_parentheses] = "parentheses",
  [sym_list] = "list",
  [sym_set] = "set",
  [sym_include] = "include",
  [sym_section_header] = "section_header",
  [sym_anchor] = "anchor",
  [aux_sym__context] = "_context",
  [sym_rule_target] = "rule_target",
  [sym__shared_rule_end] = "_shared_rule_end",
  [sym_rule_name] = "rule_name",
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
  [sym_rule_mergecohorts] = "rule_mergecohorts",
  [sym_rule_external] = "rule_external",
  [sym_template] = "template",
  [sym_contexttest] = "contexttest",
  [sym_inlineset] = "inlineset",
  [sym_inlineset_single] = "inlineset_single",
  [sym_taglist] = "taglist",
  [sym_compotag] = "compotag",
  [sym_filepath] = "filepath",
  [sym_tag] = "tag",
  [sym_ruleflag] = "ruleflag",
  [sym_setname] = "setname",
  [sym_setname_t] = "setname_t",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_static_sets_repeat1] = "static_sets_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_parentheses_repeat1] = "parentheses_repeat1",
  [aux_sym_contexttest_repeat1] = "contexttest_repeat1",
  [aux_sym_contexttest_repeat2] = "contexttest_repeat2",
  [aux_sym_contexttest_repeat3] = "contexttest_repeat3",
  [aux_sym_inlineset_repeat1] = "inlineset_repeat1",
  [aux_sym_taglist_repeat1] = "taglist_repeat1",
  [aux_sym_compotag_repeat1] = "compotag_repeat1",
  [aux_sym_ruleflag_repeat1] = "ruleflag_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_END] = sym_END,
  [sym_eq] = sym_eq,
  [sym_pluseq] = sym_pluseq,
  [sym_semicolon] = sym_semicolon,
  [aux_sym_special_list_name_token1] = aux_sym_special_list_name_token1,
  [aux_sym_special_list_name_token2] = aux_sym_special_list_name_token2,
  [aux_sym_special_list_name_token3] = aux_sym_special_list_name_token3,
  [aux_sym_special_list_name_token4] = aux_sym_special_list_name_token4,
  [sym_STATIC_SETS] = sym_STATIC_SETS,
  [sym_MAPPING_PREFIX] = sym_MAPPING_PREFIX,
  [sym_SUBREADINGS] = sym_SUBREADINGS,
  [sym_RTL] = sym_RTL,
  [sym_LTR] = sym_LTR,
  [sym_OPTIONS] = sym_OPTIONS,
  [sym_LIST_TAGS] = sym_LIST_TAGS,
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
  [anon_sym_LF] = anon_sym_LF,
  [sym_ANCHOR] = sym_ANCHOR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_IF] = sym_IF,
  [sym_TARGET] = sym_TARGET,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_rule_token1] = aux_sym_rule_token1,
  [sym_EXCEPT] = sym_EXCEPT,
  [sym_BEFORE] = sym_BEFORE,
  [sym_AFTER] = sym_AFTER,
  [sym_TO] = sym_TO,
  [sym_FROM] = sym_FROM,
  [sym_WITHCHILD] = sym_WITHCHILD,
  [sym_NOCHILD] = sym_NOCHILD,
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
  [sym_contextpos] = sym_contextpos,
  [sym_prefix] = sym_prefix,
  [sym_ruletype] = sym_ruletype,
  [sym_ruletype_substitute_etc] = sym_ruletype_substitute_etc,
  [sym_ruletype_parentchild] = sym_ruletype_parentchild,
  [sym_ruletype_relation] = sym_ruletype_relation,
  [sym_ruletype_relations] = sym_ruletype_relations,
  [sym_ruletype_map_etc] = sym_ruletype_map_etc,
  [sym_ruletype_addcohort] = sym_ruletype_addcohort,
  [sym_ruletype_mergecohorts] = sym_ruletype_mergecohorts,
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
  [sym_options] = sym_options,
  [sym_list_tags] = sym_list_tags,
  [sym_parentheses] = sym_parentheses,
  [sym_list] = sym_list,
  [sym_set] = sym_set,
  [sym_include] = sym_include,
  [sym_section_header] = sym_section_header,
  [sym_anchor] = sym_anchor,
  [aux_sym__context] = aux_sym__context,
  [sym_rule_target] = sym_rule_target,
  [sym__shared_rule_end] = sym__shared_rule_end,
  [sym_rule_name] = sym_rule_name,
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
  [sym_rule_mergecohorts] = sym_rule_mergecohorts,
  [sym_rule_external] = sym_rule_external,
  [sym_template] = sym_template,
  [sym_contexttest] = sym_contexttest,
  [sym_inlineset] = sym_inlineset,
  [sym_inlineset_single] = sym_inlineset_single,
  [sym_taglist] = sym_taglist,
  [sym_compotag] = sym_compotag,
  [sym_filepath] = sym_filepath,
  [sym_tag] = sym_tag,
  [sym_ruleflag] = sym_ruleflag,
  [sym_setname] = sym_setname,
  [sym_setname_t] = sym_setname_t,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_static_sets_repeat1] = aux_sym_static_sets_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_parentheses_repeat1] = aux_sym_parentheses_repeat1,
  [aux_sym_contexttest_repeat1] = aux_sym_contexttest_repeat1,
  [aux_sym_contexttest_repeat2] = aux_sym_contexttest_repeat2,
  [aux_sym_contexttest_repeat3] = aux_sym_contexttest_repeat3,
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
  [sym_pluseq] = {
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
  [aux_sym_special_list_name_token4] = {
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
  [sym_OPTIONS] = {
    .visible = true,
    .named = true,
  },
  [sym_LIST_TAGS] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_ANCHOR] = {
    .visible = true,
    .named = true,
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
  [aux_sym_rule_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_EXCEPT] = {
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
  [sym_contextpos] = {
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
  [sym_ruletype_mergecohorts] = {
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
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_list_tags] = {
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
  [sym_anchor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__context] = {
    .visible = false,
    .named = false,
  },
  [sym_rule_target] = {
    .visible = true,
    .named = true,
  },
  [sym__shared_rule_end] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_name] = {
    .visible = true,
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
  [sym_rule_mergecohorts] = {
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
  [aux_sym_options_repeat1] = {
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
  [aux_sym_contexttest_repeat3] = {
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
      if (eof) ADVANCE(406);
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ':') ADVANCE(468);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == '[') ADVANCE(496);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(521);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(526);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(536);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(522);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(499);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(1017);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(720);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(1016);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(717);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(570);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(499);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == ':') ADVANCE(468);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(470);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(1017);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(1016);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(572);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(586);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ':') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ':') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ':') ADVANCE(469);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(648);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(617);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(627);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(718);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(717);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead == '[') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(414);
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
          lookahead != ';') ADVANCE(719);
      END_STATE();
    case 39:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(315);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(554);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(184);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 147:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(465);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(538);
      END_STATE();
    case 150:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      END_STATE();
    case 151:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 154:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 161:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 164:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 165:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(562);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(483);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 170:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(270);
      END_STATE();
    case 173:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 174:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 175:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 176:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 177:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 210:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(493);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 231:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 232:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 236:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 237:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 238:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 260:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 285:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(555);
      END_STATE();
    case 286:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(555);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 287:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(550);
      END_STATE();
    case 288:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 290:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 291:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 292:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 293:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 294:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 295:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(454);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(428);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 348:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 349:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 350:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 392:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 393:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 395:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 396:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 397:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 398:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(426);
      END_STATE();
    case 399:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(550);
      END_STATE();
    case 400:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 401:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 402:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 403:
      if (eof) ADVANCE(406);
      if (lookahead == '\n') ADVANCE(460);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '\\') ADVANCE(1017);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(720);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(778);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(900);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(817);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1008);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(732);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1009);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(923);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(733);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(780);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(781);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(403)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(1016);
      END_STATE();
    case 404:
      if (eof) ADVANCE(406);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(393);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      END_STATE();
    case 405:
      if (eof) ADVANCE(406);
      if (lookahead == '#') ADVANCE(1026);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == ',') ADVANCE(497);
      if (lookahead == ';') ADVANCE(415);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == '[') ADVANCE(496);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(521);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(526);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(536);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(537);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(522);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(527);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(499);
      if (lookahead != 0) ADVANCE(518);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_END);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_END);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_END);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(503);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_END);
      if (lookahead != 0) ADVANCE(1030);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_pluseq);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_special_list_name_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_special_list_name_token1);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_special_list_name_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_special_list_name_token2);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_special_list_name_token3);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_special_list_name_token3);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_special_list_name_token4);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_special_list_name_token4);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_STATIC_SETS);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_STATIC_SETS);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_MAPPING_PREFIX);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_MAPPING_PREFIX);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_SUBREADINGS);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_SUBREADINGS);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_RTL);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_LTR);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_OPTIONS);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_OPTIONS);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_LIST_TAGS);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_LIST_TAGS);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_PARENTHESES);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_PARENTHESES);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_LIST);
      if (lookahead == '-') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_LIST);
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_SET);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(746);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(800);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_SET);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_INCLUDE);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_INCLUDE);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_section_header_token1);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_section_header_token2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_section_header_token2);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_section_header_token3);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_section_header_token3);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_section_header_token4);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_section_header_token4);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_section_header_token5);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_section_header_token5);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_section_header_token6);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_section_header_token6);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_section_header_token7);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_section_header_token7);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_section_header_token8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_section_header_token8);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ANCHOR);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ANCHOR);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_IF);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_TARGET);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_TARGET);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_rule_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_EXCEPT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_EXCEPT);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_BEFORE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_BEFORE);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_AFTER);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_AFTER);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
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
      ACCEPT_TOKEN(sym_WITHCHILD);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_NOCHILD);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_NOCHILD);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_WITH);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_WITH);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
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
      ACCEPT_TOKEN(sym_TEMPLATE);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_context_modifier);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_context_modifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_BARRIER);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_BARRIER);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_LINK);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_LINK);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_OR);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LBRACK);
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
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(411);
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
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == ',') ADVANCE(504);
      if (lookahead == '[') ADVANCE(719);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == ';') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_contextpos);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_prefix);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == ':') ADVANCE(719);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(65);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(184);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ruletype);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ruletype_substitute_etc);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ruletype_substitute_etc);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ruletype_parentchild);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ruletype_parentchild);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ruletype_relation);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ruletype_relation);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ruletype_relations);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ruletype_relations);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(916);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(281);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ruletype_addcohort);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ruletype_addcohort);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ruletype_mergecohorts);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ruletype_mergecohorts);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ruletype_move);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ruletype_move);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ruletype_switch);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ruletype_switch);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ruletype_external);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ruletype_external);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ruleflag_name);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ruleflag_name);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_subreading);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_subreading);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '"') ADVANCE(717);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ':') ADVANCE(570);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '_') ADVANCE(582);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(715);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(638);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(645);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(690);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 604:
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
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 620:
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
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(657);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(610);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(620);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(614);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 687:
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
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 689:
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
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 691:
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
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(1025);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    case 719:
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
          lookahead != ';') ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '"') ADVANCE(722);
      if (lookahead == '(') ADVANCE(1020);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '"') ADVANCE(723);
      if (lookahead == '\\') ADVANCE(1019);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '"') ADVANCE(723);
      if (lookahead == '\\') ADVANCE(1019);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(3);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '#') ADVANCE(1023);
      if (lookahead == '(') ADVANCE(1020);
      if (lookahead == '\\') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(776);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(937);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(998);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1013);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(800);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(984);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(818);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(871);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(750);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(815);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(766);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(928);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(736);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(969);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1015);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(552);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1016);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(1016);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1016);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(722);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1020);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '\\') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1020);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(1020);
      if (lookahead == '\\') ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_qtag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1023);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(1024);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(1025);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1026);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1027);
      if (lookahead == '#') ADVANCE(1024);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(1030);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(1030);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(1030);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1028);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0) ADVANCE(1030);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 404},
  [2] = {.lex_state = 404},
  [3] = {.lex_state = 404},
  [4] = {.lex_state = 403},
  [5] = {.lex_state = 404},
  [6] = {.lex_state = 404},
  [7] = {.lex_state = 404},
  [8] = {.lex_state = 404},
  [9] = {.lex_state = 404},
  [10] = {.lex_state = 404},
  [11] = {.lex_state = 404},
  [12] = {.lex_state = 404},
  [13] = {.lex_state = 404},
  [14] = {.lex_state = 404},
  [15] = {.lex_state = 404},
  [16] = {.lex_state = 404},
  [17] = {.lex_state = 404},
  [18] = {.lex_state = 404},
  [19] = {.lex_state = 404},
  [20] = {.lex_state = 404},
  [21] = {.lex_state = 404},
  [22] = {.lex_state = 404},
  [23] = {.lex_state = 404},
  [24] = {.lex_state = 404},
  [25] = {.lex_state = 404},
  [26] = {.lex_state = 404},
  [27] = {.lex_state = 404},
  [28] = {.lex_state = 404},
  [29] = {.lex_state = 404},
  [30] = {.lex_state = 404},
  [31] = {.lex_state = 404},
  [32] = {.lex_state = 404},
  [33] = {.lex_state = 404},
  [34] = {.lex_state = 404},
  [35] = {.lex_state = 404},
  [36] = {.lex_state = 404},
  [37] = {.lex_state = 404},
  [38] = {.lex_state = 404},
  [39] = {.lex_state = 404},
  [40] = {.lex_state = 404},
  [41] = {.lex_state = 404},
  [42] = {.lex_state = 404},
  [43] = {.lex_state = 404},
  [44] = {.lex_state = 404},
  [45] = {.lex_state = 404},
  [46] = {.lex_state = 404},
  [47] = {.lex_state = 404},
  [48] = {.lex_state = 404},
  [49] = {.lex_state = 404},
  [50] = {.lex_state = 404},
  [51] = {.lex_state = 404},
  [52] = {.lex_state = 404},
  [53] = {.lex_state = 404},
  [54] = {.lex_state = 404},
  [55] = {.lex_state = 404},
  [56] = {.lex_state = 404},
  [57] = {.lex_state = 404},
  [58] = {.lex_state = 404},
  [59] = {.lex_state = 404},
  [60] = {.lex_state = 404},
  [61] = {.lex_state = 404},
  [62] = {.lex_state = 404},
  [63] = {.lex_state = 404},
  [64] = {.lex_state = 404},
  [65] = {.lex_state = 404},
  [66] = {.lex_state = 404},
  [67] = {.lex_state = 404},
  [68] = {.lex_state = 404},
  [69] = {.lex_state = 404},
  [70] = {.lex_state = 404},
  [71] = {.lex_state = 404},
  [72] = {.lex_state = 404},
  [73] = {.lex_state = 404},
  [74] = {.lex_state = 404},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 404},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 25},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 25},
  [153] = {.lex_state = 26},
  [154] = {.lex_state = 25},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 25},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 25},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 25},
  [164] = {.lex_state = 25},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 25},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 15},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 26},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 25},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 20},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 404},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 404},
  [213] = {.lex_state = 23},
  [214] = {.lex_state = 404},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 14},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 404},
  [224] = {.lex_state = 404},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 404},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 404},
  [229] = {.lex_state = 404},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 404},
  [238] = {.lex_state = 404},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 404},
  [241] = {.lex_state = 404},
  [242] = {.lex_state = 14},
  [243] = {.lex_state = 404},
  [244] = {.lex_state = 14},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 404},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 404},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 404},
  [252] = {.lex_state = 404},
  [253] = {.lex_state = 404},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 404},
  [258] = {.lex_state = 404},
  [259] = {.lex_state = 404},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 404},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 14},
  [264] = {.lex_state = 404},
  [265] = {.lex_state = 404},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 404},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 26},
  [281] = {.lex_state = 404},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 404},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 404},
  [288] = {.lex_state = 404},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 404},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 404},
  [293] = {.lex_state = 404},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 14},
  [298] = {.lex_state = 14},
  [299] = {.lex_state = 404},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 14},
  [302] = {.lex_state = 23},
  [303] = {.lex_state = 404},
  [304] = {.lex_state = 23},
  [305] = {.lex_state = 23},
  [306] = {.lex_state = 14},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 24},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 24},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 24},
  [316] = {.lex_state = 17},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 404},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 404},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 404},
  [331] = {.lex_state = 404},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 404},
  [334] = {.lex_state = 14},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 404},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 404},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 404},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 404},
  [352] = {.lex_state = 404},
  [353] = {.lex_state = 404},
  [354] = {.lex_state = 404},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 404},
  [357] = {.lex_state = 404},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 404},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 404},
  [366] = {.lex_state = 24},
  [367] = {.lex_state = 24},
  [368] = {.lex_state = 404},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 404},
  [371] = {.lex_state = 5},
  [372] = {.lex_state = 404},
  [373] = {.lex_state = 24},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 5},
  [376] = {.lex_state = 404},
  [377] = {.lex_state = 25},
  [378] = {.lex_state = 404},
  [379] = {.lex_state = 7},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 24},
  [382] = {.lex_state = 5},
  [383] = {.lex_state = 5},
  [384] = {.lex_state = 404},
  [385] = {.lex_state = 5},
  [386] = {.lex_state = 404},
  [387] = {.lex_state = 404},
  [388] = {.lex_state = 14},
  [389] = {.lex_state = 404},
  [390] = {.lex_state = 404},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 404},
  [393] = {.lex_state = 404},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 404},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 404},
  [400] = {.lex_state = 25},
  [401] = {.lex_state = 6},
  [402] = {.lex_state = 404},
  [403] = {.lex_state = 5},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 404},
  [407] = {.lex_state = 404},
  [408] = {.lex_state = 7},
  [409] = {.lex_state = 5},
  [410] = {.lex_state = 404},
  [411] = {.lex_state = 6},
  [412] = {.lex_state = 5},
  [413] = {.lex_state = 404},
  [414] = {.lex_state = 6},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 404},
  [417] = {.lex_state = 5},
  [418] = {.lex_state = 404},
  [419] = {.lex_state = 404},
  [420] = {.lex_state = 14},
  [421] = {.lex_state = 14},
  [422] = {.lex_state = 5},
  [423] = {.lex_state = 404},
  [424] = {.lex_state = 404},
  [425] = {.lex_state = 404},
  [426] = {.lex_state = 404},
  [427] = {.lex_state = 404},
  [428] = {.lex_state = 404},
  [429] = {.lex_state = 404},
  [430] = {.lex_state = 404},
  [431] = {.lex_state = 404},
  [432] = {.lex_state = 404},
  [433] = {.lex_state = 404},
  [434] = {.lex_state = 404},
  [435] = {.lex_state = 404},
  [436] = {.lex_state = 404},
  [437] = {.lex_state = 404},
  [438] = {.lex_state = 404},
  [439] = {.lex_state = 7},
  [440] = {.lex_state = 404},
  [441] = {.lex_state = 7},
  [442] = {.lex_state = 404},
  [443] = {.lex_state = 404},
  [444] = {.lex_state = 404},
  [445] = {.lex_state = 404},
  [446] = {.lex_state = 404},
  [447] = {.lex_state = 404},
  [448] = {.lex_state = 7},
  [449] = {.lex_state = 404},
  [450] = {.lex_state = 14},
  [451] = {.lex_state = 404},
  [452] = {.lex_state = 14},
  [453] = {.lex_state = 404},
  [454] = {.lex_state = 5},
  [455] = {.lex_state = 404},
  [456] = {.lex_state = 404},
  [457] = {.lex_state = 404},
  [458] = {.lex_state = 404},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 404},
  [461] = {.lex_state = 404},
  [462] = {.lex_state = 404},
  [463] = {.lex_state = 404},
  [464] = {.lex_state = 404},
  [465] = {.lex_state = 404},
  [466] = {.lex_state = 404},
  [467] = {.lex_state = 8},
  [468] = {.lex_state = 7},
  [469] = {.lex_state = 404},
  [470] = {.lex_state = 404},
  [471] = {.lex_state = 1027},
  [472] = {.lex_state = 404},
  [473] = {.lex_state = 404},
  [474] = {.lex_state = 404},
  [475] = {.lex_state = 404},
  [476] = {.lex_state = 404},
  [477] = {.lex_state = 404},
  [478] = {.lex_state = 404},
  [479] = {.lex_state = 404},
  [480] = {.lex_state = 404},
  [481] = {.lex_state = 404},
  [482] = {.lex_state = 404},
  [483] = {.lex_state = 404},
  [484] = {.lex_state = 404},
  [485] = {.lex_state = 404},
  [486] = {.lex_state = 404},
  [487] = {.lex_state = 404},
  [488] = {.lex_state = 404},
  [489] = {.lex_state = 404},
  [490] = {.lex_state = 7},
  [491] = {.lex_state = 7},
  [492] = {.lex_state = 9},
  [493] = {.lex_state = 404},
  [494] = {.lex_state = 7},
  [495] = {.lex_state = 404},
  [496] = {.lex_state = 404},
  [497] = {.lex_state = 404},
  [498] = {.lex_state = 404},
  [499] = {.lex_state = 7},
  [500] = {.lex_state = 404},
  [501] = {.lex_state = 404},
  [502] = {.lex_state = 7},
  [503] = {.lex_state = 404},
  [504] = {.lex_state = 7},
  [505] = {.lex_state = 404},
  [506] = {.lex_state = 7},
  [507] = {.lex_state = 404},
  [508] = {.lex_state = 7},
  [509] = {.lex_state = 404},
  [510] = {.lex_state = 404},
  [511] = {.lex_state = 404},
  [512] = {.lex_state = 404},
  [513] = {.lex_state = 404},
  [514] = {.lex_state = 404},
  [515] = {(TSStateId)(-1)},
  [516] = {(TSStateId)(-1)},
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
    [aux_sym_special_list_name_token4] = ACTIONS(1),
    [sym_STATIC_SETS] = ACTIONS(1),
    [sym_MAPPING_PREFIX] = ACTIONS(1),
    [sym_SUBREADINGS] = ACTIONS(1),
    [sym_RTL] = ACTIONS(1),
    [sym_LTR] = ACTIONS(1),
    [sym_OPTIONS] = ACTIONS(1),
    [sym_LIST_TAGS] = ACTIONS(1),
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
    [sym_ANCHOR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_IF] = ACTIONS(1),
    [sym_TARGET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_EXCEPT] = ACTIONS(1),
    [sym_BEFORE] = ACTIONS(1),
    [sym_AFTER] = ACTIONS(1),
    [sym_TO] = ACTIONS(1),
    [sym_FROM] = ACTIONS(1),
    [sym_WITHCHILD] = ACTIONS(1),
    [sym_NOCHILD] = ACTIONS(1),
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
    [sym_ruletype_substitute_etc] = ACTIONS(1),
    [sym_ruletype_parentchild] = ACTIONS(1),
    [sym_ruletype_relation] = ACTIONS(1),
    [sym_ruletype_relations] = ACTIONS(1),
    [sym_ruletype_map_etc] = ACTIONS(1),
    [sym_ruletype_addcohort] = ACTIONS(1),
    [sym_ruletype_mergecohorts] = ACTIONS(1),
    [sym_ruletype_move] = ACTIONS(1),
    [sym_ruletype_switch] = ACTIONS(1),
    [sym_ruletype_external] = ACTIONS(1),
    [sym_subreading] = ACTIONS(1),
    [aux_sym_setname_t_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(459),
    [sym_special_list_name] = STATE(458),
    [sym_set_special_list] = STATE(56),
    [sym_static_sets] = STATE(56),
    [sym_mapping_prefix] = STATE(56),
    [sym_subreadings] = STATE(56),
    [sym_options] = STATE(56),
    [sym_list_tags] = STATE(56),
    [sym_parentheses] = STATE(56),
    [sym_list] = STATE(56),
    [sym_set] = STATE(56),
    [sym_include] = STATE(56),
    [sym_section_header] = STATE(56),
    [sym_anchor] = STATE(56),
    [sym_rule] = STATE(56),
    [sym_rule_substitute_etc] = STATE(56),
    [sym_rule_map_etc] = STATE(56),
    [sym_rule_parentchild] = STATE(56),
    [sym_rule_move] = STATE(56),
    [sym_rule_switch] = STATE(56),
    [sym_rule_relation] = STATE(56),
    [sym_rule_relations] = STATE(56),
    [sym_rule_addcohort] = STATE(56),
    [sym_rule_mergecohorts] = STATE(56),
    [sym_rule_external] = STATE(56),
    [sym_template] = STATE(56),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_END] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(7),
    [aux_sym_special_list_name_token1] = ACTIONS(9),
    [aux_sym_special_list_name_token2] = ACTIONS(9),
    [aux_sym_special_list_name_token3] = ACTIONS(9),
    [aux_sym_special_list_name_token4] = ACTIONS(9),
    [sym_STATIC_SETS] = ACTIONS(11),
    [sym_MAPPING_PREFIX] = ACTIONS(13),
    [sym_SUBREADINGS] = ACTIONS(15),
    [sym_OPTIONS] = ACTIONS(17),
    [sym_LIST_TAGS] = ACTIONS(19),
    [sym_PARENTHESES] = ACTIONS(21),
    [sym_LIST] = ACTIONS(23),
    [sym_SET] = ACTIONS(25),
    [sym_INCLUDE] = ACTIONS(27),
    [aux_sym_section_header_token1] = ACTIONS(29),
    [aux_sym_section_header_token2] = ACTIONS(29),
    [aux_sym_section_header_token3] = ACTIONS(29),
    [aux_sym_section_header_token4] = ACTIONS(29),
    [aux_sym_section_header_token5] = ACTIONS(29),
    [aux_sym_section_header_token6] = ACTIONS(29),
    [aux_sym_section_header_token7] = ACTIONS(29),
    [aux_sym_section_header_token8] = ACTIONS(29),
    [sym_ANCHOR] = ACTIONS(31),
    [sym_TEMPLATE] = ACTIONS(33),
    [sym_ruletype] = ACTIONS(35),
    [sym_ruletype_substitute_etc] = ACTIONS(37),
    [sym_ruletype_parentchild] = ACTIONS(39),
    [sym_ruletype_relation] = ACTIONS(41),
    [sym_ruletype_relations] = ACTIONS(43),
    [sym_ruletype_map_etc] = ACTIONS(45),
    [sym_ruletype_addcohort] = ACTIONS(47),
    [sym_ruletype_mergecohorts] = ACTIONS(49),
    [sym_ruletype_move] = ACTIONS(51),
    [sym_ruletype_switch] = ACTIONS(53),
    [sym_ruletype_external] = ACTIONS(55),
    [sym_qtag] = ACTIONS(57),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [2] = {
    [sym_special_list_name] = STATE(458),
    [sym_set_special_list] = STATE(56),
    [sym_static_sets] = STATE(56),
    [sym_mapping_prefix] = STATE(56),
    [sym_subreadings] = STATE(56),
    [sym_options] = STATE(56),
    [sym_list_tags] = STATE(56),
    [sym_parentheses] = STATE(56),
    [sym_list] = STATE(56),
    [sym_set] = STATE(56),
    [sym_include] = STATE(56),
    [sym_section_header] = STATE(56),
    [sym_anchor] = STATE(56),
    [sym_rule] = STATE(56),
    [sym_rule_substitute_etc] = STATE(56),
    [sym_rule_map_etc] = STATE(56),
    [sym_rule_parentchild] = STATE(56),
    [sym_rule_move] = STATE(56),
    [sym_rule_switch] = STATE(56),
    [sym_rule_relation] = STATE(56),
    [sym_rule_relations] = STATE(56),
    [sym_rule_addcohort] = STATE(56),
    [sym_rule_mergecohorts] = STATE(56),
    [sym_rule_external] = STATE(56),
    [sym_template] = STATE(56),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_END] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(61),
    [aux_sym_special_list_name_token1] = ACTIONS(64),
    [aux_sym_special_list_name_token2] = ACTIONS(64),
    [aux_sym_special_list_name_token3] = ACTIONS(64),
    [aux_sym_special_list_name_token4] = ACTIONS(64),
    [sym_STATIC_SETS] = ACTIONS(67),
    [sym_MAPPING_PREFIX] = ACTIONS(70),
    [sym_SUBREADINGS] = ACTIONS(73),
    [sym_OPTIONS] = ACTIONS(76),
    [sym_LIST_TAGS] = ACTIONS(79),
    [sym_PARENTHESES] = ACTIONS(82),
    [sym_LIST] = ACTIONS(85),
    [sym_SET] = ACTIONS(88),
    [sym_INCLUDE] = ACTIONS(91),
    [aux_sym_section_header_token1] = ACTIONS(94),
    [aux_sym_section_header_token2] = ACTIONS(94),
    [aux_sym_section_header_token3] = ACTIONS(94),
    [aux_sym_section_header_token4] = ACTIONS(94),
    [aux_sym_section_header_token5] = ACTIONS(94),
    [aux_sym_section_header_token6] = ACTIONS(94),
    [aux_sym_section_header_token7] = ACTIONS(94),
    [aux_sym_section_header_token8] = ACTIONS(94),
    [sym_ANCHOR] = ACTIONS(97),
    [sym_TEMPLATE] = ACTIONS(100),
    [sym_ruletype] = ACTIONS(103),
    [sym_ruletype_substitute_etc] = ACTIONS(106),
    [sym_ruletype_parentchild] = ACTIONS(109),
    [sym_ruletype_relation] = ACTIONS(112),
    [sym_ruletype_relations] = ACTIONS(115),
    [sym_ruletype_map_etc] = ACTIONS(118),
    [sym_ruletype_addcohort] = ACTIONS(121),
    [sym_ruletype_mergecohorts] = ACTIONS(124),
    [sym_ruletype_move] = ACTIONS(127),
    [sym_ruletype_switch] = ACTIONS(130),
    [sym_ruletype_external] = ACTIONS(133),
    [sym_qtag] = ACTIONS(136),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [3] = {
    [sym_special_list_name] = STATE(458),
    [sym_set_special_list] = STATE(56),
    [sym_static_sets] = STATE(56),
    [sym_mapping_prefix] = STATE(56),
    [sym_subreadings] = STATE(56),
    [sym_options] = STATE(56),
    [sym_list_tags] = STATE(56),
    [sym_parentheses] = STATE(56),
    [sym_list] = STATE(56),
    [sym_set] = STATE(56),
    [sym_include] = STATE(56),
    [sym_section_header] = STATE(56),
    [sym_anchor] = STATE(56),
    [sym_rule] = STATE(56),
    [sym_rule_substitute_etc] = STATE(56),
    [sym_rule_map_etc] = STATE(56),
    [sym_rule_parentchild] = STATE(56),
    [sym_rule_move] = STATE(56),
    [sym_rule_switch] = STATE(56),
    [sym_rule_relation] = STATE(56),
    [sym_rule_relations] = STATE(56),
    [sym_rule_addcohort] = STATE(56),
    [sym_rule_mergecohorts] = STATE(56),
    [sym_rule_external] = STATE(56),
    [sym_template] = STATE(56),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_END] = ACTIONS(3),
    [sym_semicolon] = ACTIONS(7),
    [aux_sym_special_list_name_token1] = ACTIONS(9),
    [aux_sym_special_list_name_token2] = ACTIONS(9),
    [aux_sym_special_list_name_token3] = ACTIONS(9),
    [aux_sym_special_list_name_token4] = ACTIONS(9),
    [sym_STATIC_SETS] = ACTIONS(11),
    [sym_MAPPING_PREFIX] = ACTIONS(13),
    [sym_SUBREADINGS] = ACTIONS(15),
    [sym_OPTIONS] = ACTIONS(17),
    [sym_LIST_TAGS] = ACTIONS(19),
    [sym_PARENTHESES] = ACTIONS(21),
    [sym_LIST] = ACTIONS(23),
    [sym_SET] = ACTIONS(25),
    [sym_INCLUDE] = ACTIONS(27),
    [aux_sym_section_header_token1] = ACTIONS(29),
    [aux_sym_section_header_token2] = ACTIONS(29),
    [aux_sym_section_header_token3] = ACTIONS(29),
    [aux_sym_section_header_token4] = ACTIONS(29),
    [aux_sym_section_header_token5] = ACTIONS(29),
    [aux_sym_section_header_token6] = ACTIONS(29),
    [aux_sym_section_header_token7] = ACTIONS(29),
    [aux_sym_section_header_token8] = ACTIONS(29),
    [sym_ANCHOR] = ACTIONS(31),
    [sym_TEMPLATE] = ACTIONS(33),
    [sym_ruletype] = ACTIONS(35),
    [sym_ruletype_substitute_etc] = ACTIONS(37),
    [sym_ruletype_parentchild] = ACTIONS(39),
    [sym_ruletype_relation] = ACTIONS(41),
    [sym_ruletype_relations] = ACTIONS(43),
    [sym_ruletype_map_etc] = ACTIONS(45),
    [sym_ruletype_addcohort] = ACTIONS(47),
    [sym_ruletype_mergecohorts] = ACTIONS(49),
    [sym_ruletype_move] = ACTIONS(51),
    [sym_ruletype_switch] = ACTIONS(53),
    [sym_ruletype_external] = ACTIONS(55),
    [sym_qtag] = ACTIONS(57),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      sym_ntag,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym_comment,
    ACTIONS(145), 36,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_LIST,
      sym_SET,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relation,
      sym_ruletype_relations,
      sym_ruletype_map_etc,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [57] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(155), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(153), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [108] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(159), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(157), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [159] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(163), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(161), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [210] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(167), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(165), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [261] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(171), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(169), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [312] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(175), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(173), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [363] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(179), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(177), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [414] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(181), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [465] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(187), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(185), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [516] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(191), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(189), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [567] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(195), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(193), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [618] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(199), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(197), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [669] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(203), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(201), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [720] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(207), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(205), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [771] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(211), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(209), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [822] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(215), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(213), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [873] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(219), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(217), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [924] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(223), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(221), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [975] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(227), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(225), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1026] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(231), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(229), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1077] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(235), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(233), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1128] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(239), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(237), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1179] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(243), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(241), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1230] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(247), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(245), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1281] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(251), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(249), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1332] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(253), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1383] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(259), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(257), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1434] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(261), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1485] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(267), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(265), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1536] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(271), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(269), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1587] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(275), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(273), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1638] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(277), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1689] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(281), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1740] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(287), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(285), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1791] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(291), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(289), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1842] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(295), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(293), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1893] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(299), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(297), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1944] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(303), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(301), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1995] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(307), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(305), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2046] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(311), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(309), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2097] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(315), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(313), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2148] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(319), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(317), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2199] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(321), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2250] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(327), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(325), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2301] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(331), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(329), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2352] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(333), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2403] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(339), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(337), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2454] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(343), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(341), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2505] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(347), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(345), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2556] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(351), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(349), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2607] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(355), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(353), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2658] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(359), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(357), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2709] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(363), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(361), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2760] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(367), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(365), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2811] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(371), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(369), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2862] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(375), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(373), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2913] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(379), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(377), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2964] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(383), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(381), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3015] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(387), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(385), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3066] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(391), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(389), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3117] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(395), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(393), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3168] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(399), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(397), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3219] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(403), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(401), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3270] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(407), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(405), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3321] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(411), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(409), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3372] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(415), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(413), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3423] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(419), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(417), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3474] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(423), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(421), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3525] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(427), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(425), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3576] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(431), 5,
      sym_LIST,
      sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(429), 32,
      ts_builtin_sym_end,
      sym_semicolon,
      aux_sym_special_list_name_token1,
      aux_sym_special_list_name_token2,
      aux_sym_special_list_name_token3,
      aux_sym_special_list_name_token4,
      sym_STATIC_SETS,
      sym_MAPPING_PREFIX,
      sym_SUBREADINGS,
      sym_OPTIONS,
      sym_LIST_TAGS,
      sym_PARENTHESES,
      sym_INCLUDE,
      aux_sym_section_header_token1,
      aux_sym_section_header_token2,
      aux_sym_section_header_token3,
      aux_sym_section_header_token4,
      aux_sym_section_header_token5,
      aux_sym_section_header_token6,
      aux_sym_section_header_token7,
      aux_sym_section_header_token8,
      sym_ANCHOR,
      sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_mergecohorts,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [3627] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_set_op,
    STATE(75), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(433), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3658] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_set_op,
    STATE(76), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(437), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3689] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(439), 15,
      sym_eq,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [3716] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_set_op,
    STATE(78), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
    ACTIONS(441), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3745] = 17,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(454), 1,
      sym_ruleflag_name,
    ACTIONS(456), 1,
      sym_subreading,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(79), 1,
      sym_comment,
    STATE(82), 1,
      sym_setname,
    STATE(104), 1,
      sym_ruleflag,
    STATE(129), 1,
      sym_inlineset,
    STATE(147), 1,
      aux_sym_ruleflag_repeat1,
    STATE(183), 1,
      sym__child_specifier,
    STATE(282), 1,
      sym_rule_target,
  [3797] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(460), 14,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [3823] = 17,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(454), 1,
      sym_ruleflag_name,
    ACTIONS(456), 1,
      sym_subreading,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(81), 1,
      sym_comment,
    STATE(82), 1,
      sym_setname,
    STATE(105), 1,
      sym_ruleflag,
    STATE(129), 1,
      sym_inlineset,
    STATE(147), 1,
      aux_sym_ruleflag_repeat1,
    STATE(181), 1,
      sym__child_specifier,
    STATE(225), 1,
      sym_rule_target,
  [3875] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(462), 14,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [3901] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(83), 1,
      sym_comment,
    ACTIONS(441), 14,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
      sym_BARRIER,
      sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [3927] = 15,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(6), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(84), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(152), 1,
      sym_ruleflag,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(295), 1,
      sym_rule_target,
  [3973] = 15,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(9), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(85), 1,
      sym_comment,
    STATE(121), 1,
      sym_ruleflag,
    STATE(129), 1,
      sym_inlineset,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(295), 1,
      sym_rule_target,
  [4019] = 15,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(15), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(86), 1,
      sym_comment,
    STATE(128), 1,
      sym_ruleflag,
    STATE(129), 1,
      sym_inlineset,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(295), 1,
      sym_rule_target,
  [4065] = 15,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(21), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(87), 1,
      sym_comment,
    STATE(123), 1,
      sym_ruleflag,
    STATE(129), 1,
      sym_inlineset,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(295), 1,
      sym_rule_target,
  [4111] = 13,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(468), 1,
      sym_EXCEPT,
    STATE(49), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(88), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
    ACTIONS(470), 2,
      sym_BEFORE,
      sym_AFTER,
  [4152] = 13,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(472), 1,
      sym_EXCEPT,
    STATE(55), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(89), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
    ACTIONS(474), 2,
      sym_BEFORE,
      sym_AFTER,
  [4193] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(90), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(166), 1,
      sym_ruleflag,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(324), 1,
      sym_rule_target,
  [4236] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(91), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(162), 1,
      sym_ruleflag,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(198), 1,
      sym_rule_target,
  [4279] = 14,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(476), 1,
      sym_ruletype,
    ACTIONS(478), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(480), 1,
      sym_ruletype_parentchild,
    ACTIONS(482), 1,
      sym_ruletype_relation,
    ACTIONS(484), 1,
      sym_ruletype_relations,
    ACTIONS(486), 1,
      sym_ruletype_map_etc,
    ACTIONS(488), 1,
      sym_ruletype_addcohort,
    ACTIONS(490), 1,
      sym_ruletype_mergecohorts,
    ACTIONS(492), 1,
      sym_ruletype_move,
    ACTIONS(494), 1,
      sym_ruletype_switch,
    ACTIONS(496), 1,
      sym_ruletype_external,
    STATE(92), 1,
      sym_comment,
  [4322] = 13,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(498), 1,
      sym_EXCEPT,
    STATE(10), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(93), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
    ACTIONS(500), 2,
      sym_BEFORE,
      sym_AFTER,
  [4363] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(504), 1,
      sym_BARRIER,
    ACTIONS(506), 1,
      sym_LINK,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(94), 1,
      sym_comment,
    ACTIONS(502), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(331), 2,
      sym_inlineset,
      sym_setname_t,
  [4402] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(95), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(164), 1,
      sym_ruleflag,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(194), 1,
      sym_rule_target,
  [4445] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(7), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(96), 1,
      sym_comment,
    STATE(127), 1,
      sym__child_specifier,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [4488] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(14), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(97), 1,
      sym_comment,
    STATE(122), 1,
      sym__child_specifier,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [4531] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(41), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(98), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(138), 1,
      sym__child_specifier,
    STATE(295), 1,
      sym_rule_target,
  [4574] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(512), 1,
      sym_BARRIER,
    ACTIONS(514), 1,
      sym_LINK,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(99), 1,
      sym_comment,
    ACTIONS(510), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(299), 2,
      sym_inlineset,
      sym_setname_t,
  [4613] = 14,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(100), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(187), 1,
      sym_ruleflag,
    STATE(189), 1,
      aux_sym_ruleflag_repeat1,
    STATE(312), 1,
      sym_rule_target,
  [4656] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(66), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(101), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
    ACTIONS(516), 2,
      sym_BEFORE,
      sym_AFTER,
  [4694] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(49), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(102), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
    ACTIONS(470), 2,
      sym_BEFORE,
      sym_AFTER,
  [4732] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(23), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(103), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
    ACTIONS(518), 2,
      sym_BEFORE,
      sym_AFTER,
  [4770] = 13,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(104), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(181), 1,
      sym__child_specifier,
    STATE(225), 1,
      sym_rule_target,
  [4810] = 13,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(450), 1,
      sym_WITHCHILD,
    ACTIONS(452), 1,
      sym_NOCHILD,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(105), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(163), 1,
      sym__child_specifier,
    STATE(266), 1,
      sym_rule_target,
  [4850] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(106), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(260), 1,
      sym_inlineset,
    STATE(262), 1,
      sym_ruleflag,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [4887] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(107), 1,
      sym_comment,
    STATE(211), 1,
      sym_inlineset,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(231), 1,
      sym_ruleflag,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [4924] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(108), 1,
      sym_comment,
    STATE(157), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(267), 1,
      sym_ruleflag,
    STATE(307), 1,
      sym_setname,
  [4961] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(109), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(268), 1,
      sym_inlineset,
    STATE(270), 1,
      sym_ruleflag,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [4998] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      aux_sym_setname_token1,
    STATE(89), 1,
      sym_inlineset,
    STATE(110), 1,
      sym_comment,
    STATE(144), 1,
      sym_inlineset_single,
    STATE(172), 1,
      sym_setname,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(272), 1,
      sym_ruleflag,
  [5035] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(111), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(275), 1,
      sym_ruleflag,
    STATE(422), 1,
      sym_inlineset,
  [5072] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(112), 1,
      sym_comment,
    STATE(161), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(276), 1,
      sym_ruleflag,
    STATE(307), 1,
      sym_setname,
  [5109] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(113), 1,
      sym_comment,
    STATE(188), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(236), 1,
      sym_ruleflag,
    STATE(307), 1,
      sym_setname,
  [5146] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(114), 1,
      sym_comment,
    STATE(158), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(232), 1,
      sym_ruleflag,
    STATE(307), 1,
      sym_setname,
  [5183] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(115), 1,
      sym_comment,
    STATE(216), 1,
      sym_inlineset,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 1,
      sym_ruleflag,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [5220] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      aux_sym_setname_token1,
    STATE(93), 1,
      sym_inlineset,
    STATE(116), 1,
      sym_comment,
    STATE(144), 1,
      sym_inlineset_single,
    STATE(172), 1,
      sym_setname,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(234), 1,
      sym_ruleflag,
  [5257] = 12,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(117), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_ruleflag_repeat1,
    STATE(235), 1,
      sym_ruleflag,
    STATE(454), 1,
      sym_inlineset,
  [5294] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(35), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(118), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5328] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(119), 2,
      aux_sym__context,
      sym_comment,
    ACTIONS(536), 6,
      sym_semicolon,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
  [5350] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym_comment,
    ACTIONS(543), 6,
      sym_TARGET,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [5374] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(72), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(121), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5408] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(41), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(122), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5442] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(28), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(123), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5476] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(124), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(503), 1,
      sym_contexttest,
  [5510] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(125), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(428), 1,
      sym_contexttest,
  [5544] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(23), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(126), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5578] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(14), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(127), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5612] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(21), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(128), 1,
      sym_comment,
    STATE(129), 1,
      sym_inlineset,
    STATE(295), 1,
      sym_rule_target,
  [5646] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(555), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
  [5666] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      sym_set_op,
    STATE(130), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
    ACTIONS(557), 5,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      aux_sym_setname_token1,
  [5690] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(66), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(131), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [5724] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(49), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(132), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [5758] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(133), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(500), 1,
      sym_contexttest,
  [5792] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_set_op,
    STATE(130), 1,
      aux_sym_inlineset_repeat1,
    STATE(134), 1,
      sym_comment,
    ACTIONS(562), 5,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      aux_sym_setname_token1,
  [5818] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    ACTIONS(571), 2,
      sym_ntag,
      sym_qtag,
    STATE(135), 2,
      sym_comment,
      aux_sym_taglist_repeat1,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [5844] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(73), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(136), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [5878] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      aux_sym_taglist_repeat1,
    STATE(137), 1,
      sym_comment,
    ACTIONS(574), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [5906] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(61), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(138), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [5940] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(139), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(466), 1,
      sym_contexttest,
  [5974] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(140), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(440), 1,
      sym_contexttest,
  [6008] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(24), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(141), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [6042] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(47), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(142), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [6076] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(580), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_IF,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
  [6096] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_set_op,
    STATE(134), 1,
      aux_sym_inlineset_repeat1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(582), 5,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      aux_sym_setname_token1,
  [6122] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      sym_ruleflag_name,
    ACTIONS(591), 1,
      sym_subreading,
    STATE(145), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
    ACTIONS(586), 4,
      sym_TARGET,
      sym_WITHCHILD,
      sym_NOCHILD,
      aux_sym_setname_token1,
  [6148] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(146), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(431), 1,
      sym_contexttest,
  [6182] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      sym_ruleflag_name,
    ACTIONS(456), 1,
      sym_subreading,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      aux_sym_ruleflag_repeat1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(596), 4,
      sym_TARGET,
      sym_WITHCHILD,
      sym_NOCHILD,
      aux_sym_setname_token1,
  [6210] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(5), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(148), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [6244] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(149), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(463), 1,
      sym_contexttest,
  [6278] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(150), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(436), 1,
      sym_contexttest,
  [6312] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(151), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(486), 1,
      sym_contexttest,
  [6346] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(9), 1,
      sym__shared_rule_end,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(152), 1,
      sym_comment,
    STATE(295), 1,
      sym_rule_target,
  [6380] = 11,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(551), 1,
      anon_sym_LBRACK,
    ACTIONS(553), 1,
      sym_contextpos,
    STATE(153), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_contexttest_repeat1,
    STATE(330), 1,
      sym_setname_t,
    STATE(416), 1,
      sym_contexttest,
  [6414] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(154), 1,
      sym_comment,
    STATE(335), 1,
      sym_rule_target,
  [6445] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(155), 1,
      sym_comment,
    STATE(509), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [6472] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(156), 1,
      sym_comment,
    STATE(205), 1,
      sym_rule_target,
  [6503] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(157), 1,
      sym_comment,
    STATE(196), 1,
      sym_rule_target,
  [6534] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(158), 1,
      sym_comment,
    STATE(199), 1,
      sym_rule_target,
  [6565] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_comment,
    ACTIONS(600), 6,
      sym_TARGET,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [6586] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_comment,
    ACTIONS(557), 6,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [6607] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(161), 1,
      sym_comment,
    STATE(314), 1,
      sym_rule_target,
  [6638] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(162), 1,
      sym_comment,
    STATE(195), 1,
      sym_rule_target,
  [6669] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(163), 1,
      sym_comment,
    STATE(269), 1,
      sym_rule_target,
  [6700] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(164), 1,
      sym_comment,
    STATE(198), 1,
      sym_rule_target,
  [6731] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(602), 7,
      sym_semicolon,
      anon_sym_LPAREN,
      sym_BEFORE,
      sym_AFTER,
      sym_TO,
      sym_FROM,
      sym_WITH,
  [6750] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(166), 1,
      sym_comment,
    STATE(313), 1,
      sym_rule_target,
  [6781] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_comment,
    ACTIONS(606), 6,
      sym_TARGET,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [6802] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(168), 1,
      sym_comment,
    STATE(202), 1,
      sym_rule_target,
  [6833] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(169), 1,
      sym_comment,
    STATE(204), 1,
      sym_rule_target,
  [6864] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(170), 1,
      sym_comment,
    STATE(477), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [6891] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_comment,
    ACTIONS(543), 6,
      sym_TARGET,
      sym_WITHCHILD,
      sym_NOCHILD,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [6912] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_comment,
    ACTIONS(608), 6,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [6933] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(173), 1,
      sym_comment,
    STATE(469), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [6960] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(174), 1,
      sym_comment,
    STATE(200), 1,
      sym_rule_target,
  [6991] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(175), 1,
      sym_comment,
    STATE(505), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [7018] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(176), 1,
      sym_comment,
    STATE(501), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [7045] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_comment,
    ACTIONS(610), 6,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [7066] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym_setname_t_token1,
    ACTIONS(549), 1,
      sym_context_modifier,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      sym_contextpos,
    STATE(178), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_contexttest_repeat1,
    STATE(331), 1,
      sym_setname_t,
  [7097] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      sym_set_op,
    STATE(179), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
    ACTIONS(557), 4,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      aux_sym_setname_token1,
  [7120] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(180), 1,
      sym_comment,
    STATE(511), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [7147] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(181), 1,
      sym_comment,
    STATE(266), 1,
      sym_rule_target,
  [7178] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_taglist_repeat1,
    STATE(182), 1,
      sym_comment,
    STATE(488), 1,
      sym_taglist,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
    STATE(291), 2,
      sym_compotag,
      sym_tag,
  [7205] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(183), 1,
      sym_comment,
    STATE(225), 1,
      sym_rule_target,
  [7236] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_comment,
    ACTIONS(621), 6,
      sym_TARGET,
      sym_EXCEPT,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [7257] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      sym_set_op,
    STATE(185), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(582), 4,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      aux_sym_setname_token1,
  [7282] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      sym_set_op,
    STATE(179), 1,
      aux_sym_inlineset_repeat1,
    STATE(186), 1,
      sym_comment,
    ACTIONS(562), 4,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      aux_sym_setname_token1,
  [7307] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(187), 1,
      sym_comment,
    STATE(324), 1,
      sym_rule_target,
  [7338] = 10,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym_TARGET,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(129), 1,
      sym_inlineset,
    STATE(188), 1,
      sym_comment,
    STATE(332), 1,
      sym_rule_target,
  [7369] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(464), 1,
      sym_ruleflag_name,
    ACTIONS(466), 1,
      sym_subreading,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_comment,
    STATE(203), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(596), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7395] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_comment,
    ACTIONS(608), 5,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [7415] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_comment,
    ACTIONS(610), 5,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [7435] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
      anon_sym_COLON,
    STATE(192), 1,
      sym_comment,
    ACTIONS(543), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [7457] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_comment,
    ACTIONS(557), 5,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [7477] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(629), 1,
      sym_IF,
    STATE(194), 1,
      sym_comment,
    STATE(214), 1,
      aux_sym__context,
    STATE(465), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7503] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      sym_IF,
    STATE(195), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym__context,
    STATE(512), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7529] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(635), 1,
      sym_IF,
    STATE(196), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym__context,
    STATE(472), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7555] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_comment,
    ACTIONS(621), 5,
      sym_TARGET,
      sym_BEFORE,
      sym_AFTER,
      sym_set_op,
      aux_sym_setname_token1,
  [7575] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 1,
      sym_IF,
    STATE(198), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__context,
    STATE(470), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7601] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      sym_IF,
    STATE(199), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym__context,
    STATE(507), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7627] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      sym_IF,
    STATE(200), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym__context,
    STATE(473), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7653] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(645), 1,
      sym_context_modifier,
    ACTIONS(643), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(648), 2,
      sym_contextpos,
      aux_sym_setname_t_token1,
    STATE(201), 2,
      sym_comment,
      aux_sym_contexttest_repeat1,
  [7675] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      sym_IF,
    STATE(202), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym__context,
    STATE(475), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7701] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      sym_ruleflag_name,
    ACTIONS(655), 1,
      sym_subreading,
    ACTIONS(586), 2,
      sym_TARGET,
      aux_sym_setname_token1,
    STATE(203), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [7725] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(658), 1,
      sym_IF,
    STATE(204), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym__context,
    STATE(479), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7751] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      sym_IF,
    STATE(205), 1,
      sym_comment,
    STATE(259), 1,
      aux_sym__context,
    STATE(476), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7777] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(664), 1,
      sym_OR,
    STATE(206), 2,
      sym_comment,
      aux_sym_contexttest_repeat3,
    ACTIONS(662), 3,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_LINK,
  [7796] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_comment,
    ACTIONS(600), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [7815] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_comment,
    STATE(239), 1,
      aux_sym_compotag_repeat1,
    STATE(405), 1,
      sym_tag,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
  [7838] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      sym_set_op,
    ACTIONS(557), 2,
      sym_TARGET,
      aux_sym_setname_token1,
    STATE(209), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
  [7859] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      sym_set_op,
    STATE(209), 1,
      aux_sym_inlineset_repeat1,
    STATE(210), 1,
      sym_comment,
    ACTIONS(562), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7882] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(136), 1,
      sym_inlineset,
    STATE(211), 1,
      sym_comment,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(307), 1,
      sym_setname,
  [7907] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__context,
    STATE(470), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7930] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      sym_set_op,
    STATE(210), 1,
      aux_sym_inlineset_repeat1,
    STATE(213), 1,
      sym_comment,
    ACTIONS(582), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [7953] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(214), 1,
      sym_comment,
    STATE(470), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [7976] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(215), 1,
      sym_comment,
    ACTIONS(676), 2,
      sym_ntag,
      sym_qtag,
    ACTIONS(674), 3,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7995] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(174), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(216), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8020] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      aux_sym_setname_token1,
    STATE(102), 1,
      sym_inlineset,
    STATE(185), 1,
      sym_inlineset_single,
    STATE(190), 1,
      sym_setname,
    STATE(217), 1,
      sym_comment,
  [8045] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(132), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(218), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8070] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
    ACTIONS(586), 1,
      aux_sym_setname_token1,
    ACTIONS(682), 1,
      sym_ruleflag_name,
    ACTIONS(685), 1,
      sym_subreading,
    STATE(219), 2,
      sym_comment,
      aux_sym_ruleflag_repeat1,
  [8093] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(220), 1,
      sym_comment,
    STATE(464), 1,
      sym_inlineset,
  [8118] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ruleflag_name,
    ACTIONS(524), 1,
      sym_subreading,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    ACTIONS(596), 1,
      aux_sym_setname_token1,
    STATE(219), 1,
      aux_sym_ruleflag_repeat1,
    STATE(221), 1,
      sym_comment,
  [8143] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(688), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
    ACTIONS(543), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [8164] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_WITHCHILD,
    ACTIONS(692), 1,
      sym_NOCHILD,
    STATE(223), 1,
      sym_comment,
    STATE(357), 1,
      aux_sym__context,
    STATE(435), 1,
      sym__child_specifier,
  [8189] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_WITHCHILD,
    ACTIONS(692), 1,
      sym_NOCHILD,
    STATE(224), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym__context,
    STATE(445), 1,
      sym__child_specifier,
  [8214] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(694), 1,
      sym_IF,
    STATE(225), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym__context,
    ACTIONS(696), 2,
      sym_BEFORE,
      sym_AFTER,
  [8237] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(226), 1,
      sym_comment,
    STATE(474), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8260] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(118), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(227), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8285] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      aux_sym__context,
    STATE(228), 1,
      sym_comment,
    STATE(510), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8308] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(229), 1,
      sym_comment,
    STATE(483), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8331] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_comment,
    ACTIONS(700), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [8350] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(231), 1,
      sym_comment,
    STATE(274), 1,
      sym_inlineset,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [8375] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(156), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(232), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8400] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(233), 1,
      sym_comment,
    STATE(277), 1,
      sym_inlineset,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [8425] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      aux_sym_setname_token1,
    STATE(88), 1,
      sym_inlineset,
    STATE(144), 1,
      sym_inlineset_single,
    STATE(172), 1,
      sym_setname,
    STATE(234), 1,
      sym_comment,
  [8450] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(235), 1,
      sym_comment,
    STATE(417), 1,
      sym_inlineset,
  [8475] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(154), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(236), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8500] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_WITHCHILD,
    ACTIONS(692), 1,
      sym_NOCHILD,
    STATE(237), 1,
      sym_comment,
    STATE(407), 1,
      aux_sym__context,
    STATE(426), 1,
      sym__child_specifier,
  [8525] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(238), 1,
      sym_comment,
    STATE(510), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8548] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      sym_tag,
    ACTIONS(704), 2,
      sym_ntag,
      sym_qtag,
    STATE(239), 2,
      sym_comment,
      aux_sym_compotag_repeat1,
  [8569] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(709), 1,
      sym_LINK,
    ACTIONS(711), 1,
      sym_OR,
    STATE(206), 1,
      aux_sym_contexttest_repeat3,
    STATE(240), 1,
      sym_comment,
    ACTIONS(707), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8592] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      aux_sym__context,
    STATE(241), 1,
      sym_comment,
    STATE(455), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8615] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(242), 1,
      sym_comment,
    STATE(361), 1,
      sym_inlineset,
  [8640] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(243), 1,
      sym_comment,
    STATE(487), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8663] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(244), 1,
      sym_comment,
    STATE(339), 1,
      sym_inlineset,
  [8688] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_comment,
    ACTIONS(606), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [8707] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_WITHCHILD,
    ACTIONS(692), 1,
      sym_NOCHILD,
    STATE(246), 1,
      sym_comment,
    STATE(402), 1,
      aux_sym__context,
    STATE(430), 1,
      sym__child_specifier,
  [8732] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(247), 1,
      sym_comment,
    STATE(481), 1,
      sym_inlineset,
  [8757] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(248), 1,
      sym_comment,
    STATE(512), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8780] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(143), 1,
      sym_inlineset,
    STATE(249), 1,
      sym_comment,
  [8805] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(142), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(250), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8830] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym__context,
    STATE(512), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8853] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(252), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym__context,
    STATE(507), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8876] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(253), 1,
      sym_comment,
    STATE(507), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8899] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_comment,
    ACTIONS(543), 4,
      sym_TARGET,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [8918] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      aux_sym_setname_token1,
    STATE(103), 1,
      sym_inlineset,
    STATE(185), 1,
      sym_inlineset_single,
    STATE(190), 1,
      sym_setname,
    STATE(255), 1,
      sym_comment,
  [8943] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(126), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(256), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [8968] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      aux_sym__context,
    STATE(257), 1,
      sym_comment,
    STATE(475), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [8991] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(258), 1,
      sym_comment,
    STATE(475), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9014] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(259), 1,
      sym_comment,
    STATE(455), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9037] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(141), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(260), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9062] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_WITHCHILD,
    ACTIONS(692), 1,
      sym_NOCHILD,
    STATE(261), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym__context,
    STATE(453), 1,
      sym__child_specifier,
  [9087] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(211), 1,
      sym_inlineset,
    STATE(262), 1,
      sym_comment,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [9112] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(263), 1,
      sym_comment,
    STATE(389), 1,
      sym_inlineset,
  [9137] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(711), 1,
      sym_OR,
    ACTIONS(715), 1,
      sym_LINK,
    STATE(240), 1,
      aux_sym_contexttest_repeat3,
    STATE(264), 1,
      sym_comment,
    ACTIONS(713), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9160] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(711), 1,
      sym_OR,
    ACTIONS(715), 1,
      sym_LINK,
    STATE(206), 1,
      aux_sym_contexttest_repeat3,
    STATE(265), 1,
      sym_comment,
    ACTIONS(713), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9183] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      sym_IF,
    STATE(266), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym__context,
    ACTIONS(719), 2,
      sym_BEFORE,
      sym_AFTER,
  [9206] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(158), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(267), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9231] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(169), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(268), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9256] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      sym_IF,
    STATE(269), 1,
      sym_comment,
    STATE(327), 1,
      aux_sym__context,
    ACTIONS(723), 2,
      sym_BEFORE,
      sym_AFTER,
  [9279] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(216), 1,
      sym_inlineset,
    STATE(270), 1,
      sym_comment,
    STATE(315), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [9304] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      aux_sym_setname_token1,
    STATE(101), 1,
      sym_inlineset,
    STATE(185), 1,
      sym_inlineset_single,
    STATE(190), 1,
      sym_setname,
    STATE(271), 1,
      sym_comment,
  [9329] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      aux_sym_setname_token1,
    STATE(93), 1,
      sym_inlineset,
    STATE(144), 1,
      sym_inlineset_single,
    STATE(172), 1,
      sym_setname,
    STATE(272), 1,
      sym_comment,
  [9354] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(243), 1,
      aux_sym__context,
    STATE(273), 1,
      sym_comment,
    STATE(478), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9377] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(148), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(274), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9402] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(275), 1,
      sym_comment,
    STATE(454), 1,
      sym_inlineset,
  [9427] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(188), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(276), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9452] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(168), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(277), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9477] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(278), 1,
      sym_comment,
    STATE(378), 1,
      sym_inlineset,
  [9502] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(279), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
    STATE(377), 1,
      sym_inlineset,
  [9527] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    STATE(280), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(727), 3,
      sym_context_modifier,
      sym_contextpos,
      aux_sym_setname_t_token1,
  [9546] = 8,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(690), 1,
      sym_WITHCHILD,
    ACTIONS(692), 1,
      sym_NOCHILD,
    STATE(281), 1,
      sym_comment,
    STATE(372), 1,
      aux_sym__context,
    STATE(446), 1,
      sym__child_specifier,
  [9571] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      sym_IF,
    STATE(282), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym__context,
    ACTIONS(731), 2,
      sym_BEFORE,
      sym_AFTER,
  [9594] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(283), 1,
      sym_comment,
    ACTIONS(735), 2,
      sym_ntag,
      sym_qtag,
    ACTIONS(733), 3,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9613] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(711), 1,
      sym_OR,
    ACTIONS(739), 1,
      sym_LINK,
    STATE(265), 1,
      aux_sym_contexttest_repeat3,
    STATE(284), 1,
      sym_comment,
    ACTIONS(737), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9636] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(285), 1,
      sym_comment,
    STATE(429), 1,
      sym_inlineset,
  [9661] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(131), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_inlineset_single,
    STATE(286), 1,
      sym_comment,
    STATE(307), 1,
      sym_setname,
  [9686] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(287), 1,
      sym_comment,
    STATE(473), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9709] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      aux_sym__context,
    STATE(288), 1,
      sym_comment,
    STATE(473), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9732] = 8,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(75), 1,
      sym_inlineset_single,
    STATE(82), 1,
      sym_setname,
    STATE(289), 1,
      sym_comment,
    STATE(352), 1,
      sym_inlineset,
  [9757] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(259), 1,
      aux_sym__context,
    STATE(290), 1,
      sym_comment,
    STATE(476), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9780] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(291), 1,
      sym_comment,
    ACTIONS(743), 2,
      sym_ntag,
      sym_qtag,
    ACTIONS(741), 3,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9799] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(292), 1,
      sym_comment,
    STATE(476), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9822] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(293), 1,
      sym_comment,
    STATE(478), 1,
      sym__to_from,
    ACTIONS(631), 2,
      sym_TO,
      sym_FROM,
  [9845] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_compotag_repeat1,
    STATE(294), 1,
      sym_comment,
    STATE(405), 1,
      sym_tag,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
  [9868] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      sym_semicolon,
    ACTIONS(749), 1,
      sym_IF,
    STATE(295), 1,
      sym_comment,
    STATE(351), 1,
      aux_sym__context,
  [9890] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(208), 1,
      aux_sym_compotag_repeat1,
    STATE(296), 1,
      sym_comment,
    STATE(405), 1,
      sym_tag,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
  [9910] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      aux_sym_setname_token1,
    STATE(190), 1,
      sym_setname,
    STATE(193), 1,
      sym_inlineset_single,
    STATE(297), 1,
      sym_comment,
  [9932] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(751), 1,
      sym_semicolon,
    ACTIONS(753), 1,
      aux_sym_setname_token1,
    STATE(450), 1,
      sym_setname,
    STATE(298), 2,
      sym_comment,
      aux_sym_static_sets_repeat1,
  [9952] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(739), 1,
      sym_LINK,
    ACTIONS(756), 1,
      sym_BARRIER,
    STATE(299), 1,
      sym_comment,
    ACTIONS(737), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [9972] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      aux_sym_setname_token1,
    STATE(160), 1,
      sym_inlineset_single,
    STATE(172), 1,
      sym_setname,
    STATE(300), 1,
      sym_comment,
  [9994] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_setname_token1,
    STATE(301), 1,
      sym_comment,
    STATE(304), 1,
      sym_inlineset_single,
    STATE(307), 1,
      sym_setname,
  [10016] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym_comment,
    ACTIONS(621), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [10034] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(758), 1,
      sym_semicolon,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    STATE(451), 1,
      sym_compotag,
    STATE(303), 2,
      sym_comment,
      aux_sym_parentheses_repeat1,
  [10054] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_comment,
    ACTIONS(557), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [10072] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_comment,
    ACTIONS(610), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [10090] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(82), 1,
      sym_setname,
    STATE(83), 1,
      sym_inlineset_single,
    STATE(306), 1,
      sym_comment,
  [10112] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_comment,
    ACTIONS(608), 3,
      sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [10130] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      aux_sym_setname_token1,
    ACTIONS(763), 1,
      sym_set_op,
    STATE(308), 2,
      sym_comment,
      aux_sym_inlineset_repeat1,
  [10150] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_comment,
    ACTIONS(606), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [10168] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      aux_sym_setname_token1,
    ACTIONS(766), 1,
      sym_set_op,
    STATE(308), 1,
      aux_sym_inlineset_repeat1,
    STATE(310), 1,
      sym_comment,
  [10190] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      aux_sym_setname_token1,
    STATE(311), 1,
      sym_comment,
    STATE(367), 1,
      sym_inlineset_single,
    STATE(381), 1,
      sym_setname,
  [10212] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      sym_IF,
    ACTIONS(770), 1,
      sym_WITH,
    STATE(312), 1,
      sym_comment,
    STATE(409), 1,
      aux_sym__context,
  [10234] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_IF,
    ACTIONS(774), 1,
      sym_WITH,
    STATE(313), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym__context,
  [10256] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      sym_IF,
    ACTIONS(778), 1,
      sym_WITH,
    STATE(314), 1,
      sym_comment,
    STATE(360), 1,
      aux_sym__context,
  [10278] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      aux_sym_setname_token1,
    ACTIONS(766), 1,
      sym_set_op,
    STATE(310), 1,
      aux_sym_inlineset_repeat1,
    STATE(315), 1,
      sym_comment,
  [10300] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_comment,
    ACTIONS(543), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [10318] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym__context,
    ACTIONS(696), 2,
      sym_BEFORE,
      sym_AFTER,
  [10338] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym_comment,
    ACTIONS(600), 3,
      sym_ruleflag_name,
      sym_subreading,
      aux_sym_setname_token1,
  [10356] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(319), 1,
      sym_comment,
    ACTIONS(780), 4,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_LINK,
      sym_OR,
  [10372] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(320), 1,
      sym_comment,
    ACTIONS(696), 2,
      sym_BEFORE,
      sym_AFTER,
  [10392] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(321), 1,
      sym_comment,
    ACTIONS(782), 2,
      sym_BEFORE,
      sym_AFTER,
  [10412] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(322), 1,
      sym_comment,
    ACTIONS(723), 2,
      sym_BEFORE,
      sym_AFTER,
  [10432] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(323), 1,
      sym_comment,
    STATE(327), 1,
      aux_sym__context,
    ACTIONS(723), 2,
      sym_BEFORE,
      sym_AFTER,
  [10452] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(784), 1,
      sym_IF,
    ACTIONS(786), 1,
      sym_WITH,
    STATE(324), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym__context,
  [10474] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(294), 1,
      aux_sym_compotag_repeat1,
    STATE(325), 1,
      sym_comment,
    STATE(405), 1,
      sym_tag,
    ACTIONS(578), 2,
      sym_ntag,
      sym_qtag,
  [10494] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(326), 1,
      sym_comment,
    ACTIONS(719), 2,
      sym_BEFORE,
      sym_AFTER,
  [10514] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__context,
    STATE(327), 1,
      sym_comment,
    ACTIONS(788), 2,
      sym_BEFORE,
      sym_AFTER,
  [10534] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(328), 1,
      sym_comment,
    ACTIONS(790), 4,
      sym_semicolon,
      anon_sym_RPAREN,
      sym_BARRIER,
      sym_LINK,
  [10550] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      aux_sym__context,
    STATE(329), 1,
      sym_comment,
    ACTIONS(719), 2,
      sym_BEFORE,
      sym_AFTER,
  [10570] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(792), 1,
      sym_BARRIER,
    ACTIONS(794), 1,
      sym_LINK,
    STATE(330), 1,
      sym_comment,
    ACTIONS(502), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10590] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(796), 1,
      sym_BARRIER,
    ACTIONS(798), 1,
      sym_LINK,
    STATE(331), 1,
      sym_comment,
    ACTIONS(510), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [10610] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      sym_IF,
    ACTIONS(802), 1,
      sym_WITH,
    STATE(332), 1,
      sym_comment,
    STATE(375), 1,
      aux_sym__context,
  [10632] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(804), 1,
      sym_semicolon,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      aux_sym_parentheses_repeat1,
    STATE(333), 1,
      sym_comment,
    STATE(451), 1,
      sym_compotag,
  [10654] = 7,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(808), 1,
      sym_semicolon,
    ACTIONS(810), 1,
      aux_sym_setname_token1,
    STATE(298), 1,
      aux_sym_static_sets_repeat1,
    STATE(334), 1,
      sym_comment,
    STATE(450), 1,
      sym_setname,
  [10676] = 7,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_IF,
    ACTIONS(814), 1,
      sym_WITH,
    STATE(335), 1,
      sym_comment,
    STATE(371), 1,
      aux_sym__context,
  [10698] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      aux_sym__context,
    STATE(336), 1,
      sym_comment,
    ACTIONS(788), 2,
      sym_BEFORE,
      sym_AFTER,
  [10718] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(818), 1,
      aux_sym_rule_token1,
    STATE(114), 1,
      sym_rule_name,
    STATE(337), 1,
      sym_comment,
  [10737] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(822), 1,
      aux_sym_rule_token1,
    STATE(338), 1,
      sym_comment,
    STATE(419), 1,
      sym_rule_name,
  [10756] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_contexttest_repeat2,
  [10775] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(340), 1,
      sym_comment,
  [10794] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(830), 1,
      sym_semicolon,
    STATE(341), 1,
      sym_comment,
    STATE(370), 1,
      aux_sym__context,
  [10813] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(834), 1,
      aux_sym_rule_token1,
    STATE(86), 1,
      sym_rule_name,
    STATE(342), 1,
      sym_comment,
  [10832] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(836), 1,
      aux_sym_rule_token1,
    STATE(106), 1,
      sym_rule_name,
    STATE(343), 1,
      sym_comment,
  [10851] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(838), 1,
      aux_sym_rule_token1,
    STATE(95), 1,
      sym_rule_name,
    STATE(344), 1,
      sym_comment,
  [10870] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(774), 1,
      sym_WITH,
    STATE(340), 1,
      aux_sym__context,
    STATE(345), 1,
      sym_comment,
  [10889] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(840), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(346), 1,
      sym_comment,
  [10908] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      sym_WITH,
    STATE(347), 1,
      sym_comment,
    STATE(383), 1,
      aux_sym__context,
  [10927] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(774), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(348), 1,
      sym_comment,
  [10946] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(842), 1,
      aux_sym_rule_token1,
    STATE(108), 1,
      sym_rule_name,
    STATE(349), 1,
      sym_comment,
  [10965] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(844), 1,
      aux_sym_rule_token1,
    STATE(109), 1,
      sym_rule_name,
    STATE(350), 1,
      sym_comment,
  [10984] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(830), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(351), 1,
      sym_comment,
  [11003] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(715), 1,
      sym_LINK,
    STATE(352), 1,
      sym_comment,
    ACTIONS(713), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [11020] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    STATE(353), 2,
      sym_comment,
      aux_sym_contexttest_repeat2,
  [11037] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_contexttest_repeat2,
    STATE(354), 1,
      sym_comment,
  [11056] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(851), 1,
      aux_sym_rule_token1,
    STATE(110), 1,
      sym_rule_name,
    STATE(355), 1,
      sym_comment,
  [11075] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_contexttest_repeat2,
    STATE(356), 1,
      sym_comment,
  [11094] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(357), 1,
      sym_comment,
  [11113] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(857), 1,
      aux_sym_rule_token1,
    STATE(111), 1,
      sym_rule_name,
    STATE(358), 1,
      sym_comment,
  [11132] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      aux_sym_rule_token1,
    STATE(112), 1,
      sym_rule_name,
    STATE(359), 1,
      sym_comment,
  [11151] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(360), 1,
      sym_comment,
  [11170] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(739), 1,
      sym_LINK,
    STATE(361), 1,
      sym_comment,
    ACTIONS(737), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [11187] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(861), 1,
      anon_sym_COLON,
    ACTIONS(863), 1,
      aux_sym_rule_token1,
    STATE(79), 1,
      sym_rule_name,
    STATE(362), 1,
      sym_comment,
  [11206] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_WITH,
    STATE(363), 1,
      sym_comment,
    STATE(375), 1,
      aux_sym__context,
  [11225] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      aux_sym_rule_token1,
    STATE(100), 1,
      sym_rule_name,
    STATE(364), 1,
      sym_comment,
  [11244] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(867), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(365), 1,
      sym_comment,
  [11263] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_comment,
    ACTIONS(621), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [11280] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym_comment,
    ACTIONS(557), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [11297] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(869), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(368), 1,
      sym_comment,
  [11316] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      aux_sym_rule_token1,
    STATE(369), 1,
      sym_comment,
    STATE(424), 1,
      sym_rule_name,
  [11335] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(873), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(370), 1,
      sym_comment,
  [11354] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(875), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(371), 1,
      sym_comment,
  [11373] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(372), 1,
      sym_comment,
  [11392] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym_comment,
    ACTIONS(610), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [11409] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(84), 1,
      sym_filepath,
    STATE(374), 1,
      sym_comment,
    ACTIONS(879), 2,
      sym_ntag,
      sym_qtag,
  [11426] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(375), 1,
      sym_comment,
  [11445] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(881), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(376), 1,
      sym_comment,
  [11464] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(377), 1,
      sym_comment,
    ACTIONS(885), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [11481] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(354), 1,
      aux_sym_contexttest_repeat2,
    STATE(378), 1,
      sym_comment,
  [11500] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(889), 1,
      sym_semicolon,
    ACTIONS(891), 1,
      sym_ntag,
    STATE(379), 1,
      sym_comment,
    STATE(408), 1,
      aux_sym_options_repeat1,
  [11519] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(891), 1,
      sym_ntag,
    ACTIONS(893), 1,
      sym_semicolon,
    STATE(380), 1,
      sym_comment,
    STATE(408), 1,
      aux_sym_options_repeat1,
  [11538] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(381), 1,
      sym_comment,
    ACTIONS(608), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [11555] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(875), 1,
      sym_WITH,
    STATE(382), 1,
      sym_comment,
    STATE(412), 1,
      aux_sym__context,
  [11574] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(383), 1,
      sym_comment,
  [11593] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(384), 1,
      sym_comment,
  [11612] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      sym_WITH,
    STATE(371), 1,
      aux_sym__context,
    STATE(385), 1,
      sym_comment,
  [11631] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(899), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(386), 1,
      sym_comment,
  [11650] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(387), 1,
      sym_comment,
  [11669] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(810), 1,
      aux_sym_setname_token1,
    STATE(334), 1,
      aux_sym_static_sets_repeat1,
    STATE(388), 1,
      sym_comment,
    STATE(450), 1,
      sym_setname,
  [11688] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(709), 1,
      sym_LINK,
    STATE(389), 1,
      sym_comment,
    ACTIONS(707), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [11705] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(390), 1,
      sym_comment,
  [11724] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(905), 1,
      aux_sym_rule_token1,
    STATE(90), 1,
      sym_rule_name,
    STATE(391), 1,
      sym_comment,
  [11743] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(392), 1,
      sym_comment,
  [11762] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      aux_sym_parentheses_repeat1,
    STATE(393), 1,
      sym_comment,
    STATE(451), 1,
      sym_compotag,
  [11781] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(861), 1,
      anon_sym_COLON,
    ACTIONS(909), 1,
      aux_sym_rule_token1,
    STATE(81), 1,
      sym_rule_name,
    STATE(394), 1,
      sym_comment,
  [11800] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(911), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(395), 1,
      sym_comment,
  [11819] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(913), 1,
      aux_sym_rule_token1,
    STATE(113), 1,
      sym_rule_name,
    STATE(396), 1,
      sym_comment,
  [11838] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(915), 1,
      aux_sym_rule_token1,
    STATE(117), 1,
      sym_rule_name,
    STATE(397), 1,
      sym_comment,
  [11857] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(917), 1,
      aux_sym_rule_token1,
    STATE(116), 1,
      sym_rule_name,
    STATE(398), 1,
      sym_comment,
  [11876] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(399), 1,
      sym_comment,
  [11895] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym_comment,
    ACTIONS(923), 2,
      sym_TARGET,
      aux_sym_setname_token1,
  [11912] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(925), 1,
      aux_sym_rule_token1,
    STATE(115), 1,
      sym_rule_name,
    STATE(401), 1,
      sym_comment,
  [11931] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(927), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(402), 1,
      sym_comment,
  [11950] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      sym_WITH,
    STATE(348), 1,
      aux_sym__context,
    STATE(403), 1,
      sym_comment,
  [11969] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    STATE(85), 1,
      sym_filepath,
    STATE(404), 1,
      sym_comment,
    ACTIONS(879), 2,
      sym_ntag,
      sym_qtag,
  [11986] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      sym_comment,
    ACTIONS(931), 2,
      sym_ntag,
      sym_qtag,
  [12003] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(933), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(406), 1,
      sym_comment,
  [12022] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(407), 1,
      sym_comment,
  [12041] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(937), 1,
      sym_semicolon,
    ACTIONS(939), 1,
      sym_ntag,
    STATE(408), 2,
      sym_comment,
      aux_sym_options_repeat1,
  [12058] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(409), 1,
      sym_comment,
  [12077] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(942), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(410), 1,
      sym_comment,
  [12096] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(944), 1,
      aux_sym_rule_token1,
    STATE(91), 1,
      sym_rule_name,
    STATE(411), 1,
      sym_comment,
  [12115] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(946), 1,
      sym_WITH,
    STATE(119), 1,
      aux_sym__context,
    STATE(412), 1,
      sym_comment,
  [12134] = 6,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    ACTIONS(948), 1,
      sym_semicolon,
    STATE(119), 1,
      aux_sym__context,
    STATE(413), 1,
      sym_comment,
  [12153] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      anon_sym_COLON,
    ACTIONS(950), 1,
      aux_sym_rule_token1,
    STATE(87), 1,
      sym_rule_name,
    STATE(414), 1,
      sym_comment,
  [12172] = 6,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_COLON,
    ACTIONS(952), 1,
      aux_sym_rule_token1,
    STATE(107), 1,
      sym_rule_name,
    STATE(415), 1,
      sym_comment,
  [12191] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(416), 1,
      sym_comment,
    ACTIONS(707), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [12205] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(417), 1,
      sym_comment,
    ACTIONS(954), 2,
      sym_BEFORE,
      sym_AFTER,
  [12219] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      aux_sym__context,
    STATE(418), 1,
      sym_comment,
  [12235] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(419), 1,
      sym_comment,
    ACTIONS(956), 2,
      sym_ONCE,
      sym_ALWAYS,
  [12249] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(420), 1,
      sym_comment,
    STATE(480), 1,
      sym_setname,
  [12265] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      aux_sym_setname_token1,
    STATE(421), 1,
      sym_comment,
    STATE(482), 1,
      sym_setname,
  [12281] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(422), 1,
      sym_comment,
    ACTIONS(958), 2,
      sym_BEFORE,
      sym_AFTER,
  [12295] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(346), 1,
      aux_sym__context,
    STATE(423), 1,
      sym_comment,
  [12311] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(424), 1,
      sym_comment,
    ACTIONS(960), 2,
      sym_ONCE,
      sym_ALWAYS,
  [12325] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      aux_sym__context,
    STATE(425), 1,
      sym_comment,
  [12341] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(392), 1,
      aux_sym__context,
    STATE(426), 1,
      sym_comment,
  [12357] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(427), 1,
      sym_comment,
    ACTIONS(598), 2,
      sym_ONCE,
      sym_ALWAYS,
  [12371] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(428), 1,
      sym_comment,
    ACTIONS(737), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [12385] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(429), 1,
      sym_comment,
    ACTIONS(849), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12399] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(407), 1,
      aux_sym__context,
    STATE(430), 1,
      sym_comment,
  [12415] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(431), 1,
      sym_comment,
    ACTIONS(713), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [12429] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(390), 1,
      aux_sym__context,
    STATE(432), 1,
      sym_comment,
  [12445] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      aux_sym__context,
    STATE(433), 1,
      sym_comment,
  [12461] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(434), 1,
      sym_comment,
    ACTIONS(674), 2,
      sym_semicolon,
      anon_sym_LPAREN,
  [12475] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(386), 1,
      aux_sym__context,
    STATE(435), 1,
      sym_comment,
  [12491] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(436), 1,
      sym_comment,
    ACTIONS(962), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [12505] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(384), 1,
      aux_sym__context,
    STATE(437), 1,
      sym_comment,
  [12521] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      aux_sym__context,
    STATE(438), 1,
      sym_comment,
  [12537] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(891), 1,
      sym_ntag,
    STATE(379), 1,
      aux_sym_options_repeat1,
    STATE(439), 1,
      sym_comment,
  [12553] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(440), 1,
      sym_comment,
    ACTIONS(964), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [12567] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(891), 1,
      sym_ntag,
    STATE(380), 1,
      aux_sym_options_repeat1,
    STATE(441), 1,
      sym_comment,
  [12583] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      aux_sym__context,
    STATE(442), 1,
      sym_comment,
  [12599] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(443), 1,
      sym_comment,
    ACTIONS(966), 2,
      sym_RTL,
      sym_LTR,
  [12613] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(399), 1,
      aux_sym__context,
    STATE(444), 1,
      sym_comment,
  [12629] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      aux_sym__context,
    STATE(445), 1,
      sym_comment,
  [12645] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      aux_sym__context,
    STATE(446), 1,
      sym_comment,
  [12661] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(368), 1,
      aux_sym__context,
    STATE(447), 1,
      sym_comment,
  [12677] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(968), 1,
      sym_semicolon,
    ACTIONS(970), 1,
      sym_ntag,
    STATE(448), 1,
      sym_comment,
  [12693] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      aux_sym__context,
    STATE(449), 1,
      sym_comment,
  [12709] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(972), 1,
      sym_semicolon,
    ACTIONS(974), 1,
      aux_sym_setname_token1,
    STATE(450), 1,
      sym_comment,
  [12725] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(451), 1,
      sym_comment,
    ACTIONS(976), 2,
      sym_semicolon,
      anon_sym_LPAREN,
  [12739] = 5,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      sym_semicolon,
    ACTIONS(621), 1,
      aux_sym_setname_token1,
    STATE(452), 1,
      sym_comment,
  [12755] = 5,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(372), 1,
      aux_sym__context,
    STATE(453), 1,
      sym_comment,
  [12771] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(454), 1,
      sym_comment,
    ACTIONS(978), 2,
      sym_BEFORE,
      sym_AFTER,
  [12785] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(980), 1,
      sym_semicolon,
    STATE(455), 1,
      sym_comment,
  [12798] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(982), 1,
      sym_semicolon,
    STATE(456), 1,
      sym_comment,
  [12811] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(984), 1,
      sym_eq,
    STATE(457), 1,
      sym_comment,
  [12824] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(986), 1,
      sym_eq,
    STATE(458), 1,
      sym_comment,
  [12837] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(988), 1,
      ts_builtin_sym_end,
    STATE(459), 1,
      sym_comment,
  [12850] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(990), 1,
      sym_semicolon,
    STATE(460), 1,
      sym_comment,
  [12863] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(992), 1,
      sym_semicolon,
    STATE(461), 1,
      sym_comment,
  [12876] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
    STATE(462), 1,
      sym_comment,
  [12889] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_comment,
  [12902] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(464), 1,
      sym_comment,
  [12915] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(996), 1,
      sym_semicolon,
    STATE(465), 1,
      sym_comment,
  [12928] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_comment,
  [12941] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1000), 1,
      sym_prefix,
    STATE(467), 1,
      sym_comment,
  [12954] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1002), 1,
      sym_ntag,
    STATE(468), 1,
      sym_comment,
  [12967] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1004), 1,
      sym_semicolon,
    STATE(469), 1,
      sym_comment,
  [12980] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1006), 1,
      sym_semicolon,
    STATE(470), 1,
      sym_comment,
  [12993] = 4,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(1008), 1,
      aux_sym_comment_token2,
    STATE(471), 1,
      sym_comment,
  [13006] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1010), 1,
      sym_semicolon,
    STATE(472), 1,
      sym_comment,
  [13019] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1012), 1,
      sym_semicolon,
    STATE(473), 1,
      sym_comment,
  [13032] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1014), 1,
      sym_semicolon,
    STATE(474), 1,
      sym_comment,
  [13045] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1016), 1,
      sym_semicolon,
    STATE(475), 1,
      sym_comment,
  [13058] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1018), 1,
      sym_semicolon,
    STATE(476), 1,
      sym_comment,
  [13071] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1020), 1,
      sym_semicolon,
    STATE(477), 1,
      sym_comment,
  [13084] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1022), 1,
      sym_semicolon,
    STATE(478), 1,
      sym_comment,
  [13097] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1024), 1,
      sym_semicolon,
    STATE(479), 1,
      sym_comment,
  [13110] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1026), 1,
      sym_eq,
    STATE(480), 1,
      sym_comment,
  [13123] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1028), 1,
      sym_semicolon,
    STATE(481), 1,
      sym_comment,
  [13136] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1030), 1,
      sym_eq,
    STATE(482), 1,
      sym_comment,
  [13149] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1032), 1,
      sym_semicolon,
    STATE(483), 1,
      sym_comment,
  [13162] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1034), 1,
      sym_semicolon,
    STATE(484), 1,
      sym_comment,
  [13175] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(485), 1,
      sym_comment,
  [13188] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_comment,
  [13201] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1040), 1,
      sym_semicolon,
    STATE(487), 1,
      sym_comment,
  [13214] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym_comment,
  [13227] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1044), 1,
      sym_semicolon,
    STATE(489), 1,
      sym_comment,
  [13240] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1046), 1,
      sym_ntag,
    STATE(490), 1,
      sym_comment,
  [13253] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1048), 1,
      sym_ntag,
    STATE(491), 1,
      sym_comment,
  [13266] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1050), 1,
      sym_rawpath,
    STATE(492), 1,
      sym_comment,
  [13279] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1052), 1,
      sym_eq,
    STATE(493), 1,
      sym_comment,
  [13292] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1054), 1,
      sym_ntag,
    STATE(494), 1,
      sym_comment,
  [13305] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1056), 1,
      sym_eq,
    STATE(495), 1,
      sym_comment,
  [13318] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1058), 1,
      sym_pluseq,
    STATE(496), 1,
      sym_comment,
  [13331] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1060), 1,
      sym_pluseq,
    STATE(497), 1,
      sym_comment,
  [13344] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1062), 1,
      sym_eq,
    STATE(498), 1,
      sym_comment,
  [13357] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1064), 1,
      sym_ntag,
    STATE(499), 1,
      sym_comment,
  [13370] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1066), 1,
      sym_semicolon,
    STATE(500), 1,
      sym_comment,
  [13383] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym_comment,
  [13396] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1070), 1,
      sym_ntag,
    STATE(502), 1,
      sym_comment,
  [13409] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym_comment,
  [13422] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1074), 1,
      sym_ntag,
    STATE(504), 1,
      sym_comment,
  [13435] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym_comment,
  [13448] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1078), 1,
      sym_ntag,
    STATE(506), 1,
      sym_comment,
  [13461] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1080), 1,
      sym_semicolon,
    STATE(507), 1,
      sym_comment,
  [13474] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym_END,
    ACTIONS(1082), 1,
      sym_ntag,
    STATE(508), 1,
      sym_comment,
  [13487] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym_comment,
  [13500] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1086), 1,
      sym_semicolon,
    STATE(510), 1,
      sym_comment,
  [13513] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_comment,
  [13526] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1090), 1,
      sym_semicolon,
    STATE(512), 1,
      sym_comment,
  [13539] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1092), 1,
      sym_eq,
    STATE(513), 1,
      sym_comment,
  [13552] = 4,
    ACTIONS(3), 1,
      sym_END,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(1094), 1,
      sym_eq,
    STATE(514), 1,
      sym_comment,
  [13565] = 1,
    ACTIONS(1096), 1,
      ts_builtin_sym_end,
  [13569] = 1,
    ACTIONS(1098), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 414,
  [SMALL_STATE(13)] = 465,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 618,
  [SMALL_STATE(17)] = 669,
  [SMALL_STATE(18)] = 720,
  [SMALL_STATE(19)] = 771,
  [SMALL_STATE(20)] = 822,
  [SMALL_STATE(21)] = 873,
  [SMALL_STATE(22)] = 924,
  [SMALL_STATE(23)] = 975,
  [SMALL_STATE(24)] = 1026,
  [SMALL_STATE(25)] = 1077,
  [SMALL_STATE(26)] = 1128,
  [SMALL_STATE(27)] = 1179,
  [SMALL_STATE(28)] = 1230,
  [SMALL_STATE(29)] = 1281,
  [SMALL_STATE(30)] = 1332,
  [SMALL_STATE(31)] = 1383,
  [SMALL_STATE(32)] = 1434,
  [SMALL_STATE(33)] = 1485,
  [SMALL_STATE(34)] = 1536,
  [SMALL_STATE(35)] = 1587,
  [SMALL_STATE(36)] = 1638,
  [SMALL_STATE(37)] = 1689,
  [SMALL_STATE(38)] = 1740,
  [SMALL_STATE(39)] = 1791,
  [SMALL_STATE(40)] = 1842,
  [SMALL_STATE(41)] = 1893,
  [SMALL_STATE(42)] = 1944,
  [SMALL_STATE(43)] = 1995,
  [SMALL_STATE(44)] = 2046,
  [SMALL_STATE(45)] = 2097,
  [SMALL_STATE(46)] = 2148,
  [SMALL_STATE(47)] = 2199,
  [SMALL_STATE(48)] = 2250,
  [SMALL_STATE(49)] = 2301,
  [SMALL_STATE(50)] = 2352,
  [SMALL_STATE(51)] = 2403,
  [SMALL_STATE(52)] = 2454,
  [SMALL_STATE(53)] = 2505,
  [SMALL_STATE(54)] = 2556,
  [SMALL_STATE(55)] = 2607,
  [SMALL_STATE(56)] = 2658,
  [SMALL_STATE(57)] = 2709,
  [SMALL_STATE(58)] = 2760,
  [SMALL_STATE(59)] = 2811,
  [SMALL_STATE(60)] = 2862,
  [SMALL_STATE(61)] = 2913,
  [SMALL_STATE(62)] = 2964,
  [SMALL_STATE(63)] = 3015,
  [SMALL_STATE(64)] = 3066,
  [SMALL_STATE(65)] = 3117,
  [SMALL_STATE(66)] = 3168,
  [SMALL_STATE(67)] = 3219,
  [SMALL_STATE(68)] = 3270,
  [SMALL_STATE(69)] = 3321,
  [SMALL_STATE(70)] = 3372,
  [SMALL_STATE(71)] = 3423,
  [SMALL_STATE(72)] = 3474,
  [SMALL_STATE(73)] = 3525,
  [SMALL_STATE(74)] = 3576,
  [SMALL_STATE(75)] = 3627,
  [SMALL_STATE(76)] = 3658,
  [SMALL_STATE(77)] = 3689,
  [SMALL_STATE(78)] = 3716,
  [SMALL_STATE(79)] = 3745,
  [SMALL_STATE(80)] = 3797,
  [SMALL_STATE(81)] = 3823,
  [SMALL_STATE(82)] = 3875,
  [SMALL_STATE(83)] = 3901,
  [SMALL_STATE(84)] = 3927,
  [SMALL_STATE(85)] = 3973,
  [SMALL_STATE(86)] = 4019,
  [SMALL_STATE(87)] = 4065,
  [SMALL_STATE(88)] = 4111,
  [SMALL_STATE(89)] = 4152,
  [SMALL_STATE(90)] = 4193,
  [SMALL_STATE(91)] = 4236,
  [SMALL_STATE(92)] = 4279,
  [SMALL_STATE(93)] = 4322,
  [SMALL_STATE(94)] = 4363,
  [SMALL_STATE(95)] = 4402,
  [SMALL_STATE(96)] = 4445,
  [SMALL_STATE(97)] = 4488,
  [SMALL_STATE(98)] = 4531,
  [SMALL_STATE(99)] = 4574,
  [SMALL_STATE(100)] = 4613,
  [SMALL_STATE(101)] = 4656,
  [SMALL_STATE(102)] = 4694,
  [SMALL_STATE(103)] = 4732,
  [SMALL_STATE(104)] = 4770,
  [SMALL_STATE(105)] = 4810,
  [SMALL_STATE(106)] = 4850,
  [SMALL_STATE(107)] = 4887,
  [SMALL_STATE(108)] = 4924,
  [SMALL_STATE(109)] = 4961,
  [SMALL_STATE(110)] = 4998,
  [SMALL_STATE(111)] = 5035,
  [SMALL_STATE(112)] = 5072,
  [SMALL_STATE(113)] = 5109,
  [SMALL_STATE(114)] = 5146,
  [SMALL_STATE(115)] = 5183,
  [SMALL_STATE(116)] = 5220,
  [SMALL_STATE(117)] = 5257,
  [SMALL_STATE(118)] = 5294,
  [SMALL_STATE(119)] = 5328,
  [SMALL_STATE(120)] = 5350,
  [SMALL_STATE(121)] = 5374,
  [SMALL_STATE(122)] = 5408,
  [SMALL_STATE(123)] = 5442,
  [SMALL_STATE(124)] = 5476,
  [SMALL_STATE(125)] = 5510,
  [SMALL_STATE(126)] = 5544,
  [SMALL_STATE(127)] = 5578,
  [SMALL_STATE(128)] = 5612,
  [SMALL_STATE(129)] = 5646,
  [SMALL_STATE(130)] = 5666,
  [SMALL_STATE(131)] = 5690,
  [SMALL_STATE(132)] = 5724,
  [SMALL_STATE(133)] = 5758,
  [SMALL_STATE(134)] = 5792,
  [SMALL_STATE(135)] = 5818,
  [SMALL_STATE(136)] = 5844,
  [SMALL_STATE(137)] = 5878,
  [SMALL_STATE(138)] = 5906,
  [SMALL_STATE(139)] = 5940,
  [SMALL_STATE(140)] = 5974,
  [SMALL_STATE(141)] = 6008,
  [SMALL_STATE(142)] = 6042,
  [SMALL_STATE(143)] = 6076,
  [SMALL_STATE(144)] = 6096,
  [SMALL_STATE(145)] = 6122,
  [SMALL_STATE(146)] = 6148,
  [SMALL_STATE(147)] = 6182,
  [SMALL_STATE(148)] = 6210,
  [SMALL_STATE(149)] = 6244,
  [SMALL_STATE(150)] = 6278,
  [SMALL_STATE(151)] = 6312,
  [SMALL_STATE(152)] = 6346,
  [SMALL_STATE(153)] = 6380,
  [SMALL_STATE(154)] = 6414,
  [SMALL_STATE(155)] = 6445,
  [SMALL_STATE(156)] = 6472,
  [SMALL_STATE(157)] = 6503,
  [SMALL_STATE(158)] = 6534,
  [SMALL_STATE(159)] = 6565,
  [SMALL_STATE(160)] = 6586,
  [SMALL_STATE(161)] = 6607,
  [SMALL_STATE(162)] = 6638,
  [SMALL_STATE(163)] = 6669,
  [SMALL_STATE(164)] = 6700,
  [SMALL_STATE(165)] = 6731,
  [SMALL_STATE(166)] = 6750,
  [SMALL_STATE(167)] = 6781,
  [SMALL_STATE(168)] = 6802,
  [SMALL_STATE(169)] = 6833,
  [SMALL_STATE(170)] = 6864,
  [SMALL_STATE(171)] = 6891,
  [SMALL_STATE(172)] = 6912,
  [SMALL_STATE(173)] = 6933,
  [SMALL_STATE(174)] = 6960,
  [SMALL_STATE(175)] = 6991,
  [SMALL_STATE(176)] = 7018,
  [SMALL_STATE(177)] = 7045,
  [SMALL_STATE(178)] = 7066,
  [SMALL_STATE(179)] = 7097,
  [SMALL_STATE(180)] = 7120,
  [SMALL_STATE(181)] = 7147,
  [SMALL_STATE(182)] = 7178,
  [SMALL_STATE(183)] = 7205,
  [SMALL_STATE(184)] = 7236,
  [SMALL_STATE(185)] = 7257,
  [SMALL_STATE(186)] = 7282,
  [SMALL_STATE(187)] = 7307,
  [SMALL_STATE(188)] = 7338,
  [SMALL_STATE(189)] = 7369,
  [SMALL_STATE(190)] = 7395,
  [SMALL_STATE(191)] = 7415,
  [SMALL_STATE(192)] = 7435,
  [SMALL_STATE(193)] = 7457,
  [SMALL_STATE(194)] = 7477,
  [SMALL_STATE(195)] = 7503,
  [SMALL_STATE(196)] = 7529,
  [SMALL_STATE(197)] = 7555,
  [SMALL_STATE(198)] = 7575,
  [SMALL_STATE(199)] = 7601,
  [SMALL_STATE(200)] = 7627,
  [SMALL_STATE(201)] = 7653,
  [SMALL_STATE(202)] = 7675,
  [SMALL_STATE(203)] = 7701,
  [SMALL_STATE(204)] = 7725,
  [SMALL_STATE(205)] = 7751,
  [SMALL_STATE(206)] = 7777,
  [SMALL_STATE(207)] = 7796,
  [SMALL_STATE(208)] = 7815,
  [SMALL_STATE(209)] = 7838,
  [SMALL_STATE(210)] = 7859,
  [SMALL_STATE(211)] = 7882,
  [SMALL_STATE(212)] = 7907,
  [SMALL_STATE(213)] = 7930,
  [SMALL_STATE(214)] = 7953,
  [SMALL_STATE(215)] = 7976,
  [SMALL_STATE(216)] = 7995,
  [SMALL_STATE(217)] = 8020,
  [SMALL_STATE(218)] = 8045,
  [SMALL_STATE(219)] = 8070,
  [SMALL_STATE(220)] = 8093,
  [SMALL_STATE(221)] = 8118,
  [SMALL_STATE(222)] = 8143,
  [SMALL_STATE(223)] = 8164,
  [SMALL_STATE(224)] = 8189,
  [SMALL_STATE(225)] = 8214,
  [SMALL_STATE(226)] = 8237,
  [SMALL_STATE(227)] = 8260,
  [SMALL_STATE(228)] = 8285,
  [SMALL_STATE(229)] = 8308,
  [SMALL_STATE(230)] = 8331,
  [SMALL_STATE(231)] = 8350,
  [SMALL_STATE(232)] = 8375,
  [SMALL_STATE(233)] = 8400,
  [SMALL_STATE(234)] = 8425,
  [SMALL_STATE(235)] = 8450,
  [SMALL_STATE(236)] = 8475,
  [SMALL_STATE(237)] = 8500,
  [SMALL_STATE(238)] = 8525,
  [SMALL_STATE(239)] = 8548,
  [SMALL_STATE(240)] = 8569,
  [SMALL_STATE(241)] = 8592,
  [SMALL_STATE(242)] = 8615,
  [SMALL_STATE(243)] = 8640,
  [SMALL_STATE(244)] = 8663,
  [SMALL_STATE(245)] = 8688,
  [SMALL_STATE(246)] = 8707,
  [SMALL_STATE(247)] = 8732,
  [SMALL_STATE(248)] = 8757,
  [SMALL_STATE(249)] = 8780,
  [SMALL_STATE(250)] = 8805,
  [SMALL_STATE(251)] = 8830,
  [SMALL_STATE(252)] = 8853,
  [SMALL_STATE(253)] = 8876,
  [SMALL_STATE(254)] = 8899,
  [SMALL_STATE(255)] = 8918,
  [SMALL_STATE(256)] = 8943,
  [SMALL_STATE(257)] = 8968,
  [SMALL_STATE(258)] = 8991,
  [SMALL_STATE(259)] = 9014,
  [SMALL_STATE(260)] = 9037,
  [SMALL_STATE(261)] = 9062,
  [SMALL_STATE(262)] = 9087,
  [SMALL_STATE(263)] = 9112,
  [SMALL_STATE(264)] = 9137,
  [SMALL_STATE(265)] = 9160,
  [SMALL_STATE(266)] = 9183,
  [SMALL_STATE(267)] = 9206,
  [SMALL_STATE(268)] = 9231,
  [SMALL_STATE(269)] = 9256,
  [SMALL_STATE(270)] = 9279,
  [SMALL_STATE(271)] = 9304,
  [SMALL_STATE(272)] = 9329,
  [SMALL_STATE(273)] = 9354,
  [SMALL_STATE(274)] = 9377,
  [SMALL_STATE(275)] = 9402,
  [SMALL_STATE(276)] = 9427,
  [SMALL_STATE(277)] = 9452,
  [SMALL_STATE(278)] = 9477,
  [SMALL_STATE(279)] = 9502,
  [SMALL_STATE(280)] = 9527,
  [SMALL_STATE(281)] = 9546,
  [SMALL_STATE(282)] = 9571,
  [SMALL_STATE(283)] = 9594,
  [SMALL_STATE(284)] = 9613,
  [SMALL_STATE(285)] = 9636,
  [SMALL_STATE(286)] = 9661,
  [SMALL_STATE(287)] = 9686,
  [SMALL_STATE(288)] = 9709,
  [SMALL_STATE(289)] = 9732,
  [SMALL_STATE(290)] = 9757,
  [SMALL_STATE(291)] = 9780,
  [SMALL_STATE(292)] = 9799,
  [SMALL_STATE(293)] = 9822,
  [SMALL_STATE(294)] = 9845,
  [SMALL_STATE(295)] = 9868,
  [SMALL_STATE(296)] = 9890,
  [SMALL_STATE(297)] = 9910,
  [SMALL_STATE(298)] = 9932,
  [SMALL_STATE(299)] = 9952,
  [SMALL_STATE(300)] = 9972,
  [SMALL_STATE(301)] = 9994,
  [SMALL_STATE(302)] = 10016,
  [SMALL_STATE(303)] = 10034,
  [SMALL_STATE(304)] = 10054,
  [SMALL_STATE(305)] = 10072,
  [SMALL_STATE(306)] = 10090,
  [SMALL_STATE(307)] = 10112,
  [SMALL_STATE(308)] = 10130,
  [SMALL_STATE(309)] = 10150,
  [SMALL_STATE(310)] = 10168,
  [SMALL_STATE(311)] = 10190,
  [SMALL_STATE(312)] = 10212,
  [SMALL_STATE(313)] = 10234,
  [SMALL_STATE(314)] = 10256,
  [SMALL_STATE(315)] = 10278,
  [SMALL_STATE(316)] = 10300,
  [SMALL_STATE(317)] = 10318,
  [SMALL_STATE(318)] = 10338,
  [SMALL_STATE(319)] = 10356,
  [SMALL_STATE(320)] = 10372,
  [SMALL_STATE(321)] = 10392,
  [SMALL_STATE(322)] = 10412,
  [SMALL_STATE(323)] = 10432,
  [SMALL_STATE(324)] = 10452,
  [SMALL_STATE(325)] = 10474,
  [SMALL_STATE(326)] = 10494,
  [SMALL_STATE(327)] = 10514,
  [SMALL_STATE(328)] = 10534,
  [SMALL_STATE(329)] = 10550,
  [SMALL_STATE(330)] = 10570,
  [SMALL_STATE(331)] = 10590,
  [SMALL_STATE(332)] = 10610,
  [SMALL_STATE(333)] = 10632,
  [SMALL_STATE(334)] = 10654,
  [SMALL_STATE(335)] = 10676,
  [SMALL_STATE(336)] = 10698,
  [SMALL_STATE(337)] = 10718,
  [SMALL_STATE(338)] = 10737,
  [SMALL_STATE(339)] = 10756,
  [SMALL_STATE(340)] = 10775,
  [SMALL_STATE(341)] = 10794,
  [SMALL_STATE(342)] = 10813,
  [SMALL_STATE(343)] = 10832,
  [SMALL_STATE(344)] = 10851,
  [SMALL_STATE(345)] = 10870,
  [SMALL_STATE(346)] = 10889,
  [SMALL_STATE(347)] = 10908,
  [SMALL_STATE(348)] = 10927,
  [SMALL_STATE(349)] = 10946,
  [SMALL_STATE(350)] = 10965,
  [SMALL_STATE(351)] = 10984,
  [SMALL_STATE(352)] = 11003,
  [SMALL_STATE(353)] = 11020,
  [SMALL_STATE(354)] = 11037,
  [SMALL_STATE(355)] = 11056,
  [SMALL_STATE(356)] = 11075,
  [SMALL_STATE(357)] = 11094,
  [SMALL_STATE(358)] = 11113,
  [SMALL_STATE(359)] = 11132,
  [SMALL_STATE(360)] = 11151,
  [SMALL_STATE(361)] = 11170,
  [SMALL_STATE(362)] = 11187,
  [SMALL_STATE(363)] = 11206,
  [SMALL_STATE(364)] = 11225,
  [SMALL_STATE(365)] = 11244,
  [SMALL_STATE(366)] = 11263,
  [SMALL_STATE(367)] = 11280,
  [SMALL_STATE(368)] = 11297,
  [SMALL_STATE(369)] = 11316,
  [SMALL_STATE(370)] = 11335,
  [SMALL_STATE(371)] = 11354,
  [SMALL_STATE(372)] = 11373,
  [SMALL_STATE(373)] = 11392,
  [SMALL_STATE(374)] = 11409,
  [SMALL_STATE(375)] = 11426,
  [SMALL_STATE(376)] = 11445,
  [SMALL_STATE(377)] = 11464,
  [SMALL_STATE(378)] = 11481,
  [SMALL_STATE(379)] = 11500,
  [SMALL_STATE(380)] = 11519,
  [SMALL_STATE(381)] = 11538,
  [SMALL_STATE(382)] = 11555,
  [SMALL_STATE(383)] = 11574,
  [SMALL_STATE(384)] = 11593,
  [SMALL_STATE(385)] = 11612,
  [SMALL_STATE(386)] = 11631,
  [SMALL_STATE(387)] = 11650,
  [SMALL_STATE(388)] = 11669,
  [SMALL_STATE(389)] = 11688,
  [SMALL_STATE(390)] = 11705,
  [SMALL_STATE(391)] = 11724,
  [SMALL_STATE(392)] = 11743,
  [SMALL_STATE(393)] = 11762,
  [SMALL_STATE(394)] = 11781,
  [SMALL_STATE(395)] = 11800,
  [SMALL_STATE(396)] = 11819,
  [SMALL_STATE(397)] = 11838,
  [SMALL_STATE(398)] = 11857,
  [SMALL_STATE(399)] = 11876,
  [SMALL_STATE(400)] = 11895,
  [SMALL_STATE(401)] = 11912,
  [SMALL_STATE(402)] = 11931,
  [SMALL_STATE(403)] = 11950,
  [SMALL_STATE(404)] = 11969,
  [SMALL_STATE(405)] = 11986,
  [SMALL_STATE(406)] = 12003,
  [SMALL_STATE(407)] = 12022,
  [SMALL_STATE(408)] = 12041,
  [SMALL_STATE(409)] = 12058,
  [SMALL_STATE(410)] = 12077,
  [SMALL_STATE(411)] = 12096,
  [SMALL_STATE(412)] = 12115,
  [SMALL_STATE(413)] = 12134,
  [SMALL_STATE(414)] = 12153,
  [SMALL_STATE(415)] = 12172,
  [SMALL_STATE(416)] = 12191,
  [SMALL_STATE(417)] = 12205,
  [SMALL_STATE(418)] = 12219,
  [SMALL_STATE(419)] = 12235,
  [SMALL_STATE(420)] = 12249,
  [SMALL_STATE(421)] = 12265,
  [SMALL_STATE(422)] = 12281,
  [SMALL_STATE(423)] = 12295,
  [SMALL_STATE(424)] = 12311,
  [SMALL_STATE(425)] = 12325,
  [SMALL_STATE(426)] = 12341,
  [SMALL_STATE(427)] = 12357,
  [SMALL_STATE(428)] = 12371,
  [SMALL_STATE(429)] = 12385,
  [SMALL_STATE(430)] = 12399,
  [SMALL_STATE(431)] = 12415,
  [SMALL_STATE(432)] = 12429,
  [SMALL_STATE(433)] = 12445,
  [SMALL_STATE(434)] = 12461,
  [SMALL_STATE(435)] = 12475,
  [SMALL_STATE(436)] = 12491,
  [SMALL_STATE(437)] = 12505,
  [SMALL_STATE(438)] = 12521,
  [SMALL_STATE(439)] = 12537,
  [SMALL_STATE(440)] = 12553,
  [SMALL_STATE(441)] = 12567,
  [SMALL_STATE(442)] = 12583,
  [SMALL_STATE(443)] = 12599,
  [SMALL_STATE(444)] = 12613,
  [SMALL_STATE(445)] = 12629,
  [SMALL_STATE(446)] = 12645,
  [SMALL_STATE(447)] = 12661,
  [SMALL_STATE(448)] = 12677,
  [SMALL_STATE(449)] = 12693,
  [SMALL_STATE(450)] = 12709,
  [SMALL_STATE(451)] = 12725,
  [SMALL_STATE(452)] = 12739,
  [SMALL_STATE(453)] = 12755,
  [SMALL_STATE(454)] = 12771,
  [SMALL_STATE(455)] = 12785,
  [SMALL_STATE(456)] = 12798,
  [SMALL_STATE(457)] = 12811,
  [SMALL_STATE(458)] = 12824,
  [SMALL_STATE(459)] = 12837,
  [SMALL_STATE(460)] = 12850,
  [SMALL_STATE(461)] = 12863,
  [SMALL_STATE(462)] = 12876,
  [SMALL_STATE(463)] = 12889,
  [SMALL_STATE(464)] = 12902,
  [SMALL_STATE(465)] = 12915,
  [SMALL_STATE(466)] = 12928,
  [SMALL_STATE(467)] = 12941,
  [SMALL_STATE(468)] = 12954,
  [SMALL_STATE(469)] = 12967,
  [SMALL_STATE(470)] = 12980,
  [SMALL_STATE(471)] = 12993,
  [SMALL_STATE(472)] = 13006,
  [SMALL_STATE(473)] = 13019,
  [SMALL_STATE(474)] = 13032,
  [SMALL_STATE(475)] = 13045,
  [SMALL_STATE(476)] = 13058,
  [SMALL_STATE(477)] = 13071,
  [SMALL_STATE(478)] = 13084,
  [SMALL_STATE(479)] = 13097,
  [SMALL_STATE(480)] = 13110,
  [SMALL_STATE(481)] = 13123,
  [SMALL_STATE(482)] = 13136,
  [SMALL_STATE(483)] = 13149,
  [SMALL_STATE(484)] = 13162,
  [SMALL_STATE(485)] = 13175,
  [SMALL_STATE(486)] = 13188,
  [SMALL_STATE(487)] = 13201,
  [SMALL_STATE(488)] = 13214,
  [SMALL_STATE(489)] = 13227,
  [SMALL_STATE(490)] = 13240,
  [SMALL_STATE(491)] = 13253,
  [SMALL_STATE(492)] = 13266,
  [SMALL_STATE(493)] = 13279,
  [SMALL_STATE(494)] = 13292,
  [SMALL_STATE(495)] = 13305,
  [SMALL_STATE(496)] = 13318,
  [SMALL_STATE(497)] = 13331,
  [SMALL_STATE(498)] = 13344,
  [SMALL_STATE(499)] = 13357,
  [SMALL_STATE(500)] = 13370,
  [SMALL_STATE(501)] = 13383,
  [SMALL_STATE(502)] = 13396,
  [SMALL_STATE(503)] = 13409,
  [SMALL_STATE(504)] = 13422,
  [SMALL_STATE(505)] = 13435,
  [SMALL_STATE(506)] = 13448,
  [SMALL_STATE(507)] = 13461,
  [SMALL_STATE(508)] = 13474,
  [SMALL_STATE(509)] = 13487,
  [SMALL_STATE(510)] = 13500,
  [SMALL_STATE(511)] = 13513,
  [SMALL_STATE(512)] = 13526,
  [SMALL_STATE(513)] = 13539,
  [SMALL_STATE(514)] = 13552,
  [SMALL_STATE(515)] = 13565,
  [SMALL_STATE(516)] = 13569,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(457),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(514),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(513),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(498),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(497),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(496),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(495),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(421),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(492),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(491),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(490),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(344),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(364),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 7),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 6),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 6),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_tags, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_tags, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 7),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_special_list, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_special_list, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 7),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 7),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anchor, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anchor, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 12),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_mergecohorts, 11),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_mergecohorts, 11),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 11),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 11),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 11),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 11),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 10),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 10),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 10),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 10),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 10),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 10),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_mergecohorts, 10),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_mergecohorts, 10),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 10),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 10),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 9),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 9),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 9),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 9),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_mergecohorts, 9),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_mergecohorts, 9),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 9),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 9),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 9),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 9),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 6),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_mergecohorts, 7),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_mergecohorts, 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 7),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 7),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_mergecohorts, 8),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_mergecohorts, 8),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 9),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 9),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 8),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 8),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 8),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 8),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 8),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 8),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subreadings, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subreadings, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 8),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 8),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 8),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 8),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 8),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 8),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_prefix, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_prefix, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 7),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 6),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 6),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_sets, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_sets, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(306),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context, 2), SHIFT_REPEAT(149),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_target, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(300),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(296),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(283),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglist, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_target, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(120),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(171),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleflag, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruleflag, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_name, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(297),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setname, 1),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_contexttest_repeat1, 2), SHIFT_REPEAT(280),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_contexttest_repeat1, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(192),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(254),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat3, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat3, 2), SHIFT_REPEAT(485),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(301),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compotag, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compotag, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(222),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(316),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(283),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 5),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_contexttest_repeat1, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 2),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 2), SHIFT_REPEAT(452),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2), SHIFT_REPEAT(325),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(311),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat3, 4),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname_t, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2), SHIFT_REPEAT(285),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__to_from, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 2),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 1),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(448),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 7),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 6),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_list_name, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [988] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
