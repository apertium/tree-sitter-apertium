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
#define STATE_COUNT 407
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  anon_sym_SETS = 1,
  anon_sym_END = 2,
  sym_eq = 3,
  sym_semicolon = 4,
  anon_sym_DELIMITERS = 5,
  anon_sym_SOFT_DASHDELIMITERS = 6,
  anon_sym_PREFERRED_DASHTARGETS = 7,
  anon_sym_STATIC_DASHSETS = 8,
  anon_sym_MAPPING_DASHPREFIX = 9,
  anon_sym_SUBREADINGS = 10,
  anon_sym_RTL = 11,
  anon_sym_LTR = 12,
  anon_sym_PARENTHESES = 13,
  anon_sym_LIST = 14,
  anon_sym_SET = 15,
  anon_sym_INCLUDE = 16,
  anon_sym_BEFORE_DASHSECTIONS = 17,
  anon_sym_MAPPINGS = 18,
  anon_sym_CORRECTIONS = 19,
  anon_sym_SECTION = 20,
  anon_sym_CONSTRAINTS = 21,
  sym_after_sections = 22,
  sym_null_section = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_IF = 26,
  anon_sym_TARGET = 27,
  anon_sym_COLON = 28,
  anon_sym_TO = 29,
  anon_sym_FROM = 30,
  anon_sym_WITHCHILD = 31,
  anon_sym_NOCHILD = 32,
  anon_sym_BEFORE = 33,
  anon_sym_AFTER = 34,
  anon_sym_WITH = 35,
  anon_sym_ONCE = 36,
  anon_sym_ALWAYS = 37,
  anon_sym_TEMPLATE = 38,
  anon_sym_ALL = 39,
  anon_sym_NONE = 40,
  anon_sym_NOT = 41,
  anon_sym_NEGATE = 42,
  aux_sym_contexttest_token1 = 43,
  anon_sym_LINK = 44,
  anon_sym_LBRACK = 45,
  anon_sym_COMMA = 46,
  anon_sym_RBRACK = 47,
  anon_sym_OR = 48,
  sym_set_op = 49,
  sym_rawpath = 50,
  sym_prefix = 51,
  sym_ruletype = 52,
  sym_ruletype_substitute_etc = 53,
  sym_ruletype_parentchild = 54,
  sym_ruletype_relation = 55,
  sym_ruletype_relations = 56,
  sym_ruletype_map_etc = 57,
  sym_ruletype_addcohort = 58,
  sym_ruletype_move = 59,
  sym_ruletype_switch = 60,
  sym_ruletype_external = 61,
  sym_ruleflag_name = 62,
  aux_sym_setname_token1 = 63,
  aux_sym_setname_t_token1 = 64,
  sym_ntag = 65,
  sym_qtag = 66,
  sym_comment = 67,
  sym_source_file = 68,
  sym_special_list_name = 69,
  sym_set_special_list = 70,
  sym_static_sets = 71,
  sym_mapping_prefix = 72,
  sym_subreadings = 73,
  sym_parentheses = 74,
  sym_list = 75,
  sym_set = 76,
  sym_include = 77,
  sym_before_sections = 78,
  sym_section = 79,
  aux_sym__context = 80,
  sym__if_context = 81,
  sym__rule_target = 82,
  sym__shared_rule_end = 83,
  sym__rule_tag = 84,
  sym_rule = 85,
  sym_rule_substitute_etc = 86,
  sym_rule_map_etc = 87,
  sym__to_from = 88,
  sym_rule_parentchild = 89,
  sym__child_specifier = 90,
  sym_rule_move = 91,
  sym_rule_switch = 92,
  sym_rule_relation = 93,
  sym_rule_relations = 94,
  sym_rule_addcohort = 95,
  sym_rule_external = 96,
  sym_template = 97,
  sym_contexttest = 98,
  sym_inlineset = 99,
  sym_inlineset_single = 100,
  sym_taglist = 101,
  sym_compotag = 102,
  sym_filepath = 103,
  sym_tag = 104,
  sym_contextpos = 105,
  sym_ruleflag = 106,
  sym_setname = 107,
  sym_setname_t = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_static_sets_repeat1 = 110,
  aux_sym_parentheses_repeat1 = 111,
  aux_sym_contexttest_repeat1 = 112,
  aux_sym_contexttest_repeat2 = 113,
  aux_sym_inlineset_repeat1 = 114,
  aux_sym_taglist_repeat1 = 115,
  aux_sym_compotag_repeat1 = 116,
  aux_sym_ruleflag_repeat1 = 117,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SETS] = "SETS",
  [anon_sym_END] = "END",
  [sym_eq] = "eq",
  [sym_semicolon] = "semicolon",
  [anon_sym_DELIMITERS] = "DELIMITERS",
  [anon_sym_SOFT_DASHDELIMITERS] = "SOFT-DELIMITERS",
  [anon_sym_PREFERRED_DASHTARGETS] = "PREFERRED-TARGETS",
  [anon_sym_STATIC_DASHSETS] = "STATIC-SETS",
  [anon_sym_MAPPING_DASHPREFIX] = "MAPPING-PREFIX",
  [anon_sym_SUBREADINGS] = "SUBREADINGS",
  [anon_sym_RTL] = "RTL",
  [anon_sym_LTR] = "LTR",
  [anon_sym_PARENTHESES] = "PARENTHESES",
  [anon_sym_LIST] = "LIST",
  [anon_sym_SET] = "SET",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_BEFORE_DASHSECTIONS] = "BEFORE-SECTIONS",
  [anon_sym_MAPPINGS] = "MAPPINGS",
  [anon_sym_CORRECTIONS] = "CORRECTIONS",
  [anon_sym_SECTION] = "SECTION",
  [anon_sym_CONSTRAINTS] = "CONSTRAINTS",
  [sym_after_sections] = "after_sections",
  [sym_null_section] = "null_section",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_IF] = "IF",
  [anon_sym_TARGET] = "TARGET",
  [anon_sym_COLON] = ":",
  [anon_sym_TO] = "TO",
  [anon_sym_FROM] = "FROM",
  [anon_sym_WITHCHILD] = "WITHCHILD",
  [anon_sym_NOCHILD] = "NOCHILD",
  [anon_sym_BEFORE] = "BEFORE",
  [anon_sym_AFTER] = "AFTER",
  [anon_sym_WITH] = "WITH",
  [anon_sym_ONCE] = "ONCE",
  [anon_sym_ALWAYS] = "ALWAYS",
  [anon_sym_TEMPLATE] = "TEMPLATE",
  [anon_sym_ALL] = "ALL",
  [anon_sym_NONE] = "NONE",
  [anon_sym_NOT] = "NOT",
  [anon_sym_NEGATE] = "NEGATE",
  [aux_sym_contexttest_token1] = "contexttest_token1",
  [anon_sym_LINK] = "LINK",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_OR] = "OR",
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
  [sym_before_sections] = "before_sections",
  [sym_section] = "section",
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
  [anon_sym_SETS] = anon_sym_SETS,
  [anon_sym_END] = anon_sym_END,
  [sym_eq] = sym_eq,
  [sym_semicolon] = sym_semicolon,
  [anon_sym_DELIMITERS] = anon_sym_DELIMITERS,
  [anon_sym_SOFT_DASHDELIMITERS] = anon_sym_SOFT_DASHDELIMITERS,
  [anon_sym_PREFERRED_DASHTARGETS] = anon_sym_PREFERRED_DASHTARGETS,
  [anon_sym_STATIC_DASHSETS] = anon_sym_STATIC_DASHSETS,
  [anon_sym_MAPPING_DASHPREFIX] = anon_sym_MAPPING_DASHPREFIX,
  [anon_sym_SUBREADINGS] = anon_sym_SUBREADINGS,
  [anon_sym_RTL] = anon_sym_RTL,
  [anon_sym_LTR] = anon_sym_LTR,
  [anon_sym_PARENTHESES] = anon_sym_PARENTHESES,
  [anon_sym_LIST] = anon_sym_LIST,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_BEFORE_DASHSECTIONS] = anon_sym_BEFORE_DASHSECTIONS,
  [anon_sym_MAPPINGS] = anon_sym_MAPPINGS,
  [anon_sym_CORRECTIONS] = anon_sym_CORRECTIONS,
  [anon_sym_SECTION] = anon_sym_SECTION,
  [anon_sym_CONSTRAINTS] = anon_sym_CONSTRAINTS,
  [sym_after_sections] = sym_after_sections,
  [sym_null_section] = sym_null_section,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_TARGET] = anon_sym_TARGET,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_WITHCHILD] = anon_sym_WITHCHILD,
  [anon_sym_NOCHILD] = anon_sym_NOCHILD,
  [anon_sym_BEFORE] = anon_sym_BEFORE,
  [anon_sym_AFTER] = anon_sym_AFTER,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_ONCE] = anon_sym_ONCE,
  [anon_sym_ALWAYS] = anon_sym_ALWAYS,
  [anon_sym_TEMPLATE] = anon_sym_TEMPLATE,
  [anon_sym_ALL] = anon_sym_ALL,
  [anon_sym_NONE] = anon_sym_NONE,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_NEGATE] = anon_sym_NEGATE,
  [aux_sym_contexttest_token1] = aux_sym_contexttest_token1,
  [anon_sym_LINK] = anon_sym_LINK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_OR] = anon_sym_OR,
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
  [sym_before_sections] = sym_before_sections,
  [sym_section] = sym_section,
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
  [anon_sym_SETS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DELIMITERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOFT_DASHDELIMITERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREFERRED_DASHTARGETS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATIC_DASHSETS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAPPING_DASHPREFIX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBREADINGS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARENTHESES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEFORE_DASHSECTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAPPINGS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CORRECTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONSTRAINTS] = {
    .visible = true,
    .named = false,
  },
  [sym_after_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_null_section] = {
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITHCHILD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOCHILD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEFORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AFTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALWAYS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEMPLATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEGATE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_contexttest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LINK] = {
    .visible = true,
    .named = false,
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
  [anon_sym_OR] = {
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
  [sym_before_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
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
      if (eof) ADVANCE(442);
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == ',') ADVANCE(499);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == ';') ADVANCE(446);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == 'B') ADVANCE(507);
      if (lookahead == 'C') ADVANCE(510);
      if (lookahead == 'D') ADVANCE(512);
      if (lookahead == 'E') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(522);
      if (lookahead == 'I') ADVANCE(516);
      if (lookahead == 'J') ADVANCE(523);
      if (lookahead == 'L') ADVANCE(517);
      if (lookahead == 'M') ADVANCE(508);
      if (lookahead == 'N') ADVANCE(513);
      if (lookahead == 'O') ADVANCE(520);
      if (lookahead == 'P') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(514);
      if (lookahead == 'S') ADVANCE(515);
      if (lookahead == 'T') ADVANCE(506);
      if (lookahead == 'U') ADVANCE(521);
      if (lookahead == 'W') ADVANCE(518);
      if (lookahead == '[') ADVANCE(497);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(502);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(436);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == ';') ADVANCE(446);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == '\\') ADVANCE(440);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == ',') ADVANCE(499);
      if (lookahead == ';') ADVANCE(446);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'B') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'O') ADVANCE(324);
      if (lookahead == 'T') ADVANCE(290);
      if (lookahead == 'W') ADVANCE(215);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(502);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'N') ADVANCE(657);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == '[') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'K') ADVANCE(153);
      if (lookahead == 'L') ADVANCE(298);
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(272);
      if (lookahead == 'R') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 'W') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(504);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'E') ADVANCE(601);
      if (lookahead == 'I') ADVANCE(596);
      if (lookahead == 'K') ADVANCE(573);
      if (lookahead == 'L') ADVANCE(610);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(562);
      if (lookahead == 'S') ADVANCE(540);
      if (lookahead == 'T') ADVANCE(542);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'V') ADVANCE(544);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ':') ADVANCE(473);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'E') ADVANCE(601);
      if (lookahead == 'I') ADVANCE(596);
      if (lookahead == 'K') ADVANCE(573);
      if (lookahead == 'L') ADVANCE(610);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(562);
      if (lookahead == 'S') ADVANCE(540);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'V') ADVANCE(544);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ';') ADVANCE(446);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'E') ADVANCE(601);
      if (lookahead == 'I') ADVANCE(596);
      if (lookahead == 'K') ADVANCE(573);
      if (lookahead == 'L') ADVANCE(610);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(562);
      if (lookahead == 'S') ADVANCE(540);
      if (lookahead == 'T') ADVANCE(542);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'V') ADVANCE(544);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'E') ADVANCE(601);
      if (lookahead == 'I') ADVANCE(596);
      if (lookahead == 'K') ADVANCE(573);
      if (lookahead == 'L') ADVANCE(610);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(562);
      if (lookahead == 'S') ADVANCE(540);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'V') ADVANCE(544);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == 'O') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(542);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == 'O') ADVANCE(623);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('+' <= lookahead && lookahead <= '-') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == 8710 ||
          lookahead == 8745) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == 'T') ADVANCE(542);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == ';') ADVANCE(446);
      if (lookahead == 'B') ADVANCE(551);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead == 'L') ADVANCE(585);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(650);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == 'S') ADVANCE(460);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(336);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(315);
      if (lookahead == 'O') ADVANCE(424);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'O') ADVANCE(424);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(433);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(337);
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(314);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(434);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(434);
      if (lookahead == 'E') ADVANCE(409);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(338);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(230);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == 'F') ADVANCE(220);
      if (lookahead == 'I') ADVANCE(285);
      if (lookahead == 'O') ADVANCE(423);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(332);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(405);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(322);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(175);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(397);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(353);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(211);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(374);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(407);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(348);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(408);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(351);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(412);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(357);
      END_STATE();
    case 61:
      if (lookahead == 'B') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(264);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(345);
      END_STATE();
    case 64:
      if (lookahead == 'B') ADVANCE(537);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(246);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(372);
      END_STATE();
    case 67:
      if (lookahead == 'B') ADVANCE(245);
      END_STATE();
    case 68:
      if (lookahead == 'B') ADVANCE(151);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(186);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'I') ADVANCE(417);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(489);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(422);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(182);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(234);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(184);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(381);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(231);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(341);
      if (lookahead == 'L') ADVANCE(304);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(410);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(191);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(414);
      END_STATE();
    case 87:
      if (lookahead == 'C') ADVANCE(416);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(418);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(312);
      if (lookahead == 'O') ADVANCE(425);
      if (lookahead == 'R') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(415);
      if (lookahead == 'L') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(319);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(319);
      END_STATE();
    case 92:
      if (lookahead == 'D') ADVANCE(531);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(444);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(530);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(477);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(527);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(476);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(537);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(223);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(159);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(200);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(233);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'W') ADVANCE(199);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(524);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(530);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(534);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(487);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(482);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(478);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(491);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(526);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(484);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'U') ADVANCE(66);
      if (lookahead == 'W') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(537);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(327);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(333);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(363);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(248);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(384);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(235);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(358);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(402);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(392);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(354);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(355);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == 'O') ADVANCE(474);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(376);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 166:
      if (lookahead == 'F') ADVANCE(389);
      END_STATE();
    case 167:
      if (lookahead == 'F') ADVANCE(524);
      END_STATE();
    case 168:
      if (lookahead == 'F') ADVANCE(468);
      END_STATE();
    case 169:
      if (lookahead == 'F') ADVANCE(310);
      END_STATE();
    case 170:
      if (lookahead == 'F') ADVANCE(391);
      END_STATE();
    case 171:
      if (lookahead == 'F') ADVANCE(167);
      END_STATE();
    case 172:
      if (lookahead == 'F') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 173:
      if (lookahead == 'F') ADVANCE(194);
      END_STATE();
    case 174:
      if (lookahead == 'F') ADVANCE(154);
      END_STATE();
    case 175:
      if (lookahead == 'F') ADVANCE(123);
      END_STATE();
    case 176:
      if (lookahead == 'F') ADVANCE(311);
      END_STATE();
    case 177:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 179:
      if (lookahead == 'G') ADVANCE(365);
      END_STATE();
    case 180:
      if (lookahead == 'G') ADVANCE(140);
      END_STATE();
    case 181:
      if (lookahead == 'G') ADVANCE(147);
      END_STATE();
    case 182:
      if (lookahead == 'H') ADVANCE(524);
      END_STATE();
    case 183:
      if (lookahead == 'H') ADVANCE(481);
      END_STATE();
    case 184:
      if (lookahead == 'H') ADVANCE(535);
      END_STATE();
    case 185:
      if (lookahead == 'H') ADVANCE(480);
      END_STATE();
    case 186:
      if (lookahead == 'H') ADVANCE(203);
      END_STATE();
    case 187:
      if (lookahead == 'H') ADVANCE(158);
      END_STATE();
    case 188:
      if (lookahead == 'H') ADVANCE(303);
      END_STATE();
    case 189:
      if (lookahead == 'H') ADVANCE(204);
      END_STATE();
    case 190:
      if (lookahead == 'H') ADVANCE(305);
      END_STATE();
    case 191:
      if (lookahead == 'H') ADVANCE(208);
      END_STATE();
    case 192:
      if (lookahead == 'H') ADVANCE(85);
      END_STATE();
    case 193:
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(326);
      END_STATE();
    case 194:
      if (lookahead == 'I') ADVANCE(429);
      END_STATE();
    case 195:
      if (lookahead == 'I') ADVANCE(295);
      END_STATE();
    case 196:
      if (lookahead == 'I') ADVANCE(262);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(258);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(394);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(277);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(381);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(236);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(238);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(385);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(403);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(241);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(299);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(284);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(398);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(301);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(401);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(302);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(306);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(413);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(288);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 223:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 224:
      if (lookahead == 'K') ADVANCE(495);
      END_STATE();
    case 225:
      if (lookahead == 'K') ADVANCE(103);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(485);
      if (lookahead == 'W') ADVANCE(34);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(453);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(536);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(537);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(437);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(242);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(421);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(228);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(97);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(292);
      if (lookahead == 'W') ADVANCE(34);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 245:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 246:
      if (lookahead == 'L') ADVANCE(112);
      END_STATE();
    case 247:
      if (lookahead == 'L') ADVANCE(198);
      END_STATE();
    case 248:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 249:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 250:
      if (lookahead == 'L') ADVANCE(221);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(239);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(475);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(316);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(320);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(260);
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(219);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(139);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'V') ADVANCE(150);
      END_STATE();
    case 262:
      if (lookahead == 'M') ADVANCE(205);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(202);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(371);
      if (lookahead == 'P') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(342);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(224);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == 'S') ADVANCE(383);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(462);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(528);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(465);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(259);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == 'X') ADVANCE(126);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(501);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(255);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(432);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(362);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(368);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(369);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(386);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(393);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(289);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 287:
      if (lookahead == 'N') ADVANCE(396);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 289:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 290:
      if (lookahead == 'O') ADVANCE(474);
      END_STATE();
    case 291:
      if (lookahead == 'O') ADVANCE(225);
      END_STATE();
    case 292:
      if (lookahead == 'O') ADVANCE(426);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(252);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(188);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(267);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(313);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(318);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(291);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(69);
      if (lookahead == 'U') ADVANCE(237);
      END_STATE();
    case 301:
      if (lookahead == 'O') ADVANCE(268);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(269);
      END_STATE();
    case 303:
      if (lookahead == 'O') ADVANCE(346);
      END_STATE();
    case 304:
      if (lookahead == 'O') ADVANCE(297);
      END_STATE();
    case 305:
      if (lookahead == 'O') ADVANCE(339);
      END_STATE();
    case 306:
      if (lookahead == 'O') ADVANCE(281);
      END_STATE();
    case 307:
      if (lookahead == 'O') ADVANCE(282);
      END_STATE();
    case 308:
      if (lookahead == 'O') ADVANCE(373);
      END_STATE();
    case 309:
      if (lookahead == 'O') ADVANCE(344);
      END_STATE();
    case 310:
      if (lookahead == 'O') ADVANCE(347);
      END_STATE();
    case 311:
      if (lookahead == 'O') ADVANCE(350);
      END_STATE();
    case 312:
      if (lookahead == 'O') ADVANCE(190);
      END_STATE();
    case 313:
      if (lookahead == 'P') ADVANCE(431);
      END_STATE();
    case 314:
      if (lookahead == 'P') ADVANCE(524);
      END_STATE();
    case 315:
      if (lookahead == 'P') ADVANCE(532);
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 316:
      if (lookahead == 'P') ADVANCE(530);
      END_STATE();
    case 317:
      if (lookahead == 'P') ADVANCE(530);
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 318:
      if (lookahead == 'P') ADVANCE(537);
      END_STATE();
    case 319:
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 320:
      if (lookahead == 'P') ADVANCE(249);
      END_STATE();
    case 321:
      if (lookahead == 'P') ADVANCE(352);
      END_STATE();
    case 322:
      if (lookahead == 'P') ADVANCE(244);
      END_STATE();
    case 323:
      if (lookahead == 'P') ADVANCE(309);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(502);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(454);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(479);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(493);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(537);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(213);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(435);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(430);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(360);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(331);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(124);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(381);
      END_STATE();
    case 340:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 341:
      if (lookahead == 'R') ADVANCE(308);
      END_STATE();
    case 342:
      if (lookahead == 'R') ADVANCE(133);
      END_STATE();
    case 343:
      if (lookahead == 'R') ADVANCE(366);
      END_STATE();
    case 344:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 345:
      if (lookahead == 'R') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(411);
      END_STATE();
    case 346:
      if (lookahead == 'R') ADVANCE(387);
      END_STATE();
    case 347:
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 348:
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 349:
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 350:
      if (lookahead == 'R') ADVANCE(165);
      END_STATE();
    case 351:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 352:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 353:
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 354:
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 355:
      if (lookahead == 'R') ADVANCE(349);
      END_STATE();
    case 356:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 357:
      if (lookahead == 'R') ADVANCE(222);
      END_STATE();
    case 358:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 359:
      if (lookahead == 'S') ADVANCE(483);
      END_STATE();
    case 360:
      if (lookahead == 'S') ADVANCE(447);
      END_STATE();
    case 361:
      if (lookahead == 'S') ADVANCE(463);
      END_STATE();
    case 362:
      if (lookahead == 'S') ADVANCE(461);
      END_STATE();
    case 363:
      if (lookahead == 'S') ADVANCE(455);
      END_STATE();
    case 364:
      if (lookahead == 'S') ADVANCE(450);
      END_STATE();
    case 365:
      if (lookahead == 'S') ADVANCE(452);
      END_STATE();
    case 366:
      if (lookahead == 'S') ADVANCE(448);
      END_STATE();
    case 367:
      if (lookahead == 'S') ADVANCE(449);
      END_STATE();
    case 368:
      if (lookahead == 'S') ADVANCE(464);
      END_STATE();
    case 369:
      if (lookahead == 'S') ADVANCE(459);
      END_STATE();
    case 370:
      if (lookahead == 'S') ADVANCE(537);
      END_STATE();
    case 371:
      if (lookahead == 'S') ADVANCE(399);
      END_STATE();
    case 372:
      if (lookahead == 'S') ADVANCE(411);
      END_STATE();
    case 373:
      if (lookahead == 'S') ADVANCE(370);
      END_STATE();
    case 374:
      if (lookahead == 'S') ADVANCE(388);
      END_STATE();
    case 375:
      if (lookahead == 'S') ADVANCE(145);
      END_STATE();
    case 376:
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 377:
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 378:
      if (lookahead == 'S') ADVANCE(161);
      END_STATE();
    case 379:
      if (lookahead == 'S') ADVANCE(162);
      END_STATE();
    case 380:
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(524);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(422);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(456);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(470);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 386:
      if (lookahead == 'T') ADVANCE(527);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 388:
      if (lookahead == 'T') ADVANCE(537);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 390:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 391:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 392:
      if (lookahead == 'T') ADVANCE(430);
      END_STATE();
    case 393:
      if (lookahead == 'T') ADVANCE(361);
      END_STATE();
    case 394:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 395:
      if (lookahead == 'T') ADVANCE(195);
      END_STATE();
    case 396:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 397:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 398:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 399:
      if (lookahead == 'T') ADVANCE(340);
      END_STATE();
    case 400:
      if (lookahead == 'T') ADVANCE(364);
      END_STATE();
    case 401:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 402:
      if (lookahead == 'T') ADVANCE(367);
      END_STATE();
    case 403:
      if (lookahead == 'T') ADVANCE(382);
      END_STATE();
    case 404:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 405:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 406:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 407:
      if (lookahead == 'T') ADVANCE(120);
      END_STATE();
    case 408:
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 409:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 410:
      if (lookahead == 'T') ADVANCE(210);
      END_STATE();
    case 411:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 412:
      if (lookahead == 'T') ADVANCE(214);
      END_STATE();
    case 413:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 414:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 415:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 416:
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 417:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 418:
      if (lookahead == 'T') ADVANCE(218);
      END_STATE();
    case 419:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 420:
      if (lookahead == 'U') ADVANCE(253);
      END_STATE();
    case 421:
      if (lookahead == 'U') ADVANCE(101);
      END_STATE();
    case 422:
      if (lookahead == 'U') ADVANCE(406);
      END_STATE();
    case 423:
      if (lookahead == 'U') ADVANCE(419);
      END_STATE();
    case 424:
      if (lookahead == 'V') ADVANCE(113);
      END_STATE();
    case 425:
      if (lookahead == 'V') ADVANCE(110);
      END_STATE();
    case 426:
      if (lookahead == 'W') ADVANCE(81);
      END_STATE();
    case 427:
      if (lookahead == 'W') ADVANCE(34);
      END_STATE();
    case 428:
      if (lookahead == 'X') ADVANCE(126);
      END_STATE();
    case 429:
      if (lookahead == 'X') ADVANCE(451);
      END_STATE();
    case 430:
      if (lookahead == 'X') ADVANCE(537);
      END_STATE();
    case 431:
      if (lookahead == 'Y') ADVANCE(530);
      END_STATE();
    case 432:
      if (lookahead == 'Y') ADVANCE(537);
      END_STATE();
    case 433:
      if (lookahead == 'Y') ADVANCE(359);
      END_STATE();
    case 434:
      if (lookahead == 'Y') ADVANCE(142);
      END_STATE();
    case 435:
      if (lookahead == 'Y') ADVANCE(309);
      END_STATE();
    case 436:
      if (lookahead == '\\') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 437:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 438:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(652);
      END_STATE();
    case 439:
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 440:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 441:
      if (eof) ADVANCE(442);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead == '#') ADVANCE(668);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == ',') ADVANCE(499);
      if (lookahead == ':') ADVANCE(472);
      if (lookahead == ';') ADVANCE(446);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'B') ADVANCE(30);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'L') ADVANCE(193);
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(300);
      if (lookahead == 'O') ADVANCE(273);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(274);
      if (lookahead == 'W') ADVANCE(212);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      END_STATE();
    case 442:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_SETS);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DELIMITERS);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_SOFT_DASHDELIMITERS);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PREFERRED_DASHTARGETS);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_STATIC_DASHSETS);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_MAPPING_DASHPREFIX);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_SUBREADINGS);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RTL);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LTR);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_PARENTHESES);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LIST);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(443);
      if (lookahead == 'V') ADVANCE(60);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_BEFORE_DASHSECTIONS);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_MAPPINGS);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_CORRECTIONS);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SECTION);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_CONSTRAINTS);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_after_sections);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_null_section);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == 'F') ADVANCE(524);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_TARGET);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_WITHCHILD);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_NOCHILD);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_AFTER);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_WITH);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_WITH);
      if (lookahead == 'C') ADVANCE(191);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ONCE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ALWAYS);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_TEMPLATE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ALL);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ALL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_NEGATE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_NEGATE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_contexttest_token1);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_contexttest_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LINK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 498:
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
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_set_op);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_set_op);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_rawpath);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_prefix);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == 'O') ADVANCE(474);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A') ADVANCE(315);
      if (lookahead == 'O') ADVANCE(424);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'A') ADVANCE(337);
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'B') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(264);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(389);
      if (lookahead == 'L') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(319);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E') ADVANCE(233);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == 'U') ADVANCE(237);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'W') ADVANCE(199);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'F') ADVANCE(469);
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(326);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'I') ADVANCE(390);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == 'X') ADVANCE(126);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(501);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'N') ADVANCE(255);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_prefix);
      if (lookahead == 'U') ADVANCE(253);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ruletype);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ruletype);
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ruletype_substitute_etc);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ruletype_parentchild);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ruletype_relation);
      if (lookahead == 'S') ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ruletype_relations);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == 'R') ADVANCE(137);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ruletype_map_etc);
      if (lookahead == 'P') ADVANCE(197);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ruletype_addcohort);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ruletype_move);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ruletype_switch);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ruletype_external);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ruleflag_name);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ruleflag_name);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ':') ADVANCE(650);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(580);
      if (lookahead == 'U') ADVANCE(553);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(580);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(619);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(632);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(620);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(617);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(647);
      if (lookahead == 'E') ADVANCE(640);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(647);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(583);
      if (lookahead == 'I') ADVANCE(605);
      if (lookahead == 'O') ADVANCE(642);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(630);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'A') ADVANCE(639);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'B') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'B') ADVANCE(576);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'B') ADVANCE(551);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'C') ADVANCE(590);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'C') ADVANCE(627);
      if (lookahead == 'L') ADVANCE(613);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'D') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'D') ADVANCE(584);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'D') ADVANCE(575);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(600);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(616);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(632);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(597);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(636);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(593);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(628);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(637);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(558);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(624);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(591);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(621);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(622);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'E') ADVANCE(549);
      if (lookahead == 'O') ADVANCE(582);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'F') ADVANCE(564);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'G') ADVANCE(571);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'I') ADVANCE(638);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'I') ADVANCE(606);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'I') ADVANCE(603);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'I') ADVANCE(578);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'K') ADVANCE(496);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'K') ADVANCE(561);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(546);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(594);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(547);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(609);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'M') ADVANCE(599);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'M') ADVANCE(554);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'M') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(541);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'M') ADVANCE(565);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'M') ADVANCE(567);
      if (lookahead == 'S') ADVANCE(568);
      if (lookahead == 'V') ADVANCE(574);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(556);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(598);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(587);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(645);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(607);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(550);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'N') ADVANCE(577);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(588);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(643);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(615);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(633);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(611);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'O') ADVANCE(626);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'P') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'P') ADVANCE(614);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'P') ADVANCE(595);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(581);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(646);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(644);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(494);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(503);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(634);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(586);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(560);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(612);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(552);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(566);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'R') ADVANCE(625);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'S') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'S') ADVANCE(635);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'S') ADVANCE(631);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(644);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(471);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(564);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(572);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'T') ADVANCE(577);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'U') ADVANCE(641);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'W') ADVANCE(557);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'X') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'Y') ADVANCE(538);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'Y') ADVANCE(614);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == 'Y') ADVANCE(572);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_setname_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_setname_t_token1);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '"') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(651);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == ':') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'A') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E') ADVANCE(660);
      if (lookahead == 'O') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'E') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'G') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'L') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'N') ADVANCE(658);
      if (lookahead == 'T') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ntag);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 665:
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
          lookahead != ';') ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_qtag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',' ||
          lookahead == ']') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(649);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(668);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 441},
  [2] = {.lex_state = 441},
  [3] = {.lex_state = 441},
  [4] = {.lex_state = 441},
  [5] = {.lex_state = 441},
  [6] = {.lex_state = 441},
  [7] = {.lex_state = 441},
  [8] = {.lex_state = 441},
  [9] = {.lex_state = 441},
  [10] = {.lex_state = 441},
  [11] = {.lex_state = 441},
  [12] = {.lex_state = 441},
  [13] = {.lex_state = 441},
  [14] = {.lex_state = 441},
  [15] = {.lex_state = 441},
  [16] = {.lex_state = 441},
  [17] = {.lex_state = 441},
  [18] = {.lex_state = 441},
  [19] = {.lex_state = 441},
  [20] = {.lex_state = 441},
  [21] = {.lex_state = 441},
  [22] = {.lex_state = 441},
  [23] = {.lex_state = 441},
  [24] = {.lex_state = 441},
  [25] = {.lex_state = 441},
  [26] = {.lex_state = 441},
  [27] = {.lex_state = 441},
  [28] = {.lex_state = 441},
  [29] = {.lex_state = 441},
  [30] = {.lex_state = 441},
  [31] = {.lex_state = 441},
  [32] = {.lex_state = 441},
  [33] = {.lex_state = 441},
  [34] = {.lex_state = 441},
  [35] = {.lex_state = 441},
  [36] = {.lex_state = 441},
  [37] = {.lex_state = 441},
  [38] = {.lex_state = 441},
  [39] = {.lex_state = 441},
  [40] = {.lex_state = 441},
  [41] = {.lex_state = 441},
  [42] = {.lex_state = 441},
  [43] = {.lex_state = 441},
  [44] = {.lex_state = 441},
  [45] = {.lex_state = 441},
  [46] = {.lex_state = 441},
  [47] = {.lex_state = 441},
  [48] = {.lex_state = 441},
  [49] = {.lex_state = 441},
  [50] = {.lex_state = 441},
  [51] = {.lex_state = 441},
  [52] = {.lex_state = 441},
  [53] = {.lex_state = 441},
  [54] = {.lex_state = 441},
  [55] = {.lex_state = 441},
  [56] = {.lex_state = 441},
  [57] = {.lex_state = 441},
  [58] = {.lex_state = 441},
  [59] = {.lex_state = 441},
  [60] = {.lex_state = 441},
  [61] = {.lex_state = 441},
  [62] = {.lex_state = 441},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 19},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 441},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 441},
  [200] = {.lex_state = 17},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 441},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 17},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 14},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 14},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 441},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 441},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 14},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 441},
  [243] = {.lex_state = 441},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 441},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 441},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 441},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 441},
  [260] = {.lex_state = 441},
  [261] = {.lex_state = 441},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 441},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 441},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 441},
  [273] = {.lex_state = 441},
  [274] = {.lex_state = 441},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 441},
  [277] = {.lex_state = 441},
  [278] = {.lex_state = 441},
  [279] = {.lex_state = 441},
  [280] = {.lex_state = 441},
  [281] = {.lex_state = 18},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 441},
  [287] = {.lex_state = 441},
  [288] = {.lex_state = 441},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 441},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 441},
  [295] = {.lex_state = 441},
  [296] = {.lex_state = 441},
  [297] = {.lex_state = 441},
  [298] = {.lex_state = 441},
  [299] = {.lex_state = 441},
  [300] = {.lex_state = 441},
  [301] = {.lex_state = 441},
  [302] = {.lex_state = 441},
  [303] = {.lex_state = 441},
  [304] = {.lex_state = 441},
  [305] = {.lex_state = 14},
  [306] = {.lex_state = 441},
  [307] = {.lex_state = 441},
  [308] = {.lex_state = 441},
  [309] = {.lex_state = 441},
  [310] = {.lex_state = 19},
  [311] = {.lex_state = 441},
  [312] = {.lex_state = 441},
  [313] = {.lex_state = 441},
  [314] = {.lex_state = 441},
  [315] = {.lex_state = 441},
  [316] = {.lex_state = 441},
  [317] = {.lex_state = 441},
  [318] = {.lex_state = 441},
  [319] = {.lex_state = 441},
  [320] = {.lex_state = 441},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 441},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 441},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 441},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 441},
  [331] = {.lex_state = 441},
  [332] = {.lex_state = 441},
  [333] = {.lex_state = 441},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 441},
  [336] = {.lex_state = 441},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 441},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 441},
  [341] = {.lex_state = 441},
  [342] = {.lex_state = 441},
  [343] = {.lex_state = 441},
  [344] = {.lex_state = 441},
  [345] = {.lex_state = 441},
  [346] = {.lex_state = 441},
  [347] = {.lex_state = 441},
  [348] = {.lex_state = 441},
  [349] = {.lex_state = 441},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 441},
  [354] = {.lex_state = 441},
  [355] = {.lex_state = 441},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 441},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 441},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 441},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 441},
  [365] = {.lex_state = 441},
  [366] = {.lex_state = 441},
  [367] = {.lex_state = 441},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 441},
  [370] = {.lex_state = 441},
  [371] = {.lex_state = 441},
  [372] = {.lex_state = 4},
  [373] = {.lex_state = 441},
  [374] = {.lex_state = 4},
  [375] = {.lex_state = 441},
  [376] = {.lex_state = 441},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 441},
  [379] = {.lex_state = 441},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 441},
  [382] = {.lex_state = 441},
  [383] = {.lex_state = 441},
  [384] = {.lex_state = 441},
  [385] = {.lex_state = 441},
  [386] = {.lex_state = 441},
  [387] = {.lex_state = 441},
  [388] = {.lex_state = 441},
  [389] = {.lex_state = 441},
  [390] = {.lex_state = 441},
  [391] = {.lex_state = 441},
  [392] = {.lex_state = 441},
  [393] = {.lex_state = 441},
  [394] = {.lex_state = 441},
  [395] = {.lex_state = 441},
  [396] = {.lex_state = 441},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 441},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 441},
  [401] = {.lex_state = 9},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 441},
  [404] = {.lex_state = 441},
  [405] = {.lex_state = 441},
  [406] = {.lex_state = 441},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SETS] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [anon_sym_DELIMITERS] = ACTIONS(1),
    [anon_sym_SOFT_DASHDELIMITERS] = ACTIONS(1),
    [anon_sym_PREFERRED_DASHTARGETS] = ACTIONS(1),
    [anon_sym_STATIC_DASHSETS] = ACTIONS(1),
    [anon_sym_MAPPING_DASHPREFIX] = ACTIONS(1),
    [anon_sym_SUBREADINGS] = ACTIONS(1),
    [anon_sym_RTL] = ACTIONS(1),
    [anon_sym_LTR] = ACTIONS(1),
    [anon_sym_PARENTHESES] = ACTIONS(1),
    [anon_sym_LIST] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_MAPPINGS] = ACTIONS(1),
    [anon_sym_CORRECTIONS] = ACTIONS(1),
    [anon_sym_SECTION] = ACTIONS(1),
    [anon_sym_CONSTRAINTS] = ACTIONS(1),
    [sym_null_section] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_TARGET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_WITHCHILD] = ACTIONS(1),
    [anon_sym_NOCHILD] = ACTIONS(1),
    [anon_sym_BEFORE] = ACTIONS(1),
    [anon_sym_AFTER] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_ONCE] = ACTIONS(1),
    [anon_sym_ALWAYS] = ACTIONS(1),
    [anon_sym_TEMPLATE] = ACTIONS(1),
    [anon_sym_ALL] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_NEGATE] = ACTIONS(1),
    [aux_sym_contexttest_token1] = ACTIONS(1),
    [anon_sym_LINK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
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
    [sym_source_file] = STATE(356),
    [sym_special_list_name] = STATE(355),
    [sym_set_special_list] = STATE(2),
    [sym_static_sets] = STATE(2),
    [sym_mapping_prefix] = STATE(2),
    [sym_subreadings] = STATE(2),
    [sym_parentheses] = STATE(2),
    [sym_list] = STATE(2),
    [sym_set] = STATE(2),
    [sym_include] = STATE(2),
    [sym_before_sections] = STATE(2),
    [sym_section] = STATE(2),
    [sym_rule] = STATE(2),
    [sym_rule_substitute_etc] = STATE(2),
    [sym_rule_map_etc] = STATE(2),
    [sym_rule_parentchild] = STATE(2),
    [sym_rule_move] = STATE(2),
    [sym_rule_switch] = STATE(2),
    [sym_rule_relation] = STATE(2),
    [sym_rule_relations] = STATE(2),
    [sym_rule_addcohort] = STATE(2),
    [sym_rule_external] = STATE(2),
    [sym_template] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SETS] = ACTIONS(5),
    [anon_sym_DELIMITERS] = ACTIONS(7),
    [anon_sym_SOFT_DASHDELIMITERS] = ACTIONS(7),
    [anon_sym_PREFERRED_DASHTARGETS] = ACTIONS(7),
    [anon_sym_STATIC_DASHSETS] = ACTIONS(9),
    [anon_sym_MAPPING_DASHPREFIX] = ACTIONS(11),
    [anon_sym_SUBREADINGS] = ACTIONS(13),
    [anon_sym_PARENTHESES] = ACTIONS(15),
    [anon_sym_LIST] = ACTIONS(17),
    [anon_sym_SET] = ACTIONS(19),
    [anon_sym_INCLUDE] = ACTIONS(21),
    [anon_sym_BEFORE_DASHSECTIONS] = ACTIONS(23),
    [anon_sym_MAPPINGS] = ACTIONS(23),
    [anon_sym_CORRECTIONS] = ACTIONS(23),
    [anon_sym_SECTION] = ACTIONS(25),
    [anon_sym_CONSTRAINTS] = ACTIONS(25),
    [sym_after_sections] = ACTIONS(5),
    [sym_null_section] = ACTIONS(5),
    [anon_sym_TEMPLATE] = ACTIONS(27),
    [sym_ruletype] = ACTIONS(29),
    [sym_ruletype_substitute_etc] = ACTIONS(31),
    [sym_ruletype_parentchild] = ACTIONS(33),
    [sym_ruletype_relation] = ACTIONS(35),
    [sym_ruletype_relations] = ACTIONS(37),
    [sym_ruletype_map_etc] = ACTIONS(39),
    [sym_ruletype_addcohort] = ACTIONS(41),
    [sym_ruletype_move] = ACTIONS(43),
    [sym_ruletype_switch] = ACTIONS(45),
    [sym_ruletype_external] = ACTIONS(47),
    [sym_qtag] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_STATIC_DASHSETS,
    ACTIONS(11), 1,
      anon_sym_MAPPING_DASHPREFIX,
    ACTIONS(13), 1,
      anon_sym_SUBREADINGS,
    ACTIONS(15), 1,
      anon_sym_PARENTHESES,
    ACTIONS(17), 1,
      anon_sym_LIST,
    ACTIONS(19), 1,
      anon_sym_SET,
    ACTIONS(21), 1,
      anon_sym_INCLUDE,
    ACTIONS(27), 1,
      anon_sym_TEMPLATE,
    ACTIONS(29), 1,
      sym_ruletype,
    ACTIONS(31), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(33), 1,
      sym_ruletype_parentchild,
    ACTIONS(35), 1,
      sym_ruletype_relation,
    ACTIONS(37), 1,
      sym_ruletype_relations,
    ACTIONS(39), 1,
      sym_ruletype_map_etc,
    ACTIONS(41), 1,
      sym_ruletype_addcohort,
    ACTIONS(43), 1,
      sym_ruletype_move,
    ACTIONS(45), 1,
      sym_ruletype_switch,
    ACTIONS(47), 1,
      sym_ruletype_external,
    ACTIONS(49), 1,
      sym_qtag,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_END,
    STATE(355), 1,
      sym_special_list_name,
    ACTIONS(25), 2,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
    ACTIONS(7), 3,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
    ACTIONS(23), 3,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
    ACTIONS(53), 3,
      anon_sym_SETS,
      sym_after_sections,
      sym_null_section,
    STATE(3), 22,
      sym_set_special_list,
      sym_static_sets,
      sym_mapping_prefix,
      sym_subreadings,
      sym_parentheses,
      sym_list,
      sym_set,
      sym_include,
      sym_before_sections,
      sym_section,
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
  [113] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_STATIC_DASHSETS,
    ACTIONS(68), 1,
      anon_sym_MAPPING_DASHPREFIX,
    ACTIONS(71), 1,
      anon_sym_SUBREADINGS,
    ACTIONS(74), 1,
      anon_sym_PARENTHESES,
    ACTIONS(77), 1,
      anon_sym_LIST,
    ACTIONS(80), 1,
      anon_sym_SET,
    ACTIONS(83), 1,
      anon_sym_INCLUDE,
    ACTIONS(92), 1,
      anon_sym_TEMPLATE,
    ACTIONS(95), 1,
      sym_ruletype,
    ACTIONS(98), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(101), 1,
      sym_ruletype_parentchild,
    ACTIONS(104), 1,
      sym_ruletype_relation,
    ACTIONS(107), 1,
      sym_ruletype_relations,
    ACTIONS(110), 1,
      sym_ruletype_map_etc,
    ACTIONS(113), 1,
      sym_ruletype_addcohort,
    ACTIONS(116), 1,
      sym_ruletype_move,
    ACTIONS(119), 1,
      sym_ruletype_switch,
    ACTIONS(122), 1,
      sym_ruletype_external,
    ACTIONS(125), 1,
      sym_qtag,
    STATE(355), 1,
      sym_special_list_name,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
    ACTIONS(59), 3,
      anon_sym_SETS,
      sym_after_sections,
      sym_null_section,
    ACTIONS(62), 3,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
    ACTIONS(86), 3,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
    STATE(3), 22,
      sym_set_special_list,
      sym_static_sets,
      sym_mapping_prefix,
      sym_subreadings,
      sym_parentheses,
      sym_list,
      sym_set,
      sym_include,
      sym_before_sections,
      sym_section,
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
  [224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(128), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(132), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(136), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(140), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(144), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(148), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(152), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(156), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(160), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(164), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(168), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(172), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(176), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(180), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(184), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(188), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(192), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(196), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(200), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(204), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(208), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(212), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(216), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(220), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(224), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(228), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(232), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(236), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(240), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(244), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(248), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(252), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(256), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(260), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(264), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(268), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(272), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(276), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(280), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(284), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(288), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(292), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(296), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(300), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [1984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(304), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(308), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(312), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(316), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(320), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(324), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(328), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(332), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(336), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(340), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(344), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(348), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(352), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(356), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
      anon_sym_SET,
      sym_ruletype,
      sym_ruletype_relation,
      sym_ruletype_map_etc,
    ACTIONS(360), 28,
      ts_builtin_sym_end,
      anon_sym_SETS,
      anon_sym_END,
      anon_sym_DELIMITERS,
      anon_sym_SOFT_DASHDELIMITERS,
      anon_sym_PREFERRED_DASHTARGETS,
      anon_sym_STATIC_DASHSETS,
      anon_sym_MAPPING_DASHPREFIX,
      anon_sym_SUBREADINGS,
      anon_sym_PARENTHESES,
      anon_sym_LIST,
      anon_sym_INCLUDE,
      anon_sym_BEFORE_DASHSECTIONS,
      anon_sym_MAPPINGS,
      anon_sym_CORRECTIONS,
      anon_sym_SECTION,
      anon_sym_CONSTRAINTS,
      sym_after_sections,
      sym_null_section,
      anon_sym_TEMPLATE,
      sym_ruletype_substitute_etc,
      sym_ruletype_parentchild,
      sym_ruletype_relations,
      sym_ruletype_addcohort,
      sym_ruletype_move,
      sym_ruletype_switch,
      sym_ruletype_external,
      sym_qtag,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 15,
      sym_eq,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      aux_sym_contexttest_token1,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_set_op,
    STATE(66), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(366), 12,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_set_op,
    STATE(64), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(370), 12,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_set_op,
    STATE(66), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(372), 12,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2696] = 13,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(41), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(83), 1,
      sym__rule_tag,
    STATE(132), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 13,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
      anon_sym_LINK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_set_op,
  [2775] = 13,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(59), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(82), 1,
      sym__rule_tag,
    STATE(109), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [2816] = 12,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(98), 1,
      sym__rule_tag,
    STATE(163), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(164), 2,
      sym__rule_target,
      sym_inlineset,
  [2854] = 12,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(97), 1,
      sym__rule_tag,
    STATE(145), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(214), 2,
      sym__rule_target,
      sym_inlineset,
  [2892] = 12,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(91), 1,
      sym__rule_tag,
    STATE(161), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(201), 2,
      sym__rule_target,
      sym_inlineset,
  [2930] = 12,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(104), 1,
      sym__rule_tag,
    STATE(152), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(150), 2,
      sym__rule_target,
      sym_inlineset,
  [2968] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(345), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [2999] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(342), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3030] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(390), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3061] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(320), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3092] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(62), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(141), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3127] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(42), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(142), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3162] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(21), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(138), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3197] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(59), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(109), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3232] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(396), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3263] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(354), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3294] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(404), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3325] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(349), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3356] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(126), 1,
      sym_contextpos,
    STATE(267), 1,
      sym_setname_t,
    STATE(330), 1,
      sym_contexttest,
    ACTIONS(395), 4,
      anon_sym_ALL,
      anon_sym_NONE,
      anon_sym_NOT,
      anon_sym_NEGATE,
  [3387] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(45), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(116), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3422] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_ruletype,
    ACTIONS(405), 1,
      sym_ruletype_substitute_etc,
    ACTIONS(407), 1,
      sym_ruletype_parentchild,
    ACTIONS(409), 1,
      sym_ruletype_relation,
    ACTIONS(411), 1,
      sym_ruletype_relations,
    ACTIONS(413), 1,
      sym_ruletype_map_etc,
    ACTIONS(415), 1,
      sym_ruletype_addcohort,
    ACTIONS(417), 1,
      sym_ruletype_move,
    ACTIONS(419), 1,
      sym_ruletype_switch,
    ACTIONS(421), 1,
      sym_ruletype_external,
  [3456] = 10,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(145), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(214), 2,
      sym__rule_target,
      sym_inlineset,
  [3488] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(105), 1,
      sym__rule_tag,
    STATE(205), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(350), 1,
      sym_inlineset,
  [3522] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(108), 1,
      sym_inlineset,
    STATE(110), 1,
      sym__rule_tag,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(207), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3556] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(112), 1,
      sym__rule_tag,
    STATE(219), 1,
      sym_ruleflag,
    STATE(221), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [3590] = 11,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(133), 1,
      sym__rule_tag,
    STATE(210), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(329), 1,
      sym_inlineset,
  [3624] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(127), 1,
      sym_inlineset,
    STATE(134), 1,
      sym__rule_tag,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(234), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3658] = 10,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(147), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(209), 2,
      sym__rule_target,
      sym_inlineset,
  [3690] = 10,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(159), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(169), 2,
      sym__rule_target,
      sym_inlineset,
  [3722] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(136), 1,
      sym__rule_tag,
    STATE(235), 1,
      sym_ruleflag,
    STATE(236), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [3756] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(137), 1,
      sym__rule_tag,
    STATE(143), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(237), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3790] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(140), 1,
      sym__rule_tag,
    STATE(212), 1,
      sym_inlineset,
    STATE(220), 1,
      sym_ruleflag,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [3824] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(124), 1,
      sym__rule_tag,
    STATE(166), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(225), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [3858] = 11,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(135), 1,
      sym__rule_tag,
    STATE(227), 1,
      sym_ruleflag,
    STATE(228), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [3892] = 10,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(163), 1,
      sym_ruleflag,
    STATE(238), 1,
      aux_sym_ruleflag_repeat1,
    STATE(164), 2,
      sym__rule_target,
      sym_inlineset,
  [3924] = 9,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(210), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(329), 1,
      sym_inlineset,
  [3952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      aux_sym__context,
    ACTIONS(435), 6,
      sym_semicolon,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
  [3970] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(31), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [3996] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(51), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4022] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(21), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4048] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(127), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(234), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [4076] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(34), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4102] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(235), 1,
      sym_ruleflag,
    STATE(236), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [4130] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(57), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4156] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(55), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4182] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(18), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4208] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(33), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4234] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(443), 1,
      anon_sym_NOCHILD,
    ACTIONS(445), 1,
      sym_ruleflag_name,
    STATE(149), 1,
      sym__child_specifier,
    STATE(180), 1,
      sym__rule_tag,
    STATE(239), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_ruleflag,
  [4262] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(52), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4288] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(445), 1,
      sym_ruleflag_name,
    ACTIONS(447), 1,
      anon_sym_NOCHILD,
    STATE(160), 1,
      sym__child_specifier,
    STATE(181), 1,
      sym__rule_tag,
    STATE(239), 1,
      aux_sym_ruleflag_repeat1,
    STATE(296), 1,
      sym_ruleflag,
  [4316] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(4), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      aux_sym__context,
    ACTIONS(449), 6,
      sym_semicolon,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
  [4360] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(22), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      aux_sym__context,
    ACTIONS(454), 6,
      sym_semicolon,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
  [4404] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(143), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(237), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [4432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      sym_ntag,
    ACTIONS(464), 1,
      sym_qtag,
    ACTIONS(456), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(125), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [4454] = 7,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_contexttest_token1,
    ACTIONS(471), 1,
      anon_sym_LINK,
    ACTIONS(473), 1,
      aux_sym_setname_t_token1,
    ACTIONS(467), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(248), 2,
      sym_setname,
      sym_setname_t,
  [4478] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(15), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4504] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(37), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    ACTIONS(475), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(125), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [4552] = 7,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_setname_t_token1,
    ACTIONS(485), 1,
      aux_sym_contexttest_token1,
    ACTIONS(487), 1,
      anon_sym_LINK,
    ACTIONS(483), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    STATE(261), 2,
      sym_setname,
      sym_setname_t,
  [4576] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(16), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4602] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(59), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4628] = 9,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(218), 1,
      sym_ruleflag,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(326), 1,
      sym_inlineset,
  [4656] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(114), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(217), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [4684] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(212), 1,
      sym_inlineset,
    STATE(220), 1,
      sym_ruleflag,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [4712] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(195), 1,
      sym_inlineset,
    STATE(216), 1,
      sym_ruleflag,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [4740] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(171), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(215), 1,
      sym_ruleflag,
    STATE(240), 1,
      sym_setname,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
  [4768] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(58), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 8,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_IF,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
  [4808] = 9,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(202), 1,
      sym_inlineset,
    STATE(213), 1,
      sym_ruleflag,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(247), 1,
      aux_sym_ruleflag_repeat1,
    STATE(289), 1,
      sym_setname,
  [4836] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(45), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4862] = 8,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(62), 1,
      sym__shared_rule_end,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(233), 2,
      sym__rule_target,
      sym_inlineset,
  [4888] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(170), 2,
      sym__rule_target,
      sym_inlineset,
  [4911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    STATE(389), 1,
      sym_taglist,
    STATE(129), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [4932] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(209), 2,
      sym__rule_target,
      sym_inlineset,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 7,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_TO,
      anon_sym_FROM,
      anon_sym_BEFORE,
      anon_sym_AFTER,
      anon_sym_WITH,
  [4968] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(188), 2,
      sym__rule_target,
      sym_inlineset,
  [4991] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(154), 2,
      sym__rule_target,
      sym_inlineset,
  [5014] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(179), 2,
      sym__rule_target,
      sym_inlineset,
  [5037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(313), 1,
      sym__if_context,
    STATE(398), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5060] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(274), 1,
      sym__if_context,
    STATE(393), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5083] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(164), 2,
      sym__rule_target,
      sym_inlineset,
  [5106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    STATE(395), 1,
      sym_taglist,
    STATE(129), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5127] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(303), 1,
      sym__if_context,
    STATE(364), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5150] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(301), 1,
      sym__if_context,
    STATE(382), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    STATE(403), 1,
      sym_taglist,
    STATE(129), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5194] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(173), 2,
      sym__rule_target,
      sym_inlineset,
  [5217] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(151), 2,
      sym__rule_target,
      sym_inlineset,
  [5240] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(155), 2,
      sym__rule_target,
      sym_inlineset,
  [5263] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(185), 2,
      sym__rule_target,
      sym_inlineset,
  [5286] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(214), 2,
      sym__rule_target,
      sym_inlineset,
  [5309] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(277), 1,
      sym__if_context,
    STATE(391), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5332] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(169), 2,
      sym__rule_target,
      sym_inlineset,
  [5355] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(276), 1,
      sym__if_context,
    STATE(353), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5378] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(184), 2,
      sym__rule_target,
      sym_inlineset,
  [5401] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(162), 2,
      sym__rule_target,
      sym_inlineset,
  [5424] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(182), 2,
      sym__rule_target,
      sym_inlineset,
  [5447] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    STATE(386), 1,
      sym_taglist,
    STATE(129), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(312), 1,
      sym__if_context,
    STATE(385), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5491] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(318), 1,
      sym__if_context,
    STATE(394), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5514] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(174), 2,
      sym__rule_target,
      sym_inlineset,
  [5537] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(175), 2,
      sym__rule_target,
      sym_inlineset,
  [5560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(308), 1,
      sym__if_context,
    STATE(357), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5583] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(286), 1,
      sym__if_context,
    STATE(381), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5606] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(287), 1,
      sym__if_context,
    STATE(376), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5629] = 7,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_TARGET,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(177), 2,
      sym__rule_target,
      sym_inlineset,
  [5652] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(314), 1,
      sym__if_context,
    STATE(388), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [5675] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    STATE(400), 1,
      sym_taglist,
    STATE(129), 3,
      sym_compotag,
      sym_tag,
      aux_sym_taglist_repeat1,
  [5696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(351), 1,
      sym__if_context,
    ACTIONS(497), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [5716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(445), 1,
      sym_ruleflag_name,
    ACTIONS(499), 1,
      anon_sym_NOCHILD,
    STATE(167), 1,
      sym__child_specifier,
    STATE(239), 1,
      aux_sym_ruleflag_repeat1,
    STATE(288), 1,
      sym_ruleflag,
  [5738] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(443), 1,
      anon_sym_NOCHILD,
    ACTIONS(445), 1,
      sym_ruleflag_name,
    STATE(149), 1,
      sym__child_specifier,
    STATE(239), 1,
      aux_sym_ruleflag_repeat1,
    STATE(300), 1,
      sym_ruleflag,
  [5760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(337), 1,
      sym__if_context,
    ACTIONS(501), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [5780] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(503), 2,
      sym_semicolon,
      anon_sym_RPAREN,
    ACTIONS(505), 4,
      aux_sym_contexttest_token1,
      anon_sym_LINK,
      aux_sym_setname_token1,
      aux_sym_setname_t_token1,
  [5794] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(334), 1,
      sym__if_context,
    ACTIONS(507), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [5814] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    STATE(123), 1,
      aux_sym__context,
    STATE(327), 1,
      sym__if_context,
    ACTIONS(509), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [5834] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      sym_ruleflag_name,
    STATE(186), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(513), 2,
      anon_sym_TARGET,
      aux_sym_setname_token1,
  [5851] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_WITHCHILD,
    ACTIONS(520), 1,
      anon_sym_NOCHILD,
    STATE(273), 1,
      aux_sym__context,
    STATE(333), 1,
      sym__child_specifier,
  [5870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    ACTIONS(522), 1,
      anon_sym_WITH,
    STATE(123), 1,
      aux_sym__context,
    STATE(362), 1,
      sym__if_context,
  [5889] = 5,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_set_op,
    STATE(206), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(524), 2,
      anon_sym_TARGET,
      aux_sym_setname_token1,
  [5906] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(387), 1,
      sym_inlineset,
  [5925] = 4,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(530), 3,
      anon_sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [5940] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(148), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [5959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_WITHCHILD,
      anon_sym_NOCHILD,
      anon_sym_ONCE,
      anon_sym_ALWAYS,
      sym_ruleflag_name,
  [5970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_ntag,
    ACTIONS(536), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [5983] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(176), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6002] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(323), 1,
      sym_inlineset,
  [6021] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(128), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6040] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(315), 1,
      sym_inlineset,
  [6059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_WITHCHILD,
    ACTIONS(540), 1,
      anon_sym_NOCHILD,
    STATE(317), 1,
      aux_sym__context,
    STATE(328), 1,
      sym__child_specifier,
  [6078] = 5,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_set_op,
    STATE(189), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(542), 2,
      anon_sym_TARGET,
      aux_sym_setname_token1,
  [6095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    ACTIONS(544), 1,
      anon_sym_WITH,
    STATE(123), 1,
      aux_sym__context,
    STATE(374), 1,
      sym__if_context,
  [6114] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(122), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6133] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
    STATE(310), 1,
      sym_inlineset,
  [6152] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_WITHCHILD,
    ACTIONS(546), 1,
      anon_sym_NOCHILD,
    STATE(304), 1,
      aux_sym__context,
    STATE(348), 1,
      sym__child_specifier,
  [6171] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(329), 1,
      sym_inlineset,
  [6190] = 5,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_set_op,
    STATE(206), 1,
      aux_sym_inlineset_repeat1,
    ACTIONS(548), 2,
      anon_sym_TARGET,
      aux_sym_setname_token1,
  [6207] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(127), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6226] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(311), 1,
      sym_inlineset,
  [6245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    ACTIONS(553), 1,
      anon_sym_WITH,
    STATE(123), 1,
      aux_sym__context,
    STATE(372), 1,
      sym__if_context,
  [6264] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(326), 1,
      sym_inlineset,
  [6283] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(378), 1,
      sym_inlineset,
  [6302] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(118), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6321] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(197), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [6340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    ACTIONS(555), 1,
      anon_sym_WITH,
    STATE(123), 1,
      aux_sym__context,
    STATE(352), 1,
      sym__if_context,
  [6359] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(158), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6378] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(192), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [6397] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(120), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6416] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(324), 1,
      sym_inlineset,
  [6435] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(236), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [6454] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(202), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [6473] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(157), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6492] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(309), 1,
      sym_inlineset,
  [6511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_ntag,
    ACTIONS(557), 4,
      sym_semicolon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_qtag,
  [6524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(563), 1,
      sym_ntag,
    ACTIONS(566), 1,
      sym_qtag,
    STATE(224), 2,
      sym_tag,
      aux_sym_compotag_repeat1,
  [6541] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(143), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_WITHCHILD,
    ACTIONS(569), 1,
      anon_sym_NOCHILD,
    STATE(298), 1,
      aux_sym__context,
    STATE(346), 1,
      sym__child_specifier,
  [6579] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(212), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [6598] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(115), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6617] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(139), 1,
      sym_inlineset,
  [6636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(224), 2,
      sym_tag,
      aux_sym_compotag_repeat1,
  [6653] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_WITHCHILD,
    ACTIONS(573), 1,
      anon_sym_NOCHILD,
    STATE(306), 1,
      aux_sym__context,
    STATE(347), 1,
      sym__child_specifier,
  [6672] = 6,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(65), 1,
      sym_inlineset_single,
    STATE(67), 1,
      sym_setname,
    STATE(279), 1,
      sym_inlineset,
  [6691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_IF,
    ACTIONS(575), 1,
      sym_semicolon,
    STATE(123), 1,
      aux_sym__context,
    STATE(359), 1,
      sym__if_context,
  [6710] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(114), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6729] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(195), 1,
      sym_inlineset,
    STATE(245), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [6748] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(172), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6767] = 6,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(171), 1,
      sym_inlineset,
    STATE(200), 1,
      sym_inlineset_single,
    STATE(240), 1,
      sym_setname,
  [6786] = 5,
    ACTIONS(385), 1,
      sym_ruleflag_name,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(579), 2,
      anon_sym_TARGET,
      aux_sym_setname_token1,
  [6803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_ruleflag_name,
    STATE(270), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(577), 2,
      anon_sym_WITHCHILD,
      anon_sym_NOCHILD,
  [6817] = 3,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [6829] = 5,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_setname_token1,
    ACTIONS(583), 1,
      sym_set_op,
    STATE(241), 1,
      aux_sym_inlineset_repeat1,
  [6845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    STATE(332), 1,
      sym__rule_tag,
    ACTIONS(586), 2,
      anon_sym_ONCE,
      anon_sym_ALWAYS,
  [6859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_OR,
    STATE(256), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(588), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [6873] = 4,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(592), 1,
      anon_sym_COLON,
    ACTIONS(530), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [6887] = 5,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_setname_token1,
    ACTIONS(594), 1,
      sym_set_op,
    STATE(252), 1,
      aux_sym_inlineset_repeat1,
  [6903] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 3,
      anon_sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [6915] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ruleflag_name,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      aux_sym_setname_token1,
    STATE(253), 1,
      aux_sym_ruleflag_repeat1,
  [6931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym_contexttest_token1,
    ACTIONS(602), 1,
      anon_sym_LINK,
    ACTIONS(483), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [6945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COLON,
    ACTIONS(528), 3,
      anon_sym_WITHCHILD,
      anon_sym_NOCHILD,
      sym_ruleflag_name,
  [6957] = 5,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(67), 1,
      sym_setname,
    STATE(70), 1,
      sym_inlineset_single,
  [6973] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 3,
      anon_sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [6985] = 5,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_setname_token1,
    ACTIONS(594), 1,
      sym_set_op,
    STATE(241), 1,
      aux_sym_inlineset_repeat1,
  [7001] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      aux_sym_setname_token1,
    ACTIONS(608), 1,
      sym_ruleflag_name,
    STATE(253), 1,
      aux_sym_ruleflag_repeat1,
  [7017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 4,
      sym_semicolon,
      anon_sym_RPAREN,
      aux_sym_contexttest_token1,
      anon_sym_LINK,
  [7027] = 3,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [7039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_OR,
    STATE(256), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(613), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7053] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_setname_token1,
    STATE(281), 1,
      sym_inlineset_single,
    STATE(289), 1,
      sym_setname,
  [7069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym_setname_t_token1,
    ACTIONS(401), 1,
      sym_ntag,
    STATE(130), 1,
      sym_contextpos,
    STATE(248), 1,
      sym_setname_t,
  [7085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_semicolon,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(259), 2,
      sym_compotag,
      aux_sym_parentheses_repeat1,
  [7099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    STATE(325), 1,
      sym__rule_tag,
    ACTIONS(623), 2,
      anon_sym_ONCE,
      anon_sym_ALWAYS,
  [7113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_contexttest_token1,
    ACTIONS(629), 1,
      anon_sym_LINK,
    ACTIONS(625), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7127] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 3,
      anon_sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7139] = 3,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(633), 3,
      anon_sym_TARGET,
      sym_set_op,
      aux_sym_setname_token1,
  [7151] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 3,
      anon_sym_TARGET,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7163] = 4,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_semicolon,
    ACTIONS(641), 1,
      aux_sym_setname_token1,
    STATE(265), 2,
      sym_setname,
      aux_sym_static_sets_repeat1,
  [7177] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_setname_token1,
    STATE(240), 1,
      sym_setname,
    STATE(255), 1,
      sym_inlineset_single,
  [7193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      aux_sym_contexttest_token1,
    ACTIONS(646), 1,
      anon_sym_LINK,
    ACTIONS(467), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7207] = 4,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_semicolon,
    ACTIONS(650), 1,
      aux_sym_setname_token1,
    STATE(265), 2,
      sym_setname,
      aux_sym_static_sets_repeat1,
  [7221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      sym_semicolon,
    STATE(259), 2,
      sym_compotag,
      aux_sym_parentheses_repeat1,
  [7235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_ruleflag_name,
    STATE(270), 1,
      aux_sym_ruleflag_repeat1,
    ACTIONS(511), 2,
      anon_sym_WITHCHILD,
      anon_sym_NOCHILD,
  [7249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_ntag,
    ACTIONS(481), 1,
      sym_qtag,
    STATE(230), 2,
      sym_tag,
      aux_sym_compotag_repeat1,
  [7263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_OR,
    STATE(243), 1,
      aux_sym_contexttest_repeat2,
    ACTIONS(625), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(379), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 3,
      anon_sym_WITHCHILD,
      anon_sym_NOCHILD,
      sym_ruleflag_name,
  [7310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(385), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(394), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_LINK,
    ACTIONS(625), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_contexttest_repeat1,
  [7369] = 3,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(548), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7380] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7391] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_ntag,
    ACTIONS(667), 1,
      sym_qtag,
    STATE(80), 1,
      sym_filepath,
  [7415] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 2,
      sym_ruleflag_name,
      aux_sym_setname_token1,
  [7426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(393), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(388), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(669), 1,
      anon_sym_NOCHILD,
    STATE(165), 1,
      sym__child_specifier,
  [7461] = 3,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(581), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_ntag,
    ACTIONS(667), 1,
      sym_qtag,
    STATE(81), 1,
      sym_filepath,
  [7485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_ntag,
    ACTIONS(667), 1,
      sym_qtag,
    STATE(89), 1,
      sym_filepath,
  [7511] = 3,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(633), 2,
      sym_set_op,
      aux_sym_setname_token1,
  [7522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 3,
      sym_semicolon,
      anon_sym_RPAREN,
      anon_sym_OR,
  [7544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(443), 1,
      anon_sym_NOCHILD,
    STATE(149), 1,
      sym__child_specifier,
  [7557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(681), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_WITHCHILD,
    ACTIONS(499), 1,
      anon_sym_NOCHILD,
    STATE(167), 1,
      sym__child_specifier,
  [7609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(375), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(361), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(685), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7657] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym_setname_token1,
    STATE(268), 2,
      sym_setname,
      aux_sym_static_sets_repeat1,
  [7668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(269), 2,
      sym_compotag,
      aux_sym_parentheses_repeat1,
  [7692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(376), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LINK,
    ACTIONS(689), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7714] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(695), 2,
      anon_sym_TARGET,
      aux_sym_setname_token1,
  [7725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LINK,
    ACTIONS(588), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(382), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(353), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(364), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_contexttest_repeat1,
  [7782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_contexttest_repeat1,
  [7795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(381), 1,
      sym__to_from,
    ACTIONS(495), 2,
      anon_sym_TO,
      anon_sym_FROM,
  [7819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(708), 1,
      sym_semicolon,
    STATE(121), 1,
      aux_sym__context,
  [7832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7840] = 3,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(370), 1,
      sym_setname,
  [7850] = 3,
    ACTIONS(364), 1,
      sym_semicolon,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym_setname_token1,
  [7860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [7876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_ONCE,
      anon_sym_ALWAYS,
  [7884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [7892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [7900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      aux_sym__context,
  [7910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [7918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [7926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(299), 1,
      aux_sym__context,
  [7936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_ONCE,
      anon_sym_ALWAYS,
  [7944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      aux_sym__context,
  [7954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [7962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      aux_sym__context,
  [7972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      aux_sym__context,
  [7982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [7990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      aux_sym__context,
  [8000] = 3,
    ACTIONS(387), 1,
      aux_sym_setname_token1,
    ACTIONS(389), 1,
      sym_comment,
    STATE(366), 1,
      sym_setname,
  [8010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      aux_sym__context,
  [8020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      aux_sym__context,
  [8030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_RTL,
      anon_sym_LTR,
  [8046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
      aux_sym__context,
  [8056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(294), 1,
      aux_sym__context,
  [8074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      aux_sym__context,
  [8084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    STATE(273), 1,
      aux_sym__context,
  [8094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      sym_semicolon,
      anon_sym_RPAREN,
  [8102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [8110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_BEFORE,
      anon_sym_AFTER,
  [8118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_WITH,
  [8125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_semicolon,
  [8132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [8139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_eq,
  [8146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
  [8153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_semicolon,
  [8160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_ntag,
  [8167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_semicolon,
  [8174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_rawpath,
  [8181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      sym_semicolon,
  [8188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_WITH,
  [8195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_prefix,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_semicolon,
  [8209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
  [8216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_eq,
  [8223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_eq,
  [8230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_ntag,
  [8237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_eq,
  [8244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_eq,
  [8251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_semicolon,
  [8258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_WITH,
  [8265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_eq,
  [8272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_WITH,
  [8279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_semicolon,
  [8286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_semicolon,
  [8293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [8300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
  [8307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_semicolon,
  [8314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_ntag,
  [8321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_semicolon,
  [8328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_semicolon,
  [8335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_eq,
  [8342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_semicolon,
  [8349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_semicolon,
  [8356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_semicolon,
  [8363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_semicolon,
  [8370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_semicolon,
  [8377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_semicolon,
  [8384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
  [8391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_semicolon,
  [8398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_semicolon,
  [8405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_semicolon,
  [8412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_semicolon,
  [8419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [8426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_semicolon,
  [8433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_ntag,
  [8440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_semicolon,
  [8447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym_ntag,
  [8454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [8461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_ntag,
  [8468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_ntag,
  [8475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [8482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [8489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_eq,
  [8496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_eq,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 224,
  [SMALL_STATE(5)] = 264,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 344,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 424,
  [SMALL_STATE(10)] = 464,
  [SMALL_STATE(11)] = 504,
  [SMALL_STATE(12)] = 544,
  [SMALL_STATE(13)] = 584,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 664,
  [SMALL_STATE(16)] = 704,
  [SMALL_STATE(17)] = 744,
  [SMALL_STATE(18)] = 784,
  [SMALL_STATE(19)] = 824,
  [SMALL_STATE(20)] = 864,
  [SMALL_STATE(21)] = 904,
  [SMALL_STATE(22)] = 944,
  [SMALL_STATE(23)] = 984,
  [SMALL_STATE(24)] = 1024,
  [SMALL_STATE(25)] = 1064,
  [SMALL_STATE(26)] = 1104,
  [SMALL_STATE(27)] = 1144,
  [SMALL_STATE(28)] = 1184,
  [SMALL_STATE(29)] = 1224,
  [SMALL_STATE(30)] = 1264,
  [SMALL_STATE(31)] = 1304,
  [SMALL_STATE(32)] = 1344,
  [SMALL_STATE(33)] = 1384,
  [SMALL_STATE(34)] = 1424,
  [SMALL_STATE(35)] = 1464,
  [SMALL_STATE(36)] = 1504,
  [SMALL_STATE(37)] = 1544,
  [SMALL_STATE(38)] = 1584,
  [SMALL_STATE(39)] = 1624,
  [SMALL_STATE(40)] = 1664,
  [SMALL_STATE(41)] = 1704,
  [SMALL_STATE(42)] = 1744,
  [SMALL_STATE(43)] = 1784,
  [SMALL_STATE(44)] = 1824,
  [SMALL_STATE(45)] = 1864,
  [SMALL_STATE(46)] = 1904,
  [SMALL_STATE(47)] = 1944,
  [SMALL_STATE(48)] = 1984,
  [SMALL_STATE(49)] = 2024,
  [SMALL_STATE(50)] = 2064,
  [SMALL_STATE(51)] = 2104,
  [SMALL_STATE(52)] = 2144,
  [SMALL_STATE(53)] = 2184,
  [SMALL_STATE(54)] = 2224,
  [SMALL_STATE(55)] = 2264,
  [SMALL_STATE(56)] = 2304,
  [SMALL_STATE(57)] = 2344,
  [SMALL_STATE(58)] = 2384,
  [SMALL_STATE(59)] = 2424,
  [SMALL_STATE(60)] = 2464,
  [SMALL_STATE(61)] = 2504,
  [SMALL_STATE(62)] = 2544,
  [SMALL_STATE(63)] = 2584,
  [SMALL_STATE(64)] = 2605,
  [SMALL_STATE(65)] = 2629,
  [SMALL_STATE(66)] = 2653,
  [SMALL_STATE(67)] = 2677,
  [SMALL_STATE(68)] = 2696,
  [SMALL_STATE(69)] = 2737,
  [SMALL_STATE(70)] = 2756,
  [SMALL_STATE(71)] = 2775,
  [SMALL_STATE(72)] = 2816,
  [SMALL_STATE(73)] = 2854,
  [SMALL_STATE(74)] = 2892,
  [SMALL_STATE(75)] = 2930,
  [SMALL_STATE(76)] = 2968,
  [SMALL_STATE(77)] = 2999,
  [SMALL_STATE(78)] = 3030,
  [SMALL_STATE(79)] = 3061,
  [SMALL_STATE(80)] = 3092,
  [SMALL_STATE(81)] = 3127,
  [SMALL_STATE(82)] = 3162,
  [SMALL_STATE(83)] = 3197,
  [SMALL_STATE(84)] = 3232,
  [SMALL_STATE(85)] = 3263,
  [SMALL_STATE(86)] = 3294,
  [SMALL_STATE(87)] = 3325,
  [SMALL_STATE(88)] = 3356,
  [SMALL_STATE(89)] = 3387,
  [SMALL_STATE(90)] = 3422,
  [SMALL_STATE(91)] = 3456,
  [SMALL_STATE(92)] = 3488,
  [SMALL_STATE(93)] = 3522,
  [SMALL_STATE(94)] = 3556,
  [SMALL_STATE(95)] = 3590,
  [SMALL_STATE(96)] = 3624,
  [SMALL_STATE(97)] = 3658,
  [SMALL_STATE(98)] = 3690,
  [SMALL_STATE(99)] = 3722,
  [SMALL_STATE(100)] = 3756,
  [SMALL_STATE(101)] = 3790,
  [SMALL_STATE(102)] = 3824,
  [SMALL_STATE(103)] = 3858,
  [SMALL_STATE(104)] = 3892,
  [SMALL_STATE(105)] = 3924,
  [SMALL_STATE(106)] = 3952,
  [SMALL_STATE(107)] = 3970,
  [SMALL_STATE(108)] = 3996,
  [SMALL_STATE(109)] = 4022,
  [SMALL_STATE(110)] = 4048,
  [SMALL_STATE(111)] = 4076,
  [SMALL_STATE(112)] = 4102,
  [SMALL_STATE(113)] = 4130,
  [SMALL_STATE(114)] = 4156,
  [SMALL_STATE(115)] = 4182,
  [SMALL_STATE(116)] = 4208,
  [SMALL_STATE(117)] = 4234,
  [SMALL_STATE(118)] = 4262,
  [SMALL_STATE(119)] = 4288,
  [SMALL_STATE(120)] = 4316,
  [SMALL_STATE(121)] = 4342,
  [SMALL_STATE(122)] = 4360,
  [SMALL_STATE(123)] = 4386,
  [SMALL_STATE(124)] = 4404,
  [SMALL_STATE(125)] = 4432,
  [SMALL_STATE(126)] = 4454,
  [SMALL_STATE(127)] = 4478,
  [SMALL_STATE(128)] = 4504,
  [SMALL_STATE(129)] = 4530,
  [SMALL_STATE(130)] = 4552,
  [SMALL_STATE(131)] = 4576,
  [SMALL_STATE(132)] = 4602,
  [SMALL_STATE(133)] = 4628,
  [SMALL_STATE(134)] = 4656,
  [SMALL_STATE(135)] = 4684,
  [SMALL_STATE(136)] = 4712,
  [SMALL_STATE(137)] = 4740,
  [SMALL_STATE(138)] = 4768,
  [SMALL_STATE(139)] = 4794,
  [SMALL_STATE(140)] = 4808,
  [SMALL_STATE(141)] = 4836,
  [SMALL_STATE(142)] = 4862,
  [SMALL_STATE(143)] = 4888,
  [SMALL_STATE(144)] = 4911,
  [SMALL_STATE(145)] = 4932,
  [SMALL_STATE(146)] = 4955,
  [SMALL_STATE(147)] = 4968,
  [SMALL_STATE(148)] = 4991,
  [SMALL_STATE(149)] = 5014,
  [SMALL_STATE(150)] = 5037,
  [SMALL_STATE(151)] = 5060,
  [SMALL_STATE(152)] = 5083,
  [SMALL_STATE(153)] = 5106,
  [SMALL_STATE(154)] = 5127,
  [SMALL_STATE(155)] = 5150,
  [SMALL_STATE(156)] = 5173,
  [SMALL_STATE(157)] = 5194,
  [SMALL_STATE(158)] = 5217,
  [SMALL_STATE(159)] = 5240,
  [SMALL_STATE(160)] = 5263,
  [SMALL_STATE(161)] = 5286,
  [SMALL_STATE(162)] = 5309,
  [SMALL_STATE(163)] = 5332,
  [SMALL_STATE(164)] = 5355,
  [SMALL_STATE(165)] = 5378,
  [SMALL_STATE(166)] = 5401,
  [SMALL_STATE(167)] = 5424,
  [SMALL_STATE(168)] = 5447,
  [SMALL_STATE(169)] = 5468,
  [SMALL_STATE(170)] = 5491,
  [SMALL_STATE(171)] = 5514,
  [SMALL_STATE(172)] = 5537,
  [SMALL_STATE(173)] = 5560,
  [SMALL_STATE(174)] = 5583,
  [SMALL_STATE(175)] = 5606,
  [SMALL_STATE(176)] = 5629,
  [SMALL_STATE(177)] = 5652,
  [SMALL_STATE(178)] = 5675,
  [SMALL_STATE(179)] = 5696,
  [SMALL_STATE(180)] = 5716,
  [SMALL_STATE(181)] = 5738,
  [SMALL_STATE(182)] = 5760,
  [SMALL_STATE(183)] = 5780,
  [SMALL_STATE(184)] = 5794,
  [SMALL_STATE(185)] = 5814,
  [SMALL_STATE(186)] = 5834,
  [SMALL_STATE(187)] = 5851,
  [SMALL_STATE(188)] = 5870,
  [SMALL_STATE(189)] = 5889,
  [SMALL_STATE(190)] = 5906,
  [SMALL_STATE(191)] = 5925,
  [SMALL_STATE(192)] = 5940,
  [SMALL_STATE(193)] = 5959,
  [SMALL_STATE(194)] = 5970,
  [SMALL_STATE(195)] = 5983,
  [SMALL_STATE(196)] = 6002,
  [SMALL_STATE(197)] = 6021,
  [SMALL_STATE(198)] = 6040,
  [SMALL_STATE(199)] = 6059,
  [SMALL_STATE(200)] = 6078,
  [SMALL_STATE(201)] = 6095,
  [SMALL_STATE(202)] = 6114,
  [SMALL_STATE(203)] = 6133,
  [SMALL_STATE(204)] = 6152,
  [SMALL_STATE(205)] = 6171,
  [SMALL_STATE(206)] = 6190,
  [SMALL_STATE(207)] = 6207,
  [SMALL_STATE(208)] = 6226,
  [SMALL_STATE(209)] = 6245,
  [SMALL_STATE(210)] = 6264,
  [SMALL_STATE(211)] = 6283,
  [SMALL_STATE(212)] = 6302,
  [SMALL_STATE(213)] = 6321,
  [SMALL_STATE(214)] = 6340,
  [SMALL_STATE(215)] = 6359,
  [SMALL_STATE(216)] = 6378,
  [SMALL_STATE(217)] = 6397,
  [SMALL_STATE(218)] = 6416,
  [SMALL_STATE(219)] = 6435,
  [SMALL_STATE(220)] = 6454,
  [SMALL_STATE(221)] = 6473,
  [SMALL_STATE(222)] = 6492,
  [SMALL_STATE(223)] = 6511,
  [SMALL_STATE(224)] = 6524,
  [SMALL_STATE(225)] = 6541,
  [SMALL_STATE(226)] = 6560,
  [SMALL_STATE(227)] = 6579,
  [SMALL_STATE(228)] = 6598,
  [SMALL_STATE(229)] = 6617,
  [SMALL_STATE(230)] = 6636,
  [SMALL_STATE(231)] = 6653,
  [SMALL_STATE(232)] = 6672,
  [SMALL_STATE(233)] = 6691,
  [SMALL_STATE(234)] = 6710,
  [SMALL_STATE(235)] = 6729,
  [SMALL_STATE(236)] = 6748,
  [SMALL_STATE(237)] = 6767,
  [SMALL_STATE(238)] = 6786,
  [SMALL_STATE(239)] = 6803,
  [SMALL_STATE(240)] = 6817,
  [SMALL_STATE(241)] = 6829,
  [SMALL_STATE(242)] = 6845,
  [SMALL_STATE(243)] = 6859,
  [SMALL_STATE(244)] = 6873,
  [SMALL_STATE(245)] = 6887,
  [SMALL_STATE(246)] = 6903,
  [SMALL_STATE(247)] = 6915,
  [SMALL_STATE(248)] = 6931,
  [SMALL_STATE(249)] = 6945,
  [SMALL_STATE(250)] = 6957,
  [SMALL_STATE(251)] = 6973,
  [SMALL_STATE(252)] = 6985,
  [SMALL_STATE(253)] = 7001,
  [SMALL_STATE(254)] = 7017,
  [SMALL_STATE(255)] = 7027,
  [SMALL_STATE(256)] = 7039,
  [SMALL_STATE(257)] = 7053,
  [SMALL_STATE(258)] = 7069,
  [SMALL_STATE(259)] = 7085,
  [SMALL_STATE(260)] = 7099,
  [SMALL_STATE(261)] = 7113,
  [SMALL_STATE(262)] = 7127,
  [SMALL_STATE(263)] = 7139,
  [SMALL_STATE(264)] = 7151,
  [SMALL_STATE(265)] = 7163,
  [SMALL_STATE(266)] = 7177,
  [SMALL_STATE(267)] = 7193,
  [SMALL_STATE(268)] = 7207,
  [SMALL_STATE(269)] = 7221,
  [SMALL_STATE(270)] = 7235,
  [SMALL_STATE(271)] = 7249,
  [SMALL_STATE(272)] = 7263,
  [SMALL_STATE(273)] = 7277,
  [SMALL_STATE(274)] = 7290,
  [SMALL_STATE(275)] = 7301,
  [SMALL_STATE(276)] = 7310,
  [SMALL_STATE(277)] = 7321,
  [SMALL_STATE(278)] = 7332,
  [SMALL_STATE(279)] = 7345,
  [SMALL_STATE(280)] = 7356,
  [SMALL_STATE(281)] = 7369,
  [SMALL_STATE(282)] = 7380,
  [SMALL_STATE(283)] = 7391,
  [SMALL_STATE(284)] = 7402,
  [SMALL_STATE(285)] = 7415,
  [SMALL_STATE(286)] = 7426,
  [SMALL_STATE(287)] = 7437,
  [SMALL_STATE(288)] = 7448,
  [SMALL_STATE(289)] = 7461,
  [SMALL_STATE(290)] = 7472,
  [SMALL_STATE(291)] = 7485,
  [SMALL_STATE(292)] = 7498,
  [SMALL_STATE(293)] = 7511,
  [SMALL_STATE(294)] = 7522,
  [SMALL_STATE(295)] = 7535,
  [SMALL_STATE(296)] = 7544,
  [SMALL_STATE(297)] = 7557,
  [SMALL_STATE(298)] = 7570,
  [SMALL_STATE(299)] = 7583,
  [SMALL_STATE(300)] = 7596,
  [SMALL_STATE(301)] = 7609,
  [SMALL_STATE(302)] = 7620,
  [SMALL_STATE(303)] = 7633,
  [SMALL_STATE(304)] = 7644,
  [SMALL_STATE(305)] = 7657,
  [SMALL_STATE(306)] = 7668,
  [SMALL_STATE(307)] = 7681,
  [SMALL_STATE(308)] = 7692,
  [SMALL_STATE(309)] = 7703,
  [SMALL_STATE(310)] = 7714,
  [SMALL_STATE(311)] = 7725,
  [SMALL_STATE(312)] = 7736,
  [SMALL_STATE(313)] = 7747,
  [SMALL_STATE(314)] = 7758,
  [SMALL_STATE(315)] = 7769,
  [SMALL_STATE(316)] = 7782,
  [SMALL_STATE(317)] = 7795,
  [SMALL_STATE(318)] = 7808,
  [SMALL_STATE(319)] = 7819,
  [SMALL_STATE(320)] = 7832,
  [SMALL_STATE(321)] = 7840,
  [SMALL_STATE(322)] = 7850,
  [SMALL_STATE(323)] = 7860,
  [SMALL_STATE(324)] = 7868,
  [SMALL_STATE(325)] = 7876,
  [SMALL_STATE(326)] = 7884,
  [SMALL_STATE(327)] = 7892,
  [SMALL_STATE(328)] = 7900,
  [SMALL_STATE(329)] = 7910,
  [SMALL_STATE(330)] = 7918,
  [SMALL_STATE(331)] = 7926,
  [SMALL_STATE(332)] = 7936,
  [SMALL_STATE(333)] = 7944,
  [SMALL_STATE(334)] = 7954,
  [SMALL_STATE(335)] = 7962,
  [SMALL_STATE(336)] = 7972,
  [SMALL_STATE(337)] = 7982,
  [SMALL_STATE(338)] = 7990,
  [SMALL_STATE(339)] = 8000,
  [SMALL_STATE(340)] = 8010,
  [SMALL_STATE(341)] = 8020,
  [SMALL_STATE(342)] = 8030,
  [SMALL_STATE(343)] = 8038,
  [SMALL_STATE(344)] = 8046,
  [SMALL_STATE(345)] = 8056,
  [SMALL_STATE(346)] = 8064,
  [SMALL_STATE(347)] = 8074,
  [SMALL_STATE(348)] = 8084,
  [SMALL_STATE(349)] = 8094,
  [SMALL_STATE(350)] = 8102,
  [SMALL_STATE(351)] = 8110,
  [SMALL_STATE(352)] = 8118,
  [SMALL_STATE(353)] = 8125,
  [SMALL_STATE(354)] = 8132,
  [SMALL_STATE(355)] = 8139,
  [SMALL_STATE(356)] = 8146,
  [SMALL_STATE(357)] = 8153,
  [SMALL_STATE(358)] = 8160,
  [SMALL_STATE(359)] = 8167,
  [SMALL_STATE(360)] = 8174,
  [SMALL_STATE(361)] = 8181,
  [SMALL_STATE(362)] = 8188,
  [SMALL_STATE(363)] = 8195,
  [SMALL_STATE(364)] = 8202,
  [SMALL_STATE(365)] = 8209,
  [SMALL_STATE(366)] = 8216,
  [SMALL_STATE(367)] = 8223,
  [SMALL_STATE(368)] = 8230,
  [SMALL_STATE(369)] = 8237,
  [SMALL_STATE(370)] = 8244,
  [SMALL_STATE(371)] = 8251,
  [SMALL_STATE(372)] = 8258,
  [SMALL_STATE(373)] = 8265,
  [SMALL_STATE(374)] = 8272,
  [SMALL_STATE(375)] = 8279,
  [SMALL_STATE(376)] = 8286,
  [SMALL_STATE(377)] = 8293,
  [SMALL_STATE(378)] = 8300,
  [SMALL_STATE(379)] = 8307,
  [SMALL_STATE(380)] = 8314,
  [SMALL_STATE(381)] = 8321,
  [SMALL_STATE(382)] = 8328,
  [SMALL_STATE(383)] = 8335,
  [SMALL_STATE(384)] = 8342,
  [SMALL_STATE(385)] = 8349,
  [SMALL_STATE(386)] = 8356,
  [SMALL_STATE(387)] = 8363,
  [SMALL_STATE(388)] = 8370,
  [SMALL_STATE(389)] = 8377,
  [SMALL_STATE(390)] = 8384,
  [SMALL_STATE(391)] = 8391,
  [SMALL_STATE(392)] = 8398,
  [SMALL_STATE(393)] = 8405,
  [SMALL_STATE(394)] = 8412,
  [SMALL_STATE(395)] = 8419,
  [SMALL_STATE(396)] = 8426,
  [SMALL_STATE(397)] = 8433,
  [SMALL_STATE(398)] = 8440,
  [SMALL_STATE(399)] = 8447,
  [SMALL_STATE(400)] = 8454,
  [SMALL_STATE(401)] = 8461,
  [SMALL_STATE(402)] = 8468,
  [SMALL_STATE(403)] = 8475,
  [SMALL_STATE(404)] = 8482,
  [SMALL_STATE(405)] = 8489,
  [SMALL_STATE(406)] = 8496,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(383),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(406),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(405),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(367),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(360),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 10),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 10),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 10),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 10),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 9),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 9),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 9),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_before_sections, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_before_sections, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 9),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 9),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 6),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 6),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 8),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 8),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 8),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relations, 8),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relations, 8),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 8),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 8),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subreadings, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subreadings, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 7),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_prefix, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_prefix, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_sets, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_sets, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 9),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 9),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 11),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 11),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_move, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_move, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_special_list, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_special_list, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 7),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 7),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_substitute_etc, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_substitute_etc, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parentchild, 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_parentchild, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_relation, 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_relation, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_map_etc, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_map_etc, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_addcohort, 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_addcohort, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_switch, 5),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_switch, 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shared_rule_end, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shared_rule_end, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_external, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_external, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(250),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineset_single, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 2),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context, 2), SHIFT_REPEAT(78),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_context, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(271),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(194),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_taglist_repeat1, 2), SHIFT_REPEAT(194),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglist, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_target, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contextpos, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contextpos, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(191),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_tag, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(266),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compotag, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compotag, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(194),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compotag_repeat1, 2), SHIFT_REPEAT(194),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleflag, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruleflag, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 1),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inlineset_repeat1, 2), SHIFT_REPEAT(257),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 4),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineset_single, 3),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(244),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setname_t, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 2), SHIFT_REPEAT(365),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parentheses_repeat1, 2), SHIFT_REPEAT(271),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_tag, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setname, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruleflag_repeat1, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_sets_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_static_sets_repeat1, 2), SHIFT_REPEAT(322),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleflag_repeat1, 2), SHIFT_REPEAT(249),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__to_from, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat2, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__child_specifier, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__child_specifier, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2), SHIFT_REPEAT(196),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contexttest_repeat1, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 7),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contexttest, 6),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [734] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_list_name, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
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
