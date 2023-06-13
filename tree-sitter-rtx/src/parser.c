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
#define STATE_COUNT 503
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 78

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
  sym_str_op = 77,
  sym_and = 78,
  sym_or = 79,
  sym_not = 80,
  sym__string_val = 81,
  sym__cond_base_bool = 82,
  sym__cond_bool = 83,
  sym_condition = 84,
  sym_pattern_element = 85,
  sym_unknown = 86,
  sym_set_var = 87,
  sym_output_var_set = 88,
  sym_macro_name = 89,
  sym_literal_lu = 90,
  sym_null_lu = 91,
  sym_output_element = 92,
  sym_if_tok = 93,
  sym_else_tok = 94,
  sym_string_always_choice = 95,
  sym_string_if_choice = 96,
  sym_string_else_choice = 97,
  sym_string_cond = 98,
  sym_chunk_always_choice = 99,
  sym_chunk_if_choice = 100,
  sym_chunk_else_choice = 101,
  sym_chunk_cond = 102,
  sym_lu_always_choice = 103,
  sym_lu_if_choice = 104,
  sym_lu_else_choice = 105,
  sym_lu_cond = 106,
  sym_reduce_output = 107,
  sym_output_chunk = 108,
  sym__chunk_val = 109,
  sym__lu_val = 110,
  sym_lu_sequence = 111,
  sym_reduce_rule_group = 112,
  sym_set_surf = 113,
  sym_set_global_var = 114,
  sym_set_global_str = 115,
  sym_set_chunk_attr = 116,
  sym_reduce_rule = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_output_rule_repeat1 = 119,
  aux_sym_retag_rule_repeat1 = 120,
  aux_sym_attr_rule_repeat1 = 121,
  aux_sym_pattern_element_repeat1 = 122,
  aux_sym_output_var_set_repeat1 = 123,
  aux_sym_literal_lu_repeat1 = 124,
  aux_sym_string_cond_repeat1 = 125,
  aux_sym_chunk_cond_repeat1 = 126,
  aux_sym_lu_cond_repeat1 = 127,
  aux_sym_reduce_output_repeat1 = 128,
  aux_sym_output_chunk_repeat1 = 129,
  aux_sym_reduce_rule_group_repeat1 = 130,
  aux_sym_reduce_rule_group_repeat2 = 131,
  aux_sym_reduce_rule_repeat1 = 132,
  aux_sym_reduce_rule_repeat2 = 133,
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 4},
  [16] = {.index = 31, .length = 2},
  [17] = {.index = 33, .length = 1},
  [18] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 5},
  [20] = {.index = 41, .length = 5},
  [21] = {.index = 46, .length = 2},
  [22] = {.index = 48, .length = 2},
  [23] = {.index = 50, .length = 3},
  [24] = {.index = 53, .length = 6},
  [25] = {.index = 59, .length = 3},
  [26] = {.index = 62, .length = 2},
  [27] = {.index = 64, .length = 3},
  [28] = {.index = 67, .length = 3},
  [29] = {.index = 70, .length = 6},
  [30] = {.index = 76, .length = 2},
  [31] = {.index = 78, .length = 2},
  [32] = {.index = 80, .length = 2},
  [33] = {.index = 82, .length = 1},
  [34] = {.index = 83, .length = 7},
  [35] = {.index = 90, .length = 8},
  [36] = {.index = 98, .length = 4},
  [37] = {.index = 102, .length = 7},
  [38] = {.index = 109, .length = 4},
  [39] = {.index = 113, .length = 4},
  [40] = {.index = 117, .length = 2},
  [41] = {.index = 119, .length = 3},
  [42] = {.index = 122, .length = 3},
  [43] = {.index = 125, .length = 3},
  [44] = {.index = 128, .length = 7},
  [45] = {.index = 135, .length = 3},
  [46] = {.index = 138, .length = 4},
  [47] = {.index = 142, .length = 2},
  [48] = {.index = 144, .length = 4},
  [49] = {.index = 148, .length = 2},
  [50] = {.index = 150, .length = 8},
  [51] = {.index = 158, .length = 5},
  [52] = {.index = 163, .length = 8},
  [53] = {.index = 171, .length = 5},
  [54] = {.index = 176, .length = 8},
  [55] = {.index = 184, .length = 3},
  [56] = {.index = 187, .length = 3},
  [57] = {.index = 190, .length = 4},
  [58] = {.index = 194, .length = 4},
  [59] = {.index = 198, .length = 5},
  [60] = {.index = 203, .length = 5},
  [61] = {.index = 208, .length = 4},
  [62] = {.index = 212, .length = 4},
  [63] = {.index = 216, .length = 3},
  [64] = {.index = 219, .length = 3},
  [65] = {.index = 222, .length = 9},
  [66] = {.index = 231, .length = 9},
  [67] = {.index = 240, .length = 3},
  [68] = {.index = 243, .length = 4},
  [69] = {.index = 247, .length = 4},
  [70] = {.index = 251, .length = 5},
  [71] = {.index = 256, .length = 5},
  [72] = {.index = 261, .length = 6},
  [73] = {.index = 267, .length = 4},
  [74] = {.index = 271, .length = 5},
  [75] = {.index = 276, .length = 7},
  [76] = {.index = 283, .length = 6},
  [77] = {.index = 289, .length = 7},
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
    {field_type, 0},
    {field_value, 1},
  [6] =
    {field_lemma, 0},
  [7] =
    {field_output, 2},
    {field_pattern, 1},
    {field_rule_name, 0},
  [10] =
    {field_src, 0},
    {field_trg, 1},
  [12] =
    {field_src_attr, 0},
    {field_trg_attr, 2},
  [14] =
    {field_src, 1},
    {field_trg, 2},
  [16] =
    {field_val, 0},
  [17] =
    {field_cond, 1},
    {field_type, 0},
    {field_value, 2},
  [20] =
    {field_output, 3},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [24] =
    {field_lemma, 1},
  [25] =
    {field_lemma, 0},
    {field_lemma, 1},
  [27] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 3},
    {field_pattern, 0},
  [31] =
    {field_lemma, 0},
    {field_lit_tag, 2},
  [33] =
    {field_var_name, 1},
  [34] =
    {field_attr, 1},
    {field_pos, 0},
  [36] =
    {field_output, 4},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [41] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 4},
    {field_pattern, 1},
    {field_rule_name, 0},
  [46] =
    {field_lemma, 1},
    {field_lemma, 2},
  [48] =
    {field_output, 4},
    {field_pattern, 0},
  [50] =
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_vars, 3},
  [53] =
    {field_complex_tag, 3, .inherited = true},
    {field_lemcase, 3, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_lit_tag, 3, .inherited = true},
    {field_parent_tag, 3, .inherited = true},
  [59] =
    {field_lemma, 0},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
  [62] =
    {field_attr, 2},
    {field_pos, 0},
  [64] =
    {field_attr, 1},
    {field_pos, 0},
    {field_side, 2},
  [67] =
    {field_output, 5},
    {field_pattern, 1},
    {field_rule_name, 0},
  [70] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 5},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [76] =
    {field_name, 1},
    {field_value, 3},
  [78] =
    {field_output, 5},
    {field_pattern, 0},
  [80] =
    {field_name, 0},
    {field_value, 2},
  [82] =
    {field_lit_tag, 1},
  [83] =
    {field_complex_tag, 3, .inherited = true},
    {field_lemcase, 3, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 2},
    {field_lit_tag, 3, .inherited = true},
    {field_parent_tag, 3, .inherited = true},
    {field_vars, 4},
  [90] =
    {field_complex_tag, 0, .inherited = true},
    {field_complex_tag, 1, .inherited = true},
    {field_lemcase, 0, .inherited = true},
    {field_lemcase, 1, .inherited = true},
    {field_lit_tag, 0, .inherited = true},
    {field_lit_tag, 1, .inherited = true},
    {field_parent_tag, 0, .inherited = true},
    {field_parent_tag, 1, .inherited = true},
  [98] =
    {field_lemma, 0},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_vars, 4},
  [102] =
    {field_complex_tag, 4, .inherited = true},
    {field_lemcase, 4, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 4, .inherited = true},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_parent_tag, 4, .inherited = true},
  [109] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_lemma, 0},
  [113] =
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemma, 0},
  [117] =
    {field_attr, 3},
    {field_var_name, 1},
  [119] =
    {field_attr, 2},
    {field_pos, 0},
    {field_side, 3},
  [122] =
    {field_attr, 1},
    {field_convert, 3},
    {field_pos, 0},
  [125] =
    {field_attr, 3},
    {field_inserted, 0},
    {field_pos, 1},
  [128] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 6},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [135] =
    {field_output, 6},
    {field_pattern, 1},
    {field_rule_name, 0},
  [138] =
    {field_output, 6},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [142] =
    {field_pos, 1},
    {field_side, 2},
  [144] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 6},
    {field_pattern, 0},
  [148] =
    {field_parent_tag, 1},
    {field_parent_tag, 2},
  [150] =
    {field_complex_tag, 4, .inherited = true},
    {field_lemcase, 4, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 4, .inherited = true},
    {field_parent_tag, 2},
    {field_parent_tag, 3},
    {field_parent_tag, 4, .inherited = true},
    {field_vars, 5},
  [158] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_lemma, 0},
    {field_vars, 5},
  [163] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
  [171] =
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemma, 0},
    {field_vars, 5},
  [176] =
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
  [184] =
    {field_attr, 3},
    {field_side, 4},
    {field_var_name, 1},
  [187] =
    {field_attr, 2},
    {field_convert, 4},
    {field_pos, 0},
  [190] =
    {field_attr, 1},
    {field_convert, 4},
    {field_pos, 0},
    {field_side, 2},
  [194] =
    {field_attr, 3},
    {field_inserted, 0},
    {field_pos, 1},
    {field_side, 4},
  [198] =
    {field_output, 7},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [203] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 7},
    {field_pattern, 1},
    {field_rule_name, 0},
  [208] =
    {field_output, 7},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [212] =
    {field_cond, 1},
    {field_cond, 2},
    {field_output, 7},
    {field_pattern, 0},
  [216] =
    {field_complex_tag, 1},
    {field_complex_tag, 2},
    {field_complex_tag, 3},
  [219] =
    {field_lemcase, 1},
    {field_lemcase, 2},
    {field_lemcase, 3},
  [222] =
    {field_complex_tag, 2},
    {field_complex_tag, 3},
    {field_complex_tag, 4},
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
    {field_vars, 6},
  [231] =
    {field_complex_tag, 5, .inherited = true},
    {field_lemcase, 2},
    {field_lemcase, 3},
    {field_lemcase, 4},
    {field_lemcase, 5, .inherited = true},
    {field_lemma, 0},
    {field_lit_tag, 5, .inherited = true},
    {field_parent_tag, 5, .inherited = true},
    {field_vars, 6},
  [240] =
    {field_attr, 3},
    {field_convert, 5},
    {field_var_name, 1},
  [243] =
    {field_attr, 2},
    {field_convert, 5},
    {field_pos, 0},
    {field_side, 3},
  [247] =
    {field_attr, 3},
    {field_convert, 5},
    {field_inserted, 0},
    {field_pos, 1},
  [251] =
    {field_output, 8},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [256] =
    {field_cond, 2},
    {field_cond, 3},
    {field_output, 8},
    {field_pattern, 1},
    {field_rule_name, 0},
  [261] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 8},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [267] =
    {field_attr, 3},
    {field_convert, 6},
    {field_side, 4},
    {field_var_name, 1},
  [271] =
    {field_attr, 3},
    {field_convert, 6},
    {field_inserted, 0},
    {field_pos, 1},
    {field_side, 4},
  [276] =
    {field_cond, 4},
    {field_cond, 5},
    {field_output, 9},
    {field_pattern, 3},
    {field_rule_name, 0},
    {field_weight, 1},
    {field_weight, 2},
  [283] =
    {field_cond, 3},
    {field_cond, 4},
    {field_output, 9},
    {field_pattern, 2},
    {field_weight, 0},
    {field_weight, 1},
  [289] =
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
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(355);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(356);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(358);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(359);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
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
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
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
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(367);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(371);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(374);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
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
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(389);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(395);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_str_op_token16);
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
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
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
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 311},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 311},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 311},
  [112] = {.lex_state = 311},
  [113] = {.lex_state = 6},
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
  [124] = {.lex_state = 311},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 311},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 1},
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
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 311},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 311},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 311},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 311},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 311},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 311},
  [185] = {.lex_state = 311},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 311},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 311},
  [194] = {.lex_state = 311},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 311},
  [212] = {.lex_state = 311},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 311},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 311},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 311},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 311},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 311},
  [239] = {.lex_state = 311},
  [240] = {.lex_state = 311},
  [241] = {.lex_state = 311},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 311},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 311},
  [247] = {.lex_state = 311},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 311},
  [252] = {.lex_state = 311},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 311},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 311},
  [257] = {.lex_state = 311},
  [258] = {.lex_state = 311},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 311},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 311},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 311},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 311},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 311},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 311},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 311},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 311},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 311},
  [292] = {.lex_state = 311},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 311},
  [295] = {.lex_state = 311},
  [296] = {.lex_state = 311},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 311},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 311},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 311},
  [304] = {.lex_state = 311},
  [305] = {.lex_state = 311},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 311},
  [308] = {.lex_state = 311},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 311},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
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
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 311},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 12},
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
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 311},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 311},
  [348] = {.lex_state = 311},
  [349] = {.lex_state = 311},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 311},
  [359] = {.lex_state = 311},
  [360] = {.lex_state = 311},
  [361] = {.lex_state = 311},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 311},
  [370] = {.lex_state = 311},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 311},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 311},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 311},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 311},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 311},
  [388] = {.lex_state = 311},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 311},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 311},
  [402] = {.lex_state = 311},
  [403] = {.lex_state = 311},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 311},
  [406] = {.lex_state = 311},
  [407] = {.lex_state = 311},
  [408] = {.lex_state = 311},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 311},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 311},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 311},
  [427] = {.lex_state = 311},
  [428] = {.lex_state = 311},
  [429] = {.lex_state = 311},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 311},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 311},
  [436] = {.lex_state = 311},
  [437] = {.lex_state = 311},
  [438] = {.lex_state = 311},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 311},
  [441] = {.lex_state = 311},
  [442] = {.lex_state = 311},
  [443] = {.lex_state = 311},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 311},
  [449] = {.lex_state = 311},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 311},
  [452] = {.lex_state = 311},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 311},
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
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 311},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 311},
  [476] = {.lex_state = 311},
  [477] = {.lex_state = 311},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 311},
  [482] = {.lex_state = 311},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 311},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 311},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 311},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 311},
  [494] = {.lex_state = 311},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 311},
  [497] = {.lex_state = 311},
  [498] = {.lex_state = 311},
  [499] = {.lex_state = 311},
  [500] = {.lex_state = 311},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 311},
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
    [sym_source_file] = STATE(432),
    [sym_output_rule] = STATE(182),
    [sym_retag_rule] = STATE(182),
    [sym_attr_rule] = STATE(182),
    [sym_reduce_rule_group] = STATE(182),
    [aux_sym_source_file_repeat1] = STATE(182),
    [aux_sym_reduce_rule_group_repeat1] = STATE(272),
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(11), 27,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(19), 27,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(27), 27,
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
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(35), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_GT,
    ACTIONS(45), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(43), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(51), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(49), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(57), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(55), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(63), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(61), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(65), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(69), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(73), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(77), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(81), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(85), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(89), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(93), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(97), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(101), 27,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(105), 26,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(109), 26,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(113), 26,
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
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [831] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym_conjoin,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(143), 2,
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
  [901] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(147), 2,
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
  [971] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_string,
    ACTIONS(152), 1,
      sym_ident,
    ACTIONS(155), 1,
      aux_sym_num_token1,
    ACTIONS(158), 1,
      sym_global_var_prefix,
    ACTIONS(161), 1,
      sym_magic,
    ACTIONS(164), 1,
      anon_sym_LT,
    ACTIONS(167), 1,
      anon_sym_GT,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym_conjoin,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(187), 2,
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
  [1041] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_conjoin,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(190), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(415), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
    STATE(447), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [1109] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(194), 1,
      sym_ident,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(198), 1,
      sym_global_var_prefix,
    ACTIONS(200), 1,
      sym_magic,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_conjoin,
    STATE(127), 1,
      sym_insert,
    STATE(195), 1,
      sym_inserted,
    STATE(266), 1,
      sym_literal_lu,
    ACTIONS(212), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(170), 2,
      sym_num,
      sym_null_lu,
    STATE(263), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
    STATE(276), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [1177] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_string,
    ACTIONS(217), 1,
      sym_ident,
    ACTIONS(220), 1,
      aux_sym_num_token1,
    ACTIONS(223), 1,
      sym_global_var_prefix,
    ACTIONS(226), 1,
      sym_magic,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(232), 1,
      anon_sym_GT,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      sym_conjoin,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(238), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(249), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(28), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1242] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_if_tok_token1,
    ACTIONS(268), 1,
      sym_always_tok,
    STATE(71), 1,
      sym_not,
    STATE(158), 1,
      sym_string_if_choice,
    STATE(395), 1,
      sym_inserted,
    STATE(401), 1,
      sym_if_tok,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(409), 1,
      sym_string_always_choice,
    STATE(425), 1,
      sym_num,
    STATE(201), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(264), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(59), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [1311] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(274), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(28), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1375] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(278), 2,
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
  [1439] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(282), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(33), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1503] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(274), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(28), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1567] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(274), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(28), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1631] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(290), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(30), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1695] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(294), 2,
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
  [1759] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(274), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(28), 5,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
      aux_sym_output_chunk_repeat1,
  [1823] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    ACTIONS(306), 1,
      anon_sym_AT2,
    STATE(70), 1,
      sym_macro_name,
    STATE(89), 1,
      sym_output_var_set,
    ACTIONS(300), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(298), 11,
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
  [1864] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    ACTIONS(306), 1,
      anon_sym_AT2,
    STATE(64), 1,
      sym_macro_name,
    STATE(96), 1,
      sym_output_var_set,
    ACTIONS(310), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(308), 11,
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
  [1905] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_literal_lu_repeat1,
    STATE(86), 1,
      sym_output_var_set,
    ACTIONS(314), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(312), 12,
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
  [1943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_literal_lu_repeat1,
    STATE(97), 1,
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
  [1981] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(322), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(352), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2041] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_literal_lu_repeat1,
    STATE(78), 1,
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
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(328), 15,
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
  [2109] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    STATE(60), 1,
      sym_macro_name,
    STATE(93), 1,
      sym_output_var_set,
    ACTIONS(334), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(332), 11,
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
  [2147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_literal_lu_repeat1,
    STATE(83), 1,
      sym_output_var_set,
    ACTIONS(338), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(336), 12,
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
  [2185] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(190), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(447), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2245] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(340), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(366), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_literal_lu_repeat1,
    STATE(95), 1,
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
  [2343] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    STATE(64), 1,
      sym_macro_name,
    STATE(96), 1,
      sym_output_var_set,
    ACTIONS(310), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(308), 11,
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
  [2381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    STATE(70), 1,
      sym_macro_name,
    STATE(89), 1,
      sym_output_var_set,
    ACTIONS(300), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(298), 11,
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
  [2419] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_literal_lu_repeat1,
    STATE(94), 1,
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
  [2457] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    STATE(67), 1,
      sym_macro_name,
    STATE(88), 1,
      sym_output_var_set,
    ACTIONS(352), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(350), 11,
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
  [2495] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_literal_lu_repeat1,
    STATE(90), 1,
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
  [2533] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    ACTIONS(316), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_literal_lu_repeat1,
    STATE(85), 1,
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
  [2571] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(123), 1,
      sym_global_var_prefix,
    ACTIONS(125), 1,
      sym_magic,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(141), 1,
      sym_conjoin,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_literal_lu,
    STATE(137), 1,
      sym_insert,
    STATE(209), 1,
      sym_inserted,
    ACTIONS(362), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(50), 2,
      sym_num,
      sym_null_lu,
    STATE(422), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2631] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(194), 1,
      sym_ident,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(198), 1,
      sym_global_var_prefix,
    ACTIONS(200), 1,
      sym_magic,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym_conjoin,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_insert,
    STATE(195), 1,
      sym_inserted,
    STATE(266), 1,
      sym_literal_lu,
    ACTIONS(212), 2,
      sym_blank,
      sym_numbered_blank,
    STATE(170), 2,
      sym_num,
      sym_null_lu,
    STATE(276), 4,
      sym_output_element,
      sym_lu_cond,
      sym__lu_val,
      sym_lu_sequence,
  [2691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(368), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(366), 13,
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
  [2724] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(99), 1,
      sym_not,
    STATE(109), 1,
      sym_str_op,
    ACTIONS(375), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(377), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    ACTIONS(373), 13,
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
  [2759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    STATE(88), 1,
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
  [2791] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_not,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(200), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(264), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(59), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2845] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_not,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(207), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(264), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(59), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(379), 14,
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
  [2927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    STATE(89), 1,
      sym_output_var_set,
    ACTIONS(300), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(298), 12,
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
  [2959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(383), 13,
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
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(387), 14,
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
  [3015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    STATE(81), 1,
      sym_output_var_set,
    ACTIONS(393), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(391), 12,
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
  [3047] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_not,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(214), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(264), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(59), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3101] = 3,
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
  [3129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK2,
    STATE(93), 1,
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
  [3161] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_not,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(203), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(264), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(59), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3215] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_ident,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_not,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(210), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(264), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(59), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3269] = 3,
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
  [3297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 5,
      sym_ident,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(407), 13,
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
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 5,
      sym_ident,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 5,
      sym_ident,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(419), 13,
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
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(308), 13,
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
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 5,
      sym_ident,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [3483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 5,
      sym_ident,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(431), 13,
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
  [3535] = 3,
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
  [3561] = 3,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3587] = 3,
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
  [3613] = 3,
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
  [3639] = 3,
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
  [3665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(391), 13,
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
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(332), 13,
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
  [3717] = 3,
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
  [3743] = 3,
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
  [3769] = 3,
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
  [3795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(350), 13,
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
  [3821] = 3,
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
  [3847] = 3,
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
  [3873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(298), 13,
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
  [3899] = 3,
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
  [3925] = 3,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym_str_op,
    ACTIONS(375), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(373), 13,
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
  [3978] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(491), 1,
      anon_sym_LBRACK,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_QMARK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(368), 1,
      sym_reduce_output,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(110), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(501), 11,
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
  [4050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(505), 13,
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
  [4074] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(511), 1,
      anon_sym_QMARK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(391), 1,
      sym_reduce_output,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(110), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(513), 11,
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
  [4146] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      anon_sym_QMARK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(404), 1,
      sym_reduce_output,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(110), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4194] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_QMARK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(378), 1,
      sym_reduce_output,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(110), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4242] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(525), 1,
      sym_string,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(424), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(531), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4306] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(242), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4348] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_string,
    ACTIONS(540), 1,
      sym_ident,
    ACTIONS(543), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      sym_magic,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      anon_sym_STAR,
    ACTIONS(557), 1,
      anon_sym_QMARK,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    ACTIONS(552), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(110), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4388] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(356), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4430] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(286), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 5,
      sym_ident,
      anon_sym_STAR,
      sym_conjoin,
      sym_blank,
      sym_numbered_blank,
    ACTIONS(563), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4494] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(474), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4536] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(354), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4578] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(237), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4620] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      sym_string,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(353), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4662] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(575), 1,
      sym_string,
    ACTIONS(577), 1,
      sym_weight,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(327), 1,
      sym_reduce_rule,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(100), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4701] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 1,
      sym_weight,
    ACTIONS(583), 1,
      anon_sym_AT,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(106), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4740] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(575), 1,
      sym_string,
    ACTIONS(577), 1,
      sym_weight,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(380), 1,
      sym_reduce_rule,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(100), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(591), 1,
      anon_sym_AT,
    STATE(136), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(587), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(585), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4805] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(491), 2,
      sym_clip,
      sym_string_cond,
  [4843] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(488), 2,
      sym_clip,
      sym_string_cond,
  [4881] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(444), 2,
      sym_clip,
      sym_string_cond,
  [4919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_AT,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(595), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(593), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4945] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(456), 2,
      sym_clip,
      sym_string_cond,
  [4983] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(597), 1,
      sym_string,
    ACTIONS(599), 1,
      sym_ident,
    ACTIONS(601), 1,
      sym_global_var_prefix,
    ACTIONS(603), 1,
      sym_magic,
    STATE(208), 1,
      sym_inserted,
    STATE(289), 1,
      sym_literal_lu,
    STATE(181), 2,
      sym_num,
      sym_null_lu,
  [5018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_clip_side,
    ACTIONS(607), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(605), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(587), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(585), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(142), 1,
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
  [5085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(134), 1,
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
  [5108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(130), 1,
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
  [5131] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(105), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(625), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(623), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(144), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(629), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(627), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(142), 1,
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
  [5233] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(635), 1,
      sym_string,
    ACTIONS(637), 1,
      sym_ident,
    ACTIONS(639), 1,
      sym_global_var_prefix,
    ACTIONS(641), 1,
      sym_magic,
    STATE(96), 1,
      sym_literal_lu,
    STATE(205), 1,
      sym_inserted,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [5268] = 3,
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
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(505), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_string,
    ACTIONS(485), 1,
      sym_ident,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      sym_magic,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(481), 1,
      sym_attr_set_insert,
    STATE(482), 1,
      sym_attr_prefix,
    STATE(103), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(649), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(647), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(653), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(651), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(658), 9,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(664), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(662), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(668), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(666), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(670), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5468] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(489), 1,
      sym_clip,
  [5502] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(445), 1,
      sym_clip,
  [5536] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(455), 1,
      sym_clip,
  [5570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(651), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5588] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_global_var_prefix,
    ACTIONS(260), 1,
      sym_global_str_prefix,
    ACTIONS(527), 1,
      sym_ident,
    STATE(395), 1,
      sym_inserted,
    STATE(407), 1,
      sym_attr_prefix,
    STATE(425), 1,
      sym_num,
    STATE(492), 1,
      sym_clip,
  [5622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(674), 7,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_ident,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(334), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    STATE(246), 1,
      sym_else_tok,
    STATE(345), 1,
      sym_if_tok,
    STATE(479), 1,
      sym_chunk_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(167), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [5692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_ident,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(312), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5717] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    ACTIONS(696), 1,
      anon_sym_AT2,
    STATE(227), 1,
      sym_macro_name,
    STATE(289), 1,
      sym_output_var_set,
    ACTIONS(308), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [5742] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym_else_tok,
    STATE(345), 1,
      sym_if_tok,
    STATE(414), 1,
      sym_chunk_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(161), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [5769] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_else_tok,
    STATE(401), 1,
      sym_if_tok,
    STATE(423), 1,
      sym_string_else_choice,
    ACTIONS(702), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(164), 2,
      sym_string_if_choice,
      aux_sym_string_cond_repeat1,
  [5796] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_else_tok,
    STATE(359), 1,
      sym_if_tok,
    STATE(421), 1,
      sym_lu_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(204), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [5823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_ident,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(314), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5848] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym_else_tok,
    STATE(345), 1,
      sym_if_tok,
    STATE(450), 1,
      sym_chunk_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(196), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [5875] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_ident,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(331), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [5900] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_else_tok,
    STATE(359), 1,
      sym_if_tok,
    STATE(468), 1,
      sym_lu_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(169), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [5927] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_else_tok,
    STATE(401), 1,
      sym_if_tok,
    STATE(471), 1,
      sym_string_else_choice,
    ACTIONS(702), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(197), 2,
      sym_string_if_choice,
      aux_sym_string_cond_repeat1,
  [5954] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_else_tok,
    STATE(359), 1,
      sym_if_tok,
    STATE(446), 1,
      sym_lu_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(159), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [5981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(714), 6,
      sym_string,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [5998] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym_else_tok,
    STATE(345), 1,
      sym_if_tok,
    STATE(485), 1,
      sym_chunk_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(196), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
  [6025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    ACTIONS(696), 1,
      anon_sym_AT2,
    STATE(224), 1,
      sym_macro_name,
    STATE(302), 1,
      sym_output_var_set,
    ACTIONS(298), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6050] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_else_tok,
    STATE(359), 1,
      sym_if_tok,
    STATE(478), 1,
      sym_lu_else_choice,
    ACTIONS(690), 2,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
    STATE(204), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
  [6077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(227), 1,
      sym_macro_name,
    STATE(289), 1,
      sym_output_var_set,
    ACTIONS(308), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(191), 1,
      aux_sym_literal_lu_repeat1,
    STATE(259), 1,
      sym_output_var_set,
    ACTIONS(354), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(189), 1,
      aux_sym_literal_lu_repeat1,
    STATE(267), 1,
      sym_output_var_set,
    ACTIONS(318), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_literal_lu_repeat1,
    STATE(306), 1,
      sym_output_var_set,
    ACTIONS(346), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DOLLAR,
    ACTIONS(724), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(320), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(232), 1,
      sym_macro_name,
    STATE(280), 1,
      sym_output_var_set,
    ACTIONS(332), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_literal_lu_repeat1,
    STATE(287), 1,
      sym_output_var_set,
    ACTIONS(342), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6247] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(319), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6269] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(326), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      anon_sym_AT,
    STATE(225), 1,
      sym_attr_default,
    ACTIONS(728), 2,
      sym_string,
      sym_ident,
    STATE(194), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [6315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(224), 1,
      sym_macro_name,
    STATE(302), 1,
      sym_output_var_set,
    ACTIONS(298), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
    STATE(272), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(188), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(384), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6379] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(736), 1,
      sym_ident,
    ACTIONS(738), 1,
      sym_magic,
    ACTIONS(740), 1,
      anon_sym_COLON,
    ACTIONS(742), 1,
      anon_sym_LT,
    STATE(230), 1,
      sym_colon,
    STATE(309), 1,
      sym_lit_tag,
    STATE(495), 1,
      sym_lu_cond,
  [6407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DOLLAR,
    ACTIONS(563), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(694), 1,
      anon_sym_LPAREN2,
    STATE(223), 1,
      sym_macro_name,
    STATE(260), 1,
      sym_output_var_set,
    ACTIONS(350), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_literal_lu_repeat1,
    STATE(283), 1,
      sym_output_var_set,
    ACTIONS(324), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
    ACTIONS(746), 1,
      sym_ident,
    STATE(272), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(188), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_literal_lu_repeat1,
    STATE(278), 1,
      sym_output_var_set,
    ACTIONS(336), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      sym_global_var_prefix,
    ACTIONS(684), 1,
      sym_global_str_prefix,
    STATE(435), 1,
      sym_attr_prefix,
    STATE(341), 4,
      sym_set_surf,
      sym_set_global_var,
      sym_set_global_str,
      sym_set_chunk_attr,
  [6531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_literal_lu_repeat1,
    STATE(265), 1,
      sym_output_var_set,
    ACTIONS(358), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6553] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(187), 1,
      aux_sym_literal_lu_repeat1,
    STATE(270), 1,
      sym_output_var_set,
    ACTIONS(312), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_DOLLAR,
    ACTIONS(531), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_global_str_prefix,
      anon_sym_GT,
      anon_sym_LPAREN,
  [6591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(732), 1,
      anon_sym_AT,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    ACTIONS(749), 2,
      sym_string,
      sym_ident,
    STATE(211), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [6612] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(603), 1,
      sym_magic,
    ACTIONS(753), 1,
      sym_string,
    ACTIONS(755), 1,
      sym_ident,
    STATE(181), 2,
      sym_num,
      sym_null_lu,
  [6635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_if_tok_token1,
    STATE(345), 1,
      sym_if_tok,
    STATE(196), 2,
      sym_chunk_if_choice,
      aux_sym_chunk_cond_repeat1,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym_if_tok_token1,
    STATE(401), 1,
      sym_if_tok,
    STATE(197), 2,
      sym_string_if_choice,
      aux_sym_string_cond_repeat1,
    ACTIONS(762), 3,
      anon_sym_RPAREN,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(767), 5,
      sym_string,
      sym_weight,
      anon_sym_DOLLAR,
      sym_magic,
      anon_sym_LBRACK,
  [6688] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(771), 1,
      sym_always_tok,
    STATE(157), 1,
      sym_chunk_if_choice,
    STATE(165), 1,
      sym_lu_if_choice,
    STATE(402), 1,
      sym_if_tok,
    STATE(434), 1,
      sym_chunk_always_choice,
    STATE(469), 1,
      sym_lu_always_choice,
  [6713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(777), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(62), 2,
      sym_and,
      sym_or,
  [6732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(777), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(62), 2,
      sym_and,
      sym_or,
  [6751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(366), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 2,
      sym_and,
      sym_or,
    ACTIONS(784), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [6783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      aux_sym_if_tok_token1,
    STATE(359), 1,
      sym_if_tok,
    STATE(204), 2,
      sym_lu_if_choice,
      aux_sym_lu_cond_repeat1,
    ACTIONS(786), 3,
      anon_sym_RPAREN,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [6802] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      sym_string,
    ACTIONS(793), 1,
      sym_ident,
    ACTIONS(795), 1,
      sym_magic,
    STATE(45), 2,
      sym_num,
      sym_null_lu,
  [6825] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(771), 1,
      sym_always_tok,
    STATE(154), 1,
      sym_chunk_if_choice,
    STATE(163), 1,
      sym_lu_if_choice,
    STATE(402), 1,
      sym_if_tok,
    STATE(464), 1,
      sym_lu_always_choice,
    STATE(470), 1,
      sym_chunk_always_choice,
  [6850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 2,
      sym_and,
      sym_or,
    ACTIONS(797), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [6865] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(799), 1,
      sym_string,
    ACTIONS(801), 1,
      sym_ident,
    ACTIONS(803), 1,
      sym_magic,
    STATE(176), 2,
      sym_num,
      sym_null_lu,
  [6888] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(641), 1,
      sym_magic,
    ACTIONS(805), 1,
      sym_string,
    ACTIONS(807), 1,
      sym_ident,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [6911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 2,
      sym_and,
      sym_or,
    ACTIONS(784), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [6926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    ACTIONS(814), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 1,
      anon_sym_AT,
    ACTIONS(809), 2,
      sym_string,
      sym_ident,
    STATE(211), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [6947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(732), 1,
      anon_sym_AT,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    ACTIONS(749), 2,
      sym_string,
      sym_ident,
    STATE(211), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [6968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(822), 5,
      sym_string,
      aux_sym_num_token1,
      sym_global_var_prefix,
      sym_magic,
      anon_sym_GT,
  [6983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 2,
      aux_sym_and_token1,
      aux_sym_and_token2,
    ACTIONS(777), 2,
      aux_sym_or_token1,
      aux_sym_or_token2,
    STATE(62), 2,
      sym_and,
      sym_or,
  [7002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(753), 1,
      sym_string,
    ACTIONS(755), 1,
      sym_ident,
    STATE(181), 2,
      sym_num,
      sym_null_lu,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(828), 1,
      sym_string,
    ACTIONS(830), 1,
      sym_ident,
    STATE(186), 2,
      sym_num,
      sym_null_lu,
  [7090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(275), 1,
      sym_output_var_set,
    ACTIONS(391), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(280), 1,
      sym_output_var_set,
    ACTIONS(332), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(732), 1,
      anon_sym_AT,
    ACTIONS(832), 2,
      sym_string,
      sym_ident,
    STATE(212), 2,
      sym_attr_set_insert,
      aux_sym_attr_rule_repeat1,
  [7164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(805), 1,
      sym_string,
    ACTIONS(807), 1,
      sym_ident,
    STATE(51), 2,
      sym_num,
      sym_null_lu,
  [7184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(302), 1,
      sym_output_var_set,
    ACTIONS(298), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      sym_string,
    ACTIONS(793), 1,
      sym_ident,
    STATE(45), 2,
      sym_num,
      sym_null_lu,
  [7220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(834), 1,
      sym_string,
    ACTIONS(836), 1,
      sym_ident,
    STATE(53), 2,
      sym_num,
      sym_null_lu,
  [7240] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_LT,
    ACTIONS(838), 1,
      sym_ident,
    ACTIONS(840), 1,
      sym_magic,
    STATE(333), 1,
      sym_lit_tag,
    STATE(467), 1,
      sym_lu_cond,
  [7262] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_COLON,
    ACTIONS(842), 1,
      aux_sym_arrow_token1,
    ACTIONS(844), 1,
      sym_ident,
    ACTIONS(846), 1,
      anon_sym_GT,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_colon,
  [7284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACK2,
    STATE(260), 1,
      sym_output_var_set,
    ACTIONS(350), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7300] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(850), 1,
      sym_string,
    ACTIONS(852), 1,
      sym_ident,
    STATE(460), 1,
      sym_attr_prefix,
    STATE(461), 1,
      sym_attr_set_insert,
  [7322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_num_token1,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(799), 1,
      sym_string,
    ACTIONS(801), 1,
      sym_ident,
    STATE(176), 2,
      sym_num,
      sym_null_lu,
  [7342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [7353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7375] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LBRACK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(390), 1,
      sym_reduce_output,
  [7394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(343), 1,
      sym_attr_pair,
    STATE(369), 1,
      sym_attr_set_insert,
    ACTIONS(858), 2,
      sym_string,
      sym_ident,
  [7411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      anon_sym_LBRACK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(363), 1,
      sym_reduce_output,
  [7430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(346), 1,
      sym_attr_pair,
    STATE(369), 1,
      sym_attr_set_insert,
    ACTIONS(858), 2,
      sym_string,
      sym_ident,
  [7447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 5,
      anon_sym_RPAREN,
      aux_sym_and_token1,
      aux_sym_and_token2,
      aux_sym_or_token1,
      aux_sym_or_token2,
  [7458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(864), 1,
      sym_always_tok,
    STATE(165), 1,
      sym_lu_if_choice,
    STATE(359), 1,
      sym_if_tok,
    STATE(469), 1,
      sym_lu_always_choice,
  [7477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    STATE(263), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [7492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(868), 3,
      sym_string,
      aux_sym_num_token1,
      sym_magic,
  [7505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(439), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [7520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(872), 1,
      anon_sym_LBRACK,
    STATE(351), 1,
      sym_reduce_output,
    STATE(362), 1,
      sym_chunk_cond,
  [7539] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(864), 1,
      sym_always_tok,
    STATE(163), 1,
      sym_lu_if_choice,
    STATE(359), 1,
      sym_if_tok,
    STATE(464), 1,
      sym_lu_always_choice,
  [7558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(874), 1,
      sym_always_tok,
    STATE(157), 1,
      sym_chunk_if_choice,
    STATE(345), 1,
      sym_if_tok,
    STATE(434), 1,
      sym_chunk_always_choice,
  [7588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_DOLLAR,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_attr_set_insert,
    ACTIONS(876), 2,
      sym_string,
      sym_ident,
  [7605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(415), 3,
      sym_chunk_cond,
      sym_output_chunk,
      sym__chunk_val,
  [7620] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(874), 1,
      sym_always_tok,
    STATE(154), 1,
      sym_chunk_if_choice,
    STATE(345), 1,
      sym_if_tok,
    STATE(470), 1,
      sym_chunk_always_choice,
  [7639] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(882), 1,
      anon_sym_LBRACK,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(396), 1,
      sym_reduce_output,
  [7658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_if_tok_token1,
    ACTIONS(884), 1,
      sym_always_tok,
    STATE(158), 1,
      sym_string_if_choice,
    STATE(401), 1,
      sym_if_tok,
    STATE(409), 1,
      sym_string_always_choice,
  [7677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 5,
      sym_ident,
      sym_magic,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
  [7688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [7699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(374), 1,
      sym_reduce_output,
  [7715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(355), 1,
      sym_reduce_output,
    STATE(362), 1,
      sym_chunk_cond,
  [7751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_ident,
    ACTIONS(892), 1,
      anon_sym_DOLLAR,
    ACTIONS(894), 1,
      anon_sym_LBRACK,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
  [7787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(373), 1,
      sym_reduce_output,
  [7843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym_arrow_token1,
    ACTIONS(900), 1,
      sym_ident,
    STATE(118), 1,
      sym_arrow,
    STATE(332), 1,
      aux_sym_reduce_rule_group_repeat1,
  [7879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(904), 1,
      anon_sym_DOLLAR,
    ACTIONS(906), 1,
      anon_sym_LBRACK,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
  [7905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(393), 1,
      sym_reduce_output,
  [7941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(392), 1,
      sym_reduce_output,
  [7967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 4,
      sym_string,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [7987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [7997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(386), 1,
      sym_reduce_output,
  [8063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(376), 1,
      sym_reduce_output,
  [8099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(350), 1,
      sym_reduce_output,
    STATE(362), 1,
      sym_chunk_cond,
  [8115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(397), 1,
      sym_reduce_output,
  [8141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_ident,
    ACTIONS(918), 1,
      anon_sym_DOLLAR,
    ACTIONS(920), 1,
      anon_sym_LBRACK,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
  [8157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(400), 1,
      sym_reduce_output,
  [8173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(364), 1,
      sym_reduce_output,
  [8199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(365), 1,
      sym_reduce_output,
  [8225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8245] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(399), 1,
      sym_reduce_output,
  [8261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(389), 1,
      sym_reduce_output,
  [8277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(367), 1,
      sym_reduce_output,
  [8293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_else_tok_token1,
      aux_sym_else_tok_token2,
  [8303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    STATE(362), 1,
      sym_chunk_cond,
    STATE(379), 1,
      sym_reduce_output,
  [8319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_ident,
    ACTIONS(926), 1,
      anon_sym_DOLLAR,
    ACTIONS(928), 1,
      anon_sym_LBRACK,
    ACTIONS(930), 1,
      anon_sym_LBRACE,
  [8335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOT,
    ACTIONS(934), 1,
      anon_sym_SEMI,
    STATE(315), 1,
      aux_sym_output_rule_repeat1,
  [8348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_SEMI,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_retag_rule_repeat1,
  [8374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RBRACK,
    STATE(342), 1,
      aux_sym_reduce_rule_repeat2,
  [8387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LT,
    ACTIONS(946), 1,
      sym_ident,
    STATE(371), 1,
      sym_lit_tag,
  [8400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_RBRACK,
    STATE(310), 1,
      aux_sym_reduce_rule_repeat2,
  [8413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOT,
    ACTIONS(950), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      aux_sym_output_rule_repeat1,
  [8426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_output_var_set_repeat1,
  [8439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOT,
    ACTIONS(957), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      aux_sym_output_rule_repeat1,
  [8452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      aux_sym_reduce_rule_repeat2,
  [8478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_reduce_rule_repeat2,
  [8491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RBRACK,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_output_var_set_repeat1,
  [8504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_output_var_set_repeat1,
  [8517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    ACTIONS(975), 1,
      anon_sym_PIPE,
    STATE(324), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      aux_sym_reduce_rule_repeat2,
  [8569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    STATE(337), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    ACTIONS(986), 1,
      sym_ident,
    STATE(419), 1,
      sym_num,
  [8595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    STATE(329), 1,
      aux_sym_reduce_rule_repeat2,
  [8634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      aux_sym_arrow_token1,
    ACTIONS(996), 1,
      sym_ident,
    STATE(332), 1,
      aux_sym_reduce_rule_group_repeat1,
  [8647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOT,
    ACTIONS(950), 1,
      anon_sym_SEMI,
    STATE(317), 1,
      aux_sym_output_rule_repeat1,
  [8660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      aux_sym_reduce_rule_repeat2,
  [8673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_DOT,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    STATE(335), 1,
      aux_sym_output_rule_repeat1,
  [8686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_output_var_set_repeat1,
  [8725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_output_var_set_repeat1,
  [8738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_retag_rule_repeat1,
  [8751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(325), 1,
      aux_sym_reduce_rule_repeat2,
  [8764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      aux_sym_retag_rule_repeat1,
  [8790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat2,
  [8803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_condition,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_ident,
    STATE(321), 1,
      sym_set_var,
  [8831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 2,
      sym_string,
      sym_ident,
  [8839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 2,
      ts_builtin_sym_end,
      sym_ident,
  [8847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [8871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [8879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [8887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [8903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [8911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 2,
      ts_builtin_sym_end,
      sym_ident,
  [8919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_condition,
  [8929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 2,
      ts_builtin_sym_end,
      sym_ident,
  [8937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_condition,
  [8947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [8987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 2,
      sym_string,
      sym_ident,
  [9011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_condition,
  [9077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_ident,
    STATE(357), 1,
      sym_set_var,
  [9111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_ident,
    STATE(338), 1,
      sym_set_var,
  [9169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_condition,
  [9219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_num_token1,
    STATE(430), 1,
      sym_num,
  [9229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_condition,
  [9279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_condition,
  [9289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(247), 1,
      sym_condition,
  [9315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym_ident,
  [9330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_ident,
  [9337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
  [9344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_DOT,
  [9351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_ident,
  [9358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
  [9365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_EQ,
  [9372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [9379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
  [9386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_EQ,
  [9393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_EQ,
  [9400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_EQ,
  [9407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_clip_side,
  [9414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_ident,
  [9421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
  [9428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [9435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [9442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
  [9449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_DOT,
  [9456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_ident,
  [9463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      sym_ident,
  [9470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_ident,
  [9477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym_ident,
  [9484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_DOT,
  [9491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_ident,
  [9498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
  [9505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_EQ,
  [9512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [9519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym_ident,
  [9526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_ident,
  [9533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_ident,
  [9540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym_ident,
  [9547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
  [9554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_ident,
  [9561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_AT,
  [9568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      sym_ident,
  [9575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym_ident,
  [9582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_RBRACK,
  [9589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
  [9596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [9603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
  [9610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      sym_ident,
  [9617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_ident,
  [9624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
  [9631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_ident,
  [9638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      sym_ident,
  [9645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
  [9652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym_ident,
  [9659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
  [9666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
  [9673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_ident,
  [9680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_ident,
  [9687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_AT,
  [9694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_ident,
  [9701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_AT,
  [9708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_ident,
  [9715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
  [9722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [9729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_COLON,
  [9736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      sym_ident,
  [9743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_SEMI,
  [9750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [9757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [9764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
  [9771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
  [9778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_LPAREN,
  [9785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_GT,
  [9792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
  [9799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_ident,
  [9806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_ident,
  [9813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym_ident,
  [9820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
  [9827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
  [9834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_RBRACK,
  [9841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_AT,
  [9848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      sym_ident,
  [9855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
  [9862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      sym_ident,
  [9869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
  [9876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_ident,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_COLON,
  [9890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_RBRACK,
  [9897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_RBRACE,
  [9904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      sym_ident,
  [9911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_RBRACK,
  [9918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_RBRACE,
  [9925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_ident,
  [9932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      sym_ident,
  [9939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_SEMI,
  [9946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym_ident,
  [9953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_ident,
  [9960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      sym_ident,
  [9967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_ident,
  [9974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_ident,
  [9981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_COLON,
  [9988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym_ident,
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
  [SMALL_STATE(25)] = 971,
  [SMALL_STATE(26)] = 1041,
  [SMALL_STATE(27)] = 1109,
  [SMALL_STATE(28)] = 1177,
  [SMALL_STATE(29)] = 1242,
  [SMALL_STATE(30)] = 1311,
  [SMALL_STATE(31)] = 1375,
  [SMALL_STATE(32)] = 1439,
  [SMALL_STATE(33)] = 1503,
  [SMALL_STATE(34)] = 1567,
  [SMALL_STATE(35)] = 1631,
  [SMALL_STATE(36)] = 1695,
  [SMALL_STATE(37)] = 1759,
  [SMALL_STATE(38)] = 1823,
  [SMALL_STATE(39)] = 1864,
  [SMALL_STATE(40)] = 1905,
  [SMALL_STATE(41)] = 1943,
  [SMALL_STATE(42)] = 1981,
  [SMALL_STATE(43)] = 2041,
  [SMALL_STATE(44)] = 2079,
  [SMALL_STATE(45)] = 2109,
  [SMALL_STATE(46)] = 2147,
  [SMALL_STATE(47)] = 2185,
  [SMALL_STATE(48)] = 2245,
  [SMALL_STATE(49)] = 2305,
  [SMALL_STATE(50)] = 2343,
  [SMALL_STATE(51)] = 2381,
  [SMALL_STATE(52)] = 2419,
  [SMALL_STATE(53)] = 2457,
  [SMALL_STATE(54)] = 2495,
  [SMALL_STATE(55)] = 2533,
  [SMALL_STATE(56)] = 2571,
  [SMALL_STATE(57)] = 2631,
  [SMALL_STATE(58)] = 2691,
  [SMALL_STATE(59)] = 2724,
  [SMALL_STATE(60)] = 2759,
  [SMALL_STATE(61)] = 2791,
  [SMALL_STATE(62)] = 2845,
  [SMALL_STATE(63)] = 2899,
  [SMALL_STATE(64)] = 2927,
  [SMALL_STATE(65)] = 2959,
  [SMALL_STATE(66)] = 2987,
  [SMALL_STATE(67)] = 3015,
  [SMALL_STATE(68)] = 3047,
  [SMALL_STATE(69)] = 3101,
  [SMALL_STATE(70)] = 3129,
  [SMALL_STATE(71)] = 3161,
  [SMALL_STATE(72)] = 3215,
  [SMALL_STATE(73)] = 3269,
  [SMALL_STATE(74)] = 3297,
  [SMALL_STATE(75)] = 3324,
  [SMALL_STATE(76)] = 3351,
  [SMALL_STATE(77)] = 3378,
  [SMALL_STATE(78)] = 3405,
  [SMALL_STATE(79)] = 3431,
  [SMALL_STATE(80)] = 3457,
  [SMALL_STATE(81)] = 3483,
  [SMALL_STATE(82)] = 3509,
  [SMALL_STATE(83)] = 3535,
  [SMALL_STATE(84)] = 3561,
  [SMALL_STATE(85)] = 3587,
  [SMALL_STATE(86)] = 3613,
  [SMALL_STATE(87)] = 3639,
  [SMALL_STATE(88)] = 3665,
  [SMALL_STATE(89)] = 3691,
  [SMALL_STATE(90)] = 3717,
  [SMALL_STATE(91)] = 3743,
  [SMALL_STATE(92)] = 3769,
  [SMALL_STATE(93)] = 3795,
  [SMALL_STATE(94)] = 3821,
  [SMALL_STATE(95)] = 3847,
  [SMALL_STATE(96)] = 3873,
  [SMALL_STATE(97)] = 3899,
  [SMALL_STATE(98)] = 3925,
  [SMALL_STATE(99)] = 3951,
  [SMALL_STATE(100)] = 3978,
  [SMALL_STATE(101)] = 4026,
  [SMALL_STATE(102)] = 4050,
  [SMALL_STATE(103)] = 4074,
  [SMALL_STATE(104)] = 4122,
  [SMALL_STATE(105)] = 4146,
  [SMALL_STATE(106)] = 4194,
  [SMALL_STATE(107)] = 4242,
  [SMALL_STATE(108)] = 4284,
  [SMALL_STATE(109)] = 4306,
  [SMALL_STATE(110)] = 4348,
  [SMALL_STATE(111)] = 4388,
  [SMALL_STATE(112)] = 4430,
  [SMALL_STATE(113)] = 4472,
  [SMALL_STATE(114)] = 4494,
  [SMALL_STATE(115)] = 4536,
  [SMALL_STATE(116)] = 4578,
  [SMALL_STATE(117)] = 4620,
  [SMALL_STATE(118)] = 4662,
  [SMALL_STATE(119)] = 4701,
  [SMALL_STATE(120)] = 4740,
  [SMALL_STATE(121)] = 4779,
  [SMALL_STATE(122)] = 4805,
  [SMALL_STATE(123)] = 4843,
  [SMALL_STATE(124)] = 4881,
  [SMALL_STATE(125)] = 4919,
  [SMALL_STATE(126)] = 4945,
  [SMALL_STATE(127)] = 4983,
  [SMALL_STATE(128)] = 5018,
  [SMALL_STATE(129)] = 5039,
  [SMALL_STATE(130)] = 5062,
  [SMALL_STATE(131)] = 5085,
  [SMALL_STATE(132)] = 5108,
  [SMALL_STATE(133)] = 5131,
  [SMALL_STATE(134)] = 5164,
  [SMALL_STATE(135)] = 5187,
  [SMALL_STATE(136)] = 5210,
  [SMALL_STATE(137)] = 5233,
  [SMALL_STATE(138)] = 5268,
  [SMALL_STATE(139)] = 5287,
  [SMALL_STATE(140)] = 5306,
  [SMALL_STATE(141)] = 5339,
  [SMALL_STATE(142)] = 5362,
  [SMALL_STATE(143)] = 5385,
  [SMALL_STATE(144)] = 5404,
  [SMALL_STATE(145)] = 5427,
  [SMALL_STATE(146)] = 5450,
  [SMALL_STATE(147)] = 5468,
  [SMALL_STATE(148)] = 5502,
  [SMALL_STATE(149)] = 5536,
  [SMALL_STATE(150)] = 5570,
  [SMALL_STATE(151)] = 5588,
  [SMALL_STATE(152)] = 5622,
  [SMALL_STATE(153)] = 5640,
  [SMALL_STATE(154)] = 5665,
  [SMALL_STATE(155)] = 5692,
  [SMALL_STATE(156)] = 5717,
  [SMALL_STATE(157)] = 5742,
  [SMALL_STATE(158)] = 5769,
  [SMALL_STATE(159)] = 5796,
  [SMALL_STATE(160)] = 5823,
  [SMALL_STATE(161)] = 5848,
  [SMALL_STATE(162)] = 5875,
  [SMALL_STATE(163)] = 5900,
  [SMALL_STATE(164)] = 5927,
  [SMALL_STATE(165)] = 5954,
  [SMALL_STATE(166)] = 5981,
  [SMALL_STATE(167)] = 5998,
  [SMALL_STATE(168)] = 6025,
  [SMALL_STATE(169)] = 6050,
  [SMALL_STATE(170)] = 6077,
  [SMALL_STATE(171)] = 6099,
  [SMALL_STATE(172)] = 6121,
  [SMALL_STATE(173)] = 6143,
  [SMALL_STATE(174)] = 6165,
  [SMALL_STATE(175)] = 6181,
  [SMALL_STATE(176)] = 6203,
  [SMALL_STATE(177)] = 6225,
  [SMALL_STATE(178)] = 6247,
  [SMALL_STATE(179)] = 6269,
  [SMALL_STATE(180)] = 6291,
  [SMALL_STATE(181)] = 6315,
  [SMALL_STATE(182)] = 6337,
  [SMALL_STATE(183)] = 6357,
  [SMALL_STATE(184)] = 6379,
  [SMALL_STATE(185)] = 6407,
  [SMALL_STATE(186)] = 6423,
  [SMALL_STATE(187)] = 6445,
  [SMALL_STATE(188)] = 6467,
  [SMALL_STATE(189)] = 6487,
  [SMALL_STATE(190)] = 6509,
  [SMALL_STATE(191)] = 6531,
  [SMALL_STATE(192)] = 6553,
  [SMALL_STATE(193)] = 6575,
  [SMALL_STATE(194)] = 6591,
  [SMALL_STATE(195)] = 6612,
  [SMALL_STATE(196)] = 6635,
  [SMALL_STATE(197)] = 6654,
  [SMALL_STATE(198)] = 6673,
  [SMALL_STATE(199)] = 6688,
  [SMALL_STATE(200)] = 6713,
  [SMALL_STATE(201)] = 6732,
  [SMALL_STATE(202)] = 6751,
  [SMALL_STATE(203)] = 6768,
  [SMALL_STATE(204)] = 6783,
  [SMALL_STATE(205)] = 6802,
  [SMALL_STATE(206)] = 6825,
  [SMALL_STATE(207)] = 6850,
  [SMALL_STATE(208)] = 6865,
  [SMALL_STATE(209)] = 6888,
  [SMALL_STATE(210)] = 6911,
  [SMALL_STATE(211)] = 6926,
  [SMALL_STATE(212)] = 6947,
  [SMALL_STATE(213)] = 6968,
  [SMALL_STATE(214)] = 6983,
  [SMALL_STATE(215)] = 7002,
  [SMALL_STATE(216)] = 7022,
  [SMALL_STATE(217)] = 7034,
  [SMALL_STATE(218)] = 7046,
  [SMALL_STATE(219)] = 7058,
  [SMALL_STATE(220)] = 7070,
  [SMALL_STATE(221)] = 7090,
  [SMALL_STATE(222)] = 7102,
  [SMALL_STATE(223)] = 7114,
  [SMALL_STATE(224)] = 7130,
  [SMALL_STATE(225)] = 7146,
  [SMALL_STATE(226)] = 7164,
  [SMALL_STATE(227)] = 7184,
  [SMALL_STATE(228)] = 7200,
  [SMALL_STATE(229)] = 7220,
  [SMALL_STATE(230)] = 7240,
  [SMALL_STATE(231)] = 7262,
  [SMALL_STATE(232)] = 7284,
  [SMALL_STATE(233)] = 7300,
  [SMALL_STATE(234)] = 7322,
  [SMALL_STATE(235)] = 7342,
  [SMALL_STATE(236)] = 7353,
  [SMALL_STATE(237)] = 7364,
  [SMALL_STATE(238)] = 7375,
  [SMALL_STATE(239)] = 7394,
  [SMALL_STATE(240)] = 7411,
  [SMALL_STATE(241)] = 7430,
  [SMALL_STATE(242)] = 7447,
  [SMALL_STATE(243)] = 7458,
  [SMALL_STATE(244)] = 7477,
  [SMALL_STATE(245)] = 7492,
  [SMALL_STATE(246)] = 7505,
  [SMALL_STATE(247)] = 7520,
  [SMALL_STATE(248)] = 7539,
  [SMALL_STATE(249)] = 7558,
  [SMALL_STATE(250)] = 7569,
  [SMALL_STATE(251)] = 7588,
  [SMALL_STATE(252)] = 7605,
  [SMALL_STATE(253)] = 7620,
  [SMALL_STATE(254)] = 7639,
  [SMALL_STATE(255)] = 7658,
  [SMALL_STATE(256)] = 7677,
  [SMALL_STATE(257)] = 7688,
  [SMALL_STATE(258)] = 7699,
  [SMALL_STATE(259)] = 7715,
  [SMALL_STATE(260)] = 7725,
  [SMALL_STATE(261)] = 7735,
  [SMALL_STATE(262)] = 7751,
  [SMALL_STATE(263)] = 7761,
  [SMALL_STATE(264)] = 7771,
  [SMALL_STATE(265)] = 7787,
  [SMALL_STATE(266)] = 7797,
  [SMALL_STATE(267)] = 7807,
  [SMALL_STATE(268)] = 7817,
  [SMALL_STATE(269)] = 7827,
  [SMALL_STATE(270)] = 7843,
  [SMALL_STATE(271)] = 7853,
  [SMALL_STATE(272)] = 7863,
  [SMALL_STATE(273)] = 7879,
  [SMALL_STATE(274)] = 7889,
  [SMALL_STATE(275)] = 7905,
  [SMALL_STATE(276)] = 7915,
  [SMALL_STATE(277)] = 7925,
  [SMALL_STATE(278)] = 7941,
  [SMALL_STATE(279)] = 7951,
  [SMALL_STATE(280)] = 7967,
  [SMALL_STATE(281)] = 7977,
  [SMALL_STATE(282)] = 7987,
  [SMALL_STATE(283)] = 7997,
  [SMALL_STATE(284)] = 8007,
  [SMALL_STATE(285)] = 8017,
  [SMALL_STATE(286)] = 8027,
  [SMALL_STATE(287)] = 8037,
  [SMALL_STATE(288)] = 8047,
  [SMALL_STATE(289)] = 8063,
  [SMALL_STATE(290)] = 8073,
  [SMALL_STATE(291)] = 8083,
  [SMALL_STATE(292)] = 8099,
  [SMALL_STATE(293)] = 8115,
  [SMALL_STATE(294)] = 8125,
  [SMALL_STATE(295)] = 8141,
  [SMALL_STATE(296)] = 8157,
  [SMALL_STATE(297)] = 8173,
  [SMALL_STATE(298)] = 8183,
  [SMALL_STATE(299)] = 8199,
  [SMALL_STATE(300)] = 8209,
  [SMALL_STATE(301)] = 8225,
  [SMALL_STATE(302)] = 8235,
  [SMALL_STATE(303)] = 8245,
  [SMALL_STATE(304)] = 8261,
  [SMALL_STATE(305)] = 8277,
  [SMALL_STATE(306)] = 8293,
  [SMALL_STATE(307)] = 8303,
  [SMALL_STATE(308)] = 8319,
  [SMALL_STATE(309)] = 8335,
  [SMALL_STATE(310)] = 8348,
  [SMALL_STATE(311)] = 8361,
  [SMALL_STATE(312)] = 8374,
  [SMALL_STATE(313)] = 8387,
  [SMALL_STATE(314)] = 8400,
  [SMALL_STATE(315)] = 8413,
  [SMALL_STATE(316)] = 8426,
  [SMALL_STATE(317)] = 8439,
  [SMALL_STATE(318)] = 8452,
  [SMALL_STATE(319)] = 8465,
  [SMALL_STATE(320)] = 8478,
  [SMALL_STATE(321)] = 8491,
  [SMALL_STATE(322)] = 8504,
  [SMALL_STATE(323)] = 8517,
  [SMALL_STATE(324)] = 8530,
  [SMALL_STATE(325)] = 8543,
  [SMALL_STATE(326)] = 8556,
  [SMALL_STATE(327)] = 8569,
  [SMALL_STATE(328)] = 8582,
  [SMALL_STATE(329)] = 8595,
  [SMALL_STATE(330)] = 8608,
  [SMALL_STATE(331)] = 8621,
  [SMALL_STATE(332)] = 8634,
  [SMALL_STATE(333)] = 8647,
  [SMALL_STATE(334)] = 8660,
  [SMALL_STATE(335)] = 8673,
  [SMALL_STATE(336)] = 8686,
  [SMALL_STATE(337)] = 8699,
  [SMALL_STATE(338)] = 8712,
  [SMALL_STATE(339)] = 8725,
  [SMALL_STATE(340)] = 8738,
  [SMALL_STATE(341)] = 8751,
  [SMALL_STATE(342)] = 8764,
  [SMALL_STATE(343)] = 8777,
  [SMALL_STATE(344)] = 8790,
  [SMALL_STATE(345)] = 8803,
  [SMALL_STATE(346)] = 8813,
  [SMALL_STATE(347)] = 8821,
  [SMALL_STATE(348)] = 8831,
  [SMALL_STATE(349)] = 8839,
  [SMALL_STATE(350)] = 8847,
  [SMALL_STATE(351)] = 8855,
  [SMALL_STATE(352)] = 8863,
  [SMALL_STATE(353)] = 8871,
  [SMALL_STATE(354)] = 8879,
  [SMALL_STATE(355)] = 8887,
  [SMALL_STATE(356)] = 8895,
  [SMALL_STATE(357)] = 8903,
  [SMALL_STATE(358)] = 8911,
  [SMALL_STATE(359)] = 8919,
  [SMALL_STATE(360)] = 8929,
  [SMALL_STATE(361)] = 8937,
  [SMALL_STATE(362)] = 8947,
  [SMALL_STATE(363)] = 8955,
  [SMALL_STATE(364)] = 8963,
  [SMALL_STATE(365)] = 8971,
  [SMALL_STATE(366)] = 8979,
  [SMALL_STATE(367)] = 8987,
  [SMALL_STATE(368)] = 8995,
  [SMALL_STATE(369)] = 9003,
  [SMALL_STATE(370)] = 9011,
  [SMALL_STATE(371)] = 9019,
  [SMALL_STATE(372)] = 9027,
  [SMALL_STATE(373)] = 9035,
  [SMALL_STATE(374)] = 9043,
  [SMALL_STATE(375)] = 9051,
  [SMALL_STATE(376)] = 9059,
  [SMALL_STATE(377)] = 9067,
  [SMALL_STATE(378)] = 9077,
  [SMALL_STATE(379)] = 9085,
  [SMALL_STATE(380)] = 9093,
  [SMALL_STATE(381)] = 9101,
  [SMALL_STATE(382)] = 9111,
  [SMALL_STATE(383)] = 9119,
  [SMALL_STATE(384)] = 9127,
  [SMALL_STATE(385)] = 9135,
  [SMALL_STATE(386)] = 9143,
  [SMALL_STATE(387)] = 9151,
  [SMALL_STATE(388)] = 9159,
  [SMALL_STATE(389)] = 9169,
  [SMALL_STATE(390)] = 9177,
  [SMALL_STATE(391)] = 9185,
  [SMALL_STATE(392)] = 9193,
  [SMALL_STATE(393)] = 9201,
  [SMALL_STATE(394)] = 9209,
  [SMALL_STATE(395)] = 9219,
  [SMALL_STATE(396)] = 9229,
  [SMALL_STATE(397)] = 9237,
  [SMALL_STATE(398)] = 9245,
  [SMALL_STATE(399)] = 9253,
  [SMALL_STATE(400)] = 9261,
  [SMALL_STATE(401)] = 9269,
  [SMALL_STATE(402)] = 9279,
  [SMALL_STATE(403)] = 9289,
  [SMALL_STATE(404)] = 9297,
  [SMALL_STATE(405)] = 9305,
  [SMALL_STATE(406)] = 9315,
  [SMALL_STATE(407)] = 9323,
  [SMALL_STATE(408)] = 9330,
  [SMALL_STATE(409)] = 9337,
  [SMALL_STATE(410)] = 9344,
  [SMALL_STATE(411)] = 9351,
  [SMALL_STATE(412)] = 9358,
  [SMALL_STATE(413)] = 9365,
  [SMALL_STATE(414)] = 9372,
  [SMALL_STATE(415)] = 9379,
  [SMALL_STATE(416)] = 9386,
  [SMALL_STATE(417)] = 9393,
  [SMALL_STATE(418)] = 9400,
  [SMALL_STATE(419)] = 9407,
  [SMALL_STATE(420)] = 9414,
  [SMALL_STATE(421)] = 9421,
  [SMALL_STATE(422)] = 9428,
  [SMALL_STATE(423)] = 9435,
  [SMALL_STATE(424)] = 9442,
  [SMALL_STATE(425)] = 9449,
  [SMALL_STATE(426)] = 9456,
  [SMALL_STATE(427)] = 9463,
  [SMALL_STATE(428)] = 9470,
  [SMALL_STATE(429)] = 9477,
  [SMALL_STATE(430)] = 9484,
  [SMALL_STATE(431)] = 9491,
  [SMALL_STATE(432)] = 9498,
  [SMALL_STATE(433)] = 9505,
  [SMALL_STATE(434)] = 9512,
  [SMALL_STATE(435)] = 9519,
  [SMALL_STATE(436)] = 9526,
  [SMALL_STATE(437)] = 9533,
  [SMALL_STATE(438)] = 9540,
  [SMALL_STATE(439)] = 9547,
  [SMALL_STATE(440)] = 9554,
  [SMALL_STATE(441)] = 9561,
  [SMALL_STATE(442)] = 9568,
  [SMALL_STATE(443)] = 9575,
  [SMALL_STATE(444)] = 9582,
  [SMALL_STATE(445)] = 9589,
  [SMALL_STATE(446)] = 9596,
  [SMALL_STATE(447)] = 9603,
  [SMALL_STATE(448)] = 9610,
  [SMALL_STATE(449)] = 9617,
  [SMALL_STATE(450)] = 9624,
  [SMALL_STATE(451)] = 9631,
  [SMALL_STATE(452)] = 9638,
  [SMALL_STATE(453)] = 9645,
  [SMALL_STATE(454)] = 9652,
  [SMALL_STATE(455)] = 9659,
  [SMALL_STATE(456)] = 9666,
  [SMALL_STATE(457)] = 9673,
  [SMALL_STATE(458)] = 9680,
  [SMALL_STATE(459)] = 9687,
  [SMALL_STATE(460)] = 9694,
  [SMALL_STATE(461)] = 9701,
  [SMALL_STATE(462)] = 9708,
  [SMALL_STATE(463)] = 9715,
  [SMALL_STATE(464)] = 9722,
  [SMALL_STATE(465)] = 9729,
  [SMALL_STATE(466)] = 9736,
  [SMALL_STATE(467)] = 9743,
  [SMALL_STATE(468)] = 9750,
  [SMALL_STATE(469)] = 9757,
  [SMALL_STATE(470)] = 9764,
  [SMALL_STATE(471)] = 9771,
  [SMALL_STATE(472)] = 9778,
  [SMALL_STATE(473)] = 9785,
  [SMALL_STATE(474)] = 9792,
  [SMALL_STATE(475)] = 9799,
  [SMALL_STATE(476)] = 9806,
  [SMALL_STATE(477)] = 9813,
  [SMALL_STATE(478)] = 9820,
  [SMALL_STATE(479)] = 9827,
  [SMALL_STATE(480)] = 9834,
  [SMALL_STATE(481)] = 9841,
  [SMALL_STATE(482)] = 9848,
  [SMALL_STATE(483)] = 9855,
  [SMALL_STATE(484)] = 9862,
  [SMALL_STATE(485)] = 9869,
  [SMALL_STATE(486)] = 9876,
  [SMALL_STATE(487)] = 9883,
  [SMALL_STATE(488)] = 9890,
  [SMALL_STATE(489)] = 9897,
  [SMALL_STATE(490)] = 9904,
  [SMALL_STATE(491)] = 9911,
  [SMALL_STATE(492)] = 9918,
  [SMALL_STATE(493)] = 9925,
  [SMALL_STATE(494)] = 9932,
  [SMALL_STATE(495)] = 9939,
  [SMALL_STATE(496)] = 9946,
  [SMALL_STATE(497)] = 9953,
  [SMALL_STATE(498)] = 9960,
  [SMALL_STATE(499)] = 9967,
  [SMALL_STATE(500)] = 9974,
  [SMALL_STATE(501)] = 9981,
  [SMALL_STATE(502)] = 9988,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 18),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 58),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 58),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3, .production_id = 27),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3, .production_id = 27),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 55),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 41),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 41),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 68),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 68),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2, .production_id = 17),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2, .production_id = 17),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 56),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 56),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 69),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 69),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5, .production_id = 57),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5, .production_id = 57),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4, .production_id = 42),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4, .production_id = 42),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6, .production_id = 67),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6, .production_id = 67),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 74),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 74),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7, .production_id = 73),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7, .production_id = 73),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(39),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(39),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(44),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(448),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(226),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(213),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(245),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(35),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(199),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(65),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(32),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_output_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(137),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_output_repeat1, 2), SHIFT_REPEAT(25),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(39),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(39),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(44),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(448),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(226),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(213),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(245),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(35),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(243),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(65),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(137),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_chunk_repeat1, 2), SHIFT_REPEAT(28),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 39),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 39),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 38),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 38),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 54),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 54),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 52),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3, .production_id = 16),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3, .production_id = 16),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 24),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 24),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 25),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 25),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 37),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 35),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 35),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 35), SHIFT_REPEAT(274),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 63),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 63),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_lu, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_lu, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 33),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 33),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 64),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4, .production_id = 64),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 49),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 3, .production_id = 49),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 66),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 66),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 7, .production_id = 65),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 7, .production_id = 65),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_sequence, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_sequence, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 50),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 50),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 53),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 53),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 36),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 36),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_sequence, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_sequence, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5, .production_id = 34),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5, .production_id = 34),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4, .production_id = 23),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4, .production_id = 23),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6, .production_id = 51),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_chunk, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_chunk, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(481),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(125),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(486),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(233),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(500),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(166),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 14),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 14),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 21),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 21),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 14),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 14),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6, .production_id = 21),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6, .production_id = 21),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 13),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 13),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3, .production_id = 5),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3, .production_id = 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(251),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5, .production_id = 13),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5, .production_id = 13),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4, .production_id = 5),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_set_insert, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_set_insert, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(472),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(472),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2, .production_id = 35), SHIFT_REPEAT(295),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(472),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(211),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(500),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(496),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert, 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inserted, 1),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inserted, 1),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_if_choice, 3, .production_id = 11),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_if_choice, 3, .production_id = 11),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4, .production_id = 9),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_if_choice, 3, .production_id = 11),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(381),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(120),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_prefix, 1),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(332),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(313),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(241),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(183),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4, .production_id = 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 28),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 29),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_var, 4, .production_id = 30),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_global_str, 4, .production_id = 30),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_chunk_attr, 4, .production_id = 30),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6, .production_id = 31),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_var, 3, .production_id = 32),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4, .production_id = 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 44),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 45),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 46),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_surf, 5, .production_id = 47),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7, .production_id = 48),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2, .production_id = 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5, .production_id = 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5, .production_id = 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 59),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 60),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_tag, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 61),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3, .production_id = 6),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8, .production_id = 62),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_pair, 2, .production_id = 7),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 22),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6, .production_id = 8),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 70),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 20),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5, .production_id = 19),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 71),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9, .production_id = 72),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 15),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 75),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_output, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10, .production_id = 76),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11, .production_id = 77),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6, .production_id = 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4, .production_id = 12),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7, .production_id = 8),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_always_choice, 2, .production_id = 4),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_else_choice, 2, .production_id = 4),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_always_choice, 2, .production_id = 4),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_else_choice, 2, .production_id = 4),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_always_choice, 2, .production_id = 4),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_else_choice, 2, .production_id = 4),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
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
