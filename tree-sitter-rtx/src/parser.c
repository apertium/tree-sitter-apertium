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
#define STATE_COUNT 520
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  aux_sym_elif_tok_token1 = 57,
  aux_sym_elif_tok_token2 = 58,
  aux_sym_else_tok_token1 = 59,
  aux_sym_else_tok_token2 = 60,
  sym_always_tok = 61,
  anon_sym_PIPE = 62,
  anon_sym_QMARK = 63,
  sym_source_file = 64,
  sym_arrow = 65,
  sym_num = 66,
  sym_attr_prefix = 67,
  sym_colon = 68,
  sym_lit_tag = 69,
  sym_output_rule = 70,
  sym_attr_set_insert = 71,
  sym_attr_pair = 72,
  sym_retag_rule = 73,
  sym_attr_default = 74,
  sym_attr_rule = 75,
  sym_insert = 76,
  sym_inserted = 77,
  sym_clip = 78,
  sym_str_op_eq = 79,
  sym_str_op_isprefix = 80,
  sym_str_op_hasprefix = 81,
  sym_str_op_issuffix = 82,
  sym_str_op_hassuffix = 83,
  sym_str_op_in = 84,
  sym_str_op_contains = 85,
  sym_str_op = 86,
  sym_and = 87,
  sym_or = 88,
  sym_not = 89,
  sym__string_val = 90,
  sym__cond_base_bool = 91,
  sym__cond_bool = 92,
  sym_condition = 93,
  sym_pattern_clip = 94,
  sym_pattern_element = 95,
  sym_unknown = 96,
  sym_set_var = 97,
  sym_output_var_set = 98,
  sym_macro_name = 99,
  sym_literal_lu = 100,
  sym_null_lu = 101,
  sym_output_element = 102,
  sym_if_tok = 103,
  sym_elif_tok = 104,
  sym_else_tok = 105,
  sym_string_always_choice = 106,
  sym_string_if_choice = 107,
  sym_string_elif_choice = 108,
  sym_string_else_choice = 109,
  sym_string_cond = 110,
  sym_chunk_always_choice = 111,
  sym_chunk_if_choice = 112,
  sym_chunk_elif_choice = 113,
  sym_chunk_else_choice = 114,
  sym_chunk_cond = 115,
  sym_lu_always_choice = 116,
  sym_lu_if_choice = 117,
  sym_lu_elif_choice = 118,
  sym_lu_else_choice = 119,
  sym_lu_cond = 120,
  sym_reduce_output = 121,
  sym_output_chunk = 122,
  sym__chunk_val = 123,
  sym__lu_val = 124,
  sym_lu_sequence = 125,
  sym_reduce_rule_group = 126,
  sym_set_surf = 127,
  sym_set_global_var = 128,
  sym_set_global_str = 129,
  sym_set_chunk_attr = 130,
  sym_reduce_rule = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_output_rule_repeat1 = 133,
  aux_sym_retag_rule_repeat1 = 134,
  aux_sym_attr_rule_repeat1 = 135,
  aux_sym_pattern_element_repeat1 = 136,
  aux_sym_output_var_set_repeat1 = 137,
  aux_sym_literal_lu_repeat1 = 138,
  aux_sym_string_cond_repeat1 = 139,
  aux_sym_chunk_cond_repeat1 = 140,
  aux_sym_lu_cond_repeat1 = 141,
  aux_sym_reduce_output_repeat1 = 142,
  aux_sym_output_chunk_repeat1 = 143,
  aux_sym_reduce_rule_group_repeat1 = 144,
  aux_sym_reduce_rule_group_repeat2 = 145,
  aux_sym_reduce_rule_repeat1 = 146,
  aux_sym_reduce_rule_repeat2 = 147,
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
  [aux_sym_elif_tok_token1] = "elif_tok_token1",
  [aux_sym_elif_tok_token2] = "elif_tok_token2",
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
  [sym_elif_tok] = "elif_tok",
  [sym_else_tok] = "else_tok",
  [sym_string_always_choice] = "choice",
  [sym_string_if_choice] = "choice",
  [sym_string_elif_choice] = "choice",
  [sym_string_else_choice] = "choice",
  [sym_string_cond] = "string_cond",
  [sym_chunk_always_choice] = "choice",
  [sym_chunk_if_choice] = "choice",
  [sym_chunk_elif_choice] = "choice",
  [sym_chunk_else_choice] = "choice",
  [sym_chunk_cond] = "chunk_cond",
  [sym_lu_always_choice] = "choice",
  [sym_lu_if_choice] = "choice",
  [sym_lu_elif_choice] = "choice",
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
  [aux_sym_elif_tok_token1] = aux_sym_elif_tok_token1,
  [aux_sym_elif_tok_token2] = aux_sym_elif_tok_token2,
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
  [sym_elif_tok] = sym_elif_tok,
  [sym_else_tok] = sym_else_tok,
  [sym_string_always_choice] = sym_string_always_choice,
  [sym_string_if_choice] = sym_string_always_choice,
  [sym_string_elif_choice] = sym_string_always_choice,
  [sym_string_else_choice] = sym_string_always_choice,
  [sym_string_cond] = sym_string_cond,
  [sym_chunk_always_choice] = sym_string_always_choice,
  [sym_chunk_if_choice] = sym_string_always_choice,
  [sym_chunk_elif_choice] = sym_string_always_choice,
  [sym_chunk_else_choice] = sym_string_always_choice,
  [sym_chunk_cond] = sym_chunk_cond,
  [sym_lu_always_choice] = sym_string_always_choice,
  [sym_lu_if_choice] = sym_string_always_choice,
  [sym_lu_elif_choice] = sym_string_always_choice,
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
  [aux_sym_elif_tok_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_elif_tok_token2] = {
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
  [sym_elif_tok] = {
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
  [sym_string_elif_choice] = {
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
  [sym_chunk_elif_choice] = {
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
  [sym_lu_elif_choice] = {
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
  [33] = 33,
  [34] = 34,
  [35] = 31,
  [36] = 33,
  [37] = 34,
  [38] = 32,
  [39] = 39,
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
  [68] = 62,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 41,
  [147] = 147,
  [148] = 148,
  [149] = 139,
  [150] = 131,
  [151] = 151,
  [152] = 152,
  [153] = 40,
  [154] = 154,
  [155] = 137,
  [156] = 105,
  [157] = 157,
  [158] = 133,
  [159] = 157,
  [160] = 160,
  [161] = 42,
  [162] = 162,
  [163] = 163,
  [164] = 43,
  [165] = 51,
  [166] = 44,
  [167] = 162,
  [168] = 55,
  [169] = 58,
  [170] = 59,
  [171] = 45,
  [172] = 54,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 57,
  [177] = 56,
  [178] = 50,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 61,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 109,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 69,
  [199] = 199,
  [200] = 66,
  [201] = 201,
  [202] = 74,
  [203] = 203,
  [204] = 49,
  [205] = 113,
  [206] = 71,
  [207] = 64,
  [208] = 65,
  [209] = 209,
  [210] = 72,
  [211] = 75,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 67,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 218,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 226,
  [230] = 230,
  [231] = 221,
  [232] = 232,
  [233] = 78,
  [234] = 227,
  [235] = 235,
  [236] = 92,
  [237] = 93,
  [238] = 238,
  [239] = 239,
  [240] = 95,
  [241] = 86,
  [242] = 103,
  [243] = 94,
  [244] = 77,
  [245] = 239,
  [246] = 80,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 99,
  [251] = 97,
  [252] = 100,
  [253] = 253,
  [254] = 88,
  [255] = 90,
  [256] = 91,
  [257] = 249,
  [258] = 258,
  [259] = 83,
  [260] = 260,
  [261] = 89,
  [262] = 87,
  [263] = 106,
  [264] = 96,
  [265] = 82,
  [266] = 266,
  [267] = 79,
  [268] = 85,
  [269] = 81,
  [270] = 76,
  [271] = 271,
  [272] = 272,
  [273] = 260,
  [274] = 274,
  [275] = 98,
  [276] = 84,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 280,
  [290] = 278,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 163,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 300,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 302,
  [315] = 315,
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
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 332,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 335,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 367,
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
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 449,
  [484] = 484,
  [485] = 452,
  [486] = 480,
  [487] = 441,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 478,
  [496] = 466,
  [497] = 497,
  [498] = 493,
  [499] = 499,
  [500] = 457,
  [501] = 455,
  [502] = 434,
  [503] = 503,
  [504] = 504,
  [505] = 426,
  [506] = 425,
  [507] = 507,
  [508] = 484,
  [509] = 477,
  [510] = 438,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 512,
  [516] = 516,
  [517] = 481,
  [518] = 518,
  [519] = 507,
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
      if (eof) ADVANCE(314);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '@') ADVANCE(411);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '|') ADVANCE(422);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == 8594) ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '~') ADVANCE(406);
      if (lookahead == 8976) ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(319);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ')' &&
          (lookahead < ',' || '=' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(411);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '/' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '/' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '|') ADVANCE(422);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(337);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '{') ADVANCE(412);
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
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(337);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '>' < lookahead) &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '&') ADVANCE(402);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(358);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(411);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '~') ADVANCE(406);
      if (lookahead == 8712) ADVANCE(394);
      if (lookahead == 8976) ADVANCE(407);
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
          lookahead == 'n') ADVANCE(46);
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
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '&') ADVANCE(402);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(358);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '~') ADVANCE(406);
      if (lookahead == 8712) ADVANCE(394);
      if (lookahead == 8976) ADVANCE(407);
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
          lookahead == 'n') ADVANCE(46);
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
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == 8594) ADVANCE(315);
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
          (lookahead < '{' || '}' < lookahead)) ADVANCE(331);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(311);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(339);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(402);
      if (lookahead == '=') ADVANCE(358);
      if (lookahead == '|') ADVANCE(404);
      if (lookahead == '~') ADVANCE(406);
      if (lookahead == 8712) ADVANCE(394);
      if (lookahead == 8976) ADVANCE(407);
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
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(354);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(354);
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
          lookahead == 'n') ADVANCE(51);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(24);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(27);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(28);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(29);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(31);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(38);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 41:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(42);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(361);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 53:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 54:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 58:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(418);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(379);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(76);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(370);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(78);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(79);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(81);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(83);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(385);
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(89);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 90:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(91);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(92);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(95);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(98);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(99);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 100:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 105:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(106);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 107:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      END_STATE();
    case 108:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 109:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 111:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 112:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 113:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(113);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 114:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 115:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 118:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(118);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 119:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(119);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 120:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(122);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 124:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 125:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      END_STATE();
    case 126:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 127:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 128:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 129:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 131:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 132:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 133:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 134:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 135:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 136:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 139:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 149:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 150:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 151:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 152:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 153:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 155:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 156:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 157:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 158:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 159:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(159);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 160:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 161:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 162:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 163:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      END_STATE();
    case 164:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 165:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 166:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 168:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 169:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(169);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(170);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 171:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(171);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 172:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(172);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 173:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 174:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 175:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 176:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 177:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(180);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 181:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 184:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 190:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 193:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 194:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 195:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 196:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 198:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 199:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(199);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 200:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 201:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 202:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 203:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 204:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(204);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 205:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 206:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 208:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 209:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(209);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 210:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 211:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 212:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 213:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 214:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(214);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 216:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(217);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 218:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 219:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 220:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(220);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 221:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(221);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 222:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 223:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 224:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 225:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(225);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 226:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 227:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(227);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 228:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 229:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(229);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 230:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 231:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 232:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(232);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 233:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 234:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 235:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 236:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(236);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 237:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 238:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 239:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 240:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(240);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 241:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 242:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 243:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(243);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 244:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(244);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 245:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(245);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 246:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 248:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 249:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 250:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(250);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 251:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(251);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 252:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(252);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 253:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(253);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 254:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(254);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 255:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(255);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(182);
      END_STATE();
    case 256:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(256);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      END_STATE();
    case 257:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 258:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(258);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 259:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(259);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 260:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 261:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(261);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 262:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(262);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 263:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 264:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 265:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(265);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 266:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 269:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 272:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 275:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(275);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 278:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(278);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 281:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 284:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(284);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 287:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(287);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 290:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(290);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 293:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 296:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(296);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 297:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 298:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(298);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 299:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(299);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 300:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(300);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      END_STATE();
    case 301:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 302:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 303:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(303);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      END_STATE();
    case 304:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 305:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 306:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(306);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 307:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 308:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 309:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 311:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(311);
      END_STATE();
    case 312:
      if (eof) ADVANCE(314);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(414);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '|') ADVANCE(422);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == 8594) ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 313:
      if (eof) ADVANCE(314);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '%') ADVANCE(341);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(311);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '~') ADVANCE(406);
      if (lookahead == 8976) ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(319);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(321);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(324);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(322);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(323);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(326);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(324);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(325);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(326);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(327);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(328);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(328);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (!sym_ident_character_set_3(lookahead)) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (sym_ident_character_set_4(lookahead)) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_num_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_weight);
      if (lookahead == '.') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_weight);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(339);
      if (lookahead == '%') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_global_var_prefix);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_global_str_prefix);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_magic);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_clip_side);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(358);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_str_op_eq_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(360);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(363);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(366);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(367);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(219);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_str_op_isprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(369);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(372);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(375);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_str_op_hasprefix_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(194);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_str_op_issuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(384);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(387);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_str_op_hassuffix_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_str_op_in_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_str_op_in_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_str_op_in_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_str_op_in_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_str_op_in_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_str_op_in_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_str_op_contains_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_and_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_and_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_or_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_or_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_not_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(331);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_conjoin);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(331);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_blank);
      if (lookahead == '\\') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (!sym_ident_character_set_3(lookahead)) ADVANCE(331);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_if_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_elif_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_elif_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_else_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(419);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_else_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_always_tok);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_5(lookahead)) ADVANCE(331);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 313},
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
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
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
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 313},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 313},
  [111] = {.lex_state = 313},
  [112] = {.lex_state = 313},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 313},
  [115] = {.lex_state = 313},
  [116] = {.lex_state = 313},
  [117] = {.lex_state = 313},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 313},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 313},
  [125] = {.lex_state = 313},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 313},
  [128] = {.lex_state = 313},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 313},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 313},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 313},
  [175] = {.lex_state = 313},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 313},
  [180] = {.lex_state = 313},
  [181] = {.lex_state = 313},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 313},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 313},
  [189] = {.lex_state = 313},
  [190] = {.lex_state = 313},
  [191] = {.lex_state = 313},
  [192] = {.lex_state = 313},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 313},
  [196] = {.lex_state = 313},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 313},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 313},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 313},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 313},
  [213] = {.lex_state = 313},
  [214] = {.lex_state = 313},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 313},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 313},
  [220] = {.lex_state = 313},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 313},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 313},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 313},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 313},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 313},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 313},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 313},
  [283] = {.lex_state = 313},
  [284] = {.lex_state = 313},
  [285] = {.lex_state = 313},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 313},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 313},
  [292] = {.lex_state = 313},
  [293] = {.lex_state = 313},
  [294] = {.lex_state = 313},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 313},
  [297] = {.lex_state = 313},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 313},
  [300] = {.lex_state = 313},
  [301] = {.lex_state = 313},
  [302] = {.lex_state = 313},
  [303] = {.lex_state = 313},
  [304] = {.lex_state = 313},
  [305] = {.lex_state = 313},
  [306] = {.lex_state = 313},
  [307] = {.lex_state = 313},
  [308] = {.lex_state = 313},
  [309] = {.lex_state = 12},
  [310] = {.lex_state = 313},
  [311] = {.lex_state = 313},
  [312] = {.lex_state = 313},
  [313] = {.lex_state = 313},
  [314] = {.lex_state = 313},
  [315] = {.lex_state = 313},
  [316] = {.lex_state = 313},
  [317] = {.lex_state = 313},
  [318] = {.lex_state = 313},
  [319] = {.lex_state = 313},
  [320] = {.lex_state = 313},
  [321] = {.lex_state = 313},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 12},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 313},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 313},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 313},
  [361] = {.lex_state = 313},
  [362] = {.lex_state = 313},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 313},
  [367] = {.lex_state = 313},
  [368] = {.lex_state = 313},
  [369] = {.lex_state = 313},
  [370] = {.lex_state = 313},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 313},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 313},
  [379] = {.lex_state = 313},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 313},
  [382] = {.lex_state = 313},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 313},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 313},
  [390] = {.lex_state = 313},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 313},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 313},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 313},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 313},
  [413] = {.lex_state = 313},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 313},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 313},
  [421] = {.lex_state = 313},
  [422] = {.lex_state = 313},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 313},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 313},
  [428] = {.lex_state = 313},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 313},
  [431] = {.lex_state = 313},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 313},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 313},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 313},
  [439] = {.lex_state = 313},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 313},
  [443] = {.lex_state = 313},
  [444] = {.lex_state = 313},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 313},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 313},
  [450] = {.lex_state = 313},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 313},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 313},
  [460] = {.lex_state = 313},
  [461] = {.lex_state = 313},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 313},
  [464] = {.lex_state = 313},
  [465] = {.lex_state = 313},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 313},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 313},
  [474] = {.lex_state = 313},
  [475] = {.lex_state = 313},
  [476] = {.lex_state = 313},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 313},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 313},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 313},
  [489] = {.lex_state = 313},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 313},
  [492] = {.lex_state = 313},
  [493] = {.lex_state = 313},
  [494] = {.lex_state = 313},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 313},
  [498] = {.lex_state = 313},
  [499] = {.lex_state = 313},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 313},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 313},
  [504] = {.lex_state = 313},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 313},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 313},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 313},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 313},
  [516] = {.lex_state = 313},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 313},
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
    [sym_source_file] = STATE(518),
    [sym_output_rule] = STATE(214),
    [sym_retag_rule] = STATE(214),
    [sym_attr_rule] = STATE(214),
    [sym_reduce_rule_group] = STATE(214),
    [aux_sym_source_file_repeat1] = STATE(214),
    [aux_sym_reduce_rule_group_repeat1] = STATE(309),
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
    ACTIONS(15), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(11), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [46] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(21), 1,
      sym_clip_side,
    ACTIONS(23), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(19), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [92] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_GT,
    ACTIONS(29), 1,
      sym_clip_side,
    ACTIONS(31), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(27), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      sym_clip_side,
    ACTIONS(39), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(35), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_GT,
    ACTIONS(45), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(43), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(51), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(49), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(57), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(55), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(63), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(61), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(65), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(69), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(73), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(77), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(81), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(85), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(89), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(93), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(97), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(101), 28,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(105), 27,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(109), 27,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
      aux_sym_else_tok_token1,
    ACTIONS(113), 27,
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
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [873] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_str_op_isprefix_token1,
    ACTIONS(125), 1,
      aux_sym_str_op_issuffix_token1,
    ACTIONS(127), 1,
      aux_sym_str_op_issuffix_token2,
    STATE(39), 1,
      sym_not,
    STATE(112), 1,
      sym_str_op,
    ACTIONS(117), 2,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
    ACTIONS(121), 2,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
    ACTIONS(129), 2,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
    ACTIONS(131), 2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
    ACTIONS(133), 2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
    ACTIONS(123), 3,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
    ACTIONS(135), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(189), 7,
      sym_str_op_eq,
      sym_str_op_isprefix,
      sym_str_op_hasprefix,
      sym_str_op_issuffix,
      sym_str_op_hassuffix,
      sym_str_op_in,
      sym_str_op_contains,
  [931] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      sym_conjoin,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(163), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
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
  [1001] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_string,
    ACTIONS(168), 1,
      sym_ident,
    ACTIONS(171), 1,
      aux_sym_num_token1,
    ACTIONS(174), 1,
      sym_global_var_prefix,
    ACTIONS(177), 1,
      sym_magic,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      anon_sym_GT,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym_conjoin,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(203), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
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
  [1071] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(208), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(24), 8,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_reduce_output_repeat1,
  [1141] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
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
    STATE(150), 1,
      sym_insert,
    STATE(227), 1,
      sym_inserted,
    STATE(269), 1,
      sym_literal_lu,
    ACTIONS(230), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(178), 2,
      sym_num,
      sym_null_lu,
    STATE(271), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
    STATE(274), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [1209] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      sym_conjoin,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(232), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(468), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
    STATE(446), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [1277] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(237), 1,
      sym_ident,
    ACTIONS(240), 1,
      aux_sym_num_token1,
    ACTIONS(243), 1,
      sym_global_var_prefix,
    ACTIONS(246), 1,
      sym_magic,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_STAR,
    ACTIONS(266), 1,
      sym_conjoin,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(258), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(269), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(29), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1342] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_if_tok_token1,
    ACTIONS(288), 1,
      sym_always_tok,
    STATE(70), 1,
      sym_not,
    STATE(136), 1,
      sym_string_if_choice,
    STATE(371), 1,
      sym_inserted,
    STATE(392), 1,
      sym_if_tok,
    STATE(448), 1,
      sym_string_always_choice,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(228), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(284), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(23), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [1411] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(294), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(29), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1475] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(298), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(34), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1539] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(302), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(35), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1603] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(294), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(29), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1667] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(294), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(29), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1731] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(310), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(31), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1795] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(294), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(29), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1859] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(316), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(37), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1923] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_str_op_isprefix_token1,
    ACTIONS(125), 1,
      aux_sym_str_op_issuffix_token1,
    ACTIONS(127), 1,
      aux_sym_str_op_issuffix_token2,
    STATE(116), 1,
      sym_str_op,
    ACTIONS(117), 2,
      aux_sym_str_op_eq_token1,
      aux_sym_str_op_eq_token2,
    ACTIONS(121), 2,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
    ACTIONS(129), 2,
      aux_sym_str_op_hassuffix_token1,
      aux_sym_str_op_hassuffix_token2,
    ACTIONS(131), 2,
      aux_sym_str_op_in_token1,
      aux_sym_str_op_in_token2,
    ACTIONS(133), 2,
      aux_sym_str_op_contains_token1,
      aux_sym_str_op_contains_token2,
    ACTIONS(123), 3,
      aux_sym_str_op_hasprefix_token1,
      aux_sym_str_op_hasprefix_token2,
      aux_sym_str_op_hasprefix_token3,
    STATE(189), 7,
      sym_str_op_eq,
      sym_str_op_isprefix,
      sym_str_op_hasprefix,
      sym_str_op_issuffix,
      sym_str_op_hassuffix,
      sym_str_op_in,
      sym_str_op_contains,
  [1973] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    ACTIONS(326), 1,
      anon_sym_AT2,
    STATE(64), 1,
      sym_macro_name,
    STATE(91), 1,
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
  [2014] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    ACTIONS(326), 1,
      anon_sym_AT2,
    STATE(67), 1,
      sym_macro_name,
    STATE(84), 1,
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
  [2055] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_literal_lu_repeat1,
    STATE(87), 1,
      sym_output_var_set,
    ACTIONS(334), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(332), 12,
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
  [2093] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_literal_lu_repeat1,
    STATE(90), 1,
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
  [2131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_literal_lu_repeat1,
    STATE(100), 1,
      sym_output_var_set,
    ACTIONS(344), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(342), 12,
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
  [2169] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_literal_lu_repeat1,
    STATE(99), 1,
      sym_output_var_set,
    ACTIONS(348), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(346), 12,
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
  [2207] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
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
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_insert,
    STATE(227), 1,
      sym_inserted,
    STATE(269), 1,
      sym_literal_lu,
    ACTIONS(230), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(178), 2,
      sym_num,
      sym_null_lu,
    STATE(274), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2267] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(232), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(446), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2327] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(352), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(482), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(354), 15,
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
  [2417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(67), 1,
      sym_macro_name,
    STATE(84), 1,
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
  [2455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(64), 1,
      sym_macro_name,
    STATE(91), 1,
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
  [2493] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(358), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(407), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2553] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_string,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      sym_global_var_prefix,
    ACTIONS(145), 1,
      sym_magic,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_conjoin,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_literal_lu,
    STATE(131), 1,
      sym_insert,
    STATE(234), 1,
      sym_inserted,
    ACTIONS(360), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(375), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(65), 1,
      sym_macro_name,
    STATE(93), 1,
      sym_output_var_set,
    ACTIONS(364), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(362), 11,
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
  [2651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_literal_lu_repeat1,
    STATE(88), 1,
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
  [2689] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(324), 1,
      anon_sym_LPAREN2,
    STATE(69), 1,
      sym_macro_name,
    STATE(92), 1,
      sym_output_var_set,
    ACTIONS(372), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(370), 11,
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
  [2727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_literal_lu_repeat1,
    STATE(85), 1,
      sym_output_var_set,
    ACTIONS(376), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(374), 12,
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
  [2765] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_literal_lu_repeat1,
    STATE(95), 1,
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
  [2803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_literal_lu_repeat1,
    STATE(80), 1,
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
  [2841] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
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
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_insert,
    STATE(227), 1,
      sym_inserted,
    STATE(269), 1,
      sym_literal_lu,
    ACTIONS(386), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(178), 2,
      sym_num,
      sym_null_lu,
    STATE(248), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(390), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(388), 13,
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
  [2934] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_not,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(229), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(284), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(23), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2988] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_not,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(232), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(284), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(23), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(93), 1,
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
  [3074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(92), 1,
      sym_output_var_set,
    ACTIONS(372), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(370), 12,
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
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(395), 14,
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
  [3134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(91), 1,
      sym_output_var_set,
    ACTIONS(320), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(318), 12,
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
  [3166] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_not,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(226), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(284), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(23), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACK2,
    STATE(89), 1,
      sym_output_var_set,
    ACTIONS(401), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(399), 12,
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
  [3252] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_not,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(224), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(284), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(23), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(403), 13,
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
  [3334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(407), 14,
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
  [3362] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_not,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(223), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(284), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(23), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(411), 14,
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
  [3444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(415), 14,
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
  [3472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(419), 14,
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
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(423), 14,
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
  [3526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(427), 13,
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
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(431), 14,
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
  [3580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(435), 13,
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
  [3606] = 3,
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
  [3632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(439), 13,
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
  [3658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(443), 13,
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
  [3684] = 3,
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
  [3710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(447), 13,
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
  [3736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(451), 13,
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
  [3762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(455), 13,
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
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(459), 13,
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
  [3814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(463), 13,
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
  [3840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(467), 13,
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
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(362), 13,
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
  [3892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(399), 13,
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
  [3918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(370), 13,
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
  [3944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(471), 13,
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
  [3970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(475), 13,
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
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(479), 13,
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
  [4022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(483), 13,
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
  [4048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(487), 13,
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
  [4074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(491), 13,
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
  [4100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(495), 13,
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
  [4126] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      anon_sym_QMARK,
    STATE(418), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(118), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4174] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      anon_sym_QMARK,
    STATE(387), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(118), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(521), 11,
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
  [4246] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_QMARK,
    STATE(400), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(118), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      aux_sym_str_op_isprefix_token2,
      aux_sym_str_op_isprefix_token3,
      aux_sym_str_op_issuffix_token2,
    ACTIONS(529), 13,
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
  [4318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(533), 11,
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
  [4342] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_QMARK,
    STATE(380), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(118), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4390] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(541), 1,
      sym_string,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(398), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(547), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4454] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(277), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4496] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(423), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4538] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(298), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(557), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4602] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(399), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4644] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(272), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4686] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(288), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4728] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(395), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4770] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_string,
    ACTIONS(572), 1,
      sym_ident,
    ACTIONS(575), 1,
      anon_sym_DOLLAR,
    ACTIONS(578), 1,
      sym_magic,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(586), 1,
      anon_sym_STAR,
    ACTIONS(589), 1,
      anon_sym_QMARK,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    ACTIONS(584), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(118), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4810] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      sym_string,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(513), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4852] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(593), 1,
      sym_weight,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_AT,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(102), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4891] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(599), 1,
      sym_string,
    ACTIONS(601), 1,
      sym_weight,
    STATE(377), 1,
      sym_reduce_rule,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(101), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4930] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(599), 1,
      sym_string,
    ACTIONS(601), 1,
      sym_weight,
    STATE(338), 1,
      sym_reduce_rule,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(101), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_AT,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(605), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(603), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4995] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(426), 2,
      sym_clip,
      sym_string_cond,
  [5033] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(484), 2,
      sym_clip,
      sym_string_cond,
  [5071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    ACTIONS(613), 1,
      anon_sym_AT,
    STATE(141), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(611), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(609), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5097] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(508), 2,
      sym_clip,
      sym_string_cond,
  [5135] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(505), 2,
      sym_clip,
      sym_string_cond,
  [5173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(138), 1,
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
  [5196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(621), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(619), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5219] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(623), 1,
      sym_string,
    ACTIONS(625), 1,
      sym_ident,
    ACTIONS(627), 1,
      sym_global_var_prefix,
    ACTIONS(629), 1,
      sym_magic,
    STATE(84), 1,
      sym_literal_lu,
    STATE(225), 1,
      sym_inserted,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [5254] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(104), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5287] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    STATE(282), 1,
      sym_else_tok,
    STATE(381), 1,
      sym_elif_tok,
    STATE(466), 1,
      sym_chunk_else_choice,
    STATE(139), 2,
      sym_chunk_elif_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(641), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(639), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(643), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5360] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(649), 1,
      aux_sym_else_tok_token1,
    ACTIONS(651), 1,
      aux_sym_else_tok_token2,
    STATE(119), 1,
      sym_else_tok,
    STATE(420), 1,
      sym_elif_tok,
    STATE(429), 1,
      sym_string_else_choice,
    STATE(144), 2,
      sym_string_elif_choice,
      aux_sym_string_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5391] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_else_tok,
    STATE(390), 1,
      sym_elif_tok,
    STATE(452), 1,
      sym_lu_else_choice,
    STATE(157), 2,
      sym_lu_elif_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(657), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(655), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5445] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_else_tok,
    STATE(381), 1,
      sym_elif_tok,
    STATE(434), 1,
      sym_chunk_else_choice,
    STATE(185), 2,
      sym_chunk_elif_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(666), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(664), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(670), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(668), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(138), 1,
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
  [5545] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      sym_magic,
    ACTIONS(511), 1,
      anon_sym_STAR,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(474), 1,
      sym_attr_prefix,
    STATE(475), 1,
      sym_attr_set_insert,
    STATE(107), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5578] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_else_tok_token1,
    ACTIONS(651), 1,
      aux_sym_else_tok_token2,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_else_tok,
    STATE(420), 1,
      sym_elif_tok,
    STATE(511), 1,
      sym_string_else_choice,
    STATE(182), 2,
      sym_string_elif_choice,
      aux_sym_string_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(678), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5628] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    ACTIONS(686), 1,
      anon_sym_AT2,
    STATE(215), 1,
      sym_macro_name,
    STATE(276), 1,
      sym_output_var_set,
    ACTIONS(328), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [5657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(690), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(688), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(694), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(692), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5703] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_else_tok,
    STATE(381), 1,
      sym_elif_tok,
    STATE(502), 1,
      sym_chunk_else_choice,
    STATE(185), 2,
      sym_chunk_elif_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5734] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(698), 1,
      sym_string,
    ACTIONS(700), 1,
      sym_ident,
    ACTIONS(702), 1,
      sym_global_var_prefix,
    ACTIONS(704), 1,
      sym_magic,
    STATE(218), 1,
      sym_inserted,
    STATE(276), 1,
      sym_literal_lu,
    STATE(165), 2,
      sym_num,
      sym_null_lu,
  [5769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_clip_side,
    ACTIONS(708), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(706), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(714), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(712), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5813] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    ACTIONS(686), 1,
      anon_sym_AT2,
    STATE(207), 1,
      sym_macro_name,
    STATE(256), 1,
      sym_output_var_set,
    ACTIONS(318), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [5842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(718), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(716), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5865] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_else_tok,
    STATE(390), 1,
      sym_elif_tok,
    STATE(485), 1,
      sym_lu_else_choice,
    STATE(159), 2,
      sym_lu_elif_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(529), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5915] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_else_tok,
    STATE(390), 1,
      sym_elif_tok,
    STATE(478), 1,
      sym_lu_else_choice,
    STATE(184), 2,
      sym_lu_elif_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5946] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_else_tok,
    STATE(381), 1,
      sym_elif_tok,
    STATE(496), 1,
      sym_chunk_else_choice,
    STATE(149), 2,
      sym_chunk_elif_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [5977] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 1,
      aux_sym_else_tok_token2,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_else_tok,
    STATE(390), 1,
      sym_elif_tok,
    STATE(495), 1,
      sym_lu_else_choice,
    STATE(184), 2,
      sym_lu_elif_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(633), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(728), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6026] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(262), 1,
      sym_output_var_set,
    ACTIONS(332), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6052] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(506), 1,
      sym_clip,
  [6086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(734), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_literal_lu_repeat1,
    STATE(255), 1,
      sym_output_var_set,
    ACTIONS(338), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    STATE(207), 1,
      sym_macro_name,
    STATE(256), 1,
      sym_output_var_set,
    ACTIONS(318), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(161), 1,
      aux_sym_literal_lu_repeat1,
    STATE(252), 1,
      sym_output_var_set,
    ACTIONS(342), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    STATE(371), 1,
      sym_inserted,
    STATE(425), 1,
      sym_clip,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
  [6216] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(254), 1,
      sym_output_var_set,
    ACTIONS(366), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(168), 1,
      aux_sym_literal_lu_repeat1,
    STATE(240), 1,
      sym_output_var_set,
    ACTIONS(378), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6268] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(171), 1,
      aux_sym_literal_lu_repeat1,
    STATE(246), 1,
      sym_output_var_set,
    ACTIONS(382), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(250), 1,
      sym_output_var_set,
    ACTIONS(346), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    STATE(208), 1,
      sym_macro_name,
    STATE(237), 1,
      sym_output_var_set,
    ACTIONS(362), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(655), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6364] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    STATE(371), 1,
      sym_inserted,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
    STATE(509), 1,
      sym_clip,
  [6398] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_global_var_prefix,
    ACTIONS(280), 1,
      sym_global_str_prefix,
    ACTIONS(543), 1,
      sym_ident,
    STATE(371), 1,
      sym_inserted,
    STATE(477), 1,
      sym_clip,
    STATE(489), 1,
      sym_attr_prefix,
    STATE(490), 1,
      sym_num,
  [6432] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(268), 1,
      sym_output_var_set,
    ACTIONS(374), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6458] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    STATE(198), 1,
      sym_macro_name,
    STATE(236), 1,
      sym_output_var_set,
    ACTIONS(370), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    ACTIONS(684), 1,
      anon_sym_LPAREN2,
    STATE(215), 1,
      sym_macro_name,
    STATE(276), 1,
      sym_output_var_set,
    ACTIONS(328), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6510] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_ident,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(323), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6535] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_ident,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(356), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6560] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_ident,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(329), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_else_tok_token1,
    STATE(420), 1,
      sym_elif_tok,
    ACTIONS(746), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    STATE(182), 2,
      sym_string_elif_choice,
      aux_sym_string_cond_repeat1,
    ACTIONS(748), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_else_tok_token1,
    ACTIONS(753), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(388), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_else_tok_token1,
    STATE(390), 1,
      sym_elif_tok,
    ACTIONS(756), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    STATE(184), 2,
      sym_lu_elif_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(758), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym_else_tok_token1,
    STATE(381), 1,
      sym_elif_tok,
    ACTIONS(763), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    STATE(185), 2,
      sym_chunk_elif_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(765), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6675] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_ident,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(355), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(770), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_DOLLAR,
    ACTIONS(774), 7,
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
    ACTIONS(780), 1,
      anon_sym_DOLLAR,
    ACTIONS(778), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    ACTIONS(547), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_DOLLAR,
    ACTIONS(782), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_DOLLAR,
    ACTIONS(786), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(404), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(347), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_DOLLAR,
    ACTIONS(790), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_DOLLAR,
    ACTIONS(794), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(330), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    STATE(261), 1,
      sym_output_var_set,
    ACTIONS(399), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DOLLAR,
    ACTIONS(798), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_else_tok_token1,
    ACTIONS(395), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(350), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_else_tok_token1,
    ACTIONS(411), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOLLAR,
    ACTIONS(802), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [7001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_else_tok_token1,
    ACTIONS(354), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DOLLAR,
    ACTIONS(557), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [7033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_else_tok_token1,
    ACTIONS(403), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    STATE(237), 1,
      sym_output_var_set,
    ACTIONS(362), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    STATE(236), 1,
      sym_output_var_set,
    ACTIONS(370), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DOLLAR,
    ACTIONS(742), 1,
      sym_global_var_prefix,
    ACTIONS(744), 1,
      sym_global_str_prefix,
    STATE(503), 1,
      sym_attr_prefix,
    STATE(337), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [7111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym_else_tok_token1,
    ACTIONS(407), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_else_tok_token1,
    ACTIONS(415), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      ts_builtin_sym_end,
    ACTIONS(808), 1,
      sym_ident,
    STATE(309), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(212), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [7163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_ident,
    ACTIONS(813), 1,
      sym_magic,
    ACTIONS(815), 1,
      anon_sym_COLON,
    ACTIONS(817), 1,
      anon_sym_LT,
    STATE(266), 1,
      sym_colon,
    STATE(353), 1,
      sym_lit_tag,
    STATE(456), 1,
      sym_lu_cond,
  [7191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(819), 1,
      ts_builtin_sym_end,
    STATE(309), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(212), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [7211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_else_tok_token1,
    ACTIONS(682), 1,
      anon_sym_LBRACK2,
    STATE(256), 1,
      sym_output_var_set,
    ACTIONS(318), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    ACTIONS(825), 1,
      anon_sym_AT,
    STATE(247), 1,
      sym_attr_default,
    ACTIONS(821), 2,
      sym_string,
      sym_ident,
    STATE(222), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(827), 5,
      sym_string,
      sym_weight,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
  [7270] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(831), 1,
      sym_string,
    ACTIONS(833), 1,
      sym_ident,
    ACTIONS(835), 1,
      sym_magic,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
  [7293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 1,
      anon_sym_AT,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    ACTIONS(837), 2,
      sym_string,
      sym_ident,
    STATE(220), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    ACTIONS(846), 1,
      anon_sym_LBRACK,
    ACTIONS(849), 1,
      anon_sym_AT,
    ACTIONS(841), 2,
      sym_string,
      sym_ident,
    STATE(220), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7335] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(854), 1,
      sym_always_tok,
    STATE(133), 1,
      sym_chunk_if_choice,
    STATE(137), 1,
      sym_lu_if_choice,
    STATE(382), 1,
      sym_if_tok,
    STATE(441), 1,
      sym_chunk_always_choice,
    STATE(517), 1,
      sym_lu_always_choice,
  [7360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 1,
      anon_sym_AT,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    ACTIONS(837), 2,
      sym_string,
      sym_ident,
    STATE(220), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 2,
      sym_and,
      sym_or,
    ACTIONS(858), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 2,
      sym_and,
      sym_or,
    ACTIONS(860), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7411] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(862), 1,
      sym_string,
    ACTIONS(864), 1,
      sym_ident,
    ACTIONS(866), 1,
      sym_magic,
    STATE(54), 2,
      sym_num,
      sym_null_lu,
  [7434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(872), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(73), 2,
      sym_and,
      sym_or,
  [7453] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(704), 1,
      sym_magic,
    ACTIONS(874), 1,
      sym_string,
    ACTIONS(876), 1,
      sym_ident,
    STATE(165), 2,
      sym_num,
      sym_null_lu,
  [7476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(872), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(73), 2,
      sym_and,
      sym_or,
  [7495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(872), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(73), 2,
      sym_and,
      sym_or,
  [7514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(882), 5,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_GT,
  [7529] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(854), 1,
      sym_always_tok,
    STATE(155), 1,
      sym_lu_if_choice,
    STATE(158), 1,
      sym_chunk_if_choice,
    STATE(382), 1,
      sym_if_tok,
    STATE(481), 1,
      sym_lu_always_choice,
    STATE(487), 1,
      sym_chunk_always_choice,
  [7554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 2,
      sym_and,
      sym_or,
    ACTIONS(860), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_else_tok_token1,
    ACTIONS(427), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(629), 1,
      sym_magic,
    ACTIONS(886), 1,
      sym_string,
    ACTIONS(888), 1,
      sym_ident,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [7607] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COLON,
    ACTIONS(890), 1,
      aux_sym_arrow_token1,
    ACTIONS(892), 1,
      sym_ident,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym_colon,
  [7629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_else_tok_token1,
    ACTIONS(399), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_else_tok_token1,
    ACTIONS(370), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_else_tok_token1,
    ACTIONS(898), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      sym_string,
    ACTIONS(904), 1,
      sym_ident,
    STATE(56), 2,
      sym_num,
      sym_null_lu,
  [7691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_else_tok_token1,
    ACTIONS(475), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_else_tok_token1,
    ACTIONS(451), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym_else_tok_token1,
    ACTIONS(521), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_else_tok_token1,
    ACTIONS(471), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_else_tok_token1,
    ACTIONS(423), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(906), 1,
      sym_string,
    ACTIONS(908), 1,
      sym_ident,
    STATE(177), 2,
      sym_num,
      sym_null_lu,
  [7781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_else_tok_token1,
    ACTIONS(435), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 1,
      anon_sym_AT,
    ACTIONS(910), 2,
      sym_string,
      sym_ident,
    STATE(219), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      aux_sym_else_tok_token1,
    ACTIONS(912), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(886), 1,
      sym_string,
    ACTIONS(888), 1,
      sym_ident,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [7847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym_else_tok_token1,
    ACTIONS(491), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_else_tok_token1,
    ACTIONS(483), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_else_tok_token1,
    ACTIONS(495), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_DOLLAR,
    ACTIONS(920), 1,
      anon_sym_LBRACK,
    ACTIONS(916), 2,
      sym_string,
      sym_ident,
    STATE(173), 2,
      sym_attr_set_insert,
      sym_pattern_clip,
  [7907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_else_tok_token1,
    ACTIONS(459), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_else_tok_token1,
    ACTIONS(467), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_else_tok_token1,
    ACTIONS(362), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7949] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(874), 1,
      sym_string,
    ACTIONS(876), 1,
      sym_ident,
    STATE(165), 2,
      sym_num,
      sym_null_lu,
  [7969] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(922), 1,
      sym_string,
    ACTIONS(924), 1,
      sym_ident,
    STATE(428), 1,
      sym_attr_prefix,
    STATE(430), 1,
      sym_attr_set_insert,
  [7991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym_else_tok_token1,
    ACTIONS(443), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(862), 1,
      sym_string,
    ACTIONS(864), 1,
      sym_ident,
    STATE(54), 2,
      sym_num,
      sym_null_lu,
  [8025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_else_tok_token1,
    ACTIONS(463), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_else_tok_token1,
    ACTIONS(455), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      aux_sym_else_tok_token1,
    ACTIONS(533), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_else_tok_token1,
    ACTIONS(479), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_else_tok_token1,
    ACTIONS(439), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8095] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(817), 1,
      anon_sym_LT,
    ACTIONS(926), 1,
      sym_ident,
    ACTIONS(928), 1,
      sym_magic,
    STATE(334), 1,
      sym_lit_tag,
    STATE(451), 1,
      sym_lu_cond,
  [8117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_else_tok_token1,
    ACTIONS(431), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_else_tok_token1,
    ACTIONS(328), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_else_tok_token1,
    ACTIONS(419), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      aux_sym_else_tok_token1,
    ACTIONS(930), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym_else_tok_token1,
    ACTIONS(934), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8201] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_num_token1,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(831), 1,
      sym_string,
    ACTIONS(833), 1,
      sym_ident,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
  [8221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      aux_sym_else_tok_token1,
    ACTIONS(938), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_else_tok_token1,
    ACTIONS(487), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_else_tok_token1,
    ACTIONS(318), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      aux_sym_else_tok_token1,
    ACTIONS(942), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(946), 1,
      sym_always_tok,
    STATE(137), 1,
      sym_lu_if_choice,
    STATE(402), 1,
      sym_if_tok,
    STATE(517), 1,
      sym_lu_always_choice,
  [8296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    STATE(468), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(948), 1,
      sym_always_tok,
    STATE(158), 1,
      sym_chunk_if_choice,
    STATE(370), 1,
      sym_if_tok,
    STATE(487), 1,
      sym_chunk_always_choice,
  [8330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(950), 3,
      sym_string,
      aux_sym_num_token1,
      sym_magic,
  [8343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    STATE(436), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(385), 1,
      sym_attr_pair,
    STATE(415), 1,
      sym_attr_set_insert,
    ACTIONS(954), 2,
      sym_string,
      sym_ident,
  [8375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
    STATE(238), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(958), 1,
      anon_sym_LBRACK,
    STATE(384), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8409] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(960), 1,
      sym_always_tok,
    STATE(136), 1,
      sym_string_if_choice,
    STATE(392), 1,
      sym_if_tok,
    STATE(448), 1,
      sym_string_always_choice,
  [8428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
    STATE(271), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [8454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(948), 1,
      sym_always_tok,
    STATE(133), 1,
      sym_chunk_if_choice,
    STATE(370), 1,
      sym_if_tok,
    STATE(441), 1,
      sym_chunk_always_choice,
  [8473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym_if_tok_token1,
    ACTIONS(946), 1,
      sym_always_tok,
    STATE(155), 1,
      sym_lu_if_choice,
    STATE(402), 1,
      sym_if_tok,
    STATE(481), 1,
      sym_lu_always_choice,
  [8492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(964), 1,
      anon_sym_LBRACK,
    STATE(363), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(966), 1,
      anon_sym_LBRACK,
    STATE(401), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(349), 1,
      sym_attr_pair,
    STATE(415), 1,
      sym_attr_set_insert,
    ACTIONS(954), 2,
      sym_string,
      sym_ident,
  [8558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [8569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(968), 1,
      anon_sym_LBRACK,
    STATE(408), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 5,
      sym_ident,
      sym_magic,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
  [8599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [8610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_ident,
    ACTIONS(976), 1,
      anon_sym_DOLLAR,
    ACTIONS(978), 1,
      anon_sym_LBRACK,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
  [8637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(411), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym_ident,
    ACTIONS(984), 1,
      anon_sym_DOLLAR,
    ACTIONS(986), 1,
      anon_sym_LBRACK,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
  [8669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(391), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_ident,
    ACTIONS(992), 1,
      anon_sym_DOLLAR,
    ACTIONS(994), 1,
      anon_sym_LBRACK,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
  [8749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(414), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      aux_sym_arrow_token1,
    ACTIONS(1000), 1,
      sym_ident,
    STATE(122), 1,
      sym_arrow,
    STATE(328), 1,
      aux_sym_reduce_rule_group_repeat1,
  [8781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(417), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(416), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_ident,
    ACTIONS(1004), 1,
      anon_sym_DOLLAR,
    ACTIONS(1006), 1,
      anon_sym_LBRACK,
    ACTIONS(1008), 1,
      anon_sym_LBRACE,
  [8861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(388), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(410), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(409), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(406), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(393), 1,
      sym_reduce_output,
    STATE(419), 1,
      sym_chunk_cond,
  [8957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 4,
      sym_string,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    ACTIONS(1015), 1,
      anon_sym_SEMI,
    STATE(322), 1,
      aux_sym_output_rule_repeat1,
  [8980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RBRACK,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_reduce_rule_repeat2,
  [8993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym_arrow_token1,
    ACTIONS(1031), 1,
      sym_ident,
    STATE(328), 1,
      aux_sym_reduce_rule_group_repeat1,
  [9058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
    STATE(326), 1,
      aux_sym_reduce_rule_repeat2,
  [9071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RBRACK,
    STATE(333), 1,
      aux_sym_reduce_rule_repeat2,
  [9084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_output_var_set_repeat1,
  [9097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_RBRACK,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_output_var_set_repeat1,
  [9110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_DOT,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      aux_sym_output_rule_repeat1,
  [9136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_output_var_set_repeat1,
  [9149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_retag_rule_repeat1,
  [9162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      aux_sym_reduce_rule_repeat2,
  [9175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_SEMI,
    ACTIONS(1063), 1,
      anon_sym_PIPE,
    STATE(342), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_DOT,
    ACTIONS(1065), 1,
      anon_sym_SEMI,
    STATE(322), 1,
      aux_sym_output_rule_repeat1,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_DOT,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    STATE(322), 1,
      aux_sym_output_rule_repeat1,
  [9227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_PIPE,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
    STATE(351), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LT,
    ACTIONS(1071), 1,
      sym_ident,
    STATE(405), 1,
      sym_lit_tag,
  [9253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_SEMI,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_retag_rule_repeat1,
  [9266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    ACTIONS(1080), 1,
      sym_ident,
    STATE(472), 1,
      sym_num,
  [9292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    STATE(325), 1,
      aux_sym_reduce_rule_repeat2,
  [9305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_output_var_set_repeat1,
  [9318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      aux_sym_retag_rule_repeat1,
  [9331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RBRACK,
    STATE(327), 1,
      aux_sym_reduce_rule_repeat2,
  [9344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_SEMI,
    ACTIONS(1092), 1,
      anon_sym_PIPE,
    STATE(351), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_RBRACK,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_DOT,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      aux_sym_output_rule_repeat1,
  [9383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1102), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      aux_sym_output_var_set_repeat1,
  [9396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RBRACK,
    STATE(357), 1,
      aux_sym_reduce_rule_repeat2,
  [9409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_reduce_rule_repeat2,
  [9422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      sym_string,
      sym_ident,
  [9475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(335), 1,
      sym_set_var,
  [9517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(354), 1,
      sym_set_var,
  [9527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_condition,
  [9545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_num_token1,
    STATE(445), 1,
      sym_num,
  [9555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_condition,
  [9621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(284), 1,
      sym_condition,
  [9639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_condition,
  [9649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(293), 1,
      sym_condition,
  [9707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_condition,
  [9717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_condition,
  [9735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_condition,
  [9777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_condition,
  [9819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_ident,
    STATE(394), 1,
      sym_set_var,
  [9909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 2,
      sym_string,
      sym_ident,
  [9925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_condition,
  [9967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_condition,
  [9977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
  [9992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym_ident,
  [9999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
  [10006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
  [10013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_AT,
  [10020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_ident,
  [10027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [10034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_AT,
  [10041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_ident,
  [10048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
  [10055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_ident,
  [10062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
  [10069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym_ident,
  [10076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
  [10083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_COLON,
  [10090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_ident,
  [10097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      sym_ident,
  [10104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_EQ,
  [10111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [10118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      sym_ident,
  [10125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym_ident,
  [10132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_ident,
  [10139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_DOT,
  [10146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
  [10153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_ident,
  [10160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [10167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_ident,
  [10174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_LPAREN,
  [10181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
  [10188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
  [10195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_DOT,
  [10202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_COLON,
  [10209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym_ident,
  [10216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
  [10223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
  [10230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_EQ,
  [10237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym_ident,
  [10244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      sym_ident,
  [10251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_ident,
  [10258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_COLON,
  [10265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_ident,
  [10272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      sym_ident,
  [10279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym_ident,
  [10286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
  [10293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_ident,
  [10300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [10307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_EQ,
  [10314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_EQ,
  [10321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_EQ,
  [10328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym_clip_side,
  [10335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      sym_ident,
  [10342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_ident,
  [10349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_AT,
  [10356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_AT,
  [10363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
  [10370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [10377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      sym_ident,
  [10384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RBRACK,
  [10391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [10398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [10405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym_ident,
  [10412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RBRACK,
  [10419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [10426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RBRACK,
  [10433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [10440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      sym_ident,
  [10447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym_ident,
  [10454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_DOT,
  [10461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      sym_ident,
  [10468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym_ident,
  [10475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      sym_ident,
  [10482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      sym_ident,
  [10489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [10496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [10503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      sym_ident,
  [10510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym_ident,
  [10517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym_ident,
  [10524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
  [10531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym_ident,
  [10538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [10545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym_ident,
  [10552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_ident,
  [10559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_RBRACK,
  [10566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_RBRACE,
  [10573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym_ident,
  [10580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_RBRACK,
  [10587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_RBRACE,
  [10594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      sym_ident,
  [10601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
  [10608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_ident,
  [10615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [10622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_GT,
  [10629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      sym_ident,
  [10636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_LPAREN,
  [10643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [10650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      ts_builtin_sym_end,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 596,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 676,
  [SMALL_STATE(19)] = 716,
  [SMALL_STATE(20)] = 756,
  [SMALL_STATE(21)] = 795,
  [SMALL_STATE(22)] = 834,
  [SMALL_STATE(23)] = 873,
  [SMALL_STATE(24)] = 931,
  [SMALL_STATE(25)] = 1001,
  [SMALL_STATE(26)] = 1071,
  [SMALL_STATE(27)] = 1141,
  [SMALL_STATE(28)] = 1209,
  [SMALL_STATE(29)] = 1277,
  [SMALL_STATE(30)] = 1342,
  [SMALL_STATE(31)] = 1411,
  [SMALL_STATE(32)] = 1475,
  [SMALL_STATE(33)] = 1539,
  [SMALL_STATE(34)] = 1603,
  [SMALL_STATE(35)] = 1667,
  [SMALL_STATE(36)] = 1731,
  [SMALL_STATE(37)] = 1795,
  [SMALL_STATE(38)] = 1859,
  [SMALL_STATE(39)] = 1923,
  [SMALL_STATE(40)] = 1973,
  [SMALL_STATE(41)] = 2014,
  [SMALL_STATE(42)] = 2055,
  [SMALL_STATE(43)] = 2093,
  [SMALL_STATE(44)] = 2131,
  [SMALL_STATE(45)] = 2169,
  [SMALL_STATE(46)] = 2207,
  [SMALL_STATE(47)] = 2267,
  [SMALL_STATE(48)] = 2327,
  [SMALL_STATE(49)] = 2387,
  [SMALL_STATE(50)] = 2417,
  [SMALL_STATE(51)] = 2455,
  [SMALL_STATE(52)] = 2493,
  [SMALL_STATE(53)] = 2553,
  [SMALL_STATE(54)] = 2613,
  [SMALL_STATE(55)] = 2651,
  [SMALL_STATE(56)] = 2689,
  [SMALL_STATE(57)] = 2727,
  [SMALL_STATE(58)] = 2765,
  [SMALL_STATE(59)] = 2803,
  [SMALL_STATE(60)] = 2841,
  [SMALL_STATE(61)] = 2901,
  [SMALL_STATE(62)] = 2934,
  [SMALL_STATE(63)] = 2988,
  [SMALL_STATE(64)] = 3042,
  [SMALL_STATE(65)] = 3074,
  [SMALL_STATE(66)] = 3106,
  [SMALL_STATE(67)] = 3134,
  [SMALL_STATE(68)] = 3166,
  [SMALL_STATE(69)] = 3220,
  [SMALL_STATE(70)] = 3252,
  [SMALL_STATE(71)] = 3306,
  [SMALL_STATE(72)] = 3334,
  [SMALL_STATE(73)] = 3362,
  [SMALL_STATE(74)] = 3416,
  [SMALL_STATE(75)] = 3444,
  [SMALL_STATE(76)] = 3472,
  [SMALL_STATE(77)] = 3499,
  [SMALL_STATE(78)] = 3526,
  [SMALL_STATE(79)] = 3553,
  [SMALL_STATE(80)] = 3580,
  [SMALL_STATE(81)] = 3606,
  [SMALL_STATE(82)] = 3632,
  [SMALL_STATE(83)] = 3658,
  [SMALL_STATE(84)] = 3684,
  [SMALL_STATE(85)] = 3710,
  [SMALL_STATE(86)] = 3736,
  [SMALL_STATE(87)] = 3762,
  [SMALL_STATE(88)] = 3788,
  [SMALL_STATE(89)] = 3814,
  [SMALL_STATE(90)] = 3840,
  [SMALL_STATE(91)] = 3866,
  [SMALL_STATE(92)] = 3892,
  [SMALL_STATE(93)] = 3918,
  [SMALL_STATE(94)] = 3944,
  [SMALL_STATE(95)] = 3970,
  [SMALL_STATE(96)] = 3996,
  [SMALL_STATE(97)] = 4022,
  [SMALL_STATE(98)] = 4048,
  [SMALL_STATE(99)] = 4074,
  [SMALL_STATE(100)] = 4100,
  [SMALL_STATE(101)] = 4126,
  [SMALL_STATE(102)] = 4174,
  [SMALL_STATE(103)] = 4222,
  [SMALL_STATE(104)] = 4246,
  [SMALL_STATE(105)] = 4294,
  [SMALL_STATE(106)] = 4318,
  [SMALL_STATE(107)] = 4342,
  [SMALL_STATE(108)] = 4390,
  [SMALL_STATE(109)] = 4432,
  [SMALL_STATE(110)] = 4454,
  [SMALL_STATE(111)] = 4496,
  [SMALL_STATE(112)] = 4538,
  [SMALL_STATE(113)] = 4580,
  [SMALL_STATE(114)] = 4602,
  [SMALL_STATE(115)] = 4644,
  [SMALL_STATE(116)] = 4686,
  [SMALL_STATE(117)] = 4728,
  [SMALL_STATE(118)] = 4770,
  [SMALL_STATE(119)] = 4810,
  [SMALL_STATE(120)] = 4852,
  [SMALL_STATE(121)] = 4891,
  [SMALL_STATE(122)] = 4930,
  [SMALL_STATE(123)] = 4969,
  [SMALL_STATE(124)] = 4995,
  [SMALL_STATE(125)] = 5033,
  [SMALL_STATE(126)] = 5071,
  [SMALL_STATE(127)] = 5097,
  [SMALL_STATE(128)] = 5135,
  [SMALL_STATE(129)] = 5173,
  [SMALL_STATE(130)] = 5196,
  [SMALL_STATE(131)] = 5219,
  [SMALL_STATE(132)] = 5254,
  [SMALL_STATE(133)] = 5287,
  [SMALL_STATE(134)] = 5318,
  [SMALL_STATE(135)] = 5341,
  [SMALL_STATE(136)] = 5360,
  [SMALL_STATE(137)] = 5391,
  [SMALL_STATE(138)] = 5422,
  [SMALL_STATE(139)] = 5445,
  [SMALL_STATE(140)] = 5476,
  [SMALL_STATE(141)] = 5499,
  [SMALL_STATE(142)] = 5522,
  [SMALL_STATE(143)] = 5545,
  [SMALL_STATE(144)] = 5578,
  [SMALL_STATE(145)] = 5609,
  [SMALL_STATE(146)] = 5628,
  [SMALL_STATE(147)] = 5657,
  [SMALL_STATE(148)] = 5680,
  [SMALL_STATE(149)] = 5703,
  [SMALL_STATE(150)] = 5734,
  [SMALL_STATE(151)] = 5769,
  [SMALL_STATE(152)] = 5790,
  [SMALL_STATE(153)] = 5813,
  [SMALL_STATE(154)] = 5842,
  [SMALL_STATE(155)] = 5865,
  [SMALL_STATE(156)] = 5896,
  [SMALL_STATE(157)] = 5915,
  [SMALL_STATE(158)] = 5946,
  [SMALL_STATE(159)] = 5977,
  [SMALL_STATE(160)] = 6008,
  [SMALL_STATE(161)] = 6026,
  [SMALL_STATE(162)] = 6052,
  [SMALL_STATE(163)] = 6086,
  [SMALL_STATE(164)] = 6104,
  [SMALL_STATE(165)] = 6130,
  [SMALL_STATE(166)] = 6156,
  [SMALL_STATE(167)] = 6182,
  [SMALL_STATE(168)] = 6216,
  [SMALL_STATE(169)] = 6242,
  [SMALL_STATE(170)] = 6268,
  [SMALL_STATE(171)] = 6294,
  [SMALL_STATE(172)] = 6320,
  [SMALL_STATE(173)] = 6346,
  [SMALL_STATE(174)] = 6364,
  [SMALL_STATE(175)] = 6398,
  [SMALL_STATE(176)] = 6432,
  [SMALL_STATE(177)] = 6458,
  [SMALL_STATE(178)] = 6484,
  [SMALL_STATE(179)] = 6510,
  [SMALL_STATE(180)] = 6535,
  [SMALL_STATE(181)] = 6560,
  [SMALL_STATE(182)] = 6585,
  [SMALL_STATE(183)] = 6608,
  [SMALL_STATE(184)] = 6629,
  [SMALL_STATE(185)] = 6652,
  [SMALL_STATE(186)] = 6675,
  [SMALL_STATE(187)] = 6700,
  [SMALL_STATE(188)] = 6717,
  [SMALL_STATE(189)] = 6733,
  [SMALL_STATE(190)] = 6749,
  [SMALL_STATE(191)] = 6765,
  [SMALL_STATE(192)] = 6781,
  [SMALL_STATE(193)] = 6797,
  [SMALL_STATE(194)] = 6819,
  [SMALL_STATE(195)] = 6841,
  [SMALL_STATE(196)] = 6857,
  [SMALL_STATE(197)] = 6873,
  [SMALL_STATE(198)] = 6895,
  [SMALL_STATE(199)] = 6915,
  [SMALL_STATE(200)] = 6931,
  [SMALL_STATE(201)] = 6947,
  [SMALL_STATE(202)] = 6969,
  [SMALL_STATE(203)] = 6985,
  [SMALL_STATE(204)] = 7001,
  [SMALL_STATE(205)] = 7017,
  [SMALL_STATE(206)] = 7033,
  [SMALL_STATE(207)] = 7049,
  [SMALL_STATE(208)] = 7069,
  [SMALL_STATE(209)] = 7089,
  [SMALL_STATE(210)] = 7111,
  [SMALL_STATE(211)] = 7127,
  [SMALL_STATE(212)] = 7143,
  [SMALL_STATE(213)] = 7163,
  [SMALL_STATE(214)] = 7191,
  [SMALL_STATE(215)] = 7211,
  [SMALL_STATE(216)] = 7231,
  [SMALL_STATE(217)] = 7255,
  [SMALL_STATE(218)] = 7270,
  [SMALL_STATE(219)] = 7293,
  [SMALL_STATE(220)] = 7314,
  [SMALL_STATE(221)] = 7335,
  [SMALL_STATE(222)] = 7360,
  [SMALL_STATE(223)] = 7381,
  [SMALL_STATE(224)] = 7396,
  [SMALL_STATE(225)] = 7411,
  [SMALL_STATE(226)] = 7434,
  [SMALL_STATE(227)] = 7453,
  [SMALL_STATE(228)] = 7476,
  [SMALL_STATE(229)] = 7495,
  [SMALL_STATE(230)] = 7514,
  [SMALL_STATE(231)] = 7529,
  [SMALL_STATE(232)] = 7554,
  [SMALL_STATE(233)] = 7569,
  [SMALL_STATE(234)] = 7584,
  [SMALL_STATE(235)] = 7607,
  [SMALL_STATE(236)] = 7629,
  [SMALL_STATE(237)] = 7643,
  [SMALL_STATE(238)] = 7657,
  [SMALL_STATE(239)] = 7671,
  [SMALL_STATE(240)] = 7691,
  [SMALL_STATE(241)] = 7705,
  [SMALL_STATE(242)] = 7719,
  [SMALL_STATE(243)] = 7733,
  [SMALL_STATE(244)] = 7747,
  [SMALL_STATE(245)] = 7761,
  [SMALL_STATE(246)] = 7781,
  [SMALL_STATE(247)] = 7795,
  [SMALL_STATE(248)] = 7813,
  [SMALL_STATE(249)] = 7827,
  [SMALL_STATE(250)] = 7847,
  [SMALL_STATE(251)] = 7861,
  [SMALL_STATE(252)] = 7875,
  [SMALL_STATE(253)] = 7889,
  [SMALL_STATE(254)] = 7907,
  [SMALL_STATE(255)] = 7921,
  [SMALL_STATE(256)] = 7935,
  [SMALL_STATE(257)] = 7949,
  [SMALL_STATE(258)] = 7969,
  [SMALL_STATE(259)] = 7991,
  [SMALL_STATE(260)] = 8005,
  [SMALL_STATE(261)] = 8025,
  [SMALL_STATE(262)] = 8039,
  [SMALL_STATE(263)] = 8053,
  [SMALL_STATE(264)] = 8067,
  [SMALL_STATE(265)] = 8081,
  [SMALL_STATE(266)] = 8095,
  [SMALL_STATE(267)] = 8117,
  [SMALL_STATE(268)] = 8131,
  [SMALL_STATE(269)] = 8145,
  [SMALL_STATE(270)] = 8159,
  [SMALL_STATE(271)] = 8173,
  [SMALL_STATE(272)] = 8187,
  [SMALL_STATE(273)] = 8201,
  [SMALL_STATE(274)] = 8221,
  [SMALL_STATE(275)] = 8235,
  [SMALL_STATE(276)] = 8249,
  [SMALL_STATE(277)] = 8263,
  [SMALL_STATE(278)] = 8277,
  [SMALL_STATE(279)] = 8296,
  [SMALL_STATE(280)] = 8311,
  [SMALL_STATE(281)] = 8330,
  [SMALL_STATE(282)] = 8343,
  [SMALL_STATE(283)] = 8358,
  [SMALL_STATE(284)] = 8375,
  [SMALL_STATE(285)] = 8390,
  [SMALL_STATE(286)] = 8409,
  [SMALL_STATE(287)] = 8428,
  [SMALL_STATE(288)] = 8443,
  [SMALL_STATE(289)] = 8454,
  [SMALL_STATE(290)] = 8473,
  [SMALL_STATE(291)] = 8492,
  [SMALL_STATE(292)] = 8511,
  [SMALL_STATE(293)] = 8522,
  [SMALL_STATE(294)] = 8541,
  [SMALL_STATE(295)] = 8558,
  [SMALL_STATE(296)] = 8569,
  [SMALL_STATE(297)] = 8588,
  [SMALL_STATE(298)] = 8599,
  [SMALL_STATE(299)] = 8610,
  [SMALL_STATE(300)] = 8621,
  [SMALL_STATE(301)] = 8637,
  [SMALL_STATE(302)] = 8653,
  [SMALL_STATE(303)] = 8669,
  [SMALL_STATE(304)] = 8685,
  [SMALL_STATE(305)] = 8701,
  [SMALL_STATE(306)] = 8717,
  [SMALL_STATE(307)] = 8733,
  [SMALL_STATE(308)] = 8749,
  [SMALL_STATE(309)] = 8765,
  [SMALL_STATE(310)] = 8781,
  [SMALL_STATE(311)] = 8797,
  [SMALL_STATE(312)] = 8813,
  [SMALL_STATE(313)] = 8829,
  [SMALL_STATE(314)] = 8845,
  [SMALL_STATE(315)] = 8861,
  [SMALL_STATE(316)] = 8877,
  [SMALL_STATE(317)] = 8893,
  [SMALL_STATE(318)] = 8909,
  [SMALL_STATE(319)] = 8925,
  [SMALL_STATE(320)] = 8941,
  [SMALL_STATE(321)] = 8957,
  [SMALL_STATE(322)] = 8967,
  [SMALL_STATE(323)] = 8980,
  [SMALL_STATE(324)] = 8993,
  [SMALL_STATE(325)] = 9006,
  [SMALL_STATE(326)] = 9019,
  [SMALL_STATE(327)] = 9032,
  [SMALL_STATE(328)] = 9045,
  [SMALL_STATE(329)] = 9058,
  [SMALL_STATE(330)] = 9071,
  [SMALL_STATE(331)] = 9084,
  [SMALL_STATE(332)] = 9097,
  [SMALL_STATE(333)] = 9110,
  [SMALL_STATE(334)] = 9123,
  [SMALL_STATE(335)] = 9136,
  [SMALL_STATE(336)] = 9149,
  [SMALL_STATE(337)] = 9162,
  [SMALL_STATE(338)] = 9175,
  [SMALL_STATE(339)] = 9188,
  [SMALL_STATE(340)] = 9201,
  [SMALL_STATE(341)] = 9214,
  [SMALL_STATE(342)] = 9227,
  [SMALL_STATE(343)] = 9240,
  [SMALL_STATE(344)] = 9253,
  [SMALL_STATE(345)] = 9266,
  [SMALL_STATE(346)] = 9279,
  [SMALL_STATE(347)] = 9292,
  [SMALL_STATE(348)] = 9305,
  [SMALL_STATE(349)] = 9318,
  [SMALL_STATE(350)] = 9331,
  [SMALL_STATE(351)] = 9344,
  [SMALL_STATE(352)] = 9357,
  [SMALL_STATE(353)] = 9370,
  [SMALL_STATE(354)] = 9383,
  [SMALL_STATE(355)] = 9396,
  [SMALL_STATE(356)] = 9409,
  [SMALL_STATE(357)] = 9422,
  [SMALL_STATE(358)] = 9435,
  [SMALL_STATE(359)] = 9443,
  [SMALL_STATE(360)] = 9451,
  [SMALL_STATE(361)] = 9459,
  [SMALL_STATE(362)] = 9467,
  [SMALL_STATE(363)] = 9475,
  [SMALL_STATE(364)] = 9483,
  [SMALL_STATE(365)] = 9491,
  [SMALL_STATE(366)] = 9499,
  [SMALL_STATE(367)] = 9507,
  [SMALL_STATE(368)] = 9517,
  [SMALL_STATE(369)] = 9527,
  [SMALL_STATE(370)] = 9535,
  [SMALL_STATE(371)] = 9545,
  [SMALL_STATE(372)] = 9555,
  [SMALL_STATE(373)] = 9563,
  [SMALL_STATE(374)] = 9571,
  [SMALL_STATE(375)] = 9579,
  [SMALL_STATE(376)] = 9587,
  [SMALL_STATE(377)] = 9595,
  [SMALL_STATE(378)] = 9603,
  [SMALL_STATE(379)] = 9611,
  [SMALL_STATE(380)] = 9621,
  [SMALL_STATE(381)] = 9629,
  [SMALL_STATE(382)] = 9639,
  [SMALL_STATE(383)] = 9649,
  [SMALL_STATE(384)] = 9657,
  [SMALL_STATE(385)] = 9665,
  [SMALL_STATE(386)] = 9673,
  [SMALL_STATE(387)] = 9681,
  [SMALL_STATE(388)] = 9689,
  [SMALL_STATE(389)] = 9697,
  [SMALL_STATE(390)] = 9707,
  [SMALL_STATE(391)] = 9717,
  [SMALL_STATE(392)] = 9725,
  [SMALL_STATE(393)] = 9735,
  [SMALL_STATE(394)] = 9743,
  [SMALL_STATE(395)] = 9751,
  [SMALL_STATE(396)] = 9759,
  [SMALL_STATE(397)] = 9767,
  [SMALL_STATE(398)] = 9777,
  [SMALL_STATE(399)] = 9785,
  [SMALL_STATE(400)] = 9793,
  [SMALL_STATE(401)] = 9801,
  [SMALL_STATE(402)] = 9809,
  [SMALL_STATE(403)] = 9819,
  [SMALL_STATE(404)] = 9827,
  [SMALL_STATE(405)] = 9835,
  [SMALL_STATE(406)] = 9843,
  [SMALL_STATE(407)] = 9851,
  [SMALL_STATE(408)] = 9859,
  [SMALL_STATE(409)] = 9867,
  [SMALL_STATE(410)] = 9875,
  [SMALL_STATE(411)] = 9883,
  [SMALL_STATE(412)] = 9891,
  [SMALL_STATE(413)] = 9899,
  [SMALL_STATE(414)] = 9909,
  [SMALL_STATE(415)] = 9917,
  [SMALL_STATE(416)] = 9925,
  [SMALL_STATE(417)] = 9933,
  [SMALL_STATE(418)] = 9941,
  [SMALL_STATE(419)] = 9949,
  [SMALL_STATE(420)] = 9957,
  [SMALL_STATE(421)] = 9967,
  [SMALL_STATE(422)] = 9977,
  [SMALL_STATE(423)] = 9985,
  [SMALL_STATE(424)] = 9992,
  [SMALL_STATE(425)] = 9999,
  [SMALL_STATE(426)] = 10006,
  [SMALL_STATE(427)] = 10013,
  [SMALL_STATE(428)] = 10020,
  [SMALL_STATE(429)] = 10027,
  [SMALL_STATE(430)] = 10034,
  [SMALL_STATE(431)] = 10041,
  [SMALL_STATE(432)] = 10048,
  [SMALL_STATE(433)] = 10055,
  [SMALL_STATE(434)] = 10062,
  [SMALL_STATE(435)] = 10069,
  [SMALL_STATE(436)] = 10076,
  [SMALL_STATE(437)] = 10083,
  [SMALL_STATE(438)] = 10090,
  [SMALL_STATE(439)] = 10097,
  [SMALL_STATE(440)] = 10104,
  [SMALL_STATE(441)] = 10111,
  [SMALL_STATE(442)] = 10118,
  [SMALL_STATE(443)] = 10125,
  [SMALL_STATE(444)] = 10132,
  [SMALL_STATE(445)] = 10139,
  [SMALL_STATE(446)] = 10146,
  [SMALL_STATE(447)] = 10153,
  [SMALL_STATE(448)] = 10160,
  [SMALL_STATE(449)] = 10167,
  [SMALL_STATE(450)] = 10174,
  [SMALL_STATE(451)] = 10181,
  [SMALL_STATE(452)] = 10188,
  [SMALL_STATE(453)] = 10195,
  [SMALL_STATE(454)] = 10202,
  [SMALL_STATE(455)] = 10209,
  [SMALL_STATE(456)] = 10216,
  [SMALL_STATE(457)] = 10223,
  [SMALL_STATE(458)] = 10230,
  [SMALL_STATE(459)] = 10237,
  [SMALL_STATE(460)] = 10244,
  [SMALL_STATE(461)] = 10251,
  [SMALL_STATE(462)] = 10258,
  [SMALL_STATE(463)] = 10265,
  [SMALL_STATE(464)] = 10272,
  [SMALL_STATE(465)] = 10279,
  [SMALL_STATE(466)] = 10286,
  [SMALL_STATE(467)] = 10293,
  [SMALL_STATE(468)] = 10300,
  [SMALL_STATE(469)] = 10307,
  [SMALL_STATE(470)] = 10314,
  [SMALL_STATE(471)] = 10321,
  [SMALL_STATE(472)] = 10328,
  [SMALL_STATE(473)] = 10335,
  [SMALL_STATE(474)] = 10342,
  [SMALL_STATE(475)] = 10349,
  [SMALL_STATE(476)] = 10356,
  [SMALL_STATE(477)] = 10363,
  [SMALL_STATE(478)] = 10370,
  [SMALL_STATE(479)] = 10377,
  [SMALL_STATE(480)] = 10384,
  [SMALL_STATE(481)] = 10391,
  [SMALL_STATE(482)] = 10398,
  [SMALL_STATE(483)] = 10405,
  [SMALL_STATE(484)] = 10412,
  [SMALL_STATE(485)] = 10419,
  [SMALL_STATE(486)] = 10426,
  [SMALL_STATE(487)] = 10433,
  [SMALL_STATE(488)] = 10440,
  [SMALL_STATE(489)] = 10447,
  [SMALL_STATE(490)] = 10454,
  [SMALL_STATE(491)] = 10461,
  [SMALL_STATE(492)] = 10468,
  [SMALL_STATE(493)] = 10475,
  [SMALL_STATE(494)] = 10482,
  [SMALL_STATE(495)] = 10489,
  [SMALL_STATE(496)] = 10496,
  [SMALL_STATE(497)] = 10503,
  [SMALL_STATE(498)] = 10510,
  [SMALL_STATE(499)] = 10517,
  [SMALL_STATE(500)] = 10524,
  [SMALL_STATE(501)] = 10531,
  [SMALL_STATE(502)] = 10538,
  [SMALL_STATE(503)] = 10545,
  [SMALL_STATE(504)] = 10552,
  [SMALL_STATE(505)] = 10559,
  [SMALL_STATE(506)] = 10566,
  [SMALL_STATE(507)] = 10573,
  [SMALL_STATE(508)] = 10580,
  [SMALL_STATE(509)] = 10587,
  [SMALL_STATE(510)] = 10594,
  [SMALL_STATE(511)] = 10601,
  [SMALL_STATE(512)] = 10608,
  [SMALL_STATE(513)] = 10615,
  [SMALL_STATE(514)] = 10622,
  [SMALL_STATE(515)] = 10629,
  [SMALL_STATE(516)] = 10636,
  [SMALL_STATE(517)] = 10643,
  [SMALL_STATE(518)] = 10650,
  [SMALL_STATE(519)] = 10657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 59),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 59),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 42),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 42),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 28),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 28),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 56),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 56),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 75),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 75),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 74),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 74),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 70),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 70),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 69),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 69),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 68),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 68),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 43),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 43),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 18),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 58),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 58),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 57),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 57),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(41),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(41),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(49),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(449),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(249),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(230),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(281),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(38),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(221),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(71),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(36),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(131),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(25),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(41),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(41),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(49),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(449),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(249),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(230),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(281),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(38),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(278),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(71),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(131),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(29),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 53),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 53),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 40),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 40),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 39),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 39),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 38),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 38),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 25),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 25),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 55),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 55),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3, .production_id = 17),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3, .production_id = 17),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 26),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 26),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36), SHIFT_REPEAT(314),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 50),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 50),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_lu, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_lu, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 64),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 64),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 34),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 34),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 65),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 65),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 67),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 67),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 66),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 66),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 35),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 35),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 54),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 54),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 24),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 24),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_sequence, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_sequence, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_sequence, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_sequence, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(475),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(123),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(467),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(258),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(438),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(187),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1, .production_id = 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1, .production_id = 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2, .production_id = 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 15),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 15),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 22),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 22),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3, .production_id = 6),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3, .production_id = 6),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(253),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6, .production_id = 22),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6, .production_id = 22),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3, .production_id = 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2, .production_id = 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2, .production_id = 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 15),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 15),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 14),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 14),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_clip, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_clip, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 14),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 14),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 6),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 6),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_clip, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_clip, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_set_insert, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_set_insert, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(450),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 36), SHIFT_REPEAT(302),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(450),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(450),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_hasprefix, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_hasprefix, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_isprefix, 1),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_isprefix, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_hassuffix, 1),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_hassuffix, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_eq, 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_eq, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_in, 1),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_in, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_contains, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_contains, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op_issuffix, 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op_issuffix, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(220),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(438),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(443),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 1),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_elif_choice, 3, .production_id = 12),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_elif_choice, 3, .production_id = 12),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_elif_choice, 3, .production_id = 12),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_elif_choice, 3, .production_id = 12),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_if_choice, 3, .production_id = 12),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_if_choice, 3, .production_id = 12),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_if_choice, 3, .production_id = 12),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_if_choice, 3, .production_id = 12),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_if_choice, 3, .production_id = 12),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_if_choice, 3, .production_id = 12),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_elif_choice, 3, .production_id = 12),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_elif_choice, 3, .production_id = 12),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inserted, 1),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inserted, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4, .production_id = 10),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(343),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(328),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(413),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(283),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_prefix, 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(121),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(193),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 32),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_tag, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4, .production_id = 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4, .production_id = 2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 45),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_pair, 2, .production_id = 8),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6, .production_id = 9),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5, .production_id = 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 46),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 47),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_surf, 5, .production_id = 48),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 49),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6, .production_id = 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 13),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 16),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7, .production_id = 9),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3, .production_id = 7),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 60),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 61),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 62),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_var, 3, .production_id = 33),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 63),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_chunk_attr, 4, .production_id = 31),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_str, 4, .production_id = 31),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 20),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 21),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 23),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 71),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_var, 4, .production_id = 31),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 30),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 72),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 73),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 29),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5, .production_id = 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 76),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 77),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11, .production_id = 78),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2, .production_id = 4),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 1),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_always_choice, 2, .production_id = 5),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_else_choice, 2, .production_id = 5),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_always_choice, 2, .production_id = 5),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_tok, 1),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_always_choice, 2, .production_id = 5),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_else_choice, 2, .production_id = 5),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_else_choice, 2, .production_id = 5),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
