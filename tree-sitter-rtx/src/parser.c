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
#define STATE_COUNT 530
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 76

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
  aux_sym_str_op_token1 = 24,
  aux_sym_str_op_token2 = 25,
  aux_sym_str_op_token3 = 26,
  aux_sym_str_op_token4 = 27,
  aux_sym_str_op_token5 = 28,
  aux_sym_str_op_token6 = 29,
  aux_sym_str_op_token7 = 30,
  aux_sym_str_op_token8 = 31,
  aux_sym_str_op_token9 = 32,
  aux_sym_str_op_token10 = 33,
  aux_sym_str_op_token11 = 34,
  aux_sym_str_op_token12 = 35,
  aux_sym_str_op_token13 = 36,
  aux_sym_str_op_token14 = 37,
  aux_sym_str_op_token15 = 38,
  aux_sym_str_op_token16 = 39,
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
  sym_str_op = 79,
  sym_and = 80,
  sym_or = 81,
  sym_not = 82,
  sym__string_val = 83,
  sym__cond_base_bool = 84,
  sym__cond_bool = 85,
  sym_condition = 86,
  sym_pattern_element = 87,
  sym_unknown = 88,
  sym_set_var = 89,
  sym_output_var_set = 90,
  sym_macro_name = 91,
  sym_literal_lu = 92,
  sym_null_lu = 93,
  sym_output_element = 94,
  sym_if_tok = 95,
  sym_elif_tok = 96,
  sym_else_tok = 97,
  sym_string_cond = 98,
  sym_chunk_cond = 99,
  sym_lu_cond = 100,
  sym_reduce_output = 101,
  sym_output_chunk = 102,
  sym__chunk_val = 103,
  sym__lu_val = 104,
  sym_reduce_rule_group = 105,
  sym_set_surf = 106,
  sym_set_global_var = 107,
  sym_set_global_str = 108,
  sym_set_chunk_attr = 109,
  sym_reduce_rule = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_output_rule_repeat1 = 112,
  aux_sym_retag_rule_repeat1 = 113,
  aux_sym_attr_rule_repeat1 = 114,
  aux_sym_pattern_element_repeat1 = 115,
  aux_sym_output_var_set_repeat1 = 116,
  aux_sym_literal_lu_repeat1 = 117,
  aux_sym_string_cond_repeat1 = 118,
  aux_sym_chunk_cond_repeat1 = 119,
  aux_sym_lu_cond_repeat1 = 120,
  aux_sym_reduce_output_repeat1 = 121,
  aux_sym_output_chunk_repeat1 = 122,
  aux_sym_reduce_rule_group_repeat1 = 123,
  aux_sym_reduce_rule_group_repeat2 = 124,
  aux_sym_reduce_rule_repeat1 = 125,
  aux_sym_reduce_rule_repeat2 = 126,
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
  [aux_sym_str_op_token1] = "str_op_token1",
  [aux_sym_str_op_token2] = "str_op_token2",
  [aux_sym_str_op_token3] = "str_op_token3",
  [aux_sym_str_op_token4] = "str_op_token4",
  [aux_sym_str_op_token5] = "str_op_token5",
  [aux_sym_str_op_token6] = "str_op_token6",
  [aux_sym_str_op_token7] = "str_op_token7",
  [aux_sym_str_op_token8] = "str_op_token8",
  [aux_sym_str_op_token9] = "str_op_token9",
  [aux_sym_str_op_token10] = "str_op_token10",
  [aux_sym_str_op_token11] = "str_op_token11",
  [aux_sym_str_op_token12] = "str_op_token12",
  [aux_sym_str_op_token13] = "str_op_token13",
  [aux_sym_str_op_token14] = "str_op_token14",
  [aux_sym_str_op_token15] = "str_op_token15",
  [aux_sym_str_op_token16] = "str_op_token16",
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
  [sym_str_op] = "str_op",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_not] = "not",
  [sym__string_val] = "_string_val",
  [sym__cond_base_bool] = "_cond_base_bool",
  [sym__cond_bool] = "_cond_bool",
  [sym_condition] = "condition",
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
  [sym_string_cond] = "string_cond",
  [sym_chunk_cond] = "chunk_cond",
  [sym_lu_cond] = "lu_cond",
  [sym_reduce_output] = "reduce_output",
  [sym_output_chunk] = "output_chunk",
  [sym__chunk_val] = "_chunk_val",
  [sym__lu_val] = "_lu_val",
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
  [aux_sym_str_op_token1] = aux_sym_str_op_token1,
  [aux_sym_str_op_token2] = aux_sym_str_op_token2,
  [aux_sym_str_op_token3] = aux_sym_str_op_token3,
  [aux_sym_str_op_token4] = aux_sym_str_op_token4,
  [aux_sym_str_op_token5] = aux_sym_str_op_token5,
  [aux_sym_str_op_token6] = aux_sym_str_op_token6,
  [aux_sym_str_op_token7] = aux_sym_str_op_token7,
  [aux_sym_str_op_token8] = aux_sym_str_op_token8,
  [aux_sym_str_op_token9] = aux_sym_str_op_token9,
  [aux_sym_str_op_token10] = aux_sym_str_op_token10,
  [aux_sym_str_op_token11] = aux_sym_str_op_token11,
  [aux_sym_str_op_token12] = aux_sym_str_op_token12,
  [aux_sym_str_op_token13] = aux_sym_str_op_token13,
  [aux_sym_str_op_token14] = aux_sym_str_op_token14,
  [aux_sym_str_op_token15] = aux_sym_str_op_token15,
  [aux_sym_str_op_token16] = aux_sym_str_op_token16,
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
  [sym_str_op] = sym_str_op,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_not] = sym_not,
  [sym__string_val] = sym__string_val,
  [sym__cond_base_bool] = sym__cond_base_bool,
  [sym__cond_bool] = sym__cond_bool,
  [sym_condition] = sym_condition,
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
  [sym_string_cond] = sym_string_cond,
  [sym_chunk_cond] = sym_chunk_cond,
  [sym_lu_cond] = sym_lu_cond,
  [sym_reduce_output] = sym_reduce_output,
  [sym_output_chunk] = sym_output_chunk,
  [sym__chunk_val] = sym__chunk_val,
  [sym__lu_val] = sym__lu_val,
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
  [aux_sym_str_op_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_op_token16] = {
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
  [sym_string_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_cond] = {
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
  field_val = 20,
  field_value = 21,
  field_var_name = 22,
  field_vars = 23,
  field_weight = 24,
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
  [field_val] = "val",
  [field_value] = "value",
  [field_var_name] = "var_name",
  [field_vars] = "vars",
  [field_weight] = "weight",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 4},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 1},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 5},
  [18] = {.index = 36, .length = 5},
  [19] = {.index = 41, .length = 2},
  [20] = {.index = 43, .length = 2},
  [21] = {.index = 45, .length = 3},
  [22] = {.index = 48, .length = 6},
  [23] = {.index = 54, .length = 3},
  [24] = {.index = 57, .length = 2},
  [25] = {.index = 59, .length = 3},
  [26] = {.index = 62, .length = 3},
  [27] = {.index = 65, .length = 6},
  [28] = {.index = 71, .length = 2},
  [29] = {.index = 73, .length = 2},
  [30] = {.index = 75, .length = 2},
  [31] = {.index = 77, .length = 1},
  [32] = {.index = 78, .length = 7},
  [33] = {.index = 85, .length = 8},
  [34] = {.index = 93, .length = 4},
  [35] = {.index = 97, .length = 7},
  [36] = {.index = 104, .length = 4},
  [37] = {.index = 108, .length = 4},
  [38] = {.index = 112, .length = 2},
  [39] = {.index = 114, .length = 3},
  [40] = {.index = 117, .length = 3},
  [41] = {.index = 120, .length = 3},
  [42] = {.index = 123, .length = 7},
  [43] = {.index = 130, .length = 3},
  [44] = {.index = 133, .length = 4},
  [45] = {.index = 137, .length = 1},
  [46] = {.index = 138, .length = 4},
  [47] = {.index = 142, .length = 2},
  [48] = {.index = 144, .length = 8},
  [49] = {.index = 152, .length = 5},
  [50] = {.index = 157, .length = 8},
  [51] = {.index = 165, .length = 5},
  [52] = {.index = 170, .length = 8},
  [53] = {.index = 178, .length = 3},
  [54] = {.index = 181, .length = 3},
  [55] = {.index = 184, .length = 4},
  [56] = {.index = 188, .length = 4},
  [57] = {.index = 192, .length = 5},
  [58] = {.index = 197, .length = 5},
  [59] = {.index = 202, .length = 4},
  [60] = {.index = 206, .length = 4},
  [61] = {.index = 210, .length = 3},
  [62] = {.index = 213, .length = 3},
  [63] = {.index = 216, .length = 9},
  [64] = {.index = 225, .length = 9},
  [65] = {.index = 234, .length = 3},
  [66] = {.index = 237, .length = 4},
  [67] = {.index = 241, .length = 4},
  [68] = {.index = 245, .length = 5},
  [69] = {.index = 250, .length = 5},
  [70] = {.index = 255, .length = 6},
  [71] = {.index = 261, .length = 4},
  [72] = {.index = 265, .length = 5},
  [73] = {.index = 270, .length = 7},
  [74] = {.index = 277, .length = 6},
  [75] = {.index = 283, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_pos, 0},
  [2] =
    {field_output, 1},
    {field_pattern, 0},
  [4] =
    {field_lemma, 0},
  [5] =
    {field_output, 2},
    {field_pattern, 1},
    {field_rule_name, 0},
  [8] =
    {field_src, 0},
    {field_trg, 1},
  [10] =
    {field_src_attr, 0},
    {field_trg_attr, 2},
  [12] =
    {field_src, 1},
    {field_trg, 2},
  [14] =
    {field_val, 0},
  [15] =
    {field_output, 3},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [19] =
    {field_lemma, 1},
  [20] =
    {field_lemma, 0},
    {field_lemma, 1},
  [22] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 3},
    {field_pattern, 0},
  [26] =
    {field_lemma, 0},
    {field_lit_tag, 2},
  [28] =
    {field_var_name, 1},
  [29] =
    {field_attr, 1},
    {field_pos, 0},
  [31] =
    {field_output, 4},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [36] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 4},
    {field_pattern, 1},
    {field_rule_name, 0},
  [41] =
    {field_lemma, 1},
    {field_lemma, 2},
  [43] =
    {field_output, 4},
    {field_pattern, 0},
  [45] =
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_vars, 3},
  [48] =
    {field_complex_tag, 3, .inherited = true},
    {field_lemcase, 3, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_lit_tag, 3, .inherited = true},
    {field_parent_tag, 3, .inherited = true},
  [54] =
    {field_lemma, 0},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
  [57] =
    {field_attr, 2},
    {field_pos, 0},
  [59] =
    {field_attr, 1},
    {field_pos, 0},
    {field_side, 2},
  [62] =
    {field_output, 5},
    {field_pattern, 1},
    {field_rule_name, 0},
  [65] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 5},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [71] =
    {field_name, 1},
    {field_value, 3},
  [73] =
    {field_output, 5},
    {field_pattern, 0},
  [75] =
    {field_name, 0},
    {field_value, 2},
  [77] =
    {field_lit_tag, 1},
  [78] =
    {field_complex_tag, 3, .inherited = true},
    {field_lemcase, 3, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_lit_tag, 3, .inherited = true},
    {field_parent_tag, 3, .inherited = true},
    {field_vars, 4},
  [85] =
    {field_complex_tag, 0, .inherited = true},
    {field_complex_tag, 1, .inherited = true},
    {field_lemcase, 0, .inherited = true},
    {field_lemcase, 1, .inherited = true},
    {field_lit_tag, 0, .inherited = true},
    {field_lit_tag, 1, .inherited = true},
    {field_parent_tag, 0, .inherited = true},
    {field_parent_tag, 1, .inherited = true},
  [93] =
    {field_lemma, 0},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_vars, 4},
  [97] =
    {field_complex_tag, 4, .inherited = true},
    {field_lemcase, 4, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 4, .inherited = true},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_parent_tag, 4, .inherited = true},
  [104] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_lemma, 0},
  [108] =
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemma, 0},
  [112] =
    {field_attr, 3},
    {field_var_name, 1},
  [114] =
    {field_attr, 2},
    {field_pos, 0},
    {field_side, 3},
  [117] =
    {field_attr, 1},
    {field_convert, 3},
    {field_pos, 0},
  [120] =
    {field_attr, 3},
    {field_inserted, 0},
    {field_pos, 1},
  [123] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 6},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [130] =
    {field_output, 6},
    {field_pattern, 1},
    {field_rule_name, 0},
  [133] =
    {field_output, 6},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [137] =
    {field_side, 2},
  [138] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 6},
    {field_pattern, 0},
  [142] =
    {field_parent_tag, 1},
    {field_parent_tag, 2},
  [144] =
    {field_complex_tag, 4, .inherited = true},
    {field_lemcase, 4, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 4, .inherited = true},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_parent_tag, 4, .inherited = true},
    {field_vars, 5},
  [152] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_lemma, 0},
    {field_vars, 5},
  [157] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
  [165] =
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemma, 0},
    {field_vars, 5},
  [170] =
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
  [178] =
    {field_attr, 3},
    {field_side, 4},
    {field_var_name, 1},
  [181] =
    {field_attr, 2},
    {field_convert, 4},
    {field_pos, 0},
  [184] =
    {field_attr, 1},
    {field_convert, 4},
    {field_pos, 0},
    {field_side, 2},
  [188] =
    {field_attr, 3},
    {field_inserted, 0},
    {field_pos, 1},
    {field_side, 4},
  [192] =
    {field_output, 7},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [197] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 7},
    {field_pattern, 1},
    {field_rule_name, 0},
  [202] =
    {field_output, 7},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [206] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 7},
    {field_pattern, 0},
  [210] =
    {field_complex_tag, 1},
    {field_complex_tag, 2},
    {field_complex_tag, 3},
  [213] =
    {field_lemcase, 1},
    {field_lemcase, 2},
    {field_lemcase, 3},
  [216] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
    {field_vars, 6},
  [225] =
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
    {field_vars, 6},
  [234] =
    {field_attr, 3},
    {field_convert, 5},
    {field_var_name, 1},
  [237] =
    {field_attr, 2},
    {field_convert, 5},
    {field_pos, 0},
    {field_side, 3},
  [241] =
    {field_attr, 3},
    {field_convert, 5},
    {field_inserted, 0},
    {field_pos, 1},
  [245] =
    {field_output, 8},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [250] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 8},
    {field_pattern, 1},
    {field_rule_name, 0},
  [255] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 8},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [261] =
    {field_attr, 3},
    {field_convert, 6},
    {field_side, 4},
    {field_var_name, 1},
  [265] =
    {field_attr, 3},
    {field_convert, 6},
    {field_inserted, 0},
    {field_pos, 1},
    {field_side, 4},
  [270] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 9},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [277] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 9},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [283] =
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
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(358);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(360);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(363);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
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
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(366);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
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
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(369);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(372);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(375);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
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
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(384);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(387);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_str_op_token16);
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
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
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
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 313},
  [122] = {.lex_state = 313},
  [123] = {.lex_state = 313},
  [124] = {.lex_state = 313},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 313},
  [127] = {.lex_state = 313},
  [128] = {.lex_state = 313},
  [129] = {.lex_state = 313},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 313},
  [132] = {.lex_state = 313},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 313},
  [138] = {.lex_state = 313},
  [139] = {.lex_state = 313},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 313},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 313},
  [174] = {.lex_state = 313},
  [175] = {.lex_state = 313},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 313},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 313},
  [185] = {.lex_state = 313},
  [186] = {.lex_state = 313},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 313},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 313},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 313},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 313},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 313},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 313},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 313},
  [217] = {.lex_state = 313},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 313},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 313},
  [234] = {.lex_state = 313},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 313},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 313},
  [273] = {.lex_state = 313},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 313},
  [284] = {.lex_state = 313},
  [285] = {.lex_state = 313},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 313},
  [288] = {.lex_state = 313},
  [289] = {.lex_state = 313},
  [290] = {.lex_state = 313},
  [291] = {.lex_state = 313},
  [292] = {.lex_state = 313},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 313},
  [295] = {.lex_state = 313},
  [296] = {.lex_state = 313},
  [297] = {.lex_state = 313},
  [298] = {.lex_state = 313},
  [299] = {.lex_state = 313},
  [300] = {.lex_state = 313},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 313},
  [303] = {.lex_state = 313},
  [304] = {.lex_state = 313},
  [305] = {.lex_state = 10},
  [306] = {.lex_state = 313},
  [307] = {.lex_state = 313},
  [308] = {.lex_state = 313},
  [309] = {.lex_state = 313},
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
  [322] = {.lex_state = 313},
  [323] = {.lex_state = 313},
  [324] = {.lex_state = 313},
  [325] = {.lex_state = 12},
  [326] = {.lex_state = 313},
  [327] = {.lex_state = 313},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 313},
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
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 12},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 10},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 313},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 313},
  [375] = {.lex_state = 313},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 313},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 313},
  [381] = {.lex_state = 313},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 313},
  [386] = {.lex_state = 313},
  [387] = {.lex_state = 313},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 313},
  [392] = {.lex_state = 313},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 313},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 313},
  [401] = {.lex_state = 313},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 313},
  [404] = {.lex_state = 313},
  [405] = {.lex_state = 313},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 313},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 313},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 313},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 313},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 313},
  [420] = {.lex_state = 313},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 313},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 313},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 313},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 313},
  [434] = {.lex_state = 313},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 313},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 313},
  [442] = {.lex_state = 313},
  [443] = {.lex_state = 313},
  [444] = {.lex_state = 313},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 313},
  [447] = {.lex_state = 313},
  [448] = {.lex_state = 313},
  [449] = {.lex_state = 313},
  [450] = {.lex_state = 313},
  [451] = {.lex_state = 313},
  [452] = {.lex_state = 313},
  [453] = {.lex_state = 313},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 313},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 313},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 313},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 313},
  [470] = {.lex_state = 313},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 313},
  [473] = {.lex_state = 313},
  [474] = {.lex_state = 313},
  [475] = {.lex_state = 313},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 313},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 313},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 313},
  [484] = {.lex_state = 313},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 313},
  [490] = {.lex_state = 313},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 313},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 313},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 313},
  [497] = {.lex_state = 313},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 313},
  [502] = {.lex_state = 313},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 313},
  [509] = {.lex_state = 313},
  [510] = {.lex_state = 313},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 313},
  [515] = {.lex_state = 313},
  [516] = {.lex_state = 313},
  [517] = {.lex_state = 313},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 313},
  [520] = {.lex_state = 313},
  [521] = {.lex_state = 313},
  [522] = {.lex_state = 313},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 313},
  [525] = {.lex_state = 313},
  [526] = {.lex_state = 313},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
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
    [sym_source_file] = STATE(445),
    [sym_output_rule] = STATE(211),
    [sym_retag_rule] = STATE(211),
    [sym_attr_rule] = STATE(211),
    [sym_reduce_rule_group] = STATE(211),
    [aux_sym_source_file_repeat1] = STATE(211),
    [aux_sym_reduce_rule_group_repeat1] = STATE(325),
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(11), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(19), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(27), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(35), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(43), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(49), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(55), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(61), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(65), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(69), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(73), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(77), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(81), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(85), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(89), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(93), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(97), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(101), 28,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(105), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(109), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(113), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
  [873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(117), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(121), 27,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
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
  [951] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      sym_conjoin,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(151), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(27), 7,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      aux_sym_reduce_output_repeat1,
  [1020] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(156), 1,
      sym_ident,
    ACTIONS(159), 1,
      aux_sym_num_token1,
    ACTIONS(162), 1,
      sym_global_var_prefix,
    ACTIONS(165), 1,
      sym_magic,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_conjoin,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(191), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(26), 7,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      aux_sym_reduce_output_repeat1,
  [1089] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(196), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(26), 7,
      sym_output_element,
      sym_chunk_cond,
      sym_lu_cond,
      sym_output_chunk,
      sym__chunk_val,
      sym__lu_val,
      aux_sym_reduce_output_repeat1,
  [1158] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(204), 1,
      sym_global_var_prefix,
    ACTIONS(206), 1,
      sym_magic,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_conjoin,
    STATE(162), 1,
      sym_insert,
    STATE(232), 1,
      sym_inserted,
    STATE(276), 1,
      sym_literal_lu,
    ACTIONS(218), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
    STATE(192), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
    STATE(195), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [1225] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(204), 1,
      sym_global_var_prefix,
    ACTIONS(206), 1,
      sym_magic,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_conjoin,
    STATE(162), 1,
      sym_insert,
    STATE(232), 1,
      sym_inserted,
    STATE(276), 1,
      sym_literal_lu,
    ACTIONS(220), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
    STATE(187), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
    STATE(196), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [1292] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      sym_conjoin,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(222), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(456), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
    STATE(460), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [1359] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      sym_conjoin,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(224), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(480), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
    STATE(487), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [1426] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_string,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(232), 1,
      aux_sym_num_token1,
    ACTIONS(235), 1,
      sym_global_var_prefix,
    ACTIONS(238), 1,
      sym_magic,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(244), 1,
      anon_sym_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      sym_conjoin,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(250), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(261), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(32), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [1490] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(270), 1,
      anon_sym_LPAREN2,
    ACTIONS(272), 1,
      anon_sym_AT2,
    STATE(80), 1,
      sym_macro_name,
    STATE(102), 1,
      sym_output_var_set,
    ACTIONS(266), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(264), 11,
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
  [1531] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(278), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(41), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [1594] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(282), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(32), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [1657] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      aux_sym_if_tok_token1,
    ACTIONS(300), 1,
      sym_always_tok,
    STATE(70), 1,
      sym_not,
    STATE(400), 1,
      sym_if_tok,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(237), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(296), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(60), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [1720] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(304), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(43), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [1783] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(308), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(42), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [1846] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(270), 1,
      anon_sym_LPAREN2,
    ACTIONS(272), 1,
      anon_sym_AT2,
    STATE(81), 1,
      sym_macro_name,
    STATE(112), 1,
      sym_output_var_set,
    ACTIONS(312), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(310), 11,
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
  [1887] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(316), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(35), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [1950] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(282), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(32), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [2013] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(282), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(32), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [2076] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(282), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(32), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      aux_sym_output_chunk_repeat1,
  [2139] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_literal_lu_repeat1,
    STATE(107), 1,
      sym_output_var_set,
    ACTIONS(326), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(324), 12,
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
  [2177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_literal_lu_repeat1,
    STATE(93), 1,
      sym_output_var_set,
    ACTIONS(332), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(330), 12,
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
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(334), 15,
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
  [2245] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(50), 1,
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
  [2283] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_literal_lu_repeat1,
    STATE(96), 1,
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
  [2321] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_literal_lu_repeat1,
    STATE(95), 1,
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
  [2359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_literal_lu_repeat1,
    STATE(108), 1,
      sym_output_var_set,
    ACTIONS(352), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(350), 12,
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
  [2397] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(270), 1,
      anon_sym_LPAREN2,
    STATE(79), 1,
      sym_macro_name,
    STATE(105), 1,
      sym_output_var_set,
    ACTIONS(356), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(354), 11,
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
  [2435] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_literal_lu_repeat1,
    STATE(103), 1,
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
  [2473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(270), 1,
      anon_sym_LPAREN2,
    STATE(71), 1,
      sym_macro_name,
    STATE(110), 1,
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
  [2511] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(270), 1,
      anon_sym_LPAREN2,
    STATE(81), 1,
      sym_macro_name,
    STATE(112), 1,
      sym_output_var_set,
    ACTIONS(312), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(310), 11,
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
  [2549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(270), 1,
      anon_sym_LPAREN2,
    STATE(80), 1,
      sym_macro_name,
    STATE(102), 1,
      sym_output_var_set,
    ACTIONS(266), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(264), 11,
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
  [2587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_literal_lu_repeat1,
    STATE(97), 1,
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
  [2625] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(370), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(529), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [2684] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(204), 1,
      sym_global_var_prefix,
    ACTIONS(206), 1,
      sym_magic,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      sym_conjoin,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_insert,
    STATE(232), 1,
      sym_inserted,
    STATE(276), 1,
      sym_literal_lu,
    ACTIONS(374), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
    STATE(261), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [2743] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(204), 1,
      sym_global_var_prefix,
    ACTIONS(206), 1,
      sym_magic,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      sym_conjoin,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_insert,
    STATE(232), 1,
      sym_inserted,
    STATE(276), 1,
      sym_literal_lu,
    ACTIONS(220), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
    STATE(187), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [2802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(113), 1,
      sym_not,
    STATE(127), 1,
      sym_str_op,
    ACTIONS(378), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(380), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    ACTIONS(376), 13,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
  [2837] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(382), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(500), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [2896] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(384), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(503), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [2955] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(224), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(480), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [3014] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(386), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(513), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [3073] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(204), 1,
      sym_global_var_prefix,
    ACTIONS(206), 1,
      sym_magic,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      sym_conjoin,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_insert,
    STATE(232), 1,
      sym_inserted,
    STATE(276), 1,
      sym_literal_lu,
    ACTIONS(218), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(172), 2,
      sym_num,
      sym_null_lu,
    STATE(192), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [3132] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(222), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(456), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [3191] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(388), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(425), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [3250] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      sym_global_var_prefix,
    ACTIONS(133), 1,
      sym_magic,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      sym_conjoin,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_literal_lu,
    STATE(155), 1,
      sym_insert,
    STATE(224), 1,
      sym_inserted,
    ACTIONS(390), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(55), 2,
      sym_num,
      sym_null_lu,
    STATE(373), 3,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
  [3309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(394), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(392), 13,
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
  [3342] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_not,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(236), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(296), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(60), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3396] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    STATE(105), 1,
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
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(399), 14,
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
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(403), 14,
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
  [3484] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_not,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(238), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(296), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(60), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3538] = 3,
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
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(411), 13,
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
  [3594] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_not,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(235), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(296), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(60), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3648] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_not,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(229), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(296), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(60), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    STATE(94), 1,
      sym_output_var_set,
    ACTIONS(417), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(415), 12,
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
  [3734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    STATE(112), 1,
      sym_output_var_set,
    ACTIONS(312), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(310), 12,
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
  [3766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK2,
    STATE(110), 1,
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
  [3798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 6,
      sym_ident,
      anon_sym_LBRACK,
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
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3826] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_not,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(228), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(296), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(60), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(423), 13,
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
  [3907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(427), 14,
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
  [3934] = 3,
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
  [3961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(435), 14,
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
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(439), 14,
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
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(443), 14,
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
  [4042] = 3,
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
  [4068] = 3,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4094] = 3,
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
  [4120] = 3,
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
  [4146] = 3,
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
  [4172] = 3,
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
  [4198] = 3,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4224] = 3,
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
  [4250] = 3,
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
  [4276] = 3,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [4302] = 3,
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
  [4328] = 3,
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
  [4354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(310), 13,
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
  [4380] = 3,
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
  [4406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(264), 13,
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
  [4432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(415), 13,
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
  [4458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(499), 13,
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
  [4484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(503), 13,
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
  [4510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(507), 13,
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
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(511), 13,
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
  [4562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(354), 13,
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
  [4588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(515), 13,
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
  [4614] = 3,
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
  [4640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym_str_op,
    ACTIONS(378), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(376), 13,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
  [4667] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(527), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_QMARK,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(423), 1,
      sym_reduce_output,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4715] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_QMARK,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(399), 1,
      sym_reduce_output,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4763] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_QMARK,
    STATE(390), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(545), 13,
      aux_sym_str_op_token1,
      aux_sym_str_op_token2,
      aux_sym_str_op_token3,
      aux_sym_str_op_token6,
      aux_sym_str_op_token7,
      aux_sym_str_op_token8,
      aux_sym_str_op_token9,
      aux_sym_str_op_token11,
      aux_sym_str_op_token12,
      aux_sym_str_op_token13,
      aux_sym_str_op_token14,
      aux_sym_str_op_token15,
      aux_sym_str_op_token16,
  [4835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(549), 11,
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
  [4859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(553), 11,
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
  [4883] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      anon_sym_QMARK,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(421), 1,
      sym_reduce_output,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4931] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(561), 1,
      sym_string,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(493), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4973] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(409), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5015] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(189), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5057] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(305), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5099] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_string,
    ACTIONS(576), 1,
      sym_ident,
    ACTIONS(579), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      sym_magic,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(593), 1,
      anon_sym_QMARK,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    ACTIONS(588), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5139] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(471), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5181] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(597), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(301), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5223] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(270), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5265] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(429), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(603), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5329] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(607), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(384), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5371] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      sym_string,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(462), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(611), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5435] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(615), 1,
      sym_string,
    ACTIONS(617), 1,
      sym_weight,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(362), 1,
      sym_reduce_rule,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(115), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5474] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(615), 1,
      sym_string,
    ACTIONS(617), 1,
      sym_weight,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(422), 1,
      sym_reduce_rule,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(115), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5513] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 1,
      sym_weight,
    ACTIONS(623), 1,
      anon_sym_AT,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(120), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5552] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(488), 2,
      sym_clip,
      sym_string_cond,
  [5590] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(505), 2,
      sym_clip,
      sym_string_cond,
  [5628] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(498), 2,
      sym_clip,
      sym_string_cond,
  [5666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    ACTIONS(631), 1,
      anon_sym_AT,
    STATE(151), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(627), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(625), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_AT,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(635), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(633), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5718] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(528), 2,
      sym_clip,
      sym_string_cond,
  [5756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(639), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(637), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(643), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(641), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(647), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(645), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(545), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(651), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(649), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_DOT,
    STATE(148), 1,
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
  [5890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(660), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(664), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(148), 1,
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
  [5951] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(116), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(156), 1,
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
  [6007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
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
  [6030] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(680), 1,
      sym_string,
    ACTIONS(682), 1,
      sym_ident,
    ACTIONS(684), 1,
      sym_global_var_prefix,
    ACTIONS(686), 1,
      sym_magic,
    STATE(102), 1,
      sym_literal_lu,
    STATE(227), 1,
      sym_inserted,
    STATE(54), 2,
      sym_num,
      sym_null_lu,
  [6065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(148), 1,
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
  [6088] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    ACTIONS(696), 1,
      anon_sym_AT2,
    STATE(213), 1,
      sym_macro_name,
    STATE(242), 1,
      sym_output_var_set,
    ACTIONS(310), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6117] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
    ACTIONS(521), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      sym_magic,
    ACTIONS(531), 1,
      anon_sym_STAR,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(501), 1,
      sym_attr_set_insert,
    STATE(509), 1,
      sym_attr_prefix,
    STATE(114), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_clip_side,
    ACTIONS(700), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(698), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6171] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(627), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(625), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    ACTIONS(696), 1,
      anon_sym_AT2,
    STATE(202), 1,
      sym_macro_name,
    STATE(274), 1,
      sym_output_var_set,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6223] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(704), 1,
      sym_string,
    ACTIONS(706), 1,
      sym_ident,
    ACTIONS(708), 1,
      sym_global_var_prefix,
    ACTIONS(710), 1,
      sym_magic,
    STATE(226), 1,
      sym_inserted,
    STATE(274), 1,
      sym_literal_lu,
    STATE(166), 2,
      sym_num,
      sym_null_lu,
  [6258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    STATE(145), 1,
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
  [6281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(716), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6299] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(206), 1,
      sym_macro_name,
    STATE(279), 1,
      sym_output_var_set,
    ACTIONS(362), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(213), 1,
      sym_macro_name,
    STATE(242), 1,
      sym_output_var_set,
    ACTIONS(310), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6351] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(257), 1,
      sym_output_var_set,
    ACTIONS(366), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym_literal_lu_repeat1,
    STATE(258), 1,
      sym_output_var_set,
    ACTIONS(342), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_literal_lu_repeat1,
    STATE(262), 1,
      sym_output_var_set,
    ACTIONS(346), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(275), 1,
      sym_output_var_set,
    ACTIONS(330), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(167), 1,
      aux_sym_literal_lu_repeat1,
    STATE(277), 1,
      sym_output_var_set,
    ACTIONS(324), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6481] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(202), 1,
      sym_macro_name,
    STATE(274), 1,
      sym_output_var_set,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6507] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(527), 1,
      sym_clip,
  [6541] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(512), 1,
      sym_clip,
  [6575] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(506), 1,
      sym_clip,
  [6609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(240), 1,
      sym_output_var_set,
    ACTIONS(358), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6635] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_literal_lu_repeat1,
    STATE(280), 1,
      sym_output_var_set,
    ACTIONS(338), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6661] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_global_var_prefix,
    ACTIONS(292), 1,
      sym_global_str_prefix,
    ACTIONS(563), 1,
      sym_ident,
    STATE(427), 1,
      sym_inserted,
    STATE(439), 1,
      sym_num,
    STATE(448), 1,
      sym_attr_prefix,
    STATE(499), 1,
      sym_clip,
  [6695] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(200), 1,
      sym_macro_name,
    STATE(248), 1,
      sym_output_var_set,
    ACTIONS(354), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(653), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6739] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(720), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    STATE(267), 1,
      sym_output_var_set,
    ACTIONS(350), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(722), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym_else_tok_token1,
    ACTIONS(726), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(392), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6804] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_ident,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(336), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6829] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_ident,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(342), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_ident,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(356), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6879] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    STATE(57), 1,
      sym_else_tok,
    STATE(193), 1,
      aux_sym_lu_cond_repeat1,
    STATE(392), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(745), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [6923] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(751), 1,
      aux_sym_else_tok_token1,
    ACTIONS(753), 1,
      aux_sym_else_tok_token2,
    STATE(126), 1,
      sym_else_tok,
    STATE(198), 1,
      aux_sym_string_cond_repeat1,
    STATE(404), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_ident,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(332), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6975] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(300), 1,
      sym_else_tok,
    STATE(419), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7002] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_else_tok,
    STATE(194), 1,
      aux_sym_lu_cond_repeat1,
    STATE(392), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7029] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_else_tok,
    STATE(218), 1,
      aux_sym_lu_cond_repeat1,
    STATE(392), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7056] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_else_tok,
    STATE(218), 1,
      aux_sym_lu_cond_repeat1,
    STATE(392), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7083] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(290), 1,
      sym_else_tok,
    STATE(419), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7110] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(285), 1,
      sym_else_tok,
    STATE(419), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_else_tok_token1,
    ACTIONS(743), 1,
      aux_sym_else_tok_token2,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(295), 1,
      sym_else_tok,
    STATE(419), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7164] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_else_tok_token1,
    ACTIONS(753), 1,
      aux_sym_else_tok_token2,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_else_tok,
    STATE(223), 1,
      aux_sym_string_cond_repeat1,
    STATE(404), 1,
      sym_elif_tok,
    ACTIONS(739), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(338), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [7213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(265), 1,
      sym_output_var_set,
    ACTIONS(415), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_else_tok_token1,
    ACTIONS(399), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(242), 1,
      sym_output_var_set,
    ACTIONS(310), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [7285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(370), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [7307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(603), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [7323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(248), 1,
      sym_output_var_set,
    ACTIONS(354), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(337), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [7365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_else_tok_token1,
    ACTIONS(403), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DOLLAR,
    ACTIONS(771), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [7397] = 3,
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
  [7413] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    STATE(325), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(214), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [7433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_else_tok_token1,
    STATE(212), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(419), 1,
      sym_elif_tok,
    ACTIONS(777), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(779), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_else_tok_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(279), 1,
      sym_output_var_set,
    ACTIONS(362), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
    ACTIONS(786), 1,
      sym_ident,
    STATE(325), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(214), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [7495] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(369), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [7517] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_ident,
    ACTIONS(791), 1,
      sym_magic,
    ACTIONS(793), 1,
      anon_sym_COLON,
    ACTIONS(795), 1,
      anon_sym_LT,
    STATE(272), 1,
      sym_colon,
    STATE(354), 1,
      sym_lit_tag,
    STATE(518), 1,
      sym_lu_cond,
  [7545] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      anon_sym_AT,
    STATE(260), 1,
      sym_attr_default,
    ACTIONS(797), 2,
      sym_string,
      sym_ident,
    STATE(231), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      aux_sym_else_tok_token1,
    STATE(218), 1,
      aux_sym_lu_cond_repeat1,
    STATE(392), 1,
      sym_elif_tok,
    ACTIONS(803), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(805), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_else_tok_token1,
    ACTIONS(419), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_else_tok_token1,
    ACTIONS(334), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_else_tok_token1,
    ACTIONS(411), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7639] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(733), 1,
      sym_global_var_prefix,
    ACTIONS(735), 1,
      sym_global_str_prefix,
    STATE(442), 1,
      sym_attr_prefix,
    STATE(371), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [7661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_else_tok_token1,
    STATE(223), 1,
      aux_sym_string_cond_repeat1,
    STATE(404), 1,
      sym_elif_tok,
    ACTIONS(810), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(812), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7683] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(686), 1,
      sym_magic,
    ACTIONS(817), 1,
      sym_string,
    ACTIONS(819), 1,
      sym_ident,
    STATE(54), 2,
      sym_num,
      sym_null_lu,
  [7706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_else_tok_token1,
    ACTIONS(423), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(821), 1,
      sym_string,
    ACTIONS(823), 1,
      sym_ident,
    ACTIONS(825), 1,
      sym_magic,
    STATE(165), 2,
      sym_num,
      sym_null_lu,
  [7744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(827), 1,
      sym_string,
    ACTIONS(829), 1,
      sym_ident,
    ACTIONS(831), 1,
      sym_magic,
    STATE(53), 2,
      sym_num,
      sym_null_lu,
  [7767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 2,
      sym_and,
      sym_or,
    ACTIONS(833), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(837), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(839), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(74), 2,
      sym_and,
      sym_or,
  [7801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(841), 5,
      sym_string,
      sym_weight,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
  [7816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(801), 1,
      anon_sym_AT,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    ACTIONS(845), 2,
      sym_string,
      sym_ident,
    STATE(234), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      sym_magic,
    ACTIONS(849), 1,
      sym_string,
    ACTIONS(851), 1,
      sym_ident,
    STATE(166), 2,
      sym_num,
      sym_null_lu,
  [7860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(801), 1,
      anon_sym_AT,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    ACTIONS(845), 2,
      sym_string,
      sym_ident,
    STATE(234), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    ACTIONS(863), 1,
      anon_sym_AT,
    ACTIONS(855), 2,
      sym_string,
      sym_ident,
    STATE(234), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(837), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(839), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(74), 2,
      sym_and,
      sym_or,
  [7921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 2,
      sym_and,
      sym_or,
    ACTIONS(833), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(837), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(839), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(74), 2,
      sym_and,
      sym_or,
  [7955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 2,
      sym_and,
      sym_or,
    ACTIONS(870), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(872), 5,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_GT,
  [7985] = 3,
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
  [7999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_else_tok_token1,
    ACTIONS(499), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8013] = 3,
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
  [8027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(827), 1,
      sym_string,
    ACTIONS(829), 1,
      sym_ident,
    STATE(53), 2,
      sym_num,
      sym_null_lu,
  [8047] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(817), 1,
      sym_string,
    ACTIONS(819), 1,
      sym_ident,
    STATE(54), 2,
      sym_num,
      sym_null_lu,
  [8067] = 3,
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
  [8081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      aux_sym_arrow_token1,
    ACTIONS(878), 1,
      sym_ident,
    ACTIONS(880), 1,
      anon_sym_GT,
    ACTIONS(882), 1,
      anon_sym_EQ,
    STATE(216), 1,
      sym_colon,
  [8103] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(884), 1,
      sym_string,
    ACTIONS(886), 1,
      sym_ident,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [8123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_else_tok_token1,
    ACTIONS(415), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8137] = 3,
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
  [8151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_else_tok_token1,
    ACTIONS(427), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8165] = 3,
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
  [8179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_else_tok_token1,
    ACTIONS(888), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8193] = 3,
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
  [8207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_else_tok_token1,
    ACTIONS(515), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_else_tok_token1,
    ACTIONS(511), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym_else_tok_token1,
    ACTIONS(549), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8249] = 3,
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
  [8263] = 3,
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
  [8277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(821), 1,
      sym_string,
    ACTIONS(823), 1,
      sym_ident,
    STATE(165), 2,
      sym_num,
      sym_null_lu,
  [8297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(801), 1,
      anon_sym_AT,
    ACTIONS(892), 2,
      sym_string,
      sym_ident,
    STATE(233), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [8315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_else_tok_token1,
    ACTIONS(894), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8329] = 3,
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
  [8343] = 3,
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
  [8357] = 3,
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
  [8371] = 3,
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
  [8385] = 3,
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
  [8399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_else_tok_token1,
    ACTIONS(507), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8413] = 3,
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
  [8427] = 3,
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
  [8441] = 3,
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
  [8455] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      sym_string,
    ACTIONS(904), 1,
      sym_ident,
    STATE(179), 2,
      sym_num,
      sym_null_lu,
  [8475] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(795), 1,
      anon_sym_LT,
    ACTIONS(906), 1,
      sym_ident,
    ACTIONS(908), 1,
      sym_magic,
    STATE(357), 1,
      sym_lit_tag,
    STATE(479), 1,
      sym_lu_cond,
  [8497] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(910), 1,
      sym_string,
    ACTIONS(912), 1,
      sym_ident,
    STATE(473), 1,
      sym_attr_prefix,
    STATE(474), 1,
      sym_attr_set_insert,
  [8519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_else_tok_token1,
    ACTIONS(310), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8533] = 3,
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
  [8547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_else_tok_token1,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym_else_tok_token1,
    ACTIONS(503), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_num_token1,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(849), 1,
      sym_string,
    ACTIONS(851), 1,
      sym_ident,
    STATE(166), 2,
      sym_num,
      sym_null_lu,
  [8595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_else_tok_token1,
    ACTIONS(354), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8609] = 3,
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
  [8623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_else_tok_token1,
    ACTIONS(553), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8637] = 3,
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
  [8651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(401), 1,
      sym_attr_set_insert,
    STATE(412), 1,
      sym_attr_pair,
    ACTIONS(914), 2,
      sym_string,
      sym_ident,
  [8679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(440), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(916), 3,
      sym_string,
      aux_sym_num_token1,
      sym_magic,
  [8707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 5,
      sym_ident,
      sym_magic,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
  [8718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(435), 1,
      sym_reduce_output,
  [8748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(504), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
    STATE(196), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      anon_sym_LBRACK,
    STATE(393), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [8797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [8808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
    STATE(252), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(507), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(348), 1,
      sym_attr_pair,
    STATE(401), 1,
      sym_attr_set_insert,
    ACTIONS(914), 2,
      sym_string,
      sym_ident,
  [8855] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 1,
      anon_sym_LBRACK,
    STATE(388), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [8874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(460), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LBRACK,
    STATE(180), 1,
      sym_attr_set_insert,
    ACTIONS(930), 2,
      sym_string,
      sym_ident,
  [8906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(486), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [8932] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(938), 1,
      anon_sym_LBRACK,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(413), 1,
      sym_reduce_output,
  [8951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(487), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
    STATE(195), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [8981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [8992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(383), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_ident,
    ACTIONS(944), 1,
      anon_sym_DOLLAR,
    ACTIONS(946), 1,
      anon_sym_LBRACK,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
  [9024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(394), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(408), 1,
      sym_reduce_output,
  [9072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(378), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_ident,
    ACTIONS(952), 1,
      anon_sym_DOLLAR,
    ACTIONS(954), 1,
      anon_sym_LBRACK,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
  [9120] = 5,
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
  [9136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(389), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(397), 1,
      sym_reduce_output,
  [9168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_reduce_output,
    STATE(396), 1,
      sym_chunk_cond,
  [9184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 4,
      sym_string,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [9194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_ident,
    ACTIONS(970), 1,
      anon_sym_DOLLAR,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
  [9210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(410), 1,
      sym_reduce_output,
  [9226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(398), 1,
      sym_reduce_output,
  [9242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(406), 1,
      sym_reduce_output,
  [9258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(431), 1,
      sym_reduce_output,
  [9274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(432), 1,
      sym_reduce_output,
  [9290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      aux_sym_arrow_token1,
    ACTIONS(978), 1,
      sym_ident,
    STATE(134), 1,
      sym_arrow,
    STATE(351), 1,
      aux_sym_reduce_rule_group_repeat1,
  [9306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(416), 1,
      sym_reduce_output,
  [9322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_chunk_cond,
    STATE(430), 1,
      sym_reduce_output,
  [9338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SEMI,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_retag_rule_repeat1,
  [9390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      aux_sym_reduce_rule_repeat2,
  [9403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(997), 1,
      sym_ident,
    STATE(454), 1,
      sym_num,
  [9416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_SEMI,
    ACTIONS(1001), 1,
      anon_sym_PIPE,
    STATE(334), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(352), 1,
      aux_sym_reduce_rule_repeat2,
  [9455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      aux_sym_reduce_rule_repeat2,
  [9468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
    STATE(365), 1,
      aux_sym_reduce_rule_repeat2,
  [9481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      aux_sym_output_rule_repeat1,
  [9494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      aux_sym_output_rule_repeat1,
  [9520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      aux_sym_reduce_rule_repeat2,
  [9533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1029), 1,
      sym_always_tok,
    STATE(417), 1,
      sym_if_tok,
  [9559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_retag_rule_repeat1,
  [9572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_RBRACK,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_output_var_set_repeat1,
  [9598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    STATE(331), 1,
      aux_sym_retag_rule_repeat1,
  [9611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1044), 1,
      sym_always_tok,
    STATE(405), 1,
      sym_if_tok,
  [9624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1046), 1,
      sym_always_tok,
    STATE(433), 1,
      sym_if_tok,
  [9637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      aux_sym_arrow_token1,
    ACTIONS(1050), 1,
      sym_ident,
    STATE(351), 1,
      aux_sym_reduce_rule_group_repeat1,
  [9650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RBRACK,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_output_var_set_repeat1,
  [9676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
    STATE(359), 1,
      aux_sym_output_rule_repeat1,
  [9689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_SEMI,
    ACTIONS(1064), 1,
      anon_sym_PIPE,
    STATE(334), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1066), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      aux_sym_reduce_rule_repeat2,
  [9715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      aux_sym_output_rule_repeat1,
  [9728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1070), 1,
      sym_always_tok,
    STATE(387), 1,
      sym_if_tok,
  [9741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      aux_sym_output_rule_repeat1,
  [9754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1072), 1,
      sym_always_tok,
    STATE(415), 1,
      sym_if_tok,
  [9767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1074), 1,
      sym_always_tok,
    STATE(381), 1,
      sym_if_tok,
  [9780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_PIPE,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_output_var_set_repeat1,
  [9806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym_if_tok_token1,
    ACTIONS(1080), 1,
      sym_always_tok,
    STATE(400), 1,
      sym_if_tok,
  [9819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [9832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RBRACK,
    STATE(363), 1,
      aux_sym_output_var_set_repeat1,
  [9845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym_ident,
    STATE(372), 1,
      sym_lit_tag,
  [9858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_output_var_set_repeat1,
  [9871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_reduce_rule_repeat2,
  [9884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_reduce_rule_repeat2,
  [9897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 2,
      sym_string,
      sym_ident,
  [9929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_ident,
    STATE(402), 1,
      sym_set_var,
  [9979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_condition,
  [9989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_ident,
    STATE(366), 1,
      sym_set_var,
  [10031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_condition,
  [10041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_condition,
  [10075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_condition,
  [10085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym_condition,
  [10111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_condition,
  [10153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 2,
      sym_string,
      sym_ident,
  [10161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_condition,
  [10187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_condition,
  [10197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_condition,
  [10279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_condition,
  [10297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(294), 1,
      sym_condition,
  [10315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym_condition,
  [10325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(292), 1,
      sym_condition,
  [10359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    STATE(468), 1,
      sym_num,
  [10385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_condition,
  [10435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_ident,
    STATE(347), 1,
      sym_set_var,
  [10445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_DOT,
  [10484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
  [10491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym_ident,
  [10498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym_ident,
  [10505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      sym_ident,
  [10512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_ident,
  [10519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      ts_builtin_sym_end,
  [10526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_ident,
  [10533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      sym_ident,
  [10540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym_ident,
  [10547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym_ident,
  [10554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_AT,
  [10561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym_ident,
  [10568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_ident,
  [10575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_ident,
  [10582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      sym_clip_side,
  [10589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_EQ,
  [10596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
  [10603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym_ident,
  [10610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_EQ,
  [10617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_EQ,
  [10624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
  [10631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_EQ,
  [10638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
  [10645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
  [10652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
  [10659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_ident,
  [10666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_DOT,
  [10673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_ident,
  [10680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_DOT,
  [10687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_LPAREN,
  [10694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      sym_ident,
  [10701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
  [10708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_AT,
  [10715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_ident,
  [10722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_AT,
  [10729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_ident,
  [10736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COLON,
  [10743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
  [10750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_ident,
  [10757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_SEMI,
  [10764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
  [10771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_ident,
  [10778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_EQ,
  [10785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_LPAREN,
  [10792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_ident,
  [10799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_GT,
  [10806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
  [10813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
  [10820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_RBRACK,
  [10827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      sym_ident,
  [10834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_ident,
  [10841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
  [10848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym_ident,
  [10855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [10862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      sym_ident,
  [10869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RBRACK,
  [10876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      sym_ident,
  [10883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym_ident,
  [10890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RBRACK,
  [10897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RBRACE,
  [10904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [10911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_AT,
  [10918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym_ident,
  [10925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [10932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [10939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RBRACK,
  [10946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RBRACE,
  [10953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [10960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym_ident,
  [10967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      sym_ident,
  [10974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_ident,
  [10981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_COLON,
  [10988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_RBRACE,
  [10995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
  [11002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym_ident,
  [11009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      sym_ident,
  [11016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym_ident,
  [11023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_ident,
  [11030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
  [11037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      sym_ident,
  [11044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      sym_ident,
  [11051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym_ident,
  [11058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_ident,
  [11065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_COLON,
  [11072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      sym_ident,
  [11079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      sym_ident,
  [11086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym_ident,
  [11093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_RBRACE,
  [11100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RBRACK,
  [11107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(24)] = 912,
  [SMALL_STATE(25)] = 951,
  [SMALL_STATE(26)] = 1020,
  [SMALL_STATE(27)] = 1089,
  [SMALL_STATE(28)] = 1158,
  [SMALL_STATE(29)] = 1225,
  [SMALL_STATE(30)] = 1292,
  [SMALL_STATE(31)] = 1359,
  [SMALL_STATE(32)] = 1426,
  [SMALL_STATE(33)] = 1490,
  [SMALL_STATE(34)] = 1531,
  [SMALL_STATE(35)] = 1594,
  [SMALL_STATE(36)] = 1657,
  [SMALL_STATE(37)] = 1720,
  [SMALL_STATE(38)] = 1783,
  [SMALL_STATE(39)] = 1846,
  [SMALL_STATE(40)] = 1887,
  [SMALL_STATE(41)] = 1950,
  [SMALL_STATE(42)] = 2013,
  [SMALL_STATE(43)] = 2076,
  [SMALL_STATE(44)] = 2139,
  [SMALL_STATE(45)] = 2177,
  [SMALL_STATE(46)] = 2215,
  [SMALL_STATE(47)] = 2245,
  [SMALL_STATE(48)] = 2283,
  [SMALL_STATE(49)] = 2321,
  [SMALL_STATE(50)] = 2359,
  [SMALL_STATE(51)] = 2397,
  [SMALL_STATE(52)] = 2435,
  [SMALL_STATE(53)] = 2473,
  [SMALL_STATE(54)] = 2511,
  [SMALL_STATE(55)] = 2549,
  [SMALL_STATE(56)] = 2587,
  [SMALL_STATE(57)] = 2625,
  [SMALL_STATE(58)] = 2684,
  [SMALL_STATE(59)] = 2743,
  [SMALL_STATE(60)] = 2802,
  [SMALL_STATE(61)] = 2837,
  [SMALL_STATE(62)] = 2896,
  [SMALL_STATE(63)] = 2955,
  [SMALL_STATE(64)] = 3014,
  [SMALL_STATE(65)] = 3073,
  [SMALL_STATE(66)] = 3132,
  [SMALL_STATE(67)] = 3191,
  [SMALL_STATE(68)] = 3250,
  [SMALL_STATE(69)] = 3309,
  [SMALL_STATE(70)] = 3342,
  [SMALL_STATE(71)] = 3396,
  [SMALL_STATE(72)] = 3428,
  [SMALL_STATE(73)] = 3456,
  [SMALL_STATE(74)] = 3484,
  [SMALL_STATE(75)] = 3538,
  [SMALL_STATE(76)] = 3566,
  [SMALL_STATE(77)] = 3594,
  [SMALL_STATE(78)] = 3648,
  [SMALL_STATE(79)] = 3702,
  [SMALL_STATE(80)] = 3734,
  [SMALL_STATE(81)] = 3766,
  [SMALL_STATE(82)] = 3798,
  [SMALL_STATE(83)] = 3826,
  [SMALL_STATE(84)] = 3880,
  [SMALL_STATE(85)] = 3907,
  [SMALL_STATE(86)] = 3934,
  [SMALL_STATE(87)] = 3961,
  [SMALL_STATE(88)] = 3988,
  [SMALL_STATE(89)] = 4015,
  [SMALL_STATE(90)] = 4042,
  [SMALL_STATE(91)] = 4068,
  [SMALL_STATE(92)] = 4094,
  [SMALL_STATE(93)] = 4120,
  [SMALL_STATE(94)] = 4146,
  [SMALL_STATE(95)] = 4172,
  [SMALL_STATE(96)] = 4198,
  [SMALL_STATE(97)] = 4224,
  [SMALL_STATE(98)] = 4250,
  [SMALL_STATE(99)] = 4276,
  [SMALL_STATE(100)] = 4302,
  [SMALL_STATE(101)] = 4328,
  [SMALL_STATE(102)] = 4354,
  [SMALL_STATE(103)] = 4380,
  [SMALL_STATE(104)] = 4406,
  [SMALL_STATE(105)] = 4432,
  [SMALL_STATE(106)] = 4458,
  [SMALL_STATE(107)] = 4484,
  [SMALL_STATE(108)] = 4510,
  [SMALL_STATE(109)] = 4536,
  [SMALL_STATE(110)] = 4562,
  [SMALL_STATE(111)] = 4588,
  [SMALL_STATE(112)] = 4614,
  [SMALL_STATE(113)] = 4640,
  [SMALL_STATE(114)] = 4667,
  [SMALL_STATE(115)] = 4715,
  [SMALL_STATE(116)] = 4763,
  [SMALL_STATE(117)] = 4811,
  [SMALL_STATE(118)] = 4835,
  [SMALL_STATE(119)] = 4859,
  [SMALL_STATE(120)] = 4883,
  [SMALL_STATE(121)] = 4931,
  [SMALL_STATE(122)] = 4973,
  [SMALL_STATE(123)] = 5015,
  [SMALL_STATE(124)] = 5057,
  [SMALL_STATE(125)] = 5099,
  [SMALL_STATE(126)] = 5139,
  [SMALL_STATE(127)] = 5181,
  [SMALL_STATE(128)] = 5223,
  [SMALL_STATE(129)] = 5265,
  [SMALL_STATE(130)] = 5307,
  [SMALL_STATE(131)] = 5329,
  [SMALL_STATE(132)] = 5371,
  [SMALL_STATE(133)] = 5413,
  [SMALL_STATE(134)] = 5435,
  [SMALL_STATE(135)] = 5474,
  [SMALL_STATE(136)] = 5513,
  [SMALL_STATE(137)] = 5552,
  [SMALL_STATE(138)] = 5590,
  [SMALL_STATE(139)] = 5628,
  [SMALL_STATE(140)] = 5666,
  [SMALL_STATE(141)] = 5692,
  [SMALL_STATE(142)] = 5718,
  [SMALL_STATE(143)] = 5756,
  [SMALL_STATE(144)] = 5779,
  [SMALL_STATE(145)] = 5802,
  [SMALL_STATE(146)] = 5825,
  [SMALL_STATE(147)] = 5844,
  [SMALL_STATE(148)] = 5867,
  [SMALL_STATE(149)] = 5890,
  [SMALL_STATE(150)] = 5909,
  [SMALL_STATE(151)] = 5928,
  [SMALL_STATE(152)] = 5951,
  [SMALL_STATE(153)] = 5984,
  [SMALL_STATE(154)] = 6007,
  [SMALL_STATE(155)] = 6030,
  [SMALL_STATE(156)] = 6065,
  [SMALL_STATE(157)] = 6088,
  [SMALL_STATE(158)] = 6117,
  [SMALL_STATE(159)] = 6150,
  [SMALL_STATE(160)] = 6171,
  [SMALL_STATE(161)] = 6194,
  [SMALL_STATE(162)] = 6223,
  [SMALL_STATE(163)] = 6258,
  [SMALL_STATE(164)] = 6281,
  [SMALL_STATE(165)] = 6299,
  [SMALL_STATE(166)] = 6325,
  [SMALL_STATE(167)] = 6351,
  [SMALL_STATE(168)] = 6377,
  [SMALL_STATE(169)] = 6403,
  [SMALL_STATE(170)] = 6429,
  [SMALL_STATE(171)] = 6455,
  [SMALL_STATE(172)] = 6481,
  [SMALL_STATE(173)] = 6507,
  [SMALL_STATE(174)] = 6541,
  [SMALL_STATE(175)] = 6575,
  [SMALL_STATE(176)] = 6609,
  [SMALL_STATE(177)] = 6635,
  [SMALL_STATE(178)] = 6661,
  [SMALL_STATE(179)] = 6695,
  [SMALL_STATE(180)] = 6721,
  [SMALL_STATE(181)] = 6739,
  [SMALL_STATE(182)] = 6765,
  [SMALL_STATE(183)] = 6783,
  [SMALL_STATE(184)] = 6804,
  [SMALL_STATE(185)] = 6829,
  [SMALL_STATE(186)] = 6854,
  [SMALL_STATE(187)] = 6879,
  [SMALL_STATE(188)] = 6906,
  [SMALL_STATE(189)] = 6923,
  [SMALL_STATE(190)] = 6950,
  [SMALL_STATE(191)] = 6975,
  [SMALL_STATE(192)] = 7002,
  [SMALL_STATE(193)] = 7029,
  [SMALL_STATE(194)] = 7056,
  [SMALL_STATE(195)] = 7083,
  [SMALL_STATE(196)] = 7110,
  [SMALL_STATE(197)] = 7137,
  [SMALL_STATE(198)] = 7164,
  [SMALL_STATE(199)] = 7191,
  [SMALL_STATE(200)] = 7213,
  [SMALL_STATE(201)] = 7233,
  [SMALL_STATE(202)] = 7249,
  [SMALL_STATE(203)] = 7269,
  [SMALL_STATE(204)] = 7285,
  [SMALL_STATE(205)] = 7307,
  [SMALL_STATE(206)] = 7323,
  [SMALL_STATE(207)] = 7343,
  [SMALL_STATE(208)] = 7365,
  [SMALL_STATE(209)] = 7381,
  [SMALL_STATE(210)] = 7397,
  [SMALL_STATE(211)] = 7413,
  [SMALL_STATE(212)] = 7433,
  [SMALL_STATE(213)] = 7455,
  [SMALL_STATE(214)] = 7475,
  [SMALL_STATE(215)] = 7495,
  [SMALL_STATE(216)] = 7517,
  [SMALL_STATE(217)] = 7545,
  [SMALL_STATE(218)] = 7569,
  [SMALL_STATE(219)] = 7591,
  [SMALL_STATE(220)] = 7607,
  [SMALL_STATE(221)] = 7623,
  [SMALL_STATE(222)] = 7639,
  [SMALL_STATE(223)] = 7661,
  [SMALL_STATE(224)] = 7683,
  [SMALL_STATE(225)] = 7706,
  [SMALL_STATE(226)] = 7721,
  [SMALL_STATE(227)] = 7744,
  [SMALL_STATE(228)] = 7767,
  [SMALL_STATE(229)] = 7782,
  [SMALL_STATE(230)] = 7801,
  [SMALL_STATE(231)] = 7816,
  [SMALL_STATE(232)] = 7837,
  [SMALL_STATE(233)] = 7860,
  [SMALL_STATE(234)] = 7881,
  [SMALL_STATE(235)] = 7902,
  [SMALL_STATE(236)] = 7921,
  [SMALL_STATE(237)] = 7936,
  [SMALL_STATE(238)] = 7955,
  [SMALL_STATE(239)] = 7970,
  [SMALL_STATE(240)] = 7985,
  [SMALL_STATE(241)] = 7999,
  [SMALL_STATE(242)] = 8013,
  [SMALL_STATE(243)] = 8027,
  [SMALL_STATE(244)] = 8047,
  [SMALL_STATE(245)] = 8067,
  [SMALL_STATE(246)] = 8081,
  [SMALL_STATE(247)] = 8103,
  [SMALL_STATE(248)] = 8123,
  [SMALL_STATE(249)] = 8137,
  [SMALL_STATE(250)] = 8151,
  [SMALL_STATE(251)] = 8165,
  [SMALL_STATE(252)] = 8179,
  [SMALL_STATE(253)] = 8193,
  [SMALL_STATE(254)] = 8207,
  [SMALL_STATE(255)] = 8221,
  [SMALL_STATE(256)] = 8235,
  [SMALL_STATE(257)] = 8249,
  [SMALL_STATE(258)] = 8263,
  [SMALL_STATE(259)] = 8277,
  [SMALL_STATE(260)] = 8297,
  [SMALL_STATE(261)] = 8315,
  [SMALL_STATE(262)] = 8329,
  [SMALL_STATE(263)] = 8343,
  [SMALL_STATE(264)] = 8357,
  [SMALL_STATE(265)] = 8371,
  [SMALL_STATE(266)] = 8385,
  [SMALL_STATE(267)] = 8399,
  [SMALL_STATE(268)] = 8413,
  [SMALL_STATE(269)] = 8427,
  [SMALL_STATE(270)] = 8441,
  [SMALL_STATE(271)] = 8455,
  [SMALL_STATE(272)] = 8475,
  [SMALL_STATE(273)] = 8497,
  [SMALL_STATE(274)] = 8519,
  [SMALL_STATE(275)] = 8533,
  [SMALL_STATE(276)] = 8547,
  [SMALL_STATE(277)] = 8561,
  [SMALL_STATE(278)] = 8575,
  [SMALL_STATE(279)] = 8595,
  [SMALL_STATE(280)] = 8609,
  [SMALL_STATE(281)] = 8623,
  [SMALL_STATE(282)] = 8637,
  [SMALL_STATE(283)] = 8651,
  [SMALL_STATE(284)] = 8662,
  [SMALL_STATE(285)] = 8679,
  [SMALL_STATE(286)] = 8694,
  [SMALL_STATE(287)] = 8707,
  [SMALL_STATE(288)] = 8718,
  [SMALL_STATE(289)] = 8729,
  [SMALL_STATE(290)] = 8748,
  [SMALL_STATE(291)] = 8763,
  [SMALL_STATE(292)] = 8778,
  [SMALL_STATE(293)] = 8797,
  [SMALL_STATE(294)] = 8808,
  [SMALL_STATE(295)] = 8823,
  [SMALL_STATE(296)] = 8838,
  [SMALL_STATE(297)] = 8855,
  [SMALL_STATE(298)] = 8874,
  [SMALL_STATE(299)] = 8889,
  [SMALL_STATE(300)] = 8906,
  [SMALL_STATE(301)] = 8921,
  [SMALL_STATE(302)] = 8932,
  [SMALL_STATE(303)] = 8951,
  [SMALL_STATE(304)] = 8966,
  [SMALL_STATE(305)] = 8981,
  [SMALL_STATE(306)] = 8992,
  [SMALL_STATE(307)] = 9008,
  [SMALL_STATE(308)] = 9024,
  [SMALL_STATE(309)] = 9040,
  [SMALL_STATE(310)] = 9056,
  [SMALL_STATE(311)] = 9072,
  [SMALL_STATE(312)] = 9088,
  [SMALL_STATE(313)] = 9104,
  [SMALL_STATE(314)] = 9120,
  [SMALL_STATE(315)] = 9136,
  [SMALL_STATE(316)] = 9152,
  [SMALL_STATE(317)] = 9168,
  [SMALL_STATE(318)] = 9184,
  [SMALL_STATE(319)] = 9194,
  [SMALL_STATE(320)] = 9210,
  [SMALL_STATE(321)] = 9226,
  [SMALL_STATE(322)] = 9242,
  [SMALL_STATE(323)] = 9258,
  [SMALL_STATE(324)] = 9274,
  [SMALL_STATE(325)] = 9290,
  [SMALL_STATE(326)] = 9306,
  [SMALL_STATE(327)] = 9322,
  [SMALL_STATE(328)] = 9338,
  [SMALL_STATE(329)] = 9351,
  [SMALL_STATE(330)] = 9364,
  [SMALL_STATE(331)] = 9377,
  [SMALL_STATE(332)] = 9390,
  [SMALL_STATE(333)] = 9403,
  [SMALL_STATE(334)] = 9416,
  [SMALL_STATE(335)] = 9429,
  [SMALL_STATE(336)] = 9442,
  [SMALL_STATE(337)] = 9455,
  [SMALL_STATE(338)] = 9468,
  [SMALL_STATE(339)] = 9481,
  [SMALL_STATE(340)] = 9494,
  [SMALL_STATE(341)] = 9507,
  [SMALL_STATE(342)] = 9520,
  [SMALL_STATE(343)] = 9533,
  [SMALL_STATE(344)] = 9546,
  [SMALL_STATE(345)] = 9559,
  [SMALL_STATE(346)] = 9572,
  [SMALL_STATE(347)] = 9585,
  [SMALL_STATE(348)] = 9598,
  [SMALL_STATE(349)] = 9611,
  [SMALL_STATE(350)] = 9624,
  [SMALL_STATE(351)] = 9637,
  [SMALL_STATE(352)] = 9650,
  [SMALL_STATE(353)] = 9663,
  [SMALL_STATE(354)] = 9676,
  [SMALL_STATE(355)] = 9689,
  [SMALL_STATE(356)] = 9702,
  [SMALL_STATE(357)] = 9715,
  [SMALL_STATE(358)] = 9728,
  [SMALL_STATE(359)] = 9741,
  [SMALL_STATE(360)] = 9754,
  [SMALL_STATE(361)] = 9767,
  [SMALL_STATE(362)] = 9780,
  [SMALL_STATE(363)] = 9793,
  [SMALL_STATE(364)] = 9806,
  [SMALL_STATE(365)] = 9819,
  [SMALL_STATE(366)] = 9832,
  [SMALL_STATE(367)] = 9845,
  [SMALL_STATE(368)] = 9858,
  [SMALL_STATE(369)] = 9871,
  [SMALL_STATE(370)] = 9884,
  [SMALL_STATE(371)] = 9897,
  [SMALL_STATE(372)] = 9905,
  [SMALL_STATE(373)] = 9913,
  [SMALL_STATE(374)] = 9921,
  [SMALL_STATE(375)] = 9929,
  [SMALL_STATE(376)] = 9937,
  [SMALL_STATE(377)] = 9945,
  [SMALL_STATE(378)] = 9953,
  [SMALL_STATE(379)] = 9961,
  [SMALL_STATE(380)] = 9969,
  [SMALL_STATE(381)] = 9979,
  [SMALL_STATE(382)] = 9989,
  [SMALL_STATE(383)] = 9997,
  [SMALL_STATE(384)] = 10005,
  [SMALL_STATE(385)] = 10013,
  [SMALL_STATE(386)] = 10021,
  [SMALL_STATE(387)] = 10031,
  [SMALL_STATE(388)] = 10041,
  [SMALL_STATE(389)] = 10049,
  [SMALL_STATE(390)] = 10057,
  [SMALL_STATE(391)] = 10065,
  [SMALL_STATE(392)] = 10075,
  [SMALL_STATE(393)] = 10085,
  [SMALL_STATE(394)] = 10093,
  [SMALL_STATE(395)] = 10101,
  [SMALL_STATE(396)] = 10111,
  [SMALL_STATE(397)] = 10119,
  [SMALL_STATE(398)] = 10127,
  [SMALL_STATE(399)] = 10135,
  [SMALL_STATE(400)] = 10143,
  [SMALL_STATE(401)] = 10153,
  [SMALL_STATE(402)] = 10161,
  [SMALL_STATE(403)] = 10169,
  [SMALL_STATE(404)] = 10177,
  [SMALL_STATE(405)] = 10187,
  [SMALL_STATE(406)] = 10197,
  [SMALL_STATE(407)] = 10205,
  [SMALL_STATE(408)] = 10213,
  [SMALL_STATE(409)] = 10221,
  [SMALL_STATE(410)] = 10229,
  [SMALL_STATE(411)] = 10237,
  [SMALL_STATE(412)] = 10245,
  [SMALL_STATE(413)] = 10253,
  [SMALL_STATE(414)] = 10261,
  [SMALL_STATE(415)] = 10269,
  [SMALL_STATE(416)] = 10279,
  [SMALL_STATE(417)] = 10287,
  [SMALL_STATE(418)] = 10297,
  [SMALL_STATE(419)] = 10305,
  [SMALL_STATE(420)] = 10315,
  [SMALL_STATE(421)] = 10325,
  [SMALL_STATE(422)] = 10333,
  [SMALL_STATE(423)] = 10341,
  [SMALL_STATE(424)] = 10349,
  [SMALL_STATE(425)] = 10359,
  [SMALL_STATE(426)] = 10367,
  [SMALL_STATE(427)] = 10375,
  [SMALL_STATE(428)] = 10385,
  [SMALL_STATE(429)] = 10393,
  [SMALL_STATE(430)] = 10401,
  [SMALL_STATE(431)] = 10409,
  [SMALL_STATE(432)] = 10417,
  [SMALL_STATE(433)] = 10425,
  [SMALL_STATE(434)] = 10435,
  [SMALL_STATE(435)] = 10445,
  [SMALL_STATE(436)] = 10453,
  [SMALL_STATE(437)] = 10461,
  [SMALL_STATE(438)] = 10469,
  [SMALL_STATE(439)] = 10477,
  [SMALL_STATE(440)] = 10484,
  [SMALL_STATE(441)] = 10491,
  [SMALL_STATE(442)] = 10498,
  [SMALL_STATE(443)] = 10505,
  [SMALL_STATE(444)] = 10512,
  [SMALL_STATE(445)] = 10519,
  [SMALL_STATE(446)] = 10526,
  [SMALL_STATE(447)] = 10533,
  [SMALL_STATE(448)] = 10540,
  [SMALL_STATE(449)] = 10547,
  [SMALL_STATE(450)] = 10554,
  [SMALL_STATE(451)] = 10561,
  [SMALL_STATE(452)] = 10568,
  [SMALL_STATE(453)] = 10575,
  [SMALL_STATE(454)] = 10582,
  [SMALL_STATE(455)] = 10589,
  [SMALL_STATE(456)] = 10596,
  [SMALL_STATE(457)] = 10603,
  [SMALL_STATE(458)] = 10610,
  [SMALL_STATE(459)] = 10617,
  [SMALL_STATE(460)] = 10624,
  [SMALL_STATE(461)] = 10631,
  [SMALL_STATE(462)] = 10638,
  [SMALL_STATE(463)] = 10645,
  [SMALL_STATE(464)] = 10652,
  [SMALL_STATE(465)] = 10659,
  [SMALL_STATE(466)] = 10666,
  [SMALL_STATE(467)] = 10673,
  [SMALL_STATE(468)] = 10680,
  [SMALL_STATE(469)] = 10687,
  [SMALL_STATE(470)] = 10694,
  [SMALL_STATE(471)] = 10701,
  [SMALL_STATE(472)] = 10708,
  [SMALL_STATE(473)] = 10715,
  [SMALL_STATE(474)] = 10722,
  [SMALL_STATE(475)] = 10729,
  [SMALL_STATE(476)] = 10736,
  [SMALL_STATE(477)] = 10743,
  [SMALL_STATE(478)] = 10750,
  [SMALL_STATE(479)] = 10757,
  [SMALL_STATE(480)] = 10764,
  [SMALL_STATE(481)] = 10771,
  [SMALL_STATE(482)] = 10778,
  [SMALL_STATE(483)] = 10785,
  [SMALL_STATE(484)] = 10792,
  [SMALL_STATE(485)] = 10799,
  [SMALL_STATE(486)] = 10806,
  [SMALL_STATE(487)] = 10813,
  [SMALL_STATE(488)] = 10820,
  [SMALL_STATE(489)] = 10827,
  [SMALL_STATE(490)] = 10834,
  [SMALL_STATE(491)] = 10841,
  [SMALL_STATE(492)] = 10848,
  [SMALL_STATE(493)] = 10855,
  [SMALL_STATE(494)] = 10862,
  [SMALL_STATE(495)] = 10869,
  [SMALL_STATE(496)] = 10876,
  [SMALL_STATE(497)] = 10883,
  [SMALL_STATE(498)] = 10890,
  [SMALL_STATE(499)] = 10897,
  [SMALL_STATE(500)] = 10904,
  [SMALL_STATE(501)] = 10911,
  [SMALL_STATE(502)] = 10918,
  [SMALL_STATE(503)] = 10925,
  [SMALL_STATE(504)] = 10932,
  [SMALL_STATE(505)] = 10939,
  [SMALL_STATE(506)] = 10946,
  [SMALL_STATE(507)] = 10953,
  [SMALL_STATE(508)] = 10960,
  [SMALL_STATE(509)] = 10967,
  [SMALL_STATE(510)] = 10974,
  [SMALL_STATE(511)] = 10981,
  [SMALL_STATE(512)] = 10988,
  [SMALL_STATE(513)] = 10995,
  [SMALL_STATE(514)] = 11002,
  [SMALL_STATE(515)] = 11009,
  [SMALL_STATE(516)] = 11016,
  [SMALL_STATE(517)] = 11023,
  [SMALL_STATE(518)] = 11030,
  [SMALL_STATE(519)] = 11037,
  [SMALL_STATE(520)] = 11044,
  [SMALL_STATE(521)] = 11051,
  [SMALL_STATE(522)] = 11058,
  [SMALL_STATE(523)] = 11065,
  [SMALL_STATE(524)] = 11072,
  [SMALL_STATE(525)] = 11079,
  [SMALL_STATE(526)] = 11086,
  [SMALL_STATE(527)] = 11093,
  [SMALL_STATE(528)] = 11100,
  [SMALL_STATE(529)] = 11107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 39),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 53),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 25),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 56),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 56),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 55),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 55),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 15),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 67),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 67),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 54),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 54),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 65),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 65),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 40),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 40),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 72),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 72),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 66),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 66),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 71),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 71),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 8),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(33),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(33),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(46),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(457),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(244),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(239),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(286),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(40),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(360),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(76),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(155),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(26),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(33),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(33),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(46),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(457),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(244),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(239),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(286),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(361),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(76),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(155),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 23),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 23),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 50),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 50),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3, .production_id = 14),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3, .production_id = 14),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 36),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 36),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 22),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 22),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 35),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 35),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 33),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 33),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 33), SHIFT_REPEAT(319),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 47),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 47),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 61),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 61),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 62),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 62),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_lu, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_lu, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 31),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 31),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 7),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 7),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 8),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 8),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 6),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 21),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 21),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 7),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 7),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 63),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 63),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 49),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 49),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 48),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 48),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 6),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 64),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 64),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 8),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 8),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 34),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 34),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 32),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 32),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(501),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(141),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(510),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(273),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(522),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(188),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 12),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 12),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6, .production_id = 19),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6, .production_id = 19),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 11),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 11),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 12),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 12),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(299),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3, .production_id = 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 19),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 19),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 11),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_set_insert, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_set_insert, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 33), SHIFT_REPEAT(313),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(469),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(469),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(469),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(234),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(522),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(520),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inserted, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inserted, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4, .production_id = 8),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(222),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_prefix, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(135),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(367),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(284),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(351),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(380),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_var, 4, .production_id = 28),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4, .production_id = 1),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 57),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4, .production_id = 2),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 58),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 59),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 60),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 20),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_chunk_attr, 4, .production_id = 28),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 18),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 26),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 17),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 27),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 68),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 69),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 70),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2, .production_id = 3),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5, .production_id = 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 73),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5, .production_id = 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 74),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_var, 3, .production_id = 30),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11, .production_id = 75),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7, .production_id = 7),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 13),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 3),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 46),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_tag, 3),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3, .production_id = 5),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 10),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_surf, 5, .production_id = 45),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6, .production_id = 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_str, 4, .production_id = 28),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 44),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 29),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 43),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 42),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6, .production_id = 7),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_pair, 2, .production_id = 6),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 2),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_tok, 1),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
