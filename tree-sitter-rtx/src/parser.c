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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 510
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 79

enum {
  aux_sym_arrow_token1 = 1,
  sym_string = 2,
  sym_ident = 3,
  sym_comment = 4,
  aux_sym_num_token1 = 5,
  sym_weight = 6,
  anon_sym_DOLLAR = 7,
  sym_global_var_prefix = 8,
  sym_global_str_prefix = 9,
  sym_magic = 10,
  anon_sym_COLON = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_DOT = 14,
  anon_sym_SEMI = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_EQ = 21,
  anon_sym_AT = 22,
  sym_clip_side = 23,
  aux_sym_str_op_eq_token1 = 24,
  aux_sym_str_op_eq_token2 = 25,
  aux_sym_str_op_isprefix_token1 = 26,
  aux_sym_str_op_isprefix_token2 = 27,
  aux_sym_str_op_isprefix_token3 = 28,
  aux_sym_str_op_hasprefix_token1 = 29,
  aux_sym_str_op_hasprefix_token2 = 30,
  aux_sym_str_op_hasprefix_token3 = 31,
  aux_sym_str_op_issuffix_token1 = 32,
  aux_sym_str_op_issuffix_token2 = 33,
  aux_sym_str_op_hassuffix_token1 = 34,
  aux_sym_str_op_hassuffix_token2 = 35,
  aux_sym_str_op_in_token1 = 36,
  aux_sym_str_op_in_token2 = 37,
  aux_sym_str_op_contains_token1 = 38,
  aux_sym_str_op_contains_token2 = 39,
  aux_sym_and_token1 = 40,
  aux_sym_and_token2 = 41,
  aux_sym_or_token1 = 42,
  aux_sym_or_token2 = 43,
  aux_sym_not_token1 = 44,
  aux_sym_not_token2 = 45,
  aux_sym_not_token3 = 46,
  anon_sym_STAR = 47,
  anon_sym_LBRACK2 = 48,
  anon_sym_LPAREN2 = 49,
  anon_sym_AT2 = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  sym_conjoin = 53,
  sym_blank = 54,
  sym_numbered_blank = 55,
  aux_sym_if_tok_token1 = 56,
  aux_sym_else_tok_token1 = 57,
  aux_sym_else_tok_token2 = 58,
  sym_always_tok = 59,
  anon_sym_PIPE = 60,
  anon_sym_QMARK = 61,
  sym_source_file = 62,
  sym_arrow = 63,
  sym_num = 64,
  sym_attr_prefix = 65,
  sym_colon = 66,
  sym_lit_tag = 67,
  sym_output_rule = 68,
  sym_attr_set_insert = 69,
  sym_attr_pair = 70,
  sym_retag_rule = 71,
  sym_attr_default = 72,
  sym_attr_rule = 73,
  sym_insert = 74,
  sym_inserted = 75,
  sym_clip = 76,
  sym_str_op_eq = 77,
  sym_str_op_isprefix = 78,
  sym_str_op_hasprefix = 79,
  sym_str_op_issuffix = 80,
  sym_str_op_hassuffix = 81,
  sym_str_op_in = 82,
  sym_str_op_contains = 83,
  sym_str_op = 84,
  sym_and = 85,
  sym_or = 86,
  sym_not = 87,
  sym__string_val = 88,
  sym__cond_base_bool = 89,
  sym__cond_bool = 90,
  sym_condition = 91,
  sym_pattern_clip = 92,
  sym_pattern_element = 93,
  sym_unknown = 94,
  sym_set_var = 95,
  sym_output_var_set = 96,
  sym_macro_name = 97,
  sym_literal_lu = 98,
  sym_null_lu = 99,
  sym_output_element = 100,
  sym_if_tok = 101,
  sym_else_tok = 102,
  sym_string_always_choice = 103,
  sym_string_if_choice = 104,
  sym_string_else_choice = 105,
  sym_string_cond = 106,
  sym_chunk_always_choice = 107,
  sym_chunk_if_choice = 108,
  sym_chunk_else_choice = 109,
  sym_chunk_cond = 110,
  sym_lu_always_choice = 111,
  sym_lu_if_choice = 112,
  sym_lu_else_choice = 113,
  sym_lu_cond = 114,
  sym_reduce_output = 115,
  sym_output_chunk = 116,
  sym__chunk_val = 117,
  sym__lu_val = 118,
  sym_lu_sequence = 119,
  sym_reduce_rule_group = 120,
  sym_set_surf = 121,
  sym_set_global_var = 122,
  sym_set_global_str = 123,
  sym_set_chunk_attr = 124,
  sym_reduce_rule = 125,
  aux_sym_source_file_repeat1 = 126,
  aux_sym_output_rule_repeat1 = 127,
  aux_sym_retag_rule_repeat1 = 128,
  aux_sym_attr_rule_repeat1 = 129,
  aux_sym_pattern_element_repeat1 = 130,
  aux_sym_output_var_set_repeat1 = 131,
  aux_sym_literal_lu_repeat1 = 132,
  aux_sym_string_cond_repeat1 = 133,
  aux_sym_chunk_cond_repeat1 = 134,
  aux_sym_lu_cond_repeat1 = 135,
  aux_sym_reduce_output_repeat1 = 136,
  aux_sym_output_chunk_repeat1 = 137,
  aux_sym_reduce_rule_group_repeat1 = 138,
  aux_sym_reduce_rule_group_repeat2 = 139,
  aux_sym_reduce_rule_repeat1 = 140,
  aux_sym_reduce_rule_repeat2 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_arrow_token1] = "arrow_token1",
  [sym_string] = "string",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [aux_sym_num_token1] = "num_token1",
  [sym_weight] = "weight",
  [anon_sym_DOLLAR] = "$",
  [sym_global_var_prefix] = "global_var_prefix",
  [sym_global_str_prefix] = "global_str_prefix",
  [sym_magic] = "magic",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [sym_clip_side] = "clip_side",
  [aux_sym_str_op_eq_token1] = "str_op_eq_token1",
  [aux_sym_str_op_eq_token2] = "str_op_eq_token2",
  [aux_sym_str_op_isprefix_token1] = "str_op_isprefix_token1",
  [aux_sym_str_op_isprefix_token2] = "str_op_isprefix_token2",
  [aux_sym_str_op_isprefix_token3] = "str_op_isprefix_token3",
  [aux_sym_str_op_hasprefix_token1] = "str_op_hasprefix_token1",
  [aux_sym_str_op_hasprefix_token2] = "str_op_hasprefix_token2",
  [aux_sym_str_op_hasprefix_token3] = "str_op_hasprefix_token3",
  [aux_sym_str_op_issuffix_token1] = "str_op_issuffix_token1",
  [aux_sym_str_op_issuffix_token2] = "str_op_issuffix_token2",
  [aux_sym_str_op_hassuffix_token1] = "str_op_hassuffix_token1",
  [aux_sym_str_op_hassuffix_token2] = "str_op_hassuffix_token2",
  [aux_sym_str_op_in_token1] = "str_op_in_token1",
  [aux_sym_str_op_in_token2] = "str_op_in_token2",
  [aux_sym_str_op_contains_token1] = "str_op_contains_token1",
  [aux_sym_str_op_contains_token2] = "str_op_contains_token2",
  [aux_sym_and_token1] = "and_token1",
  [aux_sym_and_token2] = "and_token2",
  [aux_sym_or_token1] = "or_token1",
  [aux_sym_or_token2] = "or_token2",
  [aux_sym_not_token1] = "not_token1",
  [aux_sym_not_token2] = "not_token2",
  [aux_sym_not_token3] = "not_token3",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_AT2] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_conjoin] = "conjoin",
  [sym_blank] = "blank",
  [sym_numbered_blank] = "numbered_blank",
  [aux_sym_if_tok_token1] = "if_tok_token1",
  [aux_sym_else_tok_token1] = "else_tok_token1",
  [aux_sym_else_tok_token2] = "else_tok_token2",
  [sym_always_tok] = "always_tok",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "\?",
  [sym_source_file] = "source_file",
  [sym_arrow] = "arrow",
  [sym_num] = "num",
  [sym_attr_prefix] = "attr_prefix",
  [sym_colon] = "colon",
  [sym_lit_tag] = "lit_tag",
  [sym_output_rule] = "output_rule",
  [sym_attr_set_insert] = "attr_set_insert",
  [sym_attr_pair] = "attr_pair",
  [sym_retag_rule] = "retag_rule",
  [sym_attr_default] = "attr_default",
  [sym_attr_rule] = "attr_rule",
  [sym_insert] = "insert",
  [sym_inserted] = "inserted",
  [sym_clip] = "clip",
  [sym_str_op_eq] = "str_op_eq",
  [sym_str_op_isprefix] = "str_op_isprefix",
  [sym_str_op_hasprefix] = "str_op_hasprefix",
  [sym_str_op_issuffix] = "str_op_issuffix",
  [sym_str_op_hassuffix] = "str_op_hassuffix",
  [sym_str_op_in] = "str_op_in",
  [sym_str_op_contains] = "str_op_contains",
  [sym_str_op] = "str_op",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_not] = "not",
  [sym__string_val] = "_string_val",
  [sym__cond_base_bool] = "_cond_base_bool",
  [sym__cond_bool] = "_cond_bool",
  [sym_condition] = "condition",
  [sym_pattern_clip] = "pattern_clip",
  [sym_pattern_element] = "pattern_element",
  [sym_unknown] = "unknown",
  [sym_set_var] = "set_var",
  [sym_output_var_set] = "output_var_set",
  [sym_macro_name] = "macro_name",
  [sym_literal_lu] = "literal_lu",
  [sym_null_lu] = "null_lu",
  [sym_output_element] = "output_element",
  [sym_if_tok] = "if_tok",
  [sym_else_tok] = "else_tok",
  [sym_string_always_choice] = "choice",
  [sym_string_if_choice] = "choice",
  [sym_string_else_choice] = "choice",
  [sym_string_cond] = "string_cond",
  [sym_chunk_always_choice] = "choice",
  [sym_chunk_if_choice] = "choice",
  [sym_chunk_else_choice] = "choice",
  [sym_chunk_cond] = "chunk_cond",
  [sym_lu_always_choice] = "choice",
  [sym_lu_if_choice] = "choice",
  [sym_lu_else_choice] = "choice",
  [sym_lu_cond] = "lu_cond",
  [sym_reduce_output] = "reduce_output",
  [sym_output_chunk] = "output_chunk",
  [sym__chunk_val] = "_chunk_val",
  [sym__lu_val] = "_lu_val",
  [sym_lu_sequence] = "lu_sequence",
  [sym_reduce_rule_group] = "reduce_rule_group",
  [sym_set_surf] = "set_surf",
  [sym_set_global_var] = "set_global_var",
  [sym_set_global_str] = "set_global_str",
  [sym_set_chunk_attr] = "set_chunk_attr",
  [sym_reduce_rule] = "reduce_rule",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_output_rule_repeat1] = "output_rule_repeat1",
  [aux_sym_retag_rule_repeat1] = "retag_rule_repeat1",
  [aux_sym_attr_rule_repeat1] = "attr_rule_repeat1",
  [aux_sym_pattern_element_repeat1] = "pattern_element_repeat1",
  [aux_sym_output_var_set_repeat1] = "output_var_set_repeat1",
  [aux_sym_literal_lu_repeat1] = "literal_lu_repeat1",
  [aux_sym_string_cond_repeat1] = "string_cond_repeat1",
  [aux_sym_chunk_cond_repeat1] = "chunk_cond_repeat1",
  [aux_sym_lu_cond_repeat1] = "lu_cond_repeat1",
  [aux_sym_reduce_output_repeat1] = "reduce_output_repeat1",
  [aux_sym_output_chunk_repeat1] = "output_chunk_repeat1",
  [aux_sym_reduce_rule_group_repeat1] = "reduce_rule_group_repeat1",
  [aux_sym_reduce_rule_group_repeat2] = "reduce_rule_group_repeat2",
  [aux_sym_reduce_rule_repeat1] = "reduce_rule_repeat1",
  [aux_sym_reduce_rule_repeat2] = "reduce_rule_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_arrow_token1] = aux_sym_arrow_token1,
  [sym_string] = sym_string,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [aux_sym_num_token1] = aux_sym_num_token1,
  [sym_weight] = sym_weight,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_global_var_prefix] = sym_global_var_prefix,
  [sym_global_str_prefix] = sym_global_str_prefix,
  [sym_magic] = sym_magic,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [sym_clip_side] = sym_clip_side,
  [aux_sym_str_op_eq_token1] = aux_sym_str_op_eq_token1,
  [aux_sym_str_op_eq_token2] = aux_sym_str_op_eq_token2,
  [aux_sym_str_op_isprefix_token1] = aux_sym_str_op_isprefix_token1,
  [aux_sym_str_op_isprefix_token2] = aux_sym_str_op_isprefix_token2,
  [aux_sym_str_op_isprefix_token3] = aux_sym_str_op_isprefix_token3,
  [aux_sym_str_op_hasprefix_token1] = aux_sym_str_op_hasprefix_token1,
  [aux_sym_str_op_hasprefix_token2] = aux_sym_str_op_hasprefix_token2,
  [aux_sym_str_op_hasprefix_token3] = aux_sym_str_op_hasprefix_token3,
  [aux_sym_str_op_issuffix_token1] = aux_sym_str_op_issuffix_token1,
  [aux_sym_str_op_issuffix_token2] = aux_sym_str_op_issuffix_token2,
  [aux_sym_str_op_hassuffix_token1] = aux_sym_str_op_hassuffix_token1,
  [aux_sym_str_op_hassuffix_token2] = aux_sym_str_op_hassuffix_token2,
  [aux_sym_str_op_in_token1] = aux_sym_str_op_in_token1,
  [aux_sym_str_op_in_token2] = aux_sym_str_op_in_token2,
  [aux_sym_str_op_contains_token1] = aux_sym_str_op_contains_token1,
  [aux_sym_str_op_contains_token2] = aux_sym_str_op_contains_token2,
  [aux_sym_and_token1] = aux_sym_and_token1,
  [aux_sym_and_token2] = aux_sym_and_token2,
  [aux_sym_or_token1] = aux_sym_or_token1,
  [aux_sym_or_token2] = aux_sym_or_token2,
  [aux_sym_not_token1] = aux_sym_not_token1,
  [aux_sym_not_token2] = aux_sym_not_token2,
  [aux_sym_not_token3] = aux_sym_not_token3,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_conjoin] = sym_conjoin,
  [sym_blank] = sym_blank,
  [sym_numbered_blank] = sym_numbered_blank,
  [aux_sym_if_tok_token1] = aux_sym_if_tok_token1,
  [aux_sym_else_tok_token1] = aux_sym_else_tok_token1,
  [aux_sym_else_tok_token2] = aux_sym_else_tok_token2,
  [sym_always_tok] = sym_always_tok,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_source_file] = sym_source_file,
  [sym_arrow] = sym_arrow,
  [sym_num] = sym_num,
  [sym_attr_prefix] = sym_attr_prefix,
  [sym_colon] = sym_colon,
  [sym_lit_tag] = sym_lit_tag,
  [sym_output_rule] = sym_output_rule,
  [sym_attr_set_insert] = sym_attr_set_insert,
  [sym_attr_pair] = sym_attr_pair,
  [sym_retag_rule] = sym_retag_rule,
  [sym_attr_default] = sym_attr_default,
  [sym_attr_rule] = sym_attr_rule,
  [sym_insert] = sym_insert,
  [sym_inserted] = sym_inserted,
  [sym_clip] = sym_clip,
  [sym_str_op_eq] = sym_str_op_eq,
  [sym_str_op_isprefix] = sym_str_op_isprefix,
  [sym_str_op_hasprefix] = sym_str_op_hasprefix,
  [sym_str_op_issuffix] = sym_str_op_issuffix,
  [sym_str_op_hassuffix] = sym_str_op_hassuffix,
  [sym_str_op_in] = sym_str_op_in,
  [sym_str_op_contains] = sym_str_op_contains,
  [sym_str_op] = sym_str_op,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_not] = sym_not,
  [sym__string_val] = sym__string_val,
  [sym__cond_base_bool] = sym__cond_base_bool,
  [sym__cond_bool] = sym__cond_bool,
  [sym_condition] = sym_condition,
  [sym_pattern_clip] = sym_pattern_clip,
  [sym_pattern_element] = sym_pattern_element,
  [sym_unknown] = sym_unknown,
  [sym_set_var] = sym_set_var,
  [sym_output_var_set] = sym_output_var_set,
  [sym_macro_name] = sym_macro_name,
  [sym_literal_lu] = sym_literal_lu,
  [sym_null_lu] = sym_null_lu,
  [sym_output_element] = sym_output_element,
  [sym_if_tok] = sym_if_tok,
  [sym_else_tok] = sym_else_tok,
  [sym_string_always_choice] = sym_string_always_choice,
  [sym_string_if_choice] = sym_string_always_choice,
  [sym_string_else_choice] = sym_string_always_choice,
  [sym_string_cond] = sym_string_cond,
  [sym_chunk_always_choice] = sym_string_always_choice,
  [sym_chunk_if_choice] = sym_string_always_choice,
  [sym_chunk_else_choice] = sym_string_always_choice,
  [sym_chunk_cond] = sym_chunk_cond,
  [sym_lu_always_choice] = sym_string_always_choice,
  [sym_lu_if_choice] = sym_string_always_choice,
  [sym_lu_else_choice] = sym_string_always_choice,
  [sym_lu_cond] = sym_lu_cond,
  [sym_reduce_output] = sym_reduce_output,
  [sym_output_chunk] = sym_output_chunk,
  [sym__chunk_val] = sym__chunk_val,
  [sym__lu_val] = sym__lu_val,
  [sym_lu_sequence] = sym_lu_sequence,
  [sym_reduce_rule_group] = sym_reduce_rule_group,
  [sym_set_surf] = sym_set_surf,
  [sym_set_global_var] = sym_set_global_var,
  [sym_set_global_str] = sym_set_global_str,
  [sym_set_chunk_attr] = sym_set_chunk_attr,
  [sym_reduce_rule] = sym_reduce_rule,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_output_rule_repeat1] = aux_sym_output_rule_repeat1,
  [aux_sym_retag_rule_repeat1] = aux_sym_retag_rule_repeat1,
  [aux_sym_attr_rule_repeat1] = aux_sym_attr_rule_repeat1,
  [aux_sym_pattern_element_repeat1] = aux_sym_pattern_element_repeat1,
  [aux_sym_output_var_set_repeat1] = aux_sym_output_var_set_repeat1,
  [aux_sym_literal_lu_repeat1] = aux_sym_literal_lu_repeat1,
  [aux_sym_string_cond_repeat1] = aux_sym_string_cond_repeat1,
  [aux_sym_chunk_cond_repeat1] = aux_sym_chunk_cond_repeat1,
  [aux_sym_lu_cond_repeat1] = aux_sym_lu_cond_repeat1,
  [aux_sym_reduce_output_repeat1] = aux_sym_reduce_output_repeat1,
  [aux_sym_output_chunk_repeat1] = aux_sym_output_chunk_repeat1,
  [aux_sym_reduce_rule_group_repeat1] = aux_sym_reduce_rule_group_repeat1,
  [aux_sym_reduce_rule_group_repeat2] = aux_sym_reduce_rule_group_repeat2,
  [aux_sym_reduce_rule_repeat1] = aux_sym_reduce_rule_repeat1,
  [aux_sym_reduce_rule_repeat2] = aux_sym_reduce_rule_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_num_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_weight] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_global_var_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_global_str_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_magic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_clip_side] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_str_op_eq_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_eq_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_isprefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_isprefix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_isprefix_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_hasprefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_hasprefix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_hasprefix_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_issuffix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_issuffix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_hassuffix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_hassuffix_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_in_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_in_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_contains_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_contains_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_and_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_and_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_or_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_or_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_conjoin] = {
    .visible = true,
    .named = true,
  },
  [sym_blank] = {
    .visible = true,
    .named = true,
  },
  [sym_numbered_blank] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_if_tok_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_tok_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_tok_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_always_tok] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_output_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_set_insert] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_retag_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_default] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_insert] = {
    .visible = true,
    .named = true,
  },
  [sym_inserted] = {
    .visible = true,
    .named = true,
  },
  [sym_clip] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_isprefix] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_hasprefix] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_issuffix] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_hassuffix] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_in] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym__string_val] = {
    .visible = false,
    .named = true,
  },
  [sym__cond_base_bool] = {
    .visible = false,
    .named = true,
  },
  [sym__cond_bool] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_clip] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_element] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown] = {
    .visible = true,
    .named = true,
  },
  [sym_set_var] = {
    .visible = true,
    .named = true,
  },
  [sym_output_var_set] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_lu] = {
    .visible = true,
    .named = true,
  },
  [sym_null_lu] = {
    .visible = true,
    .named = true,
  },
  [sym_output_element] = {
    .visible = true,
    .named = true,
  },
  [sym_if_tok] = {
    .visible = true,
    .named = true,
  },
  [sym_else_tok] = {
    .visible = true,
    .named = true,
  },
  [sym_string_always_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_string_if_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_string_else_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_string_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_always_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_if_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_else_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_lu_always_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_lu_if_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_lu_else_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_lu_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_reduce_output] = {
    .visible = true,
    .named = true,
  },
  [sym_output_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym__chunk_val] = {
    .visible = false,
    .named = true,
  },
  [sym__lu_val] = {
    .visible = false,
    .named = true,
  },
  [sym_lu_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_reduce_rule_group] = {
    .visible = true,
    .named = true,
  },
  [sym_set_surf] = {
    .visible = true,
    .named = true,
  },
  [sym_set_global_var] = {
    .visible = true,
    .named = true,
  },
  [sym_set_global_str] = {
    .visible = true,
    .named = true,
  },
  [sym_set_chunk_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_reduce_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_retag_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_var_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_lu_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_cond_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chunk_cond_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lu_cond_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduce_output_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_chunk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduce_rule_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduce_rule_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduce_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduce_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attr = 1,
  field_complex_tag = 2,
  field_cond = 3,
  field_convert = 4,
  field_inserted = 5,
  field_lemcase = 6,
  field_lemma = 7,
  field_lit_tag = 8,
  field_name = 9,
  field_output = 10,
  field_parent_tag = 11,
  field_pattern = 12,
  field_pos = 13,
  field_rule_name = 14,
  field_side = 15,
  field_src = 16,
  field_src_attr = 17,
  field_trg = 18,
  field_trg_attr = 19,
  field_type = 20,
  field_val = 21,
  field_value = 22,
  field_var_name = 23,
  field_vars = 24,
  field_weight = 25,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attr] = "attr",
  [field_complex_tag] = "complex_tag",
  [field_cond] = "cond",
  [field_convert] = "convert",
  [field_inserted] = "inserted",
  [field_lemcase] = "lemcase",
  [field_lemma] = "lemma",
  [field_lit_tag] = "lit_tag",
  [field_name] = "name",
  [field_output] = "output",
  [field_parent_tag] = "parent_tag",
  [field_pattern] = "pattern",
  [field_pos] = "pos",
  [field_rule_name] = "rule_name",
  [field_side] = "side",
  [field_src] = "src",
  [field_src_attr] = "src_attr",
  [field_trg] = "trg",
  [field_trg_attr] = "trg_attr",
  [field_type] = "type",
  [field_val] = "val",
  [field_value] = "value",
  [field_var_name] = "var_name",
  [field_vars] = "vars",
  [field_weight] = "weight",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 4},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 2},
  [18] = {.index = 37, .length = 1},
  [19] = {.index = 38, .length = 2},
  [20] = {.index = 40, .length = 5},
  [21] = {.index = 45, .length = 5},
  [22] = {.index = 50, .length = 3},
  [23] = {.index = 53, .length = 2},
  [24] = {.index = 55, .length = 3},
  [25] = {.index = 58, .length = 6},
  [26] = {.index = 64, .length = 3},
  [27] = {.index = 67, .length = 2},
  [28] = {.index = 69, .length = 3},
  [29] = {.index = 72, .length = 3},
  [30] = {.index = 75, .length = 6},
  [31] = {.index = 81, .length = 2},
  [32] = {.index = 83, .length = 2},
  [33] = {.index = 85, .length = 2},
  [34] = {.index = 87, .length = 1},
  [35] = {.index = 88, .length = 7},
  [36] = {.index = 95, .length = 8},
  [37] = {.index = 103, .length = 4},
  [38] = {.index = 107, .length = 7},
  [39] = {.index = 114, .length = 4},
  [40] = {.index = 118, .length = 4},
  [41] = {.index = 122, .length = 2},
  [42] = {.index = 124, .length = 3},
  [43] = {.index = 127, .length = 3},
  [44] = {.index = 130, .length = 3},
  [45] = {.index = 133, .length = 7},
  [46] = {.index = 140, .length = 3},
  [47] = {.index = 143, .length = 4},
  [48] = {.index = 147, .length = 2},
  [49] = {.index = 149, .length = 4},
  [50] = {.index = 153, .length = 2},
  [51] = {.index = 155, .length = 8},
  [52] = {.index = 163, .length = 5},
  [53] = {.index = 168, .length = 8},
  [54] = {.index = 176, .length = 5},
  [55] = {.index = 181, .length = 8},
  [56] = {.index = 189, .length = 3},
  [57] = {.index = 192, .length = 3},
  [58] = {.index = 195, .length = 4},
  [59] = {.index = 199, .length = 4},
  [60] = {.index = 203, .length = 5},
  [61] = {.index = 208, .length = 5},
  [62] = {.index = 213, .length = 4},
  [63] = {.index = 217, .length = 4},
  [64] = {.index = 221, .length = 3},
  [65] = {.index = 224, .length = 3},
  [66] = {.index = 227, .length = 9},
  [67] = {.index = 236, .length = 9},
  [68] = {.index = 245, .length = 3},
  [69] = {.index = 248, .length = 4},
  [70] = {.index = 252, .length = 4},
  [71] = {.index = 256, .length = 5},
  [72] = {.index = 261, .length = 5},
  [73] = {.index = 266, .length = 6},
  [74] = {.index = 272, .length = 4},
  [75] = {.index = 276, .length = 5},
  [76] = {.index = 281, .length = 7},
  [77] = {.index = 288, .length = 6},
  [78] = {.index = 294, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pos, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_pos, 1},
  [3] =
    {field_output, 1},
    {field_pattern, 0},
  [5] =
    {field_type, 0},
    {field_value, 1},
  [7] =
    {field_lemma, 0},
    {field_pos, 2},
  [9] =
    {field_output, 2},
    {field_pattern, 1},
    {field_rule_name, 0},
  [12] =
    {field_src, 0},
    {field_trg, 1},
  [14] =
    {field_src_attr, 0},
    {field_trg_attr, 2},
  [16] =
    {field_src, 1},
    {field_trg, 2},
  [18] =
    {field_val, 0},
  [19] =
    {field_cond, 1},
    {field_type, 0},
    {field_value, 2},
  [22] =
    {field_output, 3},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [26] =
    {field_lemma, 1},
    {field_pos, 3},
  [28] =
    {field_lemma, 0},
    {field_lemma, 1},
    {field_pos, 3},
  [31] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 3},
    {field_pattern, 0},
  [35] =
    {field_lemma, 0},
    {field_lit_tag, 2},
  [37] =
    {field_var_name, 1},
  [38] =
    {field_attr, 1},
    {field_pos, 0},
  [40] =
    {field_output, 4},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [45] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 4},
    {field_pattern, 1},
    {field_rule_name, 0},
  [50] =
    {field_lemma, 1},
    {field_lemma, 2},
    {field_pos, 4},
  [53] =
    {field_output, 4},
    {field_pattern, 0},
  [55] =
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_vars, 3},
  [58] =
    {field_complex_tag, 3, .inherited = true},
    {field_lemcase, 3, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_lit_tag, 3, .inherited = true},
    {field_parent_tag, 3, .inherited = true},
  [64] =
    {field_lemma, 0},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
  [67] =
    {field_attr, 2},
    {field_pos, 0},
  [69] =
    {field_attr, 1},
    {field_pos, 0},
    {field_side, 2},
  [72] =
    {field_output, 5},
    {field_pattern, 1},
    {field_rule_name, 0},
  [75] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 5},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [81] =
    {field_name, 1},
    {field_value, 3},
  [83] =
    {field_output, 5},
    {field_pattern, 0},
  [85] =
    {field_name, 0},
    {field_value, 2},
  [87] =
    {field_lit_tag, 1},
  [88] =
    {field_complex_tag, 3, .inherited = true},
    {field_lemcase, 3, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_lit_tag, 3, .inherited = true},
    {field_parent_tag, 3, .inherited = true},
    {field_vars, 4},
  [95] =
    {field_complex_tag, 0, .inherited = true},
    {field_complex_tag, 1, .inherited = true},
    {field_lemcase, 0, .inherited = true},
    {field_lemcase, 1, .inherited = true},
    {field_lit_tag, 0, .inherited = true},
    {field_lit_tag, 1, .inherited = true},
    {field_parent_tag, 0, .inherited = true},
    {field_parent_tag, 1, .inherited = true},
  [103] =
    {field_lemma, 0},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_vars, 4},
  [107] =
    {field_complex_tag, 4, .inherited = true},
    {field_lemcase, 4, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 4, .inherited = true},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_parent_tag, 4, .inherited = true},
  [114] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_lemma, 0},
  [118] =
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemma, 0},
  [122] =
    {field_attr, 3},
    {field_var_name, 1},
  [124] =
    {field_attr, 2},
    {field_pos, 0},
    {field_side, 3},
  [127] =
    {field_attr, 1},
    {field_convert, 3},
    {field_pos, 0},
  [130] =
    {field_attr, 3},
    {field_inserted, 0},
    {field_pos, 1},
  [133] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 6},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [140] =
    {field_output, 6},
    {field_pattern, 1},
    {field_rule_name, 0},
  [143] =
    {field_output, 6},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [147] =
    {field_pos, 1},
    {field_side, 2},
  [149] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 6},
    {field_pattern, 0},
  [153] =
    {field_parent_tag, 1},
    {field_parent_tag, 2},
  [155] =
    {field_complex_tag, 4, .inherited = true},
    {field_lemcase, 4, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 4, .inherited = true},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_parent_tag, 4, .inherited = true},
    {field_vars, 5},
  [163] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_lemma, 0},
    {field_vars, 5},
  [168] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
  [176] =
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemma, 0},
    {field_vars, 5},
  [181] =
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
  [189] =
    {field_attr, 3},
    {field_side, 4},
    {field_var_name, 1},
  [192] =
    {field_attr, 2},
    {field_convert, 4},
    {field_pos, 0},
  [195] =
    {field_attr, 1},
    {field_convert, 4},
    {field_pos, 0},
    {field_side, 2},
  [199] =
    {field_attr, 3},
    {field_inserted, 0},
    {field_pos, 1},
    {field_side, 4},
  [203] =
    {field_output, 7},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [208] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 7},
    {field_pattern, 1},
    {field_rule_name, 0},
  [213] =
    {field_output, 7},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [217] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 7},
    {field_pattern, 0},
  [221] =
    {field_complex_tag, 1},
    {field_complex_tag, 2},
    {field_complex_tag, 3},
  [224] =
    {field_lemcase, 1},
    {field_lemcase, 2},
    {field_lemcase, 3},
  [227] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
    {field_vars, 6},
  [236] =
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
    {field_vars, 6},
  [245] =
    {field_attr, 3},
    {field_convert, 5},
    {field_var_name, 1},
  [248] =
    {field_attr, 2},
    {field_convert, 5},
    {field_pos, 0},
    {field_side, 3},
  [252] =
    {field_attr, 3},
    {field_convert, 5},
    {field_inserted, 0},
    {field_pos, 1},
  [256] =
    {field_output, 8},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [261] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 8},
    {field_pattern, 1},
    {field_rule_name, 0},
  [266] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 8},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [272] =
    {field_attr, 3},
    {field_convert, 6},
    {field_side, 4},
    {field_var_name, 1},
  [276] =
    {field_attr, 3},
    {field_convert, 6},
    {field_inserted, 0},
    {field_pos, 1},
    {field_side, 4},
  [281] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 9},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [288] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 9},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [294] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 10},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 35,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 68,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 122,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 102,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 130,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 148,
  [150] = 150,
  [151] = 147,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 41,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 154,
  [162] = 162,
  [163] = 163,
  [164] = 157,
  [165] = 160,
  [166] = 162,
  [167] = 167,
  [168] = 168,
  [169] = 40,
  [170] = 53,
  [171] = 50,
  [172] = 172,
  [173] = 173,
  [174] = 48,
  [175] = 51,
  [176] = 176,
  [177] = 52,
  [178] = 178,
  [179] = 58,
  [180] = 180,
  [181] = 45,
  [182] = 182,
  [183] = 183,
  [184] = 46,
  [185] = 185,
  [186] = 111,
  [187] = 44,
  [188] = 188,
  [189] = 189,
  [190] = 59,
  [191] = 55,
  [192] = 192,
  [193] = 110,
  [194] = 194,
  [195] = 195,
  [196] = 47,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 201,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 206,
  [218] = 218,
  [219] = 202,
  [220] = 60,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 69,
  [225] = 62,
  [226] = 226,
  [227] = 222,
  [228] = 228,
  [229] = 61,
  [230] = 230,
  [231] = 65,
  [232] = 64,
  [233] = 233,
  [234] = 63,
  [235] = 235,
  [236] = 236,
  [237] = 66,
  [238] = 67,
  [239] = 228,
  [240] = 230,
  [241] = 70,
  [242] = 57,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 150,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 78,
  [255] = 249,
  [256] = 256,
  [257] = 257,
  [258] = 245,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 86,
  [266] = 90,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 269,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 98,
  [283] = 283,
  [284] = 79,
  [285] = 268,
  [286] = 286,
  [287] = 85,
  [288] = 88,
  [289] = 89,
  [290] = 91,
  [291] = 93,
  [292] = 94,
  [293] = 97,
  [294] = 294,
  [295] = 92,
  [296] = 99,
  [297] = 297,
  [298] = 84,
  [299] = 299,
  [300] = 300,
  [301] = 96,
  [302] = 81,
  [303] = 82,
  [304] = 76,
  [305] = 106,
  [306] = 306,
  [307] = 80,
  [308] = 308,
  [309] = 309,
  [310] = 95,
  [311] = 75,
  [312] = 87,
  [313] = 104,
  [314] = 83,
  [315] = 77,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 319,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 322,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 354,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 428,
  [471] = 414,
  [472] = 472,
  [473] = 461,
  [474] = 474,
  [475] = 419,
  [476] = 476,
  [477] = 415,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 476,
  [486] = 435,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 423,
  [491] = 422,
  [492] = 484,
  [493] = 493,
  [494] = 494,
  [495] = 465,
  [496] = 463,
  [497] = 424,
  [498] = 481,
  [499] = 474,
  [500] = 482,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 488,
  [506] = 506,
  [507] = 507,
  [508] = 483,
  [509] = 509,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '!' || (c < '('
        ? (c >= '$' && c <= '%')
        : c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < ':'
        ? (c >= '.' && c <= '/')
        : (c <= '=' || c == '@'))
      : (c <= ']' || (c < 8594
        ? (c >= '{' && c <= '}')
        : c <= 8594)))));
}

static inline bool sym_ident_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '!' || (c < '('
        ? (c >= '$' && c <= '%')
        : c <= ')')))
    : (c <= '/' || (c < '['
      ? (c < '@'
        ? (c >= ':' && c <= '>')
        : c <= '@')
      : (c <= ']' || (c < 8594
        ? (c >= '{' && c <= '}')
        : c <= 8594)))));
}

static inline bool sym_ident_character_set_3(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '!' || (c < '('
        ? (c >= '$' && c <= '%')
        : c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < '@'
        ? (c >= '.' && c <= '>')
        : c <= '@')
      : (c <= ']' || (c < 8594
        ? (c >= '{' && c <= '}')
        : c <= 8594)))));
}

static inline bool sym_ident_character_set_4(int32_t c) {
  return (c < '.'
    ? (c < '$'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || (c >= ' ' && c <= '!')))
      : (c <= '%' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '/' || (c < '['
      ? (c < '@'
        ? (c >= ':' && c <= '>')
        : c <= '@')
      : (c <= ']' || (c < 8594
        ? (c >= '{' && c <= '}')
        : c <= 8594)))));
}

static inline bool sym_ident_character_set_5(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '!' || (c < '('
        ? (c >= '$' && c <= '%')
        : c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < ':'
        ? (c >= '.' && c <= '/')
        : (c <= '>' || c == '@'))
      : (c <= ']' || (c < 8594
        ? (c >= '{' && c <= '}')
        : c <= 8594)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(312);
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(344);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == 8594) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 8976) ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(317);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ')' &&
          (lookahead < ',' || '=' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '/' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '/' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == ';') ADVANCE(344);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(335);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '0' || '>' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(335);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '>' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '&') ADVANCE(400);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '|') ADVANCE(402);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 8712) ADVANCE(392);
      if (lookahead == 8976) ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '&') ADVANCE(400);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '|') ADVANCE(402);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 8712) ADVANCE(392);
      if (lookahead == 8976) ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == 8594) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ',' || '<' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(329);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(309);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(337);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(400);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '|') ADVANCE(402);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 8712) ADVANCE(392);
      if (lookahead == 8976) ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(352);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(20);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(23);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(24);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(414);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(27);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(28);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(29);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(31);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(36);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 42:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 43:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(43);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(359);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(46);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(49);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      END_STATE();
    case 52:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 53:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 54:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 56:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(377);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(368);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(78);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(81);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(82);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(383);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 90:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(95);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(96);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(98);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(100);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 101:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(101);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 103:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 105:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(106);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 107:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 108:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      END_STATE();
    case 109:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 111:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 112:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 113:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 114:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      END_STATE();
    case 115:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 116:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 118:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 119:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(390);
      END_STATE();
    case 120:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(121);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(122);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 125:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 126:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 127:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 128:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 129:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 131:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 132:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 133:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 134:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 135:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 139:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(360);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 149:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 150:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 151:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 152:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 153:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 155:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      END_STATE();
    case 156:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 157:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 158:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 159:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(159);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 161:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 162:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 163:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 164:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 165:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 166:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 167:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 168:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(168);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 169:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(169);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 171:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 172:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 173:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 174:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 175:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 176:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(176);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 177:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 179:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 181:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 184:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(186);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 190:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(190);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 193:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 194:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 195:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(197);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 198:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 199:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(199);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 200:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 201:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 202:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 203:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(204);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 205:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 206:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 207:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(207);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 208:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 209:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 210:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(210);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 211:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 212:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 213:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 214:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(214);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 215:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 216:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 217:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 218:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 219:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(220);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 221:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(221);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 222:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 223:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 224:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 225:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(225);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 226:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 227:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(227);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 228:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 229:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 230:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 231:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 232:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(232);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 233:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 234:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 235:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(236);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 237:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 238:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(238);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 239:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 240:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 241:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 242:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(242);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 243:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(243);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 244:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(244);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 245:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(245);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 246:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 247:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 248:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 249:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 250:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(250);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 251:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(251);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 252:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(252);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 253:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(253);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 254:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 255:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 256:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(256);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 257:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 258:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(258);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 259:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(259);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 260:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 261:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(261);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 262:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 263:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 265:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 266:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 267:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 268:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      END_STATE();
    case 269:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 270:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 271:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(271);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 272:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 273:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(274);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(275);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 276:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 277:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(277);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(278);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 279:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 280:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(280);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 282:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(282);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 283:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(283);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(284);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 285:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(286);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(287);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 288:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 289:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(290);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 291:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 294:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 296:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(296);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 297:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(298);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 300:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 301:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 303:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(303);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 305:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 306:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(306);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 307:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(306);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 309:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(309);
      END_STATE();
    case 310:
      if (eof) ADVANCE(312);
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(412);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(344);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '_') ADVANCE(413);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == 8594) ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 311:
      if (eof) ADVANCE(312);
      if (lookahead == '!') ADVANCE(331);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(344);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(328);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}' &&
          lookahead != 8594) ADVANCE(329);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(309);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '>') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(330);
      if (!sym_ident_character_set_1(lookahead)) ADVANCE(329);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '~') ADVANCE(404);
      if (lookahead == 8976) ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(317);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(318);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(319);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(322);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(321);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(324);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(322);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(323);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(324);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(325);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(326);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (!sym_ident_character_set_3(lookahead)) ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_num_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_weight);
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_weight);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(337);
      if (lookahead == '%') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_global_var_prefix);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_global_str_prefix);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_magic);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_clip_side);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(356);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(358);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(359);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(362);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(211);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(367);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(371);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(374);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(380);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(187);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_str_op_in_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(389);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_str_op_in_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_str_op_in_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_str_op_in_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_str_op_in_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_str_op_in_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(395);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_and_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_and_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_or_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_or_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_not_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(330);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(329);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_conjoin);
      if (lookahead == '\\') ADVANCE(330);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(329);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_blank);
      if (lookahead == '\\') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (!sym_ident_character_set_3(lookahead)) ADVANCE(329);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_if_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_else_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_else_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_always_tok);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(330);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(329);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 311},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 311},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 311},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 311},
  [113] = {.lex_state = 311},
  [114] = {.lex_state = 311},
  [115] = {.lex_state = 311},
  [116] = {.lex_state = 311},
  [117] = {.lex_state = 311},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 311},
  [123] = {.lex_state = 311},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 311},
  [126] = {.lex_state = 311},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 311},
  [148] = {.lex_state = 311},
  [149] = {.lex_state = 311},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 311},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 311},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 311},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 311},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 311},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 311},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 311},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 311},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 311},
  [186] = {.lex_state = 311},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 311},
  [189] = {.lex_state = 311},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 311},
  [193] = {.lex_state = 311},
  [194] = {.lex_state = 311},
  [195] = {.lex_state = 311},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 311},
  [199] = {.lex_state = 311},
  [200] = {.lex_state = 311},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 311},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 311},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 311},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 311},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 311},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 311},
  [236] = {.lex_state = 311},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 311},
  [244] = {.lex_state = 311},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 311},
  [247] = {.lex_state = 311},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 311},
  [251] = {.lex_state = 311},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 311},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 311},
  [257] = {.lex_state = 311},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 311},
  [261] = {.lex_state = 311},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 311},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 311},
  [269] = {.lex_state = 311},
  [270] = {.lex_state = 311},
  [271] = {.lex_state = 311},
  [272] = {.lex_state = 311},
  [273] = {.lex_state = 311},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 311},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 311},
  [278] = {.lex_state = 311},
  [279] = {.lex_state = 311},
  [280] = {.lex_state = 311},
  [281] = {.lex_state = 311},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 311},
  [286] = {.lex_state = 311},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 10},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 311},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 311},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 311},
  [300] = {.lex_state = 311},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 10},
  [306] = {.lex_state = 311},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 311},
  [309] = {.lex_state = 311},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 10},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 10},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 311},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 311},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 12},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 311},
  [353] = {.lex_state = 311},
  [354] = {.lex_state = 311},
  [355] = {.lex_state = 311},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 311},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 311},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 311},
  [369] = {.lex_state = 311},
  [370] = {.lex_state = 311},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 311},
  [374] = {.lex_state = 311},
  [375] = {.lex_state = 311},
  [376] = {.lex_state = 311},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 311},
  [379] = {.lex_state = 311},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 311},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 311},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 311},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 311},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 311},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 311},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 311},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 311},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 311},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 311},
  [425] = {.lex_state = 311},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 311},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 311},
  [431] = {.lex_state = 311},
  [432] = {.lex_state = 311},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 311},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 311},
  [437] = {.lex_state = 311},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 311},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 311},
  [444] = {.lex_state = 311},
  [445] = {.lex_state = 311},
  [446] = {.lex_state = 311},
  [447] = {.lex_state = 311},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 311},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 311},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 311},
  [458] = {.lex_state = 311},
  [459] = {.lex_state = 311},
  [460] = {.lex_state = 311},
  [461] = {.lex_state = 311},
  [462] = {.lex_state = 311},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 311},
  [467] = {.lex_state = 311},
  [468] = {.lex_state = 311},
  [469] = {.lex_state = 311},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 311},
  [473] = {.lex_state = 311},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 311},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 311},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 311},
  [483] = {.lex_state = 311},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 311},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 311},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 311},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 311},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 311},
  [501] = {.lex_state = 311},
  [502] = {.lex_state = 311},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 311},
  [506] = {.lex_state = 311},
  [507] = {.lex_state = 311},
  [508] = {.lex_state = 311},
  [509] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_arrow_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_num_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_global_var_prefix] = ACTIONS(1),
    [sym_global_str_prefix] = ACTIONS(1),
    [sym_magic] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_clip_side] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_conjoin] = ACTIONS(1),
    [sym_blank] = ACTIONS(1),
    [sym_numbered_blank] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(509),
    [sym_output_rule] = STATE(194),
    [sym_retag_rule] = STATE(194),
    [sym_attr_rule] = STATE(194),
    [sym_reduce_rule_group] = STATE(194),
    [aux_sym_source_file_repeat1] = STATE(194),
    [aux_sym_reduce_rule_group_repeat1] = STATE(267),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      sym_clip_side,
    ACTIONS(15), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(11), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(21), 1,
      sym_clip_side,
    ACTIONS(23), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(19), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [88] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_GT,
    ACTIONS(29), 1,
      sym_clip_side,
    ACTIONS(31), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(27), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      sym_clip_side,
    ACTIONS(39), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(35), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_GT,
    ACTIONS(45), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(43), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(51), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(49), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(57), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(55), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(63), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(61), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(65), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(69), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(73), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(77), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(81), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(85), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(89), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(93), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(97), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(101), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(105), 26,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(109), 26,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(113), 26,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [831] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(120), 1,
      sym_ident,
    ACTIONS(123), 1,
      aux_sym_num_token1,
    ACTIONS(126), 1,
      sym_global_var_prefix,
    ACTIONS(129), 1,
      sym_magic,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_conjoin,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(155), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(23), 8,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_reduce_output_repeat1,
  [901] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      aux_sym_str_op_isprefix_token1,
    ACTIONS(166), 1,
      aux_sym_str_op_issuffix_token1,
    ACTIONS(168), 1,
      aux_sym_str_op_issuffix_token2,
    STATE(31), 1,
      sym_not,
    STATE(112), 1,
      sym_str_op,
    ACTIONS(158), 2,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
    ACTIONS(162), 2,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
    ACTIONS(170), 2,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
    ACTIONS(172), 2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
    ACTIONS(174), 2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
    ACTIONS(164), 3,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
    ACTIONS(176), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(185), 7,
      sym_str_op_eq,
      sym_str_op_isprefix,
      sym_str_op_hasprefix,
      sym_str_op_issuffix,
      sym_str_op_hassuffix,
      sym_str_op_in,
      sym_str_op_contains,
  [959] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_conjoin,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(204), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(23), 8,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_reduce_output_repeat1,
  [1029] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(208), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(25), 8,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_reduce_output_repeat1,
  [1099] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(212), 1,
      sym_ident,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(216), 1,
      sym_global_var_prefix,
    ACTIONS(218), 1,
      sym_magic,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      sym_conjoin,
    STATE(130), 1,
      sym_insert,
    STATE(217), 1,
      sym_inserted,
    STATE(301), 1,
      sym_literal_lu,
    ACTIONS(230), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(196), 2,
      sym_num,
      sym_null_lu,
    STATE(274), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
    STATE(276), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [1167] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_conjoin,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(232), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(441), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
    STATE(418), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [1235] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      aux_sym_if_tok_token1,
    ACTIONS(250), 1,
      sym_always_tok,
    STATE(73), 1,
      sym_not,
    STATE(159), 1,
      sym_string_if_choice,
    STATE(356), 1,
      sym_inserted,
    STATE(411), 1,
      sym_if_tok,
    STATE(420), 1,
      sym_string_always_choice,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(215), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(246), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(24), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [1304] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(258), 1,
      aux_sym_num_token1,
    ACTIONS(261), 1,
      sym_global_var_prefix,
    ACTIONS(264), 1,
      sym_magic,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_GT,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(284), 1,
      sym_conjoin,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(276), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(287), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(30), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1369] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      aux_sym_str_op_isprefix_token1,
    ACTIONS(166), 1,
      aux_sym_str_op_issuffix_token1,
    ACTIONS(168), 1,
      aux_sym_str_op_issuffix_token2,
    STATE(114), 1,
      sym_str_op,
    ACTIONS(158), 2,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
    ACTIONS(162), 2,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
    ACTIONS(170), 2,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
    ACTIONS(172), 2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
    ACTIONS(174), 2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
    ACTIONS(164), 3,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
    STATE(185), 7,
      sym_str_op_eq,
      sym_str_op_isprefix,
      sym_str_op_hasprefix,
      sym_str_op_issuffix,
      sym_str_op_hassuffix,
      sym_str_op_in,
      sym_str_op_contains,
  [1419] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(294), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(36), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1483] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(298), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(34), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1547] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(302), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(30), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1611] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(306), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(38), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1675] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(302), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(30), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1739] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(312), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(39), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1803] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(302), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(30), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1867] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(302), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(30), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1931] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    ACTIONS(326), 1,
      anon_sym_AT2,
    STATE(63), 1,
      sym_macro_name,
    STATE(80), 1,
      sym_output_var_set,
    ACTIONS(320), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(318), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1972] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    ACTIONS(326), 1,
      anon_sym_AT2,
    STATE(65), 1,
      sym_macro_name,
    STATE(87), 1,
      sym_output_var_set,
    ACTIONS(330), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(328), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2013] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(332), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(392), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2073] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(232), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(418), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(62), 1,
      sym_macro_name,
    STATE(84), 1,
      sym_output_var_set,
    ACTIONS(336), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(334), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_literal_lu_repeat1,
    STATE(94), 1,
      sym_output_var_set,
    ACTIONS(340), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(338), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2209] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_literal_lu_repeat1,
    STATE(97), 1,
      sym_output_var_set,
    ACTIONS(346), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(344), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2247] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(63), 1,
      sym_macro_name,
    STATE(80), 1,
      sym_output_var_set,
    ACTIONS(320), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(318), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2285] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_literal_lu_repeat1,
    STATE(79), 1,
      sym_output_var_set,
    ACTIONS(350), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(348), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2323] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(352), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(479), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2383] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_literal_lu_repeat1,
    STATE(98), 1,
      sym_output_var_set,
    ACTIONS(356), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(354), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2421] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_literal_lu_repeat1,
    STATE(88), 1,
      sym_output_var_set,
    ACTIONS(360), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(358), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2459] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_literal_lu_repeat1,
    STATE(90), 1,
      sym_output_var_set,
    ACTIONS(364), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(362), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2497] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_literal_lu_repeat1,
    STATE(89), 1,
      sym_output_var_set,
    ACTIONS(368), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(366), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2535] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(212), 1,
      sym_ident,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(216), 1,
      sym_global_var_prefix,
    ACTIONS(218), 1,
      sym_magic,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(228), 1,
      sym_conjoin,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_insert,
    STATE(217), 1,
      sym_inserted,
    STATE(301), 1,
      sym_literal_lu,
    ACTIONS(230), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(196), 2,
      sym_num,
      sym_null_lu,
    STATE(276), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(65), 1,
      sym_macro_name,
    STATE(87), 1,
      sym_output_var_set,
    ACTIONS(330), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(328), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2633] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(180), 1,
      sym_ident,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(184), 1,
      sym_global_var_prefix,
    ACTIONS(186), 1,
      sym_magic,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_conjoin,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_literal_lu,
    STATE(141), 1,
      sym_insert,
    STATE(206), 1,
      sym_inserted,
    ACTIONS(372), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(47), 2,
      sym_num,
      sym_null_lu,
    STATE(366), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(374), 15,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_clip_side,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(66), 1,
      sym_macro_name,
    STATE(93), 1,
      sym_output_var_set,
    ACTIONS(380), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(378), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2761] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_literal_lu_repeat1,
    STATE(81), 1,
      sym_output_var_set,
    ACTIONS(384), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(382), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(388), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(386), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(393), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(93), 1,
      sym_output_var_set,
    ACTIONS(380), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(378), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(87), 1,
      sym_output_var_set,
    ACTIONS(330), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(328), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(397), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(84), 1,
      sym_output_var_set,
    ACTIONS(336), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(334), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(85), 1,
      sym_output_var_set,
    ACTIONS(403), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(401), 12,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(405), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3044] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_not,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(204), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(246), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(24), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(409), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(413), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3154] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_not,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(214), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(246), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(24), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3208] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_not,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(208), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(246), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(24), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3262] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_not,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(207), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(246), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(24), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3316] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      sym_ident,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_not,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(203), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(246), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(24), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(417), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(421), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(425), 14,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(429), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(433), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(328), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(437), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(441), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(445), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [3608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(378), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(449), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(453), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(334), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(457), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(461), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(465), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(469), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(473), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(401), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(477), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(481), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(318), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(485), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(489), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(493), 13,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4024] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      anon_sym_QMARK,
    STATE(371), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(108), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4072] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_QMARK,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(380), 1,
      sym_reduce_output,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(108), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(519), 13,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
      aux_sym_str_op_isprefix_token1,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
      aux_sym_str_op_issuffix_token1,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
  [4144] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(523), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_QMARK,
    STATE(362), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(108), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(527), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4216] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      anon_sym_QMARK,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(402), 1,
      sym_reduce_output,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(108), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(535), 11,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4288] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(539), 1,
      sym_string,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(410), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4330] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_string,
    ACTIONS(548), 1,
      sym_ident,
    ACTIONS(551), 1,
      anon_sym_DOLLAR,
    ACTIONS(554), 1,
      sym_magic,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 1,
      anon_sym_STAR,
    ACTIONS(565), 1,
      anon_sym_QMARK,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    ACTIONS(560), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(108), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4370] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(453), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(569), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(573), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4456] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(264), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4498] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(395), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4540] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(248), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4582] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(283), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4624] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(412), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4666] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      sym_string,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(429), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4708] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(589), 1,
      sym_string,
    ACTIONS(591), 1,
      sym_weight,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(317), 1,
      sym_reduce_rule,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(100), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4747] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(589), 1,
      sym_string,
    ACTIONS(591), 1,
      sym_weight,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(387), 1,
      sym_reduce_rule,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(100), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4786] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(595), 1,
      sym_weight,
    ACTIONS(597), 1,
      anon_sym_AT,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(105), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    ACTIONS(605), 1,
      anon_sym_AT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(601), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(599), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4851] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(481), 2,
      sym_clip,
      sym_string_cond,
  [4889] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(465), 2,
      sym_clip,
      sym_string_cond,
  [4927] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_AT,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(609), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(607), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4953] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(498), 2,
      sym_clip,
      sym_string_cond,
  [4991] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_inserted,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
    STATE(495), 2,
      sym_clip,
      sym_string_cond,
  [5029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(613), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(611), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(617), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(615), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(619), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5094] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(623), 1,
      sym_string,
    ACTIONS(625), 1,
      sym_ident,
    ACTIONS(627), 1,
      sym_global_var_prefix,
    ACTIONS(629), 1,
      sym_magic,
    STATE(219), 1,
      sym_inserted,
    STATE(307), 1,
      sym_literal_lu,
    STATE(191), 2,
      sym_num,
      sym_null_lu,
  [5129] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(101), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(633), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(631), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5185] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_string,
    ACTIONS(499), 1,
      sym_ident,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_STAR,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(436), 1,
      sym_attr_set_insert,
    STATE(443), 1,
      sym_attr_prefix,
    STATE(103), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(637), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(635), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(639), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5260] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(645), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(643), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(519), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym_clip_side,
    ACTIONS(649), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(647), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(655), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(653), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(659), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(657), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5369] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(664), 1,
      sym_string,
    ACTIONS(666), 1,
      sym_ident,
    ACTIONS(668), 1,
      sym_global_var_prefix,
    ACTIONS(670), 1,
      sym_magic,
    STATE(80), 1,
      sym_literal_lu,
    STATE(202), 1,
      sym_inserted,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
  [5404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(674), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(672), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(144), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(678), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(676), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(682), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(680), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(686), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(684), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(688), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5514] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    STATE(356), 1,
      sym_inserted,
    STATE(474), 1,
      sym_clip,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
  [5548] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    STATE(356), 1,
      sym_inserted,
    STATE(496), 1,
      sym_clip,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
  [5582] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    STATE(356), 1,
      sym_inserted,
    STATE(463), 1,
      sym_clip,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
  [5616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(692), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5634] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(190), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_global_var_prefix,
    ACTIONS(242), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_ident,
    STATE(356), 1,
      sym_inserted,
    STATE(499), 1,
      sym_clip,
    STATE(502), 1,
      sym_attr_prefix,
    STATE(503), 1,
      sym_num,
  [5668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(657), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_ident,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(332), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5711] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    STATE(49), 1,
      sym_else_tok,
    STATE(393), 1,
      sym_if_tok,
    STATE(419), 1,
      sym_lu_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(166), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [5738] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_ident,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(337), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5763] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(712), 1,
      anon_sym_LPAREN2,
    ACTIONS(714), 1,
      anon_sym_AT2,
    STATE(231), 1,
      sym_macro_name,
    STATE(312), 1,
      sym_output_var_set,
    ACTIONS(328), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [5788] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_else_tok,
    STATE(379), 1,
      sym_if_tok,
    STATE(435), 1,
      sym_chunk_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(160), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [5815] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_ident,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(325), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5840] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_else_tok,
    STATE(411), 1,
      sym_if_tok,
    STATE(448), 1,
      sym_string_else_choice,
    ACTIONS(720), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(168), 2,
      sym_string_if_choice,
      aux_sym_string_cond_repeat1,
  [5867] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_else_tok,
    STATE(379), 1,
      sym_if_tok,
    STATE(484), 1,
      sym_chunk_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(209), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [5894] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_else_tok,
    STATE(393), 1,
      sym_if_tok,
    STATE(475), 1,
      sym_lu_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(162), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [5921] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_else_tok,
    STATE(393), 1,
      sym_if_tok,
    STATE(485), 1,
      sym_lu_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(212), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [5948] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_ident,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(335), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5973] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_else_tok,
    STATE(379), 1,
      sym_if_tok,
    STATE(486), 1,
      sym_chunk_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(165), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [6000] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_else_tok,
    STATE(379), 1,
      sym_if_tok,
    STATE(492), 1,
      sym_chunk_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(209), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [6027] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_else_tok,
    STATE(393), 1,
      sym_if_tok,
    STATE(476), 1,
      sym_lu_else_choice,
    ACTIONS(708), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(212), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [6054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(734), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_else_tok,
    STATE(411), 1,
      sym_if_tok,
    STATE(504), 1,
      sym_string_else_choice,
    ACTIONS(720), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(213), 2,
      sym_string_if_choice,
      aux_sym_string_cond_repeat1,
  [6098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(712), 1,
      anon_sym_LPAREN2,
    ACTIONS(714), 1,
      anon_sym_AT2,
    STATE(234), 1,
      sym_macro_name,
    STATE(307), 1,
      sym_output_var_set,
    ACTIONS(318), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(174), 1,
      aux_sym_literal_lu_repeat1,
    STATE(289), 1,
      sym_output_var_set,
    ACTIONS(366), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6145] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_literal_lu_repeat1,
    STATE(282), 1,
      sym_output_var_set,
    ACTIONS(354), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(342), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      ts_builtin_sym_end,
    ACTIONS(744), 1,
      sym_ident,
    STATE(267), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(173), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_literal_lu_repeat1,
    STATE(284), 1,
      sym_output_var_set,
    ACTIONS(348), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(171), 1,
      aux_sym_literal_lu_repeat1,
    STATE(288), 1,
      sym_output_var_set,
    ACTIONS(358), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6253] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      sym_ident,
    ACTIONS(749), 1,
      sym_magic,
    ACTIONS(751), 1,
      anon_sym_COLON,
    ACTIONS(753), 1,
      anon_sym_LT,
    STATE(233), 1,
      sym_colon,
    STATE(345), 1,
      sym_lit_tag,
    STATE(464), 1,
      sym_lu_cond,
  [6281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_literal_lu_repeat1,
    STATE(266), 1,
      sym_output_var_set,
    ACTIONS(362), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6303] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      anon_sym_AT,
    STATE(235), 1,
      sym_attr_default,
    ACTIONS(755), 2,
      sym_string,
      sym_ident,
    STATE(211), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [6327] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(712), 1,
      anon_sym_LPAREN2,
    STATE(237), 1,
      sym_macro_name,
    STATE(291), 1,
      sym_output_var_set,
    ACTIONS(378), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(316), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym_literal_lu_repeat1,
    STATE(292), 1,
      sym_output_var_set,
    ACTIONS(338), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(323), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(360), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_literal_lu_repeat1,
    STATE(293), 1,
      sym_output_var_set,
    ACTIONS(344), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_DOLLAR,
    ACTIONS(761), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_DOLLAR,
    ACTIONS(573), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(712), 1,
      anon_sym_LPAREN2,
    STATE(225), 1,
      sym_macro_name,
    STATE(298), 1,
      sym_output_var_set,
    ACTIONS(334), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_DOLLAR,
    ACTIONS(765), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DOLLAR,
    ACTIONS(769), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_literal_lu_repeat1,
    STATE(302), 1,
      sym_output_var_set,
    ACTIONS(382), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(712), 1,
      anon_sym_LPAREN2,
    STATE(231), 1,
      sym_macro_name,
    STATE(312), 1,
      sym_output_var_set,
    ACTIONS(328), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_DOLLAR,
    ACTIONS(773), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DOLLAR,
    ACTIONS(569), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(777), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(173), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_DOLLAR,
    ACTIONS(779), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    ACTIONS(712), 1,
      anon_sym_LPAREN2,
    STATE(234), 1,
      sym_macro_name,
    STATE(307), 1,
      sym_output_var_set,
    ACTIONS(318), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      sym_global_var_prefix,
    ACTIONS(702), 1,
      sym_global_str_prefix,
    STATE(451), 1,
      sym_attr_prefix,
    STATE(343), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_DOLLAR,
    ACTIONS(783), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_DOLLAR,
    ACTIONS(787), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DOLLAR,
    ACTIONS(791), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6749] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(795), 1,
      sym_always_tok,
    STATE(154), 1,
      sym_lu_if_choice,
    STATE(157), 1,
      sym_chunk_if_choice,
    STATE(389), 1,
      sym_if_tok,
    STATE(414), 1,
      sym_lu_always_choice,
    STATE(415), 1,
      sym_chunk_always_choice,
  [6774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(797), 1,
      sym_string,
    ACTIONS(799), 1,
      sym_ident,
    ACTIONS(801), 1,
      sym_magic,
    STATE(44), 2,
      sym_num,
      sym_null_lu,
  [6797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(805), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(807), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(72), 2,
      sym_and,
      sym_or,
  [6816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(805), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(807), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(72), 2,
      sym_and,
      sym_or,
  [6835] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(795), 1,
      sym_always_tok,
    STATE(161), 1,
      sym_lu_if_choice,
    STATE(164), 1,
      sym_chunk_if_choice,
    STATE(389), 1,
      sym_if_tok,
    STATE(471), 1,
      sym_lu_always_choice,
    STATE(477), 1,
      sym_chunk_always_choice,
  [6860] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(670), 1,
      sym_magic,
    ACTIONS(811), 1,
      sym_string,
    ACTIONS(813), 1,
      sym_ident,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
  [6883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 2,
      sym_and,
      sym_or,
    ACTIONS(815), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [6898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 2,
      sym_and,
      sym_or,
    ACTIONS(817), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [6913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_if_tok_token1,
    STATE(379), 1,
      sym_if_tok,
    STATE(209), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(819), 3,
      anon_sym_RPAREN,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(824), 5,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_GT,
  [6947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 1,
      anon_sym_AT,
    ACTIONS(830), 1,
      anon_sym_SEMI,
    ACTIONS(828), 2,
      sym_string,
      sym_ident,
    STATE(216), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [6968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_if_tok_token1,
    STATE(393), 1,
      sym_if_tok,
    STATE(212), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(832), 3,
      anon_sym_RPAREN,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_if_tok_token1,
    STATE(411), 1,
      sym_if_tok,
    STATE(213), 2,
      sym_string_if_choice,
      aux_sym_string_cond_repeat1,
    ACTIONS(837), 3,
      anon_sym_RPAREN,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 2,
      sym_and,
      sym_or,
    ACTIONS(815), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(805), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(807), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(72), 2,
      sym_and,
      sym_or,
  [7040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    ACTIONS(849), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_AT,
    ACTIONS(844), 2,
      sym_string,
      sym_ident,
    STATE(216), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7061] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(629), 1,
      sym_magic,
    ACTIONS(855), 1,
      sym_string,
    ACTIONS(857), 1,
      sym_ident,
    STATE(191), 2,
      sym_num,
      sym_null_lu,
  [7084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 1,
      anon_sym_AT,
    ACTIONS(859), 1,
      anon_sym_SEMI,
    ACTIONS(828), 2,
      sym_string,
      sym_ident,
    STATE(216), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7105] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(861), 1,
      sym_string,
    ACTIONS(863), 1,
      sym_ident,
    ACTIONS(865), 1,
      sym_magic,
    STATE(187), 2,
      sym_num,
      sym_null_lu,
  [7128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(386), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(870), 5,
      sym_string,
      sym_weight,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
  [7160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(861), 1,
      sym_string,
    ACTIONS(863), 1,
      sym_ident,
    STATE(187), 2,
      sym_num,
      sym_null_lu,
  [7180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    ACTIONS(874), 1,
      aux_sym_arrow_token1,
    ACTIONS(876), 1,
      sym_ident,
    ACTIONS(878), 1,
      anon_sym_GT,
    ACTIONS(880), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_colon,
  [7202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    STATE(291), 1,
      sym_output_var_set,
    ACTIONS(378), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_DOLLAR,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      sym_string,
    ACTIONS(884), 1,
      sym_ident,
    STATE(460), 1,
      sym_attr_set_insert,
    STATE(468), 1,
      sym_attr_prefix,
  [7252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(797), 1,
      sym_string,
    ACTIONS(799), 1,
      sym_ident,
    STATE(44), 2,
      sym_num,
      sym_null_lu,
  [7272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(886), 1,
      sym_string,
    ACTIONS(888), 1,
      sym_ident,
    STATE(179), 2,
      sym_num,
      sym_null_lu,
  [7292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(811), 1,
      sym_string,
    ACTIONS(813), 1,
      sym_ident,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
  [7324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    STATE(298), 1,
      sym_output_var_set,
    ACTIONS(334), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7352] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      anon_sym_LT,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(892), 1,
      sym_magic,
    STATE(334), 1,
      sym_lit_tag,
    STATE(438), 1,
      sym_lu_cond,
  [7374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    STATE(312), 1,
      sym_output_var_set,
    ACTIONS(328), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 1,
      anon_sym_AT,
    ACTIONS(894), 2,
      sym_string,
      sym_ident,
    STATE(218), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_DOLLAR,
    ACTIONS(900), 1,
      anon_sym_LBRACK,
    ACTIONS(896), 2,
      sym_string,
      sym_ident,
    STATE(152), 2,
      sym_attr_set_insert,
      sym_pattern_clip,
  [7426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACK2,
    STATE(287), 1,
      sym_output_var_set,
    ACTIONS(401), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      sym_string,
    ACTIONS(904), 1,
      sym_ident,
    STATE(58), 2,
      sym_num,
      sym_null_lu,
  [7474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(855), 1,
      sym_string,
    ACTIONS(857), 1,
      sym_ident,
    STATE(191), 2,
      sym_num,
      sym_null_lu,
  [7494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [7529] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      anon_sym_LBRACK,
    STATE(363), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
  [7548] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(908), 1,
      sym_always_tok,
    STATE(157), 1,
      sym_chunk_if_choice,
    STATE(379), 1,
      sym_if_tok,
    STATE(415), 1,
      sym_chunk_always_choice,
  [7567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      anon_sym_LBRACK,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(398), 1,
      sym_reduce_output,
  [7586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [7597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7608] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(914), 1,
      sym_always_tok,
    STATE(154), 1,
      sym_lu_if_choice,
    STATE(393), 1,
      sym_if_tok,
    STATE(414), 1,
      sym_lu_always_choice,
  [7627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(346), 1,
      sym_attr_pair,
    STATE(370), 1,
      sym_attr_set_insert,
    ACTIONS(916), 2,
      sym_string,
      sym_ident,
  [7644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(489), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [7659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(918), 3,
      sym_string,
      aux_sym_num_token1,
      sym_magic,
  [7672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(388), 1,
      sym_reduce_output,
  [7691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(914), 1,
      sym_always_tok,
    STATE(161), 1,
      sym_lu_if_choice,
    STATE(393), 1,
      sym_if_tok,
    STATE(471), 1,
      sym_lu_always_choice,
  [7721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
    STATE(274), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [7736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      anon_sym_LBRACK,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(394), 1,
      sym_reduce_output,
  [7755] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(908), 1,
      sym_always_tok,
    STATE(164), 1,
      sym_chunk_if_choice,
    STATE(379), 1,
      sym_if_tok,
    STATE(477), 1,
      sym_chunk_always_choice,
  [7774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      aux_sym_if_tok_token1,
    ACTIONS(928), 1,
      sym_always_tok,
    STATE(159), 1,
      sym_string_if_choice,
    STATE(411), 1,
      sym_if_tok,
    STATE(420), 1,
      sym_string_always_choice,
  [7793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 5,
      sym_ident,
      sym_magic,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
  [7804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(370), 1,
      sym_attr_set_insert,
    STATE(403), 1,
      sym_attr_pair,
    ACTIONS(916), 2,
      sym_string,
      sym_ident,
  [7821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(441), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [7847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      aux_sym_arrow_token1,
    ACTIONS(936), 1,
      sym_ident,
    STATE(118), 1,
      sym_arrow,
    STATE(347), 1,
      aux_sym_reduce_rule_group_repeat1,
  [7894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_ident,
    ACTIONS(940), 1,
      anon_sym_DOLLAR,
    ACTIONS(942), 1,
      anon_sym_LBRACK,
    ACTIONS(944), 1,
      anon_sym_LBRACE,
  [7910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_ident,
    ACTIONS(948), 1,
      anon_sym_DOLLAR,
    ACTIONS(950), 1,
      anon_sym_LBRACK,
    ACTIONS(952), 1,
      anon_sym_LBRACE,
  [7926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(396), 1,
      sym_reduce_output,
  [7942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(383), 1,
      sym_reduce_output,
  [7958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(413), 1,
      sym_reduce_output,
  [7974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(382), 1,
      sym_reduce_output,
  [7990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(386), 1,
      sym_reduce_output,
  [8016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_ident,
    ACTIONS(960), 1,
      anon_sym_DOLLAR,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      anon_sym_LBRACE,
  [8042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(399), 1,
      sym_reduce_output,
  [8058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 4,
      sym_string,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(385), 1,
      sym_reduce_output,
  [8084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(400), 1,
      sym_reduce_output,
  [8100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_ident,
    ACTIONS(972), 1,
      anon_sym_DOLLAR,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    ACTIONS(976), 1,
      anon_sym_LBRACE,
  [8146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(384), 1,
      sym_reduce_output,
  [8162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(404), 1,
      sym_reduce_output,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
  [8284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8294] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(406), 1,
      sym_reduce_output,
  [8310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_chunk_cond,
    STATE(407), 1,
      sym_reduce_output,
  [8326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(364), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
  [8392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(365), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
  [8418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(367), 1,
      sym_reduce_output,
    STATE(372), 1,
      sym_chunk_cond,
  [8434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_reduce_rule_repeat2,
  [8507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    STATE(351), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_retag_rule_repeat1,
  [8533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_output_var_set_repeat1,
  [8546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_output_var_set_repeat1,
  [8585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_reduce_rule_repeat2,
  [8598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_RBRACK,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_output_var_set_repeat1,
  [8611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      aux_sym_reduce_rule_repeat2,
  [8624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LT,
    ACTIONS(1010), 1,
      sym_ident,
    STATE(358), 1,
      sym_lit_tag,
  [8637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    STATE(327), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_DOT,
    ACTIONS(1019), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      aux_sym_output_rule_repeat1,
  [8663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_DOT,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      aux_sym_output_rule_repeat1,
  [8676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    STATE(321), 1,
      aux_sym_reduce_rule_repeat2,
  [8715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    ACTIONS(1029), 1,
      sym_ident,
    STATE(456), 1,
      sym_num,
  [8728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_DOT,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
    STATE(328), 1,
      aux_sym_output_rule_repeat1,
  [8741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      aux_sym_reduce_rule_repeat2,
  [8754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_DOT,
    ACTIONS(1036), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      aux_sym_output_rule_repeat1,
  [8767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      aux_sym_reduce_rule_repeat2,
  [8780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_output_var_set_repeat1,
  [8806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_retag_rule_repeat1,
  [8819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      aux_sym_reduce_rule_repeat2,
  [8858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_DOT,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
    STATE(329), 1,
      aux_sym_output_rule_repeat1,
  [8884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      aux_sym_retag_rule_repeat1,
  [8897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      aux_sym_arrow_token1,
    ACTIONS(1062), 1,
      sym_ident,
    STATE(347), 1,
      aux_sym_reduce_rule_group_repeat1,
  [8910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_reduce_rule_repeat2,
  [8936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_output_var_set_repeat1,
  [8949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    STATE(327), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_condition,
  [8972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 2,
      ts_builtin_sym_end,
      sym_ident,
  [8980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
    STATE(350), 1,
      sym_set_var,
  [8990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 2,
      ts_builtin_sym_end,
      sym_ident,
  [8998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_num_token1,
    STATE(442), 1,
      sym_num,
  [9008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
    STATE(322), 1,
      sym_set_var,
  [9050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
    STATE(405), 1,
      sym_set_var,
  [9116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 2,
      sym_string,
      sym_ident,
  [9124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(257), 1,
      sym_condition,
  [9150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_condition,
  [9160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(253), 1,
      sym_condition,
  [9194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_condition,
  [9204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_condition,
  [9286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_condition,
  [9320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 2,
      sym_string,
      sym_ident,
  [9352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_condition,
  [9466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [9489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
  [9496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_ident,
  [9503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_GT,
  [9510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
  [9517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
  [9524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
  [9531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_DOT,
  [9538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym_ident,
  [9545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
  [9552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_ident,
  [9559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym_ident,
  [9566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_EQ,
  [9573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym_ident,
  [9580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_RBRACK,
  [9587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
  [9594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym_ident,
  [9601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
  [9608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_ident,
  [9615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_EQ,
  [9622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_AT,
  [9629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
  [9636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_AT,
  [9643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      sym_ident,
  [9650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
  [9657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_COLON,
  [9664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym_ident,
  [9671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
  [9678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_DOT,
  [9685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_ident,
  [9692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_ident,
  [9699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      sym_ident,
  [9706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_ident,
  [9713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_ident,
  [9720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
  [9727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_ident,
  [9734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_EQ,
  [9741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      sym_ident,
  [9748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_EQ,
  [9755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
  [9762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_COLON,
  [9769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_EQ,
  [9776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym_clip_side,
  [9783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_ident,
  [9790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_ident,
  [9797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym_ident,
  [9804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_AT,
  [9811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_ident,
  [9818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_ident,
  [9825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
  [9832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_SEMI,
  [9839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_RBRACK,
  [9846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      sym_ident,
  [9853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym_ident,
  [9860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_ident,
  [9867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_AT,
  [9874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_RBRACK,
  [9881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [9888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      sym_ident,
  [9895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_ident,
  [9902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_RBRACE,
  [9909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [9916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [9923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
  [9930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      sym_ident,
  [9937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
  [9944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_ident,
  [9951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_RBRACK,
  [9958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_ident,
  [9965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_ident,
  [9972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
  [9979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
  [9986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [9993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_COLON,
  [10000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_ident,
  [10007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
  [10014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [10021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym_ident,
  [10028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [10035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [10042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      sym_ident,
  [10049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RBRACK,
  [10056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RBRACE,
  [10063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_ident,
  [10070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RBRACK,
  [10077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RBRACE,
  [10084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      sym_ident,
  [10091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      sym_ident,
  [10098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym_ident,
  [10105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_DOT,
  [10112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [10119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym_ident,
  [10126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      sym_ident,
  [10133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym_ident,
  [10140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym_ident,
  [10147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 416,
  [SMALL_STATE(13)] = 454,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 606,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 720,
  [SMALL_STATE(21)] = 757,
  [SMALL_STATE(22)] = 794,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 901,
  [SMALL_STATE(25)] = 959,
  [SMALL_STATE(26)] = 1029,
  [SMALL_STATE(27)] = 1099,
  [SMALL_STATE(28)] = 1167,
  [SMALL_STATE(29)] = 1235,
  [SMALL_STATE(30)] = 1304,
  [SMALL_STATE(31)] = 1369,
  [SMALL_STATE(32)] = 1419,
  [SMALL_STATE(33)] = 1483,
  [SMALL_STATE(34)] = 1547,
  [SMALL_STATE(35)] = 1611,
  [SMALL_STATE(36)] = 1675,
  [SMALL_STATE(37)] = 1739,
  [SMALL_STATE(38)] = 1803,
  [SMALL_STATE(39)] = 1867,
  [SMALL_STATE(40)] = 1931,
  [SMALL_STATE(41)] = 1972,
  [SMALL_STATE(42)] = 2013,
  [SMALL_STATE(43)] = 2073,
  [SMALL_STATE(44)] = 2133,
  [SMALL_STATE(45)] = 2171,
  [SMALL_STATE(46)] = 2209,
  [SMALL_STATE(47)] = 2247,
  [SMALL_STATE(48)] = 2285,
  [SMALL_STATE(49)] = 2323,
  [SMALL_STATE(50)] = 2383,
  [SMALL_STATE(51)] = 2421,
  [SMALL_STATE(52)] = 2459,
  [SMALL_STATE(53)] = 2497,
  [SMALL_STATE(54)] = 2535,
  [SMALL_STATE(55)] = 2595,
  [SMALL_STATE(56)] = 2633,
  [SMALL_STATE(57)] = 2693,
  [SMALL_STATE(58)] = 2723,
  [SMALL_STATE(59)] = 2761,
  [SMALL_STATE(60)] = 2799,
  [SMALL_STATE(61)] = 2832,
  [SMALL_STATE(62)] = 2860,
  [SMALL_STATE(63)] = 2892,
  [SMALL_STATE(64)] = 2924,
  [SMALL_STATE(65)] = 2952,
  [SMALL_STATE(66)] = 2984,
  [SMALL_STATE(67)] = 3016,
  [SMALL_STATE(68)] = 3044,
  [SMALL_STATE(69)] = 3098,
  [SMALL_STATE(70)] = 3126,
  [SMALL_STATE(71)] = 3154,
  [SMALL_STATE(72)] = 3208,
  [SMALL_STATE(73)] = 3262,
  [SMALL_STATE(74)] = 3316,
  [SMALL_STATE(75)] = 3370,
  [SMALL_STATE(76)] = 3397,
  [SMALL_STATE(77)] = 3424,
  [SMALL_STATE(78)] = 3451,
  [SMALL_STATE(79)] = 3478,
  [SMALL_STATE(80)] = 3504,
  [SMALL_STATE(81)] = 3530,
  [SMALL_STATE(82)] = 3556,
  [SMALL_STATE(83)] = 3582,
  [SMALL_STATE(84)] = 3608,
  [SMALL_STATE(85)] = 3634,
  [SMALL_STATE(86)] = 3660,
  [SMALL_STATE(87)] = 3686,
  [SMALL_STATE(88)] = 3712,
  [SMALL_STATE(89)] = 3738,
  [SMALL_STATE(90)] = 3764,
  [SMALL_STATE(91)] = 3790,
  [SMALL_STATE(92)] = 3816,
  [SMALL_STATE(93)] = 3842,
  [SMALL_STATE(94)] = 3868,
  [SMALL_STATE(95)] = 3894,
  [SMALL_STATE(96)] = 3920,
  [SMALL_STATE(97)] = 3946,
  [SMALL_STATE(98)] = 3972,
  [SMALL_STATE(99)] = 3998,
  [SMALL_STATE(100)] = 4024,
  [SMALL_STATE(101)] = 4072,
  [SMALL_STATE(102)] = 4120,
  [SMALL_STATE(103)] = 4144,
  [SMALL_STATE(104)] = 4192,
  [SMALL_STATE(105)] = 4216,
  [SMALL_STATE(106)] = 4264,
  [SMALL_STATE(107)] = 4288,
  [SMALL_STATE(108)] = 4330,
  [SMALL_STATE(109)] = 4370,
  [SMALL_STATE(110)] = 4412,
  [SMALL_STATE(111)] = 4434,
  [SMALL_STATE(112)] = 4456,
  [SMALL_STATE(113)] = 4498,
  [SMALL_STATE(114)] = 4540,
  [SMALL_STATE(115)] = 4582,
  [SMALL_STATE(116)] = 4624,
  [SMALL_STATE(117)] = 4666,
  [SMALL_STATE(118)] = 4708,
  [SMALL_STATE(119)] = 4747,
  [SMALL_STATE(120)] = 4786,
  [SMALL_STATE(121)] = 4825,
  [SMALL_STATE(122)] = 4851,
  [SMALL_STATE(123)] = 4889,
  [SMALL_STATE(124)] = 4927,
  [SMALL_STATE(125)] = 4953,
  [SMALL_STATE(126)] = 4991,
  [SMALL_STATE(127)] = 5029,
  [SMALL_STATE(128)] = 5052,
  [SMALL_STATE(129)] = 5075,
  [SMALL_STATE(130)] = 5094,
  [SMALL_STATE(131)] = 5129,
  [SMALL_STATE(132)] = 5162,
  [SMALL_STATE(133)] = 5185,
  [SMALL_STATE(134)] = 5218,
  [SMALL_STATE(135)] = 5241,
  [SMALL_STATE(136)] = 5260,
  [SMALL_STATE(137)] = 5283,
  [SMALL_STATE(138)] = 5302,
  [SMALL_STATE(139)] = 5323,
  [SMALL_STATE(140)] = 5346,
  [SMALL_STATE(141)] = 5369,
  [SMALL_STATE(142)] = 5404,
  [SMALL_STATE(143)] = 5427,
  [SMALL_STATE(144)] = 5450,
  [SMALL_STATE(145)] = 5473,
  [SMALL_STATE(146)] = 5496,
  [SMALL_STATE(147)] = 5514,
  [SMALL_STATE(148)] = 5548,
  [SMALL_STATE(149)] = 5582,
  [SMALL_STATE(150)] = 5616,
  [SMALL_STATE(151)] = 5634,
  [SMALL_STATE(152)] = 5668,
  [SMALL_STATE(153)] = 5686,
  [SMALL_STATE(154)] = 5711,
  [SMALL_STATE(155)] = 5738,
  [SMALL_STATE(156)] = 5763,
  [SMALL_STATE(157)] = 5788,
  [SMALL_STATE(158)] = 5815,
  [SMALL_STATE(159)] = 5840,
  [SMALL_STATE(160)] = 5867,
  [SMALL_STATE(161)] = 5894,
  [SMALL_STATE(162)] = 5921,
  [SMALL_STATE(163)] = 5948,
  [SMALL_STATE(164)] = 5973,
  [SMALL_STATE(165)] = 6000,
  [SMALL_STATE(166)] = 6027,
  [SMALL_STATE(167)] = 6054,
  [SMALL_STATE(168)] = 6071,
  [SMALL_STATE(169)] = 6098,
  [SMALL_STATE(170)] = 6123,
  [SMALL_STATE(171)] = 6145,
  [SMALL_STATE(172)] = 6167,
  [SMALL_STATE(173)] = 6189,
  [SMALL_STATE(174)] = 6209,
  [SMALL_STATE(175)] = 6231,
  [SMALL_STATE(176)] = 6253,
  [SMALL_STATE(177)] = 6281,
  [SMALL_STATE(178)] = 6303,
  [SMALL_STATE(179)] = 6327,
  [SMALL_STATE(180)] = 6349,
  [SMALL_STATE(181)] = 6371,
  [SMALL_STATE(182)] = 6393,
  [SMALL_STATE(183)] = 6415,
  [SMALL_STATE(184)] = 6437,
  [SMALL_STATE(185)] = 6459,
  [SMALL_STATE(186)] = 6475,
  [SMALL_STATE(187)] = 6491,
  [SMALL_STATE(188)] = 6513,
  [SMALL_STATE(189)] = 6529,
  [SMALL_STATE(190)] = 6545,
  [SMALL_STATE(191)] = 6567,
  [SMALL_STATE(192)] = 6589,
  [SMALL_STATE(193)] = 6605,
  [SMALL_STATE(194)] = 6621,
  [SMALL_STATE(195)] = 6641,
  [SMALL_STATE(196)] = 6657,
  [SMALL_STATE(197)] = 6679,
  [SMALL_STATE(198)] = 6701,
  [SMALL_STATE(199)] = 6717,
  [SMALL_STATE(200)] = 6733,
  [SMALL_STATE(201)] = 6749,
  [SMALL_STATE(202)] = 6774,
  [SMALL_STATE(203)] = 6797,
  [SMALL_STATE(204)] = 6816,
  [SMALL_STATE(205)] = 6835,
  [SMALL_STATE(206)] = 6860,
  [SMALL_STATE(207)] = 6883,
  [SMALL_STATE(208)] = 6898,
  [SMALL_STATE(209)] = 6913,
  [SMALL_STATE(210)] = 6932,
  [SMALL_STATE(211)] = 6947,
  [SMALL_STATE(212)] = 6968,
  [SMALL_STATE(213)] = 6987,
  [SMALL_STATE(214)] = 7006,
  [SMALL_STATE(215)] = 7021,
  [SMALL_STATE(216)] = 7040,
  [SMALL_STATE(217)] = 7061,
  [SMALL_STATE(218)] = 7084,
  [SMALL_STATE(219)] = 7105,
  [SMALL_STATE(220)] = 7128,
  [SMALL_STATE(221)] = 7145,
  [SMALL_STATE(222)] = 7160,
  [SMALL_STATE(223)] = 7180,
  [SMALL_STATE(224)] = 7202,
  [SMALL_STATE(225)] = 7214,
  [SMALL_STATE(226)] = 7230,
  [SMALL_STATE(227)] = 7252,
  [SMALL_STATE(228)] = 7272,
  [SMALL_STATE(229)] = 7292,
  [SMALL_STATE(230)] = 7304,
  [SMALL_STATE(231)] = 7324,
  [SMALL_STATE(232)] = 7340,
  [SMALL_STATE(233)] = 7352,
  [SMALL_STATE(234)] = 7374,
  [SMALL_STATE(235)] = 7390,
  [SMALL_STATE(236)] = 7408,
  [SMALL_STATE(237)] = 7426,
  [SMALL_STATE(238)] = 7442,
  [SMALL_STATE(239)] = 7454,
  [SMALL_STATE(240)] = 7474,
  [SMALL_STATE(241)] = 7494,
  [SMALL_STATE(242)] = 7506,
  [SMALL_STATE(243)] = 7518,
  [SMALL_STATE(244)] = 7529,
  [SMALL_STATE(245)] = 7548,
  [SMALL_STATE(246)] = 7567,
  [SMALL_STATE(247)] = 7586,
  [SMALL_STATE(248)] = 7597,
  [SMALL_STATE(249)] = 7608,
  [SMALL_STATE(250)] = 7627,
  [SMALL_STATE(251)] = 7644,
  [SMALL_STATE(252)] = 7659,
  [SMALL_STATE(253)] = 7672,
  [SMALL_STATE(254)] = 7691,
  [SMALL_STATE(255)] = 7702,
  [SMALL_STATE(256)] = 7721,
  [SMALL_STATE(257)] = 7736,
  [SMALL_STATE(258)] = 7755,
  [SMALL_STATE(259)] = 7774,
  [SMALL_STATE(260)] = 7793,
  [SMALL_STATE(261)] = 7804,
  [SMALL_STATE(262)] = 7821,
  [SMALL_STATE(263)] = 7832,
  [SMALL_STATE(264)] = 7847,
  [SMALL_STATE(265)] = 7858,
  [SMALL_STATE(266)] = 7868,
  [SMALL_STATE(267)] = 7878,
  [SMALL_STATE(268)] = 7894,
  [SMALL_STATE(269)] = 7910,
  [SMALL_STATE(270)] = 7926,
  [SMALL_STATE(271)] = 7942,
  [SMALL_STATE(272)] = 7958,
  [SMALL_STATE(273)] = 7974,
  [SMALL_STATE(274)] = 7990,
  [SMALL_STATE(275)] = 8000,
  [SMALL_STATE(276)] = 8016,
  [SMALL_STATE(277)] = 8026,
  [SMALL_STATE(278)] = 8042,
  [SMALL_STATE(279)] = 8058,
  [SMALL_STATE(280)] = 8068,
  [SMALL_STATE(281)] = 8084,
  [SMALL_STATE(282)] = 8100,
  [SMALL_STATE(283)] = 8110,
  [SMALL_STATE(284)] = 8120,
  [SMALL_STATE(285)] = 8130,
  [SMALL_STATE(286)] = 8146,
  [SMALL_STATE(287)] = 8162,
  [SMALL_STATE(288)] = 8172,
  [SMALL_STATE(289)] = 8182,
  [SMALL_STATE(290)] = 8192,
  [SMALL_STATE(291)] = 8202,
  [SMALL_STATE(292)] = 8212,
  [SMALL_STATE(293)] = 8222,
  [SMALL_STATE(294)] = 8232,
  [SMALL_STATE(295)] = 8248,
  [SMALL_STATE(296)] = 8258,
  [SMALL_STATE(297)] = 8268,
  [SMALL_STATE(298)] = 8284,
  [SMALL_STATE(299)] = 8294,
  [SMALL_STATE(300)] = 8310,
  [SMALL_STATE(301)] = 8326,
  [SMALL_STATE(302)] = 8336,
  [SMALL_STATE(303)] = 8346,
  [SMALL_STATE(304)] = 8356,
  [SMALL_STATE(305)] = 8366,
  [SMALL_STATE(306)] = 8376,
  [SMALL_STATE(307)] = 8392,
  [SMALL_STATE(308)] = 8402,
  [SMALL_STATE(309)] = 8418,
  [SMALL_STATE(310)] = 8434,
  [SMALL_STATE(311)] = 8444,
  [SMALL_STATE(312)] = 8454,
  [SMALL_STATE(313)] = 8464,
  [SMALL_STATE(314)] = 8474,
  [SMALL_STATE(315)] = 8484,
  [SMALL_STATE(316)] = 8494,
  [SMALL_STATE(317)] = 8507,
  [SMALL_STATE(318)] = 8520,
  [SMALL_STATE(319)] = 8533,
  [SMALL_STATE(320)] = 8546,
  [SMALL_STATE(321)] = 8559,
  [SMALL_STATE(322)] = 8572,
  [SMALL_STATE(323)] = 8585,
  [SMALL_STATE(324)] = 8598,
  [SMALL_STATE(325)] = 8611,
  [SMALL_STATE(326)] = 8624,
  [SMALL_STATE(327)] = 8637,
  [SMALL_STATE(328)] = 8650,
  [SMALL_STATE(329)] = 8663,
  [SMALL_STATE(330)] = 8676,
  [SMALL_STATE(331)] = 8689,
  [SMALL_STATE(332)] = 8702,
  [SMALL_STATE(333)] = 8715,
  [SMALL_STATE(334)] = 8728,
  [SMALL_STATE(335)] = 8741,
  [SMALL_STATE(336)] = 8754,
  [SMALL_STATE(337)] = 8767,
  [SMALL_STATE(338)] = 8780,
  [SMALL_STATE(339)] = 8793,
  [SMALL_STATE(340)] = 8806,
  [SMALL_STATE(341)] = 8819,
  [SMALL_STATE(342)] = 8832,
  [SMALL_STATE(343)] = 8845,
  [SMALL_STATE(344)] = 8858,
  [SMALL_STATE(345)] = 8871,
  [SMALL_STATE(346)] = 8884,
  [SMALL_STATE(347)] = 8897,
  [SMALL_STATE(348)] = 8910,
  [SMALL_STATE(349)] = 8923,
  [SMALL_STATE(350)] = 8936,
  [SMALL_STATE(351)] = 8949,
  [SMALL_STATE(352)] = 8962,
  [SMALL_STATE(353)] = 8972,
  [SMALL_STATE(354)] = 8980,
  [SMALL_STATE(355)] = 8990,
  [SMALL_STATE(356)] = 8998,
  [SMALL_STATE(357)] = 9008,
  [SMALL_STATE(358)] = 9016,
  [SMALL_STATE(359)] = 9024,
  [SMALL_STATE(360)] = 9032,
  [SMALL_STATE(361)] = 9040,
  [SMALL_STATE(362)] = 9050,
  [SMALL_STATE(363)] = 9058,
  [SMALL_STATE(364)] = 9066,
  [SMALL_STATE(365)] = 9074,
  [SMALL_STATE(366)] = 9082,
  [SMALL_STATE(367)] = 9090,
  [SMALL_STATE(368)] = 9098,
  [SMALL_STATE(369)] = 9106,
  [SMALL_STATE(370)] = 9116,
  [SMALL_STATE(371)] = 9124,
  [SMALL_STATE(372)] = 9132,
  [SMALL_STATE(373)] = 9140,
  [SMALL_STATE(374)] = 9150,
  [SMALL_STATE(375)] = 9160,
  [SMALL_STATE(376)] = 9168,
  [SMALL_STATE(377)] = 9176,
  [SMALL_STATE(378)] = 9184,
  [SMALL_STATE(379)] = 9194,
  [SMALL_STATE(380)] = 9204,
  [SMALL_STATE(381)] = 9212,
  [SMALL_STATE(382)] = 9220,
  [SMALL_STATE(383)] = 9228,
  [SMALL_STATE(384)] = 9236,
  [SMALL_STATE(385)] = 9244,
  [SMALL_STATE(386)] = 9252,
  [SMALL_STATE(387)] = 9260,
  [SMALL_STATE(388)] = 9268,
  [SMALL_STATE(389)] = 9276,
  [SMALL_STATE(390)] = 9286,
  [SMALL_STATE(391)] = 9294,
  [SMALL_STATE(392)] = 9302,
  [SMALL_STATE(393)] = 9310,
  [SMALL_STATE(394)] = 9320,
  [SMALL_STATE(395)] = 9328,
  [SMALL_STATE(396)] = 9336,
  [SMALL_STATE(397)] = 9344,
  [SMALL_STATE(398)] = 9352,
  [SMALL_STATE(399)] = 9360,
  [SMALL_STATE(400)] = 9368,
  [SMALL_STATE(401)] = 9376,
  [SMALL_STATE(402)] = 9384,
  [SMALL_STATE(403)] = 9392,
  [SMALL_STATE(404)] = 9400,
  [SMALL_STATE(405)] = 9408,
  [SMALL_STATE(406)] = 9416,
  [SMALL_STATE(407)] = 9424,
  [SMALL_STATE(408)] = 9432,
  [SMALL_STATE(409)] = 9440,
  [SMALL_STATE(410)] = 9448,
  [SMALL_STATE(411)] = 9456,
  [SMALL_STATE(412)] = 9466,
  [SMALL_STATE(413)] = 9474,
  [SMALL_STATE(414)] = 9482,
  [SMALL_STATE(415)] = 9489,
  [SMALL_STATE(416)] = 9496,
  [SMALL_STATE(417)] = 9503,
  [SMALL_STATE(418)] = 9510,
  [SMALL_STATE(419)] = 9517,
  [SMALL_STATE(420)] = 9524,
  [SMALL_STATE(421)] = 9531,
  [SMALL_STATE(422)] = 9538,
  [SMALL_STATE(423)] = 9545,
  [SMALL_STATE(424)] = 9552,
  [SMALL_STATE(425)] = 9559,
  [SMALL_STATE(426)] = 9566,
  [SMALL_STATE(427)] = 9573,
  [SMALL_STATE(428)] = 9580,
  [SMALL_STATE(429)] = 9587,
  [SMALL_STATE(430)] = 9594,
  [SMALL_STATE(431)] = 9601,
  [SMALL_STATE(432)] = 9608,
  [SMALL_STATE(433)] = 9615,
  [SMALL_STATE(434)] = 9622,
  [SMALL_STATE(435)] = 9629,
  [SMALL_STATE(436)] = 9636,
  [SMALL_STATE(437)] = 9643,
  [SMALL_STATE(438)] = 9650,
  [SMALL_STATE(439)] = 9657,
  [SMALL_STATE(440)] = 9664,
  [SMALL_STATE(441)] = 9671,
  [SMALL_STATE(442)] = 9678,
  [SMALL_STATE(443)] = 9685,
  [SMALL_STATE(444)] = 9692,
  [SMALL_STATE(445)] = 9699,
  [SMALL_STATE(446)] = 9706,
  [SMALL_STATE(447)] = 9713,
  [SMALL_STATE(448)] = 9720,
  [SMALL_STATE(449)] = 9727,
  [SMALL_STATE(450)] = 9734,
  [SMALL_STATE(451)] = 9741,
  [SMALL_STATE(452)] = 9748,
  [SMALL_STATE(453)] = 9755,
  [SMALL_STATE(454)] = 9762,
  [SMALL_STATE(455)] = 9769,
  [SMALL_STATE(456)] = 9776,
  [SMALL_STATE(457)] = 9783,
  [SMALL_STATE(458)] = 9790,
  [SMALL_STATE(459)] = 9797,
  [SMALL_STATE(460)] = 9804,
  [SMALL_STATE(461)] = 9811,
  [SMALL_STATE(462)] = 9818,
  [SMALL_STATE(463)] = 9825,
  [SMALL_STATE(464)] = 9832,
  [SMALL_STATE(465)] = 9839,
  [SMALL_STATE(466)] = 9846,
  [SMALL_STATE(467)] = 9853,
  [SMALL_STATE(468)] = 9860,
  [SMALL_STATE(469)] = 9867,
  [SMALL_STATE(470)] = 9874,
  [SMALL_STATE(471)] = 9881,
  [SMALL_STATE(472)] = 9888,
  [SMALL_STATE(473)] = 9895,
  [SMALL_STATE(474)] = 9902,
  [SMALL_STATE(475)] = 9909,
  [SMALL_STATE(476)] = 9916,
  [SMALL_STATE(477)] = 9923,
  [SMALL_STATE(478)] = 9930,
  [SMALL_STATE(479)] = 9937,
  [SMALL_STATE(480)] = 9944,
  [SMALL_STATE(481)] = 9951,
  [SMALL_STATE(482)] = 9958,
  [SMALL_STATE(483)] = 9965,
  [SMALL_STATE(484)] = 9972,
  [SMALL_STATE(485)] = 9979,
  [SMALL_STATE(486)] = 9986,
  [SMALL_STATE(487)] = 9993,
  [SMALL_STATE(488)] = 10000,
  [SMALL_STATE(489)] = 10007,
  [SMALL_STATE(490)] = 10014,
  [SMALL_STATE(491)] = 10021,
  [SMALL_STATE(492)] = 10028,
  [SMALL_STATE(493)] = 10035,
  [SMALL_STATE(494)] = 10042,
  [SMALL_STATE(495)] = 10049,
  [SMALL_STATE(496)] = 10056,
  [SMALL_STATE(497)] = 10063,
  [SMALL_STATE(498)] = 10070,
  [SMALL_STATE(499)] = 10077,
  [SMALL_STATE(500)] = 10084,
  [SMALL_STATE(501)] = 10091,
  [SMALL_STATE(502)] = 10098,
  [SMALL_STATE(503)] = 10105,
  [SMALL_STATE(504)] = 10112,
  [SMALL_STATE(505)] = 10119,
  [SMALL_STATE(506)] = 10126,
  [SMALL_STATE(507)] = 10133,
  [SMALL_STATE(508)] = 10140,
  [SMALL_STATE(509)] = 10147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 28),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 42),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 42),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 59),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 59),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 56),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 56),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 75),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 75),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 74),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 74),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 43),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 43),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 18),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 70),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 70),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 69),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 69),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 68),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 68),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 58),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 58),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1, .production_id = 11),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1, .production_id = 11),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 57),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 57),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 3),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(40),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(40),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(57),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(461),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(230),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(210),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(252),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(33),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(201),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(67),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(37),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(141),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(23),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(40),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(40),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(57),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(461),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(230),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(210),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(252),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(33),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(249),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(67),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(141),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(30),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 26),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 25),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 25),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 53),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 53),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 55),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 55),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 40),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 40),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 38),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 38),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 39),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 39),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3, .production_id = 17),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3, .production_id = 17),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36), SHIFT_REPEAT(285),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 65),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 65),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 64),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 64),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_lu, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_lu, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 34),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 34),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 50),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 50),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 66),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 66),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 24),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 24),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_sequence, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_sequence, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 54),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 54),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_sequence, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_sequence, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 35),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 35),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 67),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 67),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(436),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(124),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(447),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(226),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(482),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(167),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1, .production_id = 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2, .production_id = 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 15),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 15),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3, .production_id = 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 14),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 14),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_clip, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_clip, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 14),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(236),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3, .production_id = 3),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 22),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 22),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6, .production_id = 22),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6, .production_id = 22),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 15),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 15),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_clip, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_clip, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_set_insert, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_set_insert, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_eq, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_eq, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_isprefix, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_isprefix, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_hasprefix, 1),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_hasprefix, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_issuffix, 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_issuffix, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_hassuffix, 1),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_hassuffix, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_in, 1),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_in, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_contains, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_contains, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(431),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 1),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(431),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(431),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(216),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(482),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(478),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36), SHIFT_REPEAT(268),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inserted, 1),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inserted, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_if_choice, 3, .production_id = 12),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_if_choice, 3, .production_id = 12),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4, .production_id = 10),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_if_choice, 3, .production_id = 12),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(261),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(369),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(119),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_prefix, 1),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(326),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(347),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(183),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4, .production_id = 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5, .production_id = 1),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 23),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5, .production_id = 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 20),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 45),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 46),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 47),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_surf, 5, .production_id = 48),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 49),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6, .production_id = 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2, .production_id = 4),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 1),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6, .production_id = 9),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_pair, 2, .production_id = 8),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 13),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 29),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 60),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 61),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 62),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 63),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 30),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_tag, 3),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_var, 4, .production_id = 31),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 16),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_str, 4, .production_id = 31),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 71),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 21),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 72),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 73),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7, .production_id = 9),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3, .production_id = 7),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 76),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 77),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11, .production_id = 78),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4, .production_id = 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_chunk_attr, 4, .production_id = 31),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_var, 3, .production_id = 33),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 32),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_always_choice, 2, .production_id = 5),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_else_choice, 2, .production_id = 5),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_always_choice, 2, .production_id = 5),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_always_choice, 2, .production_id = 5),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_else_choice, 2, .production_id = 5),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_else_choice, 2, .production_id = 5),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rtx(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
