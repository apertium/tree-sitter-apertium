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
#define STATE_COUNT 583
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_arrow_token1 = 1,
  sym_string = 2,
  sym_ident = 3,
  sym_comment = 4,
  aux_sym_num_token1 = 5,
  sym_weight = 6,
  anon_sym_COLON = 7,
  anon_sym_PERCENT = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  anon_sym_DOT = 11,
  anon_sym_SEMI = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_EQ = 18,
  anon_sym_AT = 19,
  anon_sym_DOLLAR = 20,
  anon_sym_DOLLAR_DOLLAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_sl = 23,
  anon_sym_tl = 24,
  anon_sym_ref = 25,
  anon_sym_DOLLAR_PERCENT = 26,
  aux_sym_str_op_token1 = 27,
  aux_sym_str_op_token2 = 28,
  aux_sym_str_op_token3 = 29,
  aux_sym_str_op_token4 = 30,
  aux_sym_str_op_token5 = 31,
  aux_sym_str_op_token6 = 32,
  aux_sym_str_op_token7 = 33,
  aux_sym_str_op_token8 = 34,
  aux_sym_str_op_token9 = 35,
  aux_sym_str_op_token10 = 36,
  aux_sym_str_op_token11 = 37,
  aux_sym_str_op_token12 = 38,
  aux_sym_str_op_token13 = 39,
  aux_sym_str_op_token14 = 40,
  aux_sym_str_op_token15 = 41,
  aux_sym_str_op_token16 = 42,
  aux_sym_bool_op_token1 = 43,
  aux_sym_bool_op_token2 = 44,
  aux_sym_bool_op_token3 = 45,
  aux_sym_bool_op_token4 = 46,
  aux_sym_not_token1 = 47,
  aux_sym_not_token2 = 48,
  aux_sym_not_token3 = 49,
  anon_sym_STAR = 50,
  anon_sym_LBRACK2 = 51,
  anon_sym_LPAREN2 = 52,
  anon_sym_AT2 = 53,
  anon_sym_PLUS = 54,
  anon_sym__ = 55,
  aux_sym_if_tok_token1 = 56,
  aux_sym_elif_tok_token1 = 57,
  aux_sym_elif_tok_token2 = 58,
  aux_sym_else_tok_token1 = 59,
  aux_sym_else_tok_token2 = 60,
  sym_always_tok = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_PIPE = 64,
  anon_sym_QMARK = 65,
  sym_source_file = 66,
  sym_arrow = 67,
  sym_num = 68,
  sym_output_rule = 69,
  sym_retag_rule = 70,
  sym_attr_default = 71,
  sym_attr_rule = 72,
  sym_clip = 73,
  sym_str_op = 74,
  sym_bool_op = 75,
  sym_not = 76,
  sym__string_val = 77,
  sym__cond_base_bool = 78,
  sym__cond_bool = 79,
  sym_condition = 80,
  sym_pattern_element = 81,
  sym_unknown = 82,
  sym_output_var_set = 83,
  sym_macro_name = 84,
  sym_literal_lu = 85,
  sym_output_element = 86,
  sym_blank = 87,
  sym_if_tok = 88,
  sym_elif_tok = 89,
  sym_else_tok = 90,
  sym_string_cond = 91,
  sym_chunk_cond = 92,
  sym_lu_cond = 93,
  sym__chunk_val = 94,
  sym__lu_val = 95,
  sym_reduce_rule_group = 96,
  sym_reduce_rule = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_output_rule_repeat1 = 99,
  aux_sym_retag_rule_repeat1 = 100,
  aux_sym_attr_rule_repeat1 = 101,
  aux_sym_pattern_element_repeat1 = 102,
  aux_sym_output_var_set_repeat1 = 103,
  aux_sym_literal_lu_repeat1 = 104,
  aux_sym_string_cond_repeat1 = 105,
  aux_sym_chunk_cond_repeat1 = 106,
  aux_sym_lu_cond_repeat1 = 107,
  aux_sym__chunk_val_repeat1 = 108,
  aux_sym_reduce_rule_group_repeat1 = 109,
  aux_sym_reduce_rule_group_repeat2 = 110,
  aux_sym_reduce_rule_repeat1 = 111,
  aux_sym_reduce_rule_repeat2 = 112,
  aux_sym_reduce_rule_repeat3 = 113,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_arrow_token1] = "arrow_token1",
  [sym_string] = "string",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [aux_sym_num_token1] = "num_token1",
  [sym_weight] = "weight",
  [anon_sym_COLON] = ":",
  [anon_sym_PERCENT] = "%",
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
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_SLASH] = "/",
  [anon_sym_sl] = "sl",
  [anon_sym_tl] = "tl",
  [anon_sym_ref] = "ref",
  [anon_sym_DOLLAR_PERCENT] = "$%",
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
  [aux_sym_bool_op_token1] = "bool_op_token1",
  [aux_sym_bool_op_token2] = "bool_op_token2",
  [aux_sym_bool_op_token3] = "bool_op_token3",
  [aux_sym_bool_op_token4] = "bool_op_token4",
  [aux_sym_not_token1] = "not_token1",
  [aux_sym_not_token2] = "not_token2",
  [aux_sym_not_token3] = "not_token3",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_AT2] = "@",
  [anon_sym_PLUS] = "+",
  [anon_sym__] = "_",
  [aux_sym_if_tok_token1] = "if_tok_token1",
  [aux_sym_elif_tok_token1] = "elif_tok_token1",
  [aux_sym_elif_tok_token2] = "elif_tok_token2",
  [aux_sym_else_tok_token1] = "else_tok_token1",
  [aux_sym_else_tok_token2] = "else_tok_token2",
  [sym_always_tok] = "always_tok",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "\?",
  [sym_source_file] = "source_file",
  [sym_arrow] = "arrow",
  [sym_num] = "num",
  [sym_output_rule] = "output_rule",
  [sym_retag_rule] = "retag_rule",
  [sym_attr_default] = "attr_default",
  [sym_attr_rule] = "attr_rule",
  [sym_clip] = "clip",
  [sym_str_op] = "str_op",
  [sym_bool_op] = "bool_op",
  [sym_not] = "not",
  [sym__string_val] = "_string_val",
  [sym__cond_base_bool] = "_cond_base_bool",
  [sym__cond_bool] = "_cond_bool",
  [sym_condition] = "condition",
  [sym_pattern_element] = "pattern_element",
  [sym_unknown] = "unknown",
  [sym_output_var_set] = "output_var_set",
  [sym_macro_name] = "macro_name",
  [sym_literal_lu] = "literal_lu",
  [sym_output_element] = "output_element",
  [sym_blank] = "blank",
  [sym_if_tok] = "if_tok",
  [sym_elif_tok] = "elif_tok",
  [sym_else_tok] = "else_tok",
  [sym_string_cond] = "string_cond",
  [sym_chunk_cond] = "chunk_cond",
  [sym_lu_cond] = "lu_cond",
  [sym__chunk_val] = "_chunk_val",
  [sym__lu_val] = "_lu_val",
  [sym_reduce_rule_group] = "reduce_rule_group",
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
  [aux_sym__chunk_val_repeat1] = "_chunk_val_repeat1",
  [aux_sym_reduce_rule_group_repeat1] = "reduce_rule_group_repeat1",
  [aux_sym_reduce_rule_group_repeat2] = "reduce_rule_group_repeat2",
  [aux_sym_reduce_rule_repeat1] = "reduce_rule_repeat1",
  [aux_sym_reduce_rule_repeat2] = "reduce_rule_repeat2",
  [aux_sym_reduce_rule_repeat3] = "reduce_rule_repeat3",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_arrow_token1] = aux_sym_arrow_token1,
  [sym_string] = sym_string,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [aux_sym_num_token1] = aux_sym_num_token1,
  [sym_weight] = sym_weight,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_sl] = anon_sym_sl,
  [anon_sym_tl] = anon_sym_tl,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_DOLLAR_PERCENT] = anon_sym_DOLLAR_PERCENT,
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
  [aux_sym_bool_op_token1] = aux_sym_bool_op_token1,
  [aux_sym_bool_op_token2] = aux_sym_bool_op_token2,
  [aux_sym_bool_op_token3] = aux_sym_bool_op_token3,
  [aux_sym_bool_op_token4] = aux_sym_bool_op_token4,
  [aux_sym_not_token1] = aux_sym_not_token1,
  [aux_sym_not_token2] = aux_sym_not_token2,
  [aux_sym_not_token3] = aux_sym_not_token3,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym__] = anon_sym__,
  [aux_sym_if_tok_token1] = aux_sym_if_tok_token1,
  [aux_sym_elif_tok_token1] = aux_sym_elif_tok_token1,
  [aux_sym_elif_tok_token2] = aux_sym_elif_tok_token2,
  [aux_sym_else_tok_token1] = aux_sym_else_tok_token1,
  [aux_sym_else_tok_token2] = aux_sym_else_tok_token2,
  [sym_always_tok] = sym_always_tok,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_source_file] = sym_source_file,
  [sym_arrow] = sym_arrow,
  [sym_num] = sym_num,
  [sym_output_rule] = sym_output_rule,
  [sym_retag_rule] = sym_retag_rule,
  [sym_attr_default] = sym_attr_default,
  [sym_attr_rule] = sym_attr_rule,
  [sym_clip] = sym_clip,
  [sym_str_op] = sym_str_op,
  [sym_bool_op] = sym_bool_op,
  [sym_not] = sym_not,
  [sym__string_val] = sym__string_val,
  [sym__cond_base_bool] = sym__cond_base_bool,
  [sym__cond_bool] = sym__cond_bool,
  [sym_condition] = sym_condition,
  [sym_pattern_element] = sym_pattern_element,
  [sym_unknown] = sym_unknown,
  [sym_output_var_set] = sym_output_var_set,
  [sym_macro_name] = sym_macro_name,
  [sym_literal_lu] = sym_literal_lu,
  [sym_output_element] = sym_output_element,
  [sym_blank] = sym_blank,
  [sym_if_tok] = sym_if_tok,
  [sym_elif_tok] = sym_elif_tok,
  [sym_else_tok] = sym_else_tok,
  [sym_string_cond] = sym_string_cond,
  [sym_chunk_cond] = sym_chunk_cond,
  [sym_lu_cond] = sym_lu_cond,
  [sym__chunk_val] = sym__chunk_val,
  [sym__lu_val] = sym__lu_val,
  [sym_reduce_rule_group] = sym_reduce_rule_group,
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
  [aux_sym__chunk_val_repeat1] = aux_sym__chunk_val_repeat1,
  [aux_sym_reduce_rule_group_repeat1] = aux_sym_reduce_rule_group_repeat1,
  [aux_sym_reduce_rule_group_repeat2] = aux_sym_reduce_rule_group_repeat2,
  [aux_sym_reduce_rule_repeat1] = aux_sym_reduce_rule_repeat1,
  [aux_sym_reduce_rule_repeat2] = aux_sym_reduce_rule_repeat2,
  [aux_sym_reduce_rule_repeat3] = aux_sym_reduce_rule_repeat3,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_PERCENT] = {
    .visible = true,
    .named = false,
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
  [aux_sym_bool_op_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_op_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_op_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_op_token4] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_output_rule] = {
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
  [sym_clip] = {
    .visible = true,
    .named = true,
  },
  [sym_str_op] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_op] = {
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
  [sym_output_element] = {
    .visible = true,
    .named = true,
  },
  [sym_blank] = {
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
  [aux_sym__chunk_val_repeat1] = {
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
  [aux_sym_reduce_rule_repeat3] = {
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

static inline bool sym_ident_character_set_4(int32_t c) {
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
      if (eof) ADVANCE(315);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '=') ADVANCE(348);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == '@') ADVANCE(415);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == 8594) ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8976) ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
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
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '+') ADVANCE(417);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '@') ADVANCE(415);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '+') ADVANCE(417);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '+') ADVANCE(417);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
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
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '+') ADVANCE(417);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '+') ADVANCE(417);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '>') ADVANCE(340);
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
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == '@') ADVANCE(349);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '/' || '>' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}' &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '@') ADVANCE(349);
      if (lookahead == '[') ADVANCE(343);
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
      if (lookahead == '&') ADVANCE(405);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '@') ADVANCE(415);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '|') ADVANCE(407);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8712) ADVANCE(397);
      if (lookahead == 8976) ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '&') ADVANCE(405);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '|') ADVANCE(407);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8712) ADVANCE(397);
      if (lookahead == 8976) ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '=') ADVANCE(348);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == 8594) ADVANCE(316);
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
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(312);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(352);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(405);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '|') ADVANCE(407);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8712) ADVANCE(397);
      if (lookahead == 8976) ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(356);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 21:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(21);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(23);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(420);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(28);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(30);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(32);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(36);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(38);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(421);
      END_STATE();
    case 42:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(53);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 54:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      END_STATE();
    case 58:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(422);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(382);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(373);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(79);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(81);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(82);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(388);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(90);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(92);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(98);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 100:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(100);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 101:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(105);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(106);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 107:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 108:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      END_STATE();
    case 109:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 112:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      END_STATE();
    case 113:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(113);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 114:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(114);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 115:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 116:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(116);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 118:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      END_STATE();
    case 119:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(119);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 120:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 124:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 125:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 126:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      END_STATE();
    case 127:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 128:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 129:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 132:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 133:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 134:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 136:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 139:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(148);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 149:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 150:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 151:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 152:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 153:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(374);
      END_STATE();
    case 155:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 156:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      END_STATE();
    case 157:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 158:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 159:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 160:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 161:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(161);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 162:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      END_STATE();
    case 163:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(163);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 164:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      END_STATE();
    case 165:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 166:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 167:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 168:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 169:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(169);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(170);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 171:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(171);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 172:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 173:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 174:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 175:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 176:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 177:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(177);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 179:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 181:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(181);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 184:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(188);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 190:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 193:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 194:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 195:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 196:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 198:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 199:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 200:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 201:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 202:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 203:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 204:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(204);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 205:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 206:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 207:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(207);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 208:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 209:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 210:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(210);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 211:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 212:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 213:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(213);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 214:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 215:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 216:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 217:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(217);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 219:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 220:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 221:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(221);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 222:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(222);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 223:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 224:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(224);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 225:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 226:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 227:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 228:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 229:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 230:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 231:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 232:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(233);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 234:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 235:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(235);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 236:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 237:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(238);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 239:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(239);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 240:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 241:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(241);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 242:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(242);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 243:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(243);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 244:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(244);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 245:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(245);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 246:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(246);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 247:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 248:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 249:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(249);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 250:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(250);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 251:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(251);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 252:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(252);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(253);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 254:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(255);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 256:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(256);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 257:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(257);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 258:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(258);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 259:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(259);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 260:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 261:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(261);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 262:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 263:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 264:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 265:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 266:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(266);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 267:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 268:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 269:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(269);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 270:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(270);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 271:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 272:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(272);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 273:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 274:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(275);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 276:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 277:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(277);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(278);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 279:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(279);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 280:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(280);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 282:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(282);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 283:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(284);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 285:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 286:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 288:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 289:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(290);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 291:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 292:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 294:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(294);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 295:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 296:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(296);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 297:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 298:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(298);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 299:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(299);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      END_STATE();
    case 300:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(300);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 301:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 302:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 303:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(303);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 304:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      END_STATE();
    case 305:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      END_STATE();
    case 306:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(306);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      END_STATE();
    case 307:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 308:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 309:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      END_STATE();
    case 310:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(310);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 312:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(312);
      END_STATE();
    case 313:
      if (eof) ADVANCE(315);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '=') ADVANCE(348);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == '@') ADVANCE(349);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == 8594) ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(313)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 314:
      if (eof) ADVANCE(315);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '%') ADVANCE(338);
      if (lookahead == '(') ADVANCE(346);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '@') ADVANCE(349);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
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
    case 315:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(312);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(331);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8976) ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(321);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(322);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(325);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(323);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(324);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(327);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(325);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(326);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(327);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(328);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(329);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (!sym_ident_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '>') ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}') ||
          lookahead == 8594) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
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
      if (lookahead == '.') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_weight);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(352);
      if (lookahead == '%') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_sl);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_tl);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DOLLAR_PERCENT);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(358);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(190);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(360);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(363);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(366);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(367);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(225);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(369);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(372);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(375);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(384);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(387);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(390);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(230);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(402);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_str_op_token16);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_bool_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_bool_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_bool_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_bool_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_not_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_if_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_elif_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_elif_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_else_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_else_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_always_tok);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 314},
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
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 314},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 314},
  [122] = {.lex_state = 314},
  [123] = {.lex_state = 314},
  [124] = {.lex_state = 314},
  [125] = {.lex_state = 314},
  [126] = {.lex_state = 314},
  [127] = {.lex_state = 314},
  [128] = {.lex_state = 314},
  [129] = {.lex_state = 314},
  [130] = {.lex_state = 314},
  [131] = {.lex_state = 314},
  [132] = {.lex_state = 314},
  [133] = {.lex_state = 314},
  [134] = {.lex_state = 314},
  [135] = {.lex_state = 314},
  [136] = {.lex_state = 314},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 314},
  [180] = {.lex_state = 314},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 314},
  [183] = {.lex_state = 314},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 314},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 314},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 314},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 314},
  [198] = {.lex_state = 314},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 314},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 314},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 314},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 314},
  [237] = {.lex_state = 314},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 314},
  [247] = {.lex_state = 314},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 314},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 314},
  [258] = {.lex_state = 314},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 314},
  [265] = {.lex_state = 314},
  [266] = {.lex_state = 314},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 314},
  [270] = {.lex_state = 314},
  [271] = {.lex_state = 314},
  [272] = {.lex_state = 314},
  [273] = {.lex_state = 314},
  [274] = {.lex_state = 314},
  [275] = {.lex_state = 314},
  [276] = {.lex_state = 314},
  [277] = {.lex_state = 314},
  [278] = {.lex_state = 314},
  [279] = {.lex_state = 314},
  [280] = {.lex_state = 314},
  [281] = {.lex_state = 314},
  [282] = {.lex_state = 314},
  [283] = {.lex_state = 314},
  [284] = {.lex_state = 314},
  [285] = {.lex_state = 314},
  [286] = {.lex_state = 314},
  [287] = {.lex_state = 314},
  [288] = {.lex_state = 314},
  [289] = {.lex_state = 314},
  [290] = {.lex_state = 314},
  [291] = {.lex_state = 314},
  [292] = {.lex_state = 314},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 314},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 314},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 314},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 314},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 10},
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
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 314},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 314},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 314},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 314},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 314},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 314},
  [390] = {.lex_state = 314},
  [391] = {.lex_state = 314},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 314},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 314},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 314},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 314},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 314},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 314},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 314},
  [413] = {.lex_state = 314},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 314},
  [416] = {.lex_state = 314},
  [417] = {.lex_state = 314},
  [418] = {.lex_state = 314},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 314},
  [422] = {.lex_state = 314},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 314},
  [426] = {.lex_state = 314},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 314},
  [430] = {.lex_state = 314},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 314},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 314},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 314},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 314},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 314},
  [441] = {.lex_state = 314},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 314},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 314},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 314},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 314},
  [453] = {.lex_state = 314},
  [454] = {.lex_state = 314},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 314},
  [458] = {.lex_state = 314},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 314},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 314},
  [472] = {.lex_state = 314},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 314},
  [476] = {.lex_state = 314},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 314},
  [481] = {.lex_state = 314},
  [482] = {.lex_state = 314},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 314},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 314},
  [487] = {.lex_state = 314},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 314},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 314},
  [497] = {.lex_state = 314},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 314},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 314},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 314},
  [505] = {.lex_state = 314},
  [506] = {.lex_state = 314},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 314},
  [511] = {.lex_state = 314},
  [512] = {.lex_state = 314},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 314},
  [521] = {.lex_state = 314},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 314},
  [524] = {.lex_state = 314},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 314},
  [528] = {.lex_state = 314},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 314},
  [531] = {.lex_state = 314},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 314},
  [534] = {.lex_state = 314},
  [535] = {.lex_state = 314},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 314},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 314},
  [540] = {.lex_state = 314},
  [541] = {.lex_state = 314},
  [542] = {.lex_state = 314},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 314},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 314},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 314},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 314},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 314},
  [556] = {.lex_state = 314},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 314},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 314},
  [564] = {.lex_state = 314},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 314},
  [567] = {.lex_state = 314},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 314},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 314},
  [572] = {.lex_state = 314},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 314},
  [575] = {.lex_state = 314},
  [576] = {.lex_state = 314},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 314},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 314},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 314},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_arrow_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_num_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_sl] = ACTIONS(1),
    [anon_sym_tl] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_DOLLAR_PERCENT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(529),
    [sym_output_rule] = STATE(179),
    [sym_retag_rule] = STATE(179),
    [sym_attr_rule] = STATE(179),
    [sym_reduce_rule_group] = STATE(179),
    [aux_sym_source_file_repeat1] = STATE(179),
    [aux_sym_reduce_rule_group_repeat1] = STATE(293),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(15), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [45] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [90] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_GT,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(37), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(23), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(43), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(41), 27,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(45), 27,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(53), 27,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(57), 27,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(41), 27,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [729] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(373), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [792] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(360), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [855] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(368), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [918] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(345), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [981] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(352), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1044] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(362), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1107] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(304), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1170] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(372), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1233] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(316), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1296] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(336), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1359] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(384), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1422] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(382), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1485] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(351), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1548] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(320), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1611] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(325), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1674] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(546), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(538), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1733] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_string,
    ACTIONS(107), 1,
      sym_ident,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(125), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_num,
    STATE(207), 1,
      sym_literal_lu,
    STATE(168), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(162), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1792] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    ACTIONS(137), 1,
      anon_sym_LPAREN2,
    ACTIONS(139), 1,
      anon_sym_AT2,
    STATE(73), 1,
      sym_macro_name,
    STATE(106), 1,
      sym_output_var_set,
    ACTIONS(133), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(131), 10,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [1831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    ACTIONS(137), 1,
      anon_sym_LPAREN2,
    ACTIONS(139), 1,
      anon_sym_AT2,
    STATE(58), 1,
      sym_macro_name,
    STATE(103), 1,
      sym_output_var_set,
    ACTIONS(143), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(141), 10,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [1870] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(516), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(545), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1929] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_string,
    ACTIONS(148), 1,
      sym_ident,
    ACTIONS(151), 1,
      aux_sym_num_token1,
    ACTIONS(154), 1,
      anon_sym_PERCENT,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_GT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    ACTIONS(177), 1,
      anon_sym_PLUS,
    ACTIONS(180), 1,
      anon_sym__,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    ACTIONS(166), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(40), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(91), 1,
      sym_not,
    STATE(131), 1,
      sym_str_op,
    ACTIONS(185), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(187), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    ACTIONS(183), 13,
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
  [2021] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(205), 1,
      aux_sym_if_tok_token1,
    ACTIONS(207), 1,
      sym_always_tok,
    STATE(80), 1,
      sym_not,
    STATE(430), 1,
      sym_if_tok,
    STATE(526), 1,
      sym_num,
    STATE(208), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(203), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(41), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2078] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_string,
    ACTIONS(107), 1,
      sym_ident,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(125), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_num,
    STATE(207), 1,
      sym_literal_lu,
    STATE(172), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(171), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2137] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(49), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2193] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(50), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    ACTIONS(137), 1,
      anon_sym_LPAREN2,
    STATE(73), 1,
      sym_macro_name,
    STATE(106), 1,
      sym_output_var_set,
    ACTIONS(133), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(131), 10,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2285] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    ACTIONS(137), 1,
      anon_sym_LPAREN2,
    STATE(58), 1,
      sym_macro_name,
    STATE(103), 1,
      sym_output_var_set,
    ACTIONS(143), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(141), 10,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2321] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(40), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2377] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(40), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2433] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(40), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    ACTIONS(137), 1,
      anon_sym_LPAREN2,
    STATE(86), 1,
      sym_macro_name,
    STATE(109), 1,
      sym_output_var_set,
    ACTIONS(223), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(221), 10,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2525] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(40), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2581] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2637] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(52), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    ACTIONS(137), 1,
      anon_sym_LPAREN2,
    STATE(81), 1,
      sym_macro_name,
    STATE(104), 1,
      sym_output_var_set,
    ACTIONS(231), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(229), 10,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(233), 14,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_SLASH,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_RBRACE,
  [2757] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(83), 1,
      sym_not,
    STATE(526), 1,
      sym_num,
    STATE(213), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(203), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(41), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    STATE(106), 1,
      sym_output_var_set,
    ACTIONS(133), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(131), 11,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2835] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(331), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2887] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_string,
    ACTIONS(107), 1,
      sym_ident,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(125), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_num,
    STATE(207), 1,
      sym_literal_lu,
    STATE(162), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2939] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(83), 1,
      sym_not,
    STATE(526), 1,
      sym_num,
    STATE(240), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(203), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(41), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2987] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(499), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3039] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(554), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(241), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(239), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3121] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(538), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3173] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(379), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3225] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(371), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(247), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(245), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3307] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(414), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(251), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(249), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3389] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(557), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3441] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(255), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(253), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    STATE(109), 1,
      sym_output_var_set,
    ACTIONS(223), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(221), 11,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3501] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(545), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(262), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(260), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3583] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(491), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3635] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(342), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3687] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_string,
    ACTIONS(107), 1,
      sym_ident,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(125), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_num,
    STATE(207), 1,
      sym_literal_lu,
    STATE(234), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3739] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(445), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3791] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(80), 1,
      sym_not,
    STATE(526), 1,
      sym_num,
    STATE(228), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(203), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(41), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    STATE(101), 1,
      sym_output_var_set,
    ACTIONS(266), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(264), 11,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3869] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(341), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3921] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(80), 1,
      sym_not,
    STATE(526), 1,
      sym_num,
    STATE(212), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(203), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(41), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3969] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_ident,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(80), 1,
      sym_not,
    STATE(526), 1,
      sym_num,
    STATE(225), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(203), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(41), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4017] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(329), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK2,
    STATE(104), 1,
      sym_output_var_set,
    ACTIONS(231), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(229), 11,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4099] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(297), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4151] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_string,
    ACTIONS(107), 1,
      sym_ident,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(125), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_num,
    STATE(207), 1,
      sym_literal_lu,
    STATE(171), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4203] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_ident,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_GT,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_num,
    STATE(110), 1,
      sym_literal_lu,
    STATE(307), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(268), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(130), 1,
      sym_str_op,
    ACTIONS(185), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(183), 13,
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
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(272), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(276), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(280), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACK2,
      anon_sym_RBRACE,
  [4382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(284), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(288), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(253), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(292), 13,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(296), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(300), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(304), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(308), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(131), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(264), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(312), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(221), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(316), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(320), 13,
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
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(229), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(141), 12,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4770] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_QMARK,
    STATE(444), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4810] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      anon_sym_QMARK,
    STATE(403), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4850] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    STATE(420), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4890] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_QMARK,
    STATE(392), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(360), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACE,
  [4951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(364), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACE,
  [4972] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_string,
    ACTIONS(371), 1,
      sym_ident,
    ACTIONS(374), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_QMARK,
    ACTIONS(380), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5006] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_AT,
    STATE(137), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(392), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(390), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5032] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(398), 1,
      sym_string,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(526), 1,
      sym_num,
    STATE(350), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_AT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(406), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(404), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5094] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(433), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5130] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(371), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5166] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(302), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5202] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(342), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5238] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(501), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(297), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5310] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(379), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5346] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(463), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5382] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(459), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5418] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(260), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5454] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(267), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(331), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5526] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(239), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(163), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(329), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5634] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      sym_string,
    STATE(526), 1,
      sym_num,
    STATE(445), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(444), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(442), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5693] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(446), 1,
      sym_string,
    ACTIONS(448), 1,
      sym_weight,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(393), 1,
      sym_reduce_rule,
    STATE(112), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5726] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_LPAREN2,
    ACTIONS(456), 1,
      anon_sym_AT2,
    STATE(196), 1,
      sym_macro_name,
    STATE(204), 1,
      sym_output_var_set,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [5755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(460), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(458), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(462), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(444), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(442), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(468), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(466), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5843] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_LPAREN2,
    ACTIONS(456), 1,
      anon_sym_AT2,
    STATE(184), 1,
      sym_macro_name,
    STATE(218), 1,
      sym_output_var_set,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [5872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(446), 1,
      sym_string,
    ACTIONS(448), 1,
      sym_weight,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(330), 1,
      sym_reduce_rule,
    STATE(112), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(472), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(470), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(476), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(474), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(320), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5970] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(408), 1,
      anon_sym_AT,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    ACTIONS(481), 1,
      sym_weight,
    STATE(114), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(460), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(458), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(146), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(485), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(483), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(485), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(483), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(468), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(466), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(392), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(390), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_LPAREN2,
    STATE(194), 1,
      sym_macro_name,
    STATE(210), 1,
      sym_output_var_set,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(487), 7,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_LPAREN2,
    STATE(184), 1,
      sym_macro_name,
    STATE(218), 1,
      sym_output_var_set,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(474), 7,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_LPAREN2,
    STATE(192), 1,
      sym_macro_name,
    STATE(224), 1,
      sym_output_var_set,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(491), 7,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_LPAREN2,
    STATE(196), 1,
      sym_macro_name,
    STATE(204), 1,
      sym_output_var_set,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6276] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    STATE(63), 1,
      sym_else_tok,
    STATE(165), 1,
      aux_sym_lu_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6303] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      aux_sym_else_tok_token1,
    ACTIONS(507), 1,
      aux_sym_else_tok_token2,
    STATE(129), 1,
      sym_else_tok,
    STATE(170), 1,
      aux_sym_string_cond_repeat1,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(111), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6357] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_else_tok,
    STATE(186), 1,
      aux_sym_lu_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6384] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_else_tok,
    STATE(186), 1,
      aux_sym_lu_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6411] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(513), 1,
      sym_string,
    ACTIONS(515), 1,
      sym_ident,
    ACTIONS(517), 1,
      anon_sym_PERCENT,
    ACTIONS(519), 1,
      anon_sym_GT,
    ACTIONS(521), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(523), 1,
      anon_sym_STAR,
    STATE(46), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
  [6442] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(275), 1,
      sym_else_tok,
    STATE(457), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6469] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(291), 1,
      sym_else_tok,
    STATE(457), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym_else_tok_token1,
    ACTIONS(507), 1,
      aux_sym_else_tok_token2,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_else_tok,
    STATE(177), 1,
      aux_sym_string_cond_repeat1,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6523] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_else_tok,
    STATE(166), 1,
      aux_sym_lu_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6550] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(288), 1,
      sym_else_tok,
    STATE(457), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6577] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_else_tok_token1,
    ACTIONS(501), 1,
      aux_sym_else_tok_token2,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(279), 1,
      sym_else_tok,
    STATE(457), 1,
      sym_elif_tok,
    ACTIONS(497), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(537), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6621] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(541), 1,
      sym_string,
    ACTIONS(543), 1,
      sym_ident,
    ACTIONS(545), 1,
      anon_sym_PERCENT,
    ACTIONS(547), 1,
      anon_sym_GT,
    ACTIONS(549), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(551), 1,
      anon_sym_STAR,
    STATE(161), 1,
      sym_num,
    STATE(218), 1,
      sym_literal_lu,
  [6652] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_string,
    ACTIONS(326), 1,
      sym_ident,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(113), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_else_tok_token1,
    STATE(177), 1,
      aux_sym_string_cond_repeat1,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(553), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(555), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_else_tok_token1,
    ACTIONS(560), 1,
      anon_sym_DOT,
    STATE(195), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(249), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    STATE(293), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(182), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6741] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    STATE(483), 1,
      sym_clip,
    STATE(526), 1,
      sym_num,
  [6769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_else_tok_token1,
    ACTIONS(233), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(566), 1,
      sym_ident,
    STATE(293), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(182), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DOLLAR,
    ACTIONS(569), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [6821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    STATE(204), 1,
      sym_output_var_set,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6841] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    STATE(526), 1,
      sym_num,
    STATE(560), 1,
      sym_clip,
  [6869] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_else_tok_token1,
    STATE(186), 1,
      aux_sym_lu_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(573), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(575), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6891] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    STATE(526), 1,
      sym_num,
    STATE(553), 1,
      sym_clip,
  [6919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_else_tok_token1,
    ACTIONS(580), 1,
      anon_sym_DOT,
    STATE(188), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(253), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      aux_sym_else_tok_token1,
    STATE(189), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(457), 1,
      sym_elif_tok,
    ACTIONS(583), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(585), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_else_tok_token1,
    ACTIONS(560), 1,
      anon_sym_DOT,
    STATE(188), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(239), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_else_tok_token1,
    ACTIONS(560), 1,
      anon_sym_DOT,
    STATE(190), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(245), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    STATE(210), 1,
      sym_output_var_set,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7021] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(400), 1,
      sym_ident,
    STATE(503), 1,
      sym_clip,
    STATE(526), 1,
      sym_num,
  [7049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    STATE(220), 1,
      sym_output_var_set,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym_else_tok_token1,
    ACTIONS(560), 1,
      anon_sym_DOT,
    STATE(188), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(260), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(452), 1,
      anon_sym_LBRACK2,
    STATE(224), 1,
      sym_output_var_set,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DOLLAR,
    ACTIONS(364), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_else_tok_token1,
    ACTIONS(280), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_else_tok_token1,
    ACTIONS(253), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    ACTIONS(596), 1,
      anon_sym_AT,
    STATE(222), 1,
      aux_sym_attr_rule_repeat1,
    STATE(266), 1,
      sym_attr_default,
    ACTIONS(590), 2,
      sym_string,
      sym_ident,
  [7194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_else_tok_token1,
    ACTIONS(268), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(598), 5,
      sym_string,
      sym_weight,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [7224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(517), 1,
      anon_sym_PERCENT,
    ACTIONS(602), 1,
      sym_string,
    STATE(46), 1,
      sym_num,
    ACTIONS(523), 2,
      sym_ident,
      anon_sym_STAR,
  [7258] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      sym_ident,
    ACTIONS(606), 1,
      anon_sym_COLON,
    ACTIONS(608), 1,
      anon_sym_PERCENT,
    ACTIONS(610), 1,
      anon_sym_LT,
    STATE(579), 1,
      sym_lu_cond,
  [7280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_else_tok_token1,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_bool_op,
    ACTIONS(614), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      aux_sym_else_tok_token1,
    ACTIONS(616), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7324] = 3,
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
  [7338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_else_tok_token1,
    ACTIONS(292), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_bool_op,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_bool_op,
    ACTIONS(614), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_else_tok_token1,
    ACTIONS(276), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym_else_tok_token1,
    ACTIONS(624), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_else_tok_token1,
    ACTIONS(312), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(628), 1,
      sym_string,
    ACTIONS(632), 1,
      anon_sym_PERCENT,
    STATE(51), 1,
      sym_num,
    ACTIONS(630), 2,
      sym_ident,
      anon_sym_STAR,
  [7444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_else_tok_token1,
    ACTIONS(131), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      aux_sym_else_tok_token1,
    ACTIONS(634), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_else_tok_token1,
    ACTIONS(304), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_else_tok_token1,
    ACTIONS(288), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(596), 1,
      anon_sym_AT,
    ACTIONS(640), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(638), 2,
      sym_string,
      sym_ident,
  [7520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_else_tok_token1,
    ACTIONS(308), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_bool_op,
    ACTIONS(642), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_else_tok_token1,
    ACTIONS(272), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(644), 1,
      sym_string,
    ACTIONS(648), 1,
      anon_sym_PERCENT,
    STATE(159), 1,
      sym_num,
    ACTIONS(646), 2,
      sym_ident,
      anon_sym_STAR,
  [7596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_bool_op,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(545), 1,
      anon_sym_PERCENT,
    ACTIONS(650), 1,
      sym_string,
    STATE(161), 1,
      sym_num,
    ACTIONS(551), 2,
      sym_ident,
      anon_sym_STAR,
  [7630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_else_tok_token1,
    ACTIONS(652), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_else_tok_token1,
    ACTIONS(316), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_else_tok_token1,
    ACTIONS(300), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_else_tok_token1,
    ACTIONS(284), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_else_tok_token1,
    ACTIONS(656), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      aux_sym_else_tok_token1,
    ACTIONS(660), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(596), 1,
      anon_sym_AT,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(638), 2,
      sym_string,
      sym_ident,
  [7734] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_AT,
    STATE(237), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(666), 2,
      sym_string,
      sym_ident,
  [7754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_else_tok_token1,
    ACTIONS(296), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      aux_sym_else_tok_token1,
    ACTIONS(677), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_bool_op,
    ACTIONS(614), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      aux_sym_else_tok_token1,
    ACTIONS(683), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      aux_sym_else_tok_token1,
    ACTIONS(687), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      aux_sym_else_tok_token1,
    ACTIONS(691), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(644), 1,
      sym_string,
    STATE(159), 1,
      sym_num,
    ACTIONS(646), 2,
      sym_ident,
      anon_sym_STAR,
  [7857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [7868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    STATE(444), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [7885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [7896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [7907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(602), 1,
      sym_string,
    STATE(46), 1,
      sym_num,
    ACTIONS(523), 2,
      sym_ident,
      anon_sym_STAR,
  [7924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [7935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [7946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [7957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [7968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(699), 1,
      sym_string,
    STATE(55), 1,
      sym_num,
    ACTIONS(701), 2,
      sym_ident,
      anon_sym_STAR,
  [7985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    STATE(455), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      sym_ident,
    ACTIONS(709), 1,
      anon_sym_PERCENT,
    ACTIONS(711), 1,
      anon_sym_LT,
    STATE(570), 1,
      sym_lu_cond,
  [8032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(628), 1,
      sym_string,
    STATE(51), 1,
      sym_num,
    ACTIONS(630), 2,
      sym_ident,
      anon_sym_STAR,
  [8060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      aux_sym_arrow_token1,
    ACTIONS(717), 1,
      sym_ident,
    ACTIONS(719), 1,
      anon_sym_COLON,
    ACTIONS(721), 1,
      anon_sym_GT,
    ACTIONS(723), 1,
      anon_sym_EQ,
  [8090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(725), 1,
      sym_string,
    STATE(155), 1,
      sym_num,
    ACTIONS(727), 2,
      sym_ident,
      anon_sym_STAR,
  [8107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
    STATE(442), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    STATE(420), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(596), 1,
      anon_sym_AT,
    STATE(236), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(735), 2,
      sym_string,
      sym_ident,
  [8169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_num_token1,
    ACTIONS(650), 1,
      sym_string,
    STATE(161), 1,
      sym_num,
    ACTIONS(551), 2,
      sym_ident,
      anon_sym_STAR,
  [8197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    STATE(437), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    STATE(397), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(745), 1,
      anon_sym_DOLLAR,
    ACTIONS(747), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(749), 1,
      anon_sym_DOLLAR_PERCENT,
  [8241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
    STATE(400), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8255] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(753), 1,
      anon_sym_DOLLAR,
    ACTIONS(755), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(757), 1,
      anon_sym_DOLLAR_PERCENT,
  [8271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    STATE(406), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(558), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    STATE(235), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    STATE(449), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(516), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(561), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(765), 1,
      anon_sym_LBRACE,
    STATE(411), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    STATE(168), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_string,
    ACTIONS(769), 1,
      sym_ident,
    ACTIONS(771), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 1,
      anon_sym_DOLLAR,
  [8399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 4,
      sym_string,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(546), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
    STATE(456), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    STATE(172), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(779), 1,
      anon_sym_DOLLAR,
    ACTIONS(781), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(783), 1,
      anon_sym_DOLLAR_PERCENT,
  [8467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(485), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    STATE(424), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(451), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    STATE(474), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    STATE(395), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      aux_sym_arrow_token1,
    ACTIONS(791), 1,
      sym_ident,
    STATE(145), 1,
      sym_arrow,
    STATE(311), 1,
      aux_sym_reduce_rule_group_repeat1,
  [8553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_ident,
    ACTIONS(793), 1,
      anon_sym_DOLLAR,
    ACTIONS(795), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(797), 1,
      anon_sym_DOLLAR_PERCENT,
  [8569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    STATE(295), 1,
      aux_sym_reduce_rule_group_repeat2,
  [8582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(806), 1,
      sym_always_tok,
    STATE(425), 1,
      sym_if_tok,
  [8595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_reduce_rule_repeat2,
  [8608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(812), 1,
      sym_ident,
    STATE(489), 1,
      sym_num,
  [8621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [8634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(818), 1,
      sym_always_tok,
    STATE(409), 1,
      sym_if_tok,
  [8647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(820), 1,
      sym_always_tok,
    STATE(430), 1,
      sym_if_tok,
  [8660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_output_var_set_repeat1,
  [8673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [8682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      aux_sym_reduce_rule_repeat3,
  [8695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [8708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_DOLLAR,
    ACTIONS(832), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(834), 1,
      anon_sym_DOLLAR_PERCENT,
  [8721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      aux_sym_reduce_rule_repeat2,
  [8734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_retag_rule_repeat1,
  [8747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SEMI,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_retag_rule_repeat1,
  [8760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [8773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      aux_sym_arrow_token1,
    ACTIONS(851), 1,
      sym_ident,
    STATE(311), 1,
      aux_sym_reduce_rule_group_repeat1,
  [8786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym__,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [8799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [8812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    STATE(332), 1,
      aux_sym_output_rule_repeat1,
  [8825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [8834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      aux_sym_reduce_rule_repeat3,
  [8847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(867), 1,
      sym_ident,
    STATE(494), 1,
      sym_num,
  [8860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_DOLLAR,
    ACTIONS(755), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(757), 1,
      anon_sym_DOLLAR_PERCENT,
  [8873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [8886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_reduce_rule_repeat3,
  [8899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(869), 1,
      sym_always_tok,
    STATE(448), 1,
      sym_if_tok,
  [8912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(871), 1,
      sym_always_tok,
    STATE(426), 1,
      sym_if_tok,
  [8925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [8938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    STATE(308), 1,
      aux_sym_retag_rule_repeat1,
  [8951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    STATE(310), 1,
      aux_sym_reduce_rule_repeat3,
  [8964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [8977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_DOLLAR,
    ACTIONS(883), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(885), 1,
      anon_sym_DOLLAR_PERCENT,
  [8990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(370), 1,
      aux_sym_reduce_rule_repeat2,
  [9016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(891), 1,
      anon_sym_PIPE,
    STATE(358), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(313), 1,
      aux_sym_reduce_rule_repeat2,
  [9042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      aux_sym_output_rule_repeat1,
  [9055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(895), 1,
      sym_ident,
    STATE(477), 1,
      sym_num,
  [9068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      aux_sym_output_rule_repeat1,
  [9081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(897), 1,
      sym_always_tok,
    STATE(432), 1,
      sym_if_tok,
  [9094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_reduce_rule_repeat3,
  [9107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      aux_sym_output_rule_repeat1,
  [9120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_DOLLAR,
    ACTIONS(905), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(907), 1,
      anon_sym_DOLLAR_PERCENT,
  [9146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_reduce_rule_repeat2,
  [9172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      aux_sym_reduce_rule_repeat2,
  [9185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DOLLAR,
    ACTIONS(795), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(797), 1,
      anon_sym_DOLLAR_PERCENT,
  [9198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_reduce_rule_repeat3,
  [9224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_output_var_set_repeat1,
  [9263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_output_var_set_repeat1,
  [9276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      aux_sym_output_var_set_repeat1,
  [9289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym_reduce_rule_repeat3,
  [9302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_reduce_rule_repeat3,
  [9315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(927), 1,
      sym_ident,
    STATE(508), 1,
      sym_num,
  [9337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    STATE(309), 1,
      aux_sym_retag_rule_repeat1,
  [9363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_ident,
    ACTIONS(933), 1,
      anon_sym_LBRACK,
    ACTIONS(935), 1,
      anon_sym_DOLLAR,
  [9376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_PIPE,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      aux_sym_reduce_rule_repeat3,
  [9415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(941), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      aux_sym_output_rule_repeat1,
  [9428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_reduce_rule_repeat3,
  [9441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(941), 1,
      anon_sym_SEMI,
    STATE(337), 1,
      aux_sym_output_rule_repeat1,
  [9454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      aux_sym_if_tok_token1,
    ACTIONS(945), 1,
      sym_always_tok,
    STATE(396), 1,
      sym_if_tok,
  [9467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(947), 1,
      sym_ident,
    STATE(468), 1,
      sym_num,
  [9480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_reduce_rule_repeat3,
  [9519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      aux_sym_reduce_rule_repeat2,
  [9558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      aux_sym_reduce_rule_repeat3,
  [9571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_reduce_rule_repeat3,
  [9584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_DOT,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      aux_sym_output_rule_repeat1,
  [9623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(964), 1,
      sym_ident,
    STATE(466), 1,
      sym_num,
  [9636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_reduce_rule_repeat2,
  [9662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RBRACK,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_reduce_rule_repeat2,
  [9675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(973), 1,
      sym_ident,
    STATE(518), 1,
      sym_num,
  [9688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_reduce_rule_repeat3,
  [9701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    STATE(376), 1,
      aux_sym_output_rule_repeat1,
  [9714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(374), 1,
      aux_sym_reduce_rule_repeat3,
  [9727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    STATE(361), 1,
      aux_sym_output_rule_repeat1,
  [9740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_output_var_set_repeat1,
  [9753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      aux_sym_retag_rule_repeat1,
  [9766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym__,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_reduce_rule_repeat3,
  [9779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_ident,
    ACTIONS(990), 1,
      anon_sym_LBRACK,
  [9797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_condition,
  [9807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym_condition,
  [9849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 2,
      anon_sym_sl,
      anon_sym_ref,
  [9865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_condition,
  [9923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 2,
      anon_sym_sl,
      anon_sym_ref,
  [9939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 2,
      anon_sym_sl,
      anon_sym_ref,
  [9947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(281), 1,
      sym_condition,
  [9957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    STATE(513), 1,
      sym_num,
  [9967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [9975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 2,
      ts_builtin_sym_end,
      sym_ident,
  [9991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [9999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_ident,
    ACTIONS(1030), 1,
      anon_sym_LBRACK,
  [10009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_ident,
    ACTIONS(1034), 1,
      anon_sym_LBRACK,
  [10019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_condition,
  [10029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(255), 1,
      sym_condition,
  [10039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_ident,
    ACTIONS(1046), 1,
      anon_sym_LBRACK,
  [10073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_condition,
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_condition,
  [10109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_condition,
  [10143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_condition,
  [10161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_condition,
  [10179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_ident,
    ACTIONS(1068), 1,
      anon_sym_LT,
  [10213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_ident,
    ACTIONS(1076), 1,
      anon_sym_LBRACK,
  [10239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_condition,
  [10257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_condition,
  [10299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 2,
      anon_sym__,
      anon_sym_RBRACE,
  [10323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_ident,
    ACTIONS(1096), 1,
      anon_sym_LBRACK,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(276), 1,
      sym_condition,
  [10375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_ident,
  [10382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
  [10389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_EQ,
  [10396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_EQ,
  [10403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_EQ,
  [10410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
  [10417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_ident,
  [10424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_EQ,
  [10431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_SLASH,
  [10438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_EQ,
  [10445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_SLASH,
  [10452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_EQ,
  [10459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_EQ,
  [10466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_ident,
  [10473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_ident,
  [10480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_EQ,
  [10487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [10494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_ident,
  [10501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_ident,
  [10508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_SLASH,
  [10515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_EQ,
  [10522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_EQ,
  [10529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym_ident,
  [10536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_ident,
  [10543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_ident,
  [10550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
  [10557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_ident,
  [10564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [10571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_ident,
  [10578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym_ident,
  [10585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_EQ,
  [10592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_SLASH,
  [10599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_EQ,
  [10606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
  [10613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_ident,
  [10620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_EQ,
  [10627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_SLASH,
  [10634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_EQ,
  [10641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym_ident,
  [10648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_ident,
  [10655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RBRACK,
  [10662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
  [10669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym_ident,
  [10676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
  [10683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_ident,
  [10690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RBRACK,
  [10697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym_ident,
  [10704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym_ident,
  [10711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_ident,
  [10718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_EQ,
  [10725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_SLASH,
  [10732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_EQ,
  [10739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym_ident,
  [10746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_LPAREN,
  [10753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym_ident,
  [10760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_DOT,
  [10767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
  [10774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_EQ,
  [10781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
  [10788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_EQ,
  [10795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_SLASH,
  [10802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_EQ,
  [10809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym_ident,
  [10816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_AT,
  [10823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
  [10830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_ident,
  [10837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_ident,
  [10844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
  [10851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DOT,
  [10858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_ident,
  [10865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_ident,
  [10872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      ts_builtin_sym_end,
  [10879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      sym_ident,
  [10886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      sym_ident,
  [10893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_GT,
  [10900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_ident,
  [10907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      sym_ident,
  [10914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_AT,
  [10921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_RBRACK,
  [10928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_ident,
  [10935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
  [10942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym_ident,
  [10949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_ident,
  [10956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_ident,
  [10963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      sym_ident,
  [10970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
  [10977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      sym_ident,
  [10984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
  [10991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
  [10998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_ident,
  [11005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
  [11012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_GT,
  [11019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_ident,
  [11026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_RBRACK,
  [11033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      sym_ident,
  [11040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_RBRACK,
  [11047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
  [11054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym_ident,
  [11061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_AT,
  [11068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [11075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
  [11082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_ident,
  [11089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_RBRACK,
  [11096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
  [11103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_COLON,
  [11110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_AT,
  [11117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_ident,
  [11124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_RBRACK,
  [11131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_LPAREN,
  [11138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym_ident,
  [11145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_GT,
  [11152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      sym_ident,
  [11159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_SEMI,
  [11166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_ident,
  [11173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_ident,
  [11180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_COLON,
  [11187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym_ident,
  [11194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      sym_ident,
  [11201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_ident,
  [11208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_COLON,
  [11215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym_ident,
  [11222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SEMI,
  [11229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      sym_ident,
  [11236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_EQ,
  [11243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym_ident,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 417,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 495,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 651,
  [SMALL_STATE(19)] = 690,
  [SMALL_STATE(20)] = 729,
  [SMALL_STATE(21)] = 792,
  [SMALL_STATE(22)] = 855,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 981,
  [SMALL_STATE(25)] = 1044,
  [SMALL_STATE(26)] = 1107,
  [SMALL_STATE(27)] = 1170,
  [SMALL_STATE(28)] = 1233,
  [SMALL_STATE(29)] = 1296,
  [SMALL_STATE(30)] = 1359,
  [SMALL_STATE(31)] = 1422,
  [SMALL_STATE(32)] = 1485,
  [SMALL_STATE(33)] = 1548,
  [SMALL_STATE(34)] = 1611,
  [SMALL_STATE(35)] = 1674,
  [SMALL_STATE(36)] = 1733,
  [SMALL_STATE(37)] = 1792,
  [SMALL_STATE(38)] = 1831,
  [SMALL_STATE(39)] = 1870,
  [SMALL_STATE(40)] = 1929,
  [SMALL_STATE(41)] = 1986,
  [SMALL_STATE(42)] = 2021,
  [SMALL_STATE(43)] = 2078,
  [SMALL_STATE(44)] = 2137,
  [SMALL_STATE(45)] = 2193,
  [SMALL_STATE(46)] = 2249,
  [SMALL_STATE(47)] = 2285,
  [SMALL_STATE(48)] = 2321,
  [SMALL_STATE(49)] = 2377,
  [SMALL_STATE(50)] = 2433,
  [SMALL_STATE(51)] = 2489,
  [SMALL_STATE(52)] = 2525,
  [SMALL_STATE(53)] = 2581,
  [SMALL_STATE(54)] = 2637,
  [SMALL_STATE(55)] = 2693,
  [SMALL_STATE(56)] = 2729,
  [SMALL_STATE(57)] = 2757,
  [SMALL_STATE(58)] = 2805,
  [SMALL_STATE(59)] = 2835,
  [SMALL_STATE(60)] = 2887,
  [SMALL_STATE(61)] = 2939,
  [SMALL_STATE(62)] = 2987,
  [SMALL_STATE(63)] = 3039,
  [SMALL_STATE(64)] = 3091,
  [SMALL_STATE(65)] = 3121,
  [SMALL_STATE(66)] = 3173,
  [SMALL_STATE(67)] = 3225,
  [SMALL_STATE(68)] = 3277,
  [SMALL_STATE(69)] = 3307,
  [SMALL_STATE(70)] = 3359,
  [SMALL_STATE(71)] = 3389,
  [SMALL_STATE(72)] = 3441,
  [SMALL_STATE(73)] = 3471,
  [SMALL_STATE(74)] = 3501,
  [SMALL_STATE(75)] = 3553,
  [SMALL_STATE(76)] = 3583,
  [SMALL_STATE(77)] = 3635,
  [SMALL_STATE(78)] = 3687,
  [SMALL_STATE(79)] = 3739,
  [SMALL_STATE(80)] = 3791,
  [SMALL_STATE(81)] = 3839,
  [SMALL_STATE(82)] = 3869,
  [SMALL_STATE(83)] = 3921,
  [SMALL_STATE(84)] = 3969,
  [SMALL_STATE(85)] = 4017,
  [SMALL_STATE(86)] = 4069,
  [SMALL_STATE(87)] = 4099,
  [SMALL_STATE(88)] = 4151,
  [SMALL_STATE(89)] = 4203,
  [SMALL_STATE(90)] = 4255,
  [SMALL_STATE(91)] = 4280,
  [SMALL_STATE(92)] = 4307,
  [SMALL_STATE(93)] = 4332,
  [SMALL_STATE(94)] = 4357,
  [SMALL_STATE(95)] = 4382,
  [SMALL_STATE(96)] = 4407,
  [SMALL_STATE(97)] = 4432,
  [SMALL_STATE(98)] = 4457,
  [SMALL_STATE(99)] = 4482,
  [SMALL_STATE(100)] = 4506,
  [SMALL_STATE(101)] = 4530,
  [SMALL_STATE(102)] = 4554,
  [SMALL_STATE(103)] = 4578,
  [SMALL_STATE(104)] = 4602,
  [SMALL_STATE(105)] = 4626,
  [SMALL_STATE(106)] = 4650,
  [SMALL_STATE(107)] = 4674,
  [SMALL_STATE(108)] = 4698,
  [SMALL_STATE(109)] = 4722,
  [SMALL_STATE(110)] = 4746,
  [SMALL_STATE(111)] = 4770,
  [SMALL_STATE(112)] = 4810,
  [SMALL_STATE(113)] = 4850,
  [SMALL_STATE(114)] = 4890,
  [SMALL_STATE(115)] = 4930,
  [SMALL_STATE(116)] = 4951,
  [SMALL_STATE(117)] = 4972,
  [SMALL_STATE(118)] = 5006,
  [SMALL_STATE(119)] = 5032,
  [SMALL_STATE(120)] = 5068,
  [SMALL_STATE(121)] = 5094,
  [SMALL_STATE(122)] = 5130,
  [SMALL_STATE(123)] = 5166,
  [SMALL_STATE(124)] = 5202,
  [SMALL_STATE(125)] = 5238,
  [SMALL_STATE(126)] = 5274,
  [SMALL_STATE(127)] = 5310,
  [SMALL_STATE(128)] = 5346,
  [SMALL_STATE(129)] = 5382,
  [SMALL_STATE(130)] = 5418,
  [SMALL_STATE(131)] = 5454,
  [SMALL_STATE(132)] = 5490,
  [SMALL_STATE(133)] = 5526,
  [SMALL_STATE(134)] = 5562,
  [SMALL_STATE(135)] = 5598,
  [SMALL_STATE(136)] = 5634,
  [SMALL_STATE(137)] = 5670,
  [SMALL_STATE(138)] = 5693,
  [SMALL_STATE(139)] = 5726,
  [SMALL_STATE(140)] = 5755,
  [SMALL_STATE(141)] = 5778,
  [SMALL_STATE(142)] = 5797,
  [SMALL_STATE(143)] = 5820,
  [SMALL_STATE(144)] = 5843,
  [SMALL_STATE(145)] = 5872,
  [SMALL_STATE(146)] = 5905,
  [SMALL_STATE(147)] = 5928,
  [SMALL_STATE(148)] = 5951,
  [SMALL_STATE(149)] = 5970,
  [SMALL_STATE(150)] = 6003,
  [SMALL_STATE(151)] = 6026,
  [SMALL_STATE(152)] = 6049,
  [SMALL_STATE(153)] = 6072,
  [SMALL_STATE(154)] = 6095,
  [SMALL_STATE(155)] = 6118,
  [SMALL_STATE(156)] = 6144,
  [SMALL_STATE(157)] = 6162,
  [SMALL_STATE(158)] = 6188,
  [SMALL_STATE(159)] = 6206,
  [SMALL_STATE(160)] = 6232,
  [SMALL_STATE(161)] = 6250,
  [SMALL_STATE(162)] = 6276,
  [SMALL_STATE(163)] = 6303,
  [SMALL_STATE(164)] = 6330,
  [SMALL_STATE(165)] = 6357,
  [SMALL_STATE(166)] = 6384,
  [SMALL_STATE(167)] = 6411,
  [SMALL_STATE(168)] = 6442,
  [SMALL_STATE(169)] = 6469,
  [SMALL_STATE(170)] = 6496,
  [SMALL_STATE(171)] = 6523,
  [SMALL_STATE(172)] = 6550,
  [SMALL_STATE(173)] = 6577,
  [SMALL_STATE(174)] = 6604,
  [SMALL_STATE(175)] = 6621,
  [SMALL_STATE(176)] = 6652,
  [SMALL_STATE(177)] = 6679,
  [SMALL_STATE(178)] = 6701,
  [SMALL_STATE(179)] = 6721,
  [SMALL_STATE(180)] = 6741,
  [SMALL_STATE(181)] = 6769,
  [SMALL_STATE(182)] = 6785,
  [SMALL_STATE(183)] = 6805,
  [SMALL_STATE(184)] = 6821,
  [SMALL_STATE(185)] = 6841,
  [SMALL_STATE(186)] = 6869,
  [SMALL_STATE(187)] = 6891,
  [SMALL_STATE(188)] = 6919,
  [SMALL_STATE(189)] = 6939,
  [SMALL_STATE(190)] = 6961,
  [SMALL_STATE(191)] = 6981,
  [SMALL_STATE(192)] = 7001,
  [SMALL_STATE(193)] = 7021,
  [SMALL_STATE(194)] = 7049,
  [SMALL_STATE(195)] = 7069,
  [SMALL_STATE(196)] = 7089,
  [SMALL_STATE(197)] = 7109,
  [SMALL_STATE(198)] = 7125,
  [SMALL_STATE(199)] = 7141,
  [SMALL_STATE(200)] = 7156,
  [SMALL_STATE(201)] = 7171,
  [SMALL_STATE(202)] = 7194,
  [SMALL_STATE(203)] = 7209,
  [SMALL_STATE(204)] = 7224,
  [SMALL_STATE(205)] = 7238,
  [SMALL_STATE(206)] = 7258,
  [SMALL_STATE(207)] = 7280,
  [SMALL_STATE(208)] = 7294,
  [SMALL_STATE(209)] = 7310,
  [SMALL_STATE(210)] = 7324,
  [SMALL_STATE(211)] = 7338,
  [SMALL_STATE(212)] = 7352,
  [SMALL_STATE(213)] = 7366,
  [SMALL_STATE(214)] = 7382,
  [SMALL_STATE(215)] = 7396,
  [SMALL_STATE(216)] = 7410,
  [SMALL_STATE(217)] = 7424,
  [SMALL_STATE(218)] = 7444,
  [SMALL_STATE(219)] = 7458,
  [SMALL_STATE(220)] = 7472,
  [SMALL_STATE(221)] = 7486,
  [SMALL_STATE(222)] = 7500,
  [SMALL_STATE(223)] = 7520,
  [SMALL_STATE(224)] = 7534,
  [SMALL_STATE(225)] = 7548,
  [SMALL_STATE(226)] = 7562,
  [SMALL_STATE(227)] = 7576,
  [SMALL_STATE(228)] = 7596,
  [SMALL_STATE(229)] = 7610,
  [SMALL_STATE(230)] = 7630,
  [SMALL_STATE(231)] = 7644,
  [SMALL_STATE(232)] = 7658,
  [SMALL_STATE(233)] = 7672,
  [SMALL_STATE(234)] = 7686,
  [SMALL_STATE(235)] = 7700,
  [SMALL_STATE(236)] = 7714,
  [SMALL_STATE(237)] = 7734,
  [SMALL_STATE(238)] = 7754,
  [SMALL_STATE(239)] = 7768,
  [SMALL_STATE(240)] = 7782,
  [SMALL_STATE(241)] = 7798,
  [SMALL_STATE(242)] = 7812,
  [SMALL_STATE(243)] = 7826,
  [SMALL_STATE(244)] = 7840,
  [SMALL_STATE(245)] = 7857,
  [SMALL_STATE(246)] = 7868,
  [SMALL_STATE(247)] = 7885,
  [SMALL_STATE(248)] = 7896,
  [SMALL_STATE(249)] = 7907,
  [SMALL_STATE(250)] = 7924,
  [SMALL_STATE(251)] = 7935,
  [SMALL_STATE(252)] = 7946,
  [SMALL_STATE(253)] = 7957,
  [SMALL_STATE(254)] = 7968,
  [SMALL_STATE(255)] = 7985,
  [SMALL_STATE(256)] = 8002,
  [SMALL_STATE(257)] = 8013,
  [SMALL_STATE(258)] = 8032,
  [SMALL_STATE(259)] = 8043,
  [SMALL_STATE(260)] = 8060,
  [SMALL_STATE(261)] = 8071,
  [SMALL_STATE(262)] = 8090,
  [SMALL_STATE(263)] = 8107,
  [SMALL_STATE(264)] = 8118,
  [SMALL_STATE(265)] = 8135,
  [SMALL_STATE(266)] = 8152,
  [SMALL_STATE(267)] = 8169,
  [SMALL_STATE(268)] = 8180,
  [SMALL_STATE(269)] = 8197,
  [SMALL_STATE(270)] = 8211,
  [SMALL_STATE(271)] = 8225,
  [SMALL_STATE(272)] = 8241,
  [SMALL_STATE(273)] = 8255,
  [SMALL_STATE(274)] = 8271,
  [SMALL_STATE(275)] = 8285,
  [SMALL_STATE(276)] = 8299,
  [SMALL_STATE(277)] = 8313,
  [SMALL_STATE(278)] = 8327,
  [SMALL_STATE(279)] = 8341,
  [SMALL_STATE(280)] = 8355,
  [SMALL_STATE(281)] = 8369,
  [SMALL_STATE(282)] = 8383,
  [SMALL_STATE(283)] = 8399,
  [SMALL_STATE(284)] = 8409,
  [SMALL_STATE(285)] = 8423,
  [SMALL_STATE(286)] = 8437,
  [SMALL_STATE(287)] = 8451,
  [SMALL_STATE(288)] = 8467,
  [SMALL_STATE(289)] = 8481,
  [SMALL_STATE(290)] = 8495,
  [SMALL_STATE(291)] = 8509,
  [SMALL_STATE(292)] = 8523,
  [SMALL_STATE(293)] = 8537,
  [SMALL_STATE(294)] = 8553,
  [SMALL_STATE(295)] = 8569,
  [SMALL_STATE(296)] = 8582,
  [SMALL_STATE(297)] = 8595,
  [SMALL_STATE(298)] = 8608,
  [SMALL_STATE(299)] = 8621,
  [SMALL_STATE(300)] = 8634,
  [SMALL_STATE(301)] = 8647,
  [SMALL_STATE(302)] = 8660,
  [SMALL_STATE(303)] = 8673,
  [SMALL_STATE(304)] = 8682,
  [SMALL_STATE(305)] = 8695,
  [SMALL_STATE(306)] = 8708,
  [SMALL_STATE(307)] = 8721,
  [SMALL_STATE(308)] = 8734,
  [SMALL_STATE(309)] = 8747,
  [SMALL_STATE(310)] = 8760,
  [SMALL_STATE(311)] = 8773,
  [SMALL_STATE(312)] = 8786,
  [SMALL_STATE(313)] = 8799,
  [SMALL_STATE(314)] = 8812,
  [SMALL_STATE(315)] = 8825,
  [SMALL_STATE(316)] = 8834,
  [SMALL_STATE(317)] = 8847,
  [SMALL_STATE(318)] = 8860,
  [SMALL_STATE(319)] = 8873,
  [SMALL_STATE(320)] = 8886,
  [SMALL_STATE(321)] = 8899,
  [SMALL_STATE(322)] = 8912,
  [SMALL_STATE(323)] = 8925,
  [SMALL_STATE(324)] = 8938,
  [SMALL_STATE(325)] = 8951,
  [SMALL_STATE(326)] = 8964,
  [SMALL_STATE(327)] = 8977,
  [SMALL_STATE(328)] = 8990,
  [SMALL_STATE(329)] = 9003,
  [SMALL_STATE(330)] = 9016,
  [SMALL_STATE(331)] = 9029,
  [SMALL_STATE(332)] = 9042,
  [SMALL_STATE(333)] = 9055,
  [SMALL_STATE(334)] = 9068,
  [SMALL_STATE(335)] = 9081,
  [SMALL_STATE(336)] = 9094,
  [SMALL_STATE(337)] = 9107,
  [SMALL_STATE(338)] = 9120,
  [SMALL_STATE(339)] = 9133,
  [SMALL_STATE(340)] = 9146,
  [SMALL_STATE(341)] = 9159,
  [SMALL_STATE(342)] = 9172,
  [SMALL_STATE(343)] = 9185,
  [SMALL_STATE(344)] = 9198,
  [SMALL_STATE(345)] = 9211,
  [SMALL_STATE(346)] = 9224,
  [SMALL_STATE(347)] = 9237,
  [SMALL_STATE(348)] = 9250,
  [SMALL_STATE(349)] = 9263,
  [SMALL_STATE(350)] = 9276,
  [SMALL_STATE(351)] = 9289,
  [SMALL_STATE(352)] = 9302,
  [SMALL_STATE(353)] = 9315,
  [SMALL_STATE(354)] = 9324,
  [SMALL_STATE(355)] = 9337,
  [SMALL_STATE(356)] = 9350,
  [SMALL_STATE(357)] = 9363,
  [SMALL_STATE(358)] = 9376,
  [SMALL_STATE(359)] = 9389,
  [SMALL_STATE(360)] = 9402,
  [SMALL_STATE(361)] = 9415,
  [SMALL_STATE(362)] = 9428,
  [SMALL_STATE(363)] = 9441,
  [SMALL_STATE(364)] = 9454,
  [SMALL_STATE(365)] = 9467,
  [SMALL_STATE(366)] = 9480,
  [SMALL_STATE(367)] = 9493,
  [SMALL_STATE(368)] = 9506,
  [SMALL_STATE(369)] = 9519,
  [SMALL_STATE(370)] = 9532,
  [SMALL_STATE(371)] = 9545,
  [SMALL_STATE(372)] = 9558,
  [SMALL_STATE(373)] = 9571,
  [SMALL_STATE(374)] = 9584,
  [SMALL_STATE(375)] = 9597,
  [SMALL_STATE(376)] = 9610,
  [SMALL_STATE(377)] = 9623,
  [SMALL_STATE(378)] = 9636,
  [SMALL_STATE(379)] = 9649,
  [SMALL_STATE(380)] = 9662,
  [SMALL_STATE(381)] = 9675,
  [SMALL_STATE(382)] = 9688,
  [SMALL_STATE(383)] = 9701,
  [SMALL_STATE(384)] = 9714,
  [SMALL_STATE(385)] = 9727,
  [SMALL_STATE(386)] = 9740,
  [SMALL_STATE(387)] = 9753,
  [SMALL_STATE(388)] = 9766,
  [SMALL_STATE(389)] = 9779,
  [SMALL_STATE(390)] = 9787,
  [SMALL_STATE(391)] = 9797,
  [SMALL_STATE(392)] = 9807,
  [SMALL_STATE(393)] = 9815,
  [SMALL_STATE(394)] = 9823,
  [SMALL_STATE(395)] = 9831,
  [SMALL_STATE(396)] = 9839,
  [SMALL_STATE(397)] = 9849,
  [SMALL_STATE(398)] = 9857,
  [SMALL_STATE(399)] = 9865,
  [SMALL_STATE(400)] = 9873,
  [SMALL_STATE(401)] = 9881,
  [SMALL_STATE(402)] = 9889,
  [SMALL_STATE(403)] = 9897,
  [SMALL_STATE(404)] = 9905,
  [SMALL_STATE(405)] = 9913,
  [SMALL_STATE(406)] = 9923,
  [SMALL_STATE(407)] = 9931,
  [SMALL_STATE(408)] = 9939,
  [SMALL_STATE(409)] = 9947,
  [SMALL_STATE(410)] = 9957,
  [SMALL_STATE(411)] = 9967,
  [SMALL_STATE(412)] = 9975,
  [SMALL_STATE(413)] = 9983,
  [SMALL_STATE(414)] = 9991,
  [SMALL_STATE(415)] = 9999,
  [SMALL_STATE(416)] = 10009,
  [SMALL_STATE(417)] = 10019,
  [SMALL_STATE(418)] = 10029,
  [SMALL_STATE(419)] = 10039,
  [SMALL_STATE(420)] = 10047,
  [SMALL_STATE(421)] = 10055,
  [SMALL_STATE(422)] = 10063,
  [SMALL_STATE(423)] = 10073,
  [SMALL_STATE(424)] = 10081,
  [SMALL_STATE(425)] = 10089,
  [SMALL_STATE(426)] = 10099,
  [SMALL_STATE(427)] = 10109,
  [SMALL_STATE(428)] = 10117,
  [SMALL_STATE(429)] = 10125,
  [SMALL_STATE(430)] = 10133,
  [SMALL_STATE(431)] = 10143,
  [SMALL_STATE(432)] = 10151,
  [SMALL_STATE(433)] = 10161,
  [SMALL_STATE(434)] = 10169,
  [SMALL_STATE(435)] = 10179,
  [SMALL_STATE(436)] = 10187,
  [SMALL_STATE(437)] = 10195,
  [SMALL_STATE(438)] = 10203,
  [SMALL_STATE(439)] = 10213,
  [SMALL_STATE(440)] = 10221,
  [SMALL_STATE(441)] = 10229,
  [SMALL_STATE(442)] = 10239,
  [SMALL_STATE(443)] = 10247,
  [SMALL_STATE(444)] = 10257,
  [SMALL_STATE(445)] = 10265,
  [SMALL_STATE(446)] = 10273,
  [SMALL_STATE(447)] = 10281,
  [SMALL_STATE(448)] = 10289,
  [SMALL_STATE(449)] = 10299,
  [SMALL_STATE(450)] = 10307,
  [SMALL_STATE(451)] = 10315,
  [SMALL_STATE(452)] = 10323,
  [SMALL_STATE(453)] = 10331,
  [SMALL_STATE(454)] = 10341,
  [SMALL_STATE(455)] = 10349,
  [SMALL_STATE(456)] = 10357,
  [SMALL_STATE(457)] = 10365,
  [SMALL_STATE(458)] = 10375,
  [SMALL_STATE(459)] = 10382,
  [SMALL_STATE(460)] = 10389,
  [SMALL_STATE(461)] = 10396,
  [SMALL_STATE(462)] = 10403,
  [SMALL_STATE(463)] = 10410,
  [SMALL_STATE(464)] = 10417,
  [SMALL_STATE(465)] = 10424,
  [SMALL_STATE(466)] = 10431,
  [SMALL_STATE(467)] = 10438,
  [SMALL_STATE(468)] = 10445,
  [SMALL_STATE(469)] = 10452,
  [SMALL_STATE(470)] = 10459,
  [SMALL_STATE(471)] = 10466,
  [SMALL_STATE(472)] = 10473,
  [SMALL_STATE(473)] = 10480,
  [SMALL_STATE(474)] = 10487,
  [SMALL_STATE(475)] = 10494,
  [SMALL_STATE(476)] = 10501,
  [SMALL_STATE(477)] = 10508,
  [SMALL_STATE(478)] = 10515,
  [SMALL_STATE(479)] = 10522,
  [SMALL_STATE(480)] = 10529,
  [SMALL_STATE(481)] = 10536,
  [SMALL_STATE(482)] = 10543,
  [SMALL_STATE(483)] = 10550,
  [SMALL_STATE(484)] = 10557,
  [SMALL_STATE(485)] = 10564,
  [SMALL_STATE(486)] = 10571,
  [SMALL_STATE(487)] = 10578,
  [SMALL_STATE(488)] = 10585,
  [SMALL_STATE(489)] = 10592,
  [SMALL_STATE(490)] = 10599,
  [SMALL_STATE(491)] = 10606,
  [SMALL_STATE(492)] = 10613,
  [SMALL_STATE(493)] = 10620,
  [SMALL_STATE(494)] = 10627,
  [SMALL_STATE(495)] = 10634,
  [SMALL_STATE(496)] = 10641,
  [SMALL_STATE(497)] = 10648,
  [SMALL_STATE(498)] = 10655,
  [SMALL_STATE(499)] = 10662,
  [SMALL_STATE(500)] = 10669,
  [SMALL_STATE(501)] = 10676,
  [SMALL_STATE(502)] = 10683,
  [SMALL_STATE(503)] = 10690,
  [SMALL_STATE(504)] = 10697,
  [SMALL_STATE(505)] = 10704,
  [SMALL_STATE(506)] = 10711,
  [SMALL_STATE(507)] = 10718,
  [SMALL_STATE(508)] = 10725,
  [SMALL_STATE(509)] = 10732,
  [SMALL_STATE(510)] = 10739,
  [SMALL_STATE(511)] = 10746,
  [SMALL_STATE(512)] = 10753,
  [SMALL_STATE(513)] = 10760,
  [SMALL_STATE(514)] = 10767,
  [SMALL_STATE(515)] = 10774,
  [SMALL_STATE(516)] = 10781,
  [SMALL_STATE(517)] = 10788,
  [SMALL_STATE(518)] = 10795,
  [SMALL_STATE(519)] = 10802,
  [SMALL_STATE(520)] = 10809,
  [SMALL_STATE(521)] = 10816,
  [SMALL_STATE(522)] = 10823,
  [SMALL_STATE(523)] = 10830,
  [SMALL_STATE(524)] = 10837,
  [SMALL_STATE(525)] = 10844,
  [SMALL_STATE(526)] = 10851,
  [SMALL_STATE(527)] = 10858,
  [SMALL_STATE(528)] = 10865,
  [SMALL_STATE(529)] = 10872,
  [SMALL_STATE(530)] = 10879,
  [SMALL_STATE(531)] = 10886,
  [SMALL_STATE(532)] = 10893,
  [SMALL_STATE(533)] = 10900,
  [SMALL_STATE(534)] = 10907,
  [SMALL_STATE(535)] = 10914,
  [SMALL_STATE(536)] = 10921,
  [SMALL_STATE(537)] = 10928,
  [SMALL_STATE(538)] = 10935,
  [SMALL_STATE(539)] = 10942,
  [SMALL_STATE(540)] = 10949,
  [SMALL_STATE(541)] = 10956,
  [SMALL_STATE(542)] = 10963,
  [SMALL_STATE(543)] = 10970,
  [SMALL_STATE(544)] = 10977,
  [SMALL_STATE(545)] = 10984,
  [SMALL_STATE(546)] = 10991,
  [SMALL_STATE(547)] = 10998,
  [SMALL_STATE(548)] = 11005,
  [SMALL_STATE(549)] = 11012,
  [SMALL_STATE(550)] = 11019,
  [SMALL_STATE(551)] = 11026,
  [SMALL_STATE(552)] = 11033,
  [SMALL_STATE(553)] = 11040,
  [SMALL_STATE(554)] = 11047,
  [SMALL_STATE(555)] = 11054,
  [SMALL_STATE(556)] = 11061,
  [SMALL_STATE(557)] = 11068,
  [SMALL_STATE(558)] = 11075,
  [SMALL_STATE(559)] = 11082,
  [SMALL_STATE(560)] = 11089,
  [SMALL_STATE(561)] = 11096,
  [SMALL_STATE(562)] = 11103,
  [SMALL_STATE(563)] = 11110,
  [SMALL_STATE(564)] = 11117,
  [SMALL_STATE(565)] = 11124,
  [SMALL_STATE(566)] = 11131,
  [SMALL_STATE(567)] = 11138,
  [SMALL_STATE(568)] = 11145,
  [SMALL_STATE(569)] = 11152,
  [SMALL_STATE(570)] = 11159,
  [SMALL_STATE(571)] = 11166,
  [SMALL_STATE(572)] = 11173,
  [SMALL_STATE(573)] = 11180,
  [SMALL_STATE(574)] = 11187,
  [SMALL_STATE(575)] = 11194,
  [SMALL_STATE(576)] = 11201,
  [SMALL_STATE(577)] = 11208,
  [SMALL_STATE(578)] = 11215,
  [SMALL_STATE(579)] = 11222,
  [SMALL_STATE(580)] = 11229,
  [SMALL_STATE(581)] = 11236,
  [SMALL_STATE(582)] = 11243,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 6),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 7),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 8),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(38),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(38),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(56),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(249),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(167),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(205),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(44),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(322),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(547),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(47),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(167),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(99),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(453),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 8),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(563),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(120),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(282),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(572),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(571),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(174),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_op, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_op, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 7),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 7),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(357),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(511),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(511),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(415),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(511),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_val, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chunk_val, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 6),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 7),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 7),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(237),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(576),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(574),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_val, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chunk_val, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 8),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 8),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(138),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(416),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(311),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat3, 2), SHIFT_REPEAT(290),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat3, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(438),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(339),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(484),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 15),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 16),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 17),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 14),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 7),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 18),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 19),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 4),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 7),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 4),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 5),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 9),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 4),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 12),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 8),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 8),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 13),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_tok, 1),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rtx(void) {
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
