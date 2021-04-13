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
#define STATE_COUNT 601
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
  anon_sym_LBRACE = 54,
  anon_sym_RBRACE = 55,
  anon_sym_PLUS = 56,
  anon_sym__ = 57,
  aux_sym_if_tok_token1 = 58,
  aux_sym_elif_tok_token1 = 59,
  aux_sym_elif_tok_token2 = 60,
  aux_sym_else_tok_token1 = 61,
  aux_sym_else_tok_token2 = 62,
  sym_always_tok = 63,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym__] = "_",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym__] = anon_sym__,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
      if (lookahead == '+') ADVANCE(418);
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
      if (lookahead == '_') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(416);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '+') ADVANCE(419);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '@') ADVANCE(415);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '+') ADVANCE(419);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '+') ADVANCE(419);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == ';') ADVANCE(342);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '{') ADVANCE(416);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '+') ADVANCE(419);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '+') ADVANCE(419);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '<') ADVANCE(339);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '[') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '{') ADVANCE(416);
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
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '}') ADVANCE(417);
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
          lookahead == 'f') ADVANCE(422);
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
          lookahead == 'f') ADVANCE(423);
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
          lookahead == 'e') ADVANCE(425);
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
          lookahead == 'f') ADVANCE(424);
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
          lookahead == 's') ADVANCE(427);
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
          lookahead == 'e') ADVANCE(426);
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
      if (lookahead == '+') ADVANCE(418);
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
      if (lookahead == '_') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(416);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '}') ADVANCE(417);
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
      if (lookahead == '{') ADVANCE(416);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\\') ADVANCE(332);
      if (!sym_ident_character_set_4(lookahead)) ADVANCE(331);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_if_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_elif_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_elif_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_else_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(425);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_else_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_always_tok);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(427);
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
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 314},
  [122] = {.lex_state = 314},
  [123] = {.lex_state = 314},
  [124] = {.lex_state = 314},
  [125] = {.lex_state = 8},
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
  [137] = {.lex_state = 314},
  [138] = {.lex_state = 314},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 314},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 314},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 314},
  [190] = {.lex_state = 314},
  [191] = {.lex_state = 314},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 314},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 314},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 314},
  [200] = {.lex_state = 314},
  [201] = {.lex_state = 314},
  [202] = {.lex_state = 314},
  [203] = {.lex_state = 314},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 314},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 314},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 314},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 314},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 314},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 314},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 314},
  [255] = {.lex_state = 314},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 314},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 314},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 314},
  [270] = {.lex_state = 314},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 314},
  [275] = {.lex_state = 314},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
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
  [293] = {.lex_state = 314},
  [294] = {.lex_state = 314},
  [295] = {.lex_state = 314},
  [296] = {.lex_state = 314},
  [297] = {.lex_state = 314},
  [298] = {.lex_state = 314},
  [299] = {.lex_state = 314},
  [300] = {.lex_state = 314},
  [301] = {.lex_state = 314},
  [302] = {.lex_state = 314},
  [303] = {.lex_state = 314},
  [304] = {.lex_state = 314},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 314},
  [307] = {.lex_state = 314},
  [308] = {.lex_state = 314},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 10},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 10},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 314},
  [341] = {.lex_state = 314},
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
  [353] = {.lex_state = 12},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 314},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 10},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 314},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 314},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 314},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 314},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 314},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 314},
  [404] = {.lex_state = 314},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 314},
  [407] = {.lex_state = 314},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 314},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 314},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 314},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 314},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 314},
  [421] = {.lex_state = 314},
  [422] = {.lex_state = 314},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 314},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 314},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 314},
  [430] = {.lex_state = 314},
  [431] = {.lex_state = 314},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 314},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 314},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 314},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 314},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 314},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 314},
  [451] = {.lex_state = 314},
  [452] = {.lex_state = 314},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 314},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 314},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 314},
  [464] = {.lex_state = 314},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 314},
  [467] = {.lex_state = 314},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 314},
  [470] = {.lex_state = 314},
  [471] = {.lex_state = 314},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 314},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 314},
  [480] = {.lex_state = 314},
  [481] = {.lex_state = 314},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 314},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 314},
  [488] = {.lex_state = 314},
  [489] = {.lex_state = 314},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 314},
  [496] = {.lex_state = 314},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 314},
  [499] = {.lex_state = 314},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 314},
  [502] = {.lex_state = 314},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 314},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 314},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 314},
  [515] = {.lex_state = 314},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 314},
  [520] = {.lex_state = 314},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 314},
  [523] = {.lex_state = 314},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 314},
  [526] = {.lex_state = 314},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 314},
  [529] = {.lex_state = 314},
  [530] = {.lex_state = 314},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 314},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 314},
  [535] = {.lex_state = 314},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 314},
  [540] = {.lex_state = 314},
  [541] = {.lex_state = 314},
  [542] = {.lex_state = 314},
  [543] = {.lex_state = 314},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 314},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 314},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 314},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 314},
  [555] = {.lex_state = 314},
  [556] = {.lex_state = 314},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 314},
  [562] = {.lex_state = 314},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 314},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 314},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 314},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 314},
  [579] = {.lex_state = 314},
  [580] = {.lex_state = 314},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 314},
  [583] = {.lex_state = 314},
  [584] = {.lex_state = 314},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 314},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 314},
  [592] = {.lex_state = 314},
  [593] = {.lex_state = 314},
  [594] = {.lex_state = 314},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 314},
  [597] = {.lex_state = 314},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 314},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(590),
    [sym_output_rule] = STATE(199),
    [sym_retag_rule] = STATE(199),
    [sym_attr_rule] = STATE(199),
    [sym_reduce_rule_group] = STATE(199),
    [aux_sym_source_file_repeat1] = STATE(199),
    [aux_sym_reduce_rule_group_repeat1] = STATE(305),
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
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
      anon_sym_SLASH,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
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
      anon_sym_SLASH,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(37), 4,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_GT,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(43), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(41), 28,
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
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 4,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(41), 28,
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
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(45), 28,
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
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(53), 28,
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
      anon_sym_RBRACE,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [547] = 3,
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
  [586] = 3,
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
  [625] = 3,
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
  [664] = 3,
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
  [703] = 3,
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
  [742] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(329), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [805] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(343), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [868] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(338), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [931] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(349), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [994] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(388), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1057] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(312), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1120] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(323), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1183] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(370), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1246] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(376), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1309] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(399), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1372] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(352), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1435] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(363), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1498] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(366), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1561] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(377), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1624] = 19,
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
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(309), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(97), 1,
      sym_not,
    STATE(123), 1,
      sym_str_op,
    ACTIONS(107), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(109), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    ACTIONS(105), 13,
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
  [1722] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    ACTIONS(117), 1,
      anon_sym_LPAREN2,
    ACTIONS(119), 1,
      anon_sym_AT2,
    STATE(59), 1,
      sym_macro_name,
    STATE(102), 1,
      sym_output_var_set,
    ACTIONS(113), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(111), 10,
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
  [1761] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    ACTIONS(117), 1,
      anon_sym_LPAREN2,
    ACTIONS(119), 1,
      anon_sym_AT2,
    STATE(77), 1,
      sym_macro_name,
    STATE(107), 1,
      sym_output_var_set,
    ACTIONS(123), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(121), 10,
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
  [1800] = 18,
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
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(558), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(550), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1859] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym__,
    STATE(159), 1,
      sym_num,
    STATE(238), 1,
      sym_literal_lu,
    STATE(169), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(174), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1918] = 18,
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
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(546), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(509), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1977] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym__,
    STATE(159), 1,
      sym_num,
    STATE(238), 1,
      sym_literal_lu,
    STATE(177), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(178), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2036] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(153), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(167), 1,
      aux_sym_if_tok_token1,
    ACTIONS(169), 1,
      sym_always_tok,
    STATE(64), 1,
      sym_not,
    STATE(421), 1,
      sym_if_tok,
    STATE(589), 1,
      sym_num,
    STATE(216), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(165), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(35), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2093] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_string,
    ACTIONS(174), 1,
      sym_ident,
    ACTIONS(177), 1,
      aux_sym_num_token1,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      anon_sym_GT,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_PLUS,
    ACTIONS(206), 1,
      anon_sym__,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    ACTIONS(192), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2150] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(53), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2206] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2262] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(45), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2318] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(48), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2374] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    ACTIONS(117), 1,
      anon_sym_LPAREN2,
    STATE(71), 1,
      sym_macro_name,
    STATE(106), 1,
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
  [2466] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    ACTIONS(117), 1,
      anon_sym_LPAREN2,
    STATE(59), 1,
      sym_macro_name,
    STATE(102), 1,
      sym_output_var_set,
    ACTIONS(113), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(111), 10,
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
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(225), 14,
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
  [2530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    ACTIONS(117), 1,
      anon_sym_LPAREN2,
    STATE(86), 1,
      sym_macro_name,
    STATE(113), 1,
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
  [2566] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2622] = 17,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2678] = 17,
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
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(54), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2734] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    ACTIONS(117), 1,
      anon_sym_LPAREN2,
    STATE(77), 1,
      sym_macro_name,
    STATE(107), 1,
      sym_output_var_set,
    ACTIONS(123), 6,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(121), 10,
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
  [2770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(239), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(237), 12,
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
  [2800] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(311), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    STATE(113), 1,
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
  [2882] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(153), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(64), 1,
      sym_not,
    STATE(589), 1,
      sym_num,
    STATE(219), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(165), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(35), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [2930] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(380), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(245), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(243), 12,
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
  [3012] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(568), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3064] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(153), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(64), 1,
      sym_not,
    STATE(589), 1,
      sym_num,
    STATE(214), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(165), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(35), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3112] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym__,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_num,
    STATE(238), 1,
      sym_literal_lu,
    STATE(174), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3164] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(153), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(60), 1,
      sym_not,
    STATE(589), 1,
      sym_num,
    STATE(236), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(165), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(35), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3212] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(397), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3264] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(153), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(64), 1,
      sym_not,
    STATE(589), 1,
      sym_num,
    STATE(241), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(165), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(35), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [3312] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(490), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3364] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(550), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    STATE(111), 1,
      sym_output_var_set,
    ACTIONS(251), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(249), 11,
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
  [3446] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(572), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(75), 1,
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
  [3528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(57), 1,
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
  [3558] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(259), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(257), 12,
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
  [3588] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(457), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    STATE(102), 1,
      sym_output_var_set,
    ACTIONS(113), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(111), 11,
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
  [3670] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(509), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3722] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(357), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_literal_lu_repeat1,
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
  [3804] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(337), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3856] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(333), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3908] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(595), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3960] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(387), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_literal_lu_repeat1,
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
  [4042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK2,
    STATE(106), 1,
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
  [4072] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(319), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4124] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(151), 1,
      sym_string,
    ACTIONS(153), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(60), 1,
      sym_not,
    STATE(589), 1,
      sym_num,
    STATE(217), 2,
      sym__cond_base_bool,
      sym__cond_bool,
    ACTIONS(165), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(35), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [4172] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym__,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_num,
    STATE(238), 1,
      sym_literal_lu,
    STATE(178), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4224] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_string,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym__,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_num,
    STATE(238), 1,
      sym_literal_lu,
    STATE(247), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4276] = 16,
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
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_num,
    STATE(103), 1,
      sym_literal_lu,
    STATE(454), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4328] = 3,
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
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4353] = 3,
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
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4378] = 3,
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
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(280), 13,
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
  [4428] = 3,
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
  [4453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(122), 1,
      sym_str_op,
    ACTIONS(107), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(105), 13,
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
  [4480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(288), 12,
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
  [4505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(257), 13,
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
  [4530] = 3,
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
  [4555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(296), 13,
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
  [4580] = 3,
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
  [4604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(121), 12,
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
  [4628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(300), 13,
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
  [4652] = 3,
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
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(111), 12,
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
  [4724] = 3,
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
  [4748] = 3,
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
  [4772] = 3,
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
  [4796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(320), 12,
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
  [4820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(324), 12,
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
  [4844] = 3,
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
  [4868] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_QMARK,
    STATE(439), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4908] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_QMARK,
    STATE(460), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4948] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      anon_sym_QMARK,
    STATE(444), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4988] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(413), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5028] = 3,
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
  [5049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      sym_ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(368), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACE,
  [5070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_AT,
    STATE(144), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(374), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(372), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5096] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(380), 1,
      sym_string,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    STATE(589), 1,
      sym_num,
    STATE(311), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5132] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(256), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5168] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(273), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5204] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(348), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5240] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_string,
    ACTIONS(395), 1,
      sym_ident,
    ACTIONS(398), 1,
      anon_sym_PERCENT,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_STAR,
    ACTIONS(412), 1,
      anon_sym_QMARK,
    ACTIONS(404), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(125), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(380), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5310] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(313), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5346] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(512), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5382] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(337), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5418] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(168), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5454] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(397), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(246), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5526] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(486), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(357), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(442), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5634] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(477), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5670] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(333), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5706] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      sym_string,
    STATE(589), 1,
      sym_num,
    STATE(454), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_AT,
    STATE(146), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(442), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(440), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(448), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(446), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5791] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(444), 1,
      anon_sym_AT,
    ACTIONS(450), 1,
      sym_weight,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    STATE(116), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5824] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(456), 1,
      sym_weight,
    STATE(364), 1,
      sym_reduce_rule,
    STATE(115), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
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
  [5880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(464), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(462), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5903] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_LPAREN2,
    ACTIONS(470), 1,
      anon_sym_AT2,
    STATE(207), 1,
      sym_macro_name,
    STATE(224), 1,
      sym_output_var_set,
    ACTIONS(111), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [5932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(374), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(372), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(154), 1,
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
  [5978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(300), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [5997] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(456), 1,
      sym_weight,
    STATE(418), 1,
      sym_reduce_rule,
    STATE(115), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      sym_ident,
      anon_sym_DOLLAR,
    ACTIONS(472), 9,
      sym_string,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
  [6049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(156), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(448), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(446), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(478), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(476), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(478), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(476), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(482), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(480), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6141] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_LPAREN2,
    ACTIONS(470), 1,
      anon_sym_AT2,
    STATE(181), 1,
      sym_macro_name,
    STATE(235), 1,
      sym_output_var_set,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(489), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(487), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(464), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(462), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(480), 7,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_LPAREN2,
    STATE(181), 1,
      sym_macro_name,
    STATE(235), 1,
      sym_output_var_set,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6260] = 3,
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
  [6278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(495), 7,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_LPAREN2,
    STATE(207), 1,
      sym_macro_name,
    STATE(224), 1,
      sym_output_var_set,
    ACTIONS(111), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_LPAREN2,
    STATE(180), 1,
      sym_macro_name,
    STATE(240), 1,
      sym_output_var_set,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_LPAREN2,
    STATE(205), 1,
      sym_macro_name,
    STATE(218), 1,
      sym_output_var_set,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6401] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(499), 1,
      sym_string,
    ACTIONS(501), 1,
      sym_ident,
    ACTIONS(503), 1,
      anon_sym_PERCENT,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(507), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(509), 1,
      anon_sym_STAR,
    STATE(162), 1,
      sym_num,
    STATE(235), 1,
      sym_literal_lu,
  [6432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    STATE(184), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(308), 1,
      sym_else_tok,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6459] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      aux_sym_else_tok_token1,
    ACTIONS(523), 1,
      aux_sym_else_tok_token2,
    STATE(128), 1,
      sym_else_tok,
    STATE(170), 1,
      aux_sym_string_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6486] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(282), 1,
      sym_else_tok,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6513] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym_else_tok_token1,
    ACTIONS(523), 1,
      aux_sym_else_tok_token2,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_else_tok,
    STATE(197), 1,
      aux_sym_string_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6540] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_else_tok,
    STATE(182), 1,
      aux_sym_lu_cond_repeat1,
    STATE(414), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6567] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_else_tok,
    STATE(182), 1,
      aux_sym_lu_cond_repeat1,
    STATE(414), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6594] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(292), 1,
      sym_else_tok,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_else_tok,
    STATE(171), 1,
      aux_sym_lu_cond_repeat1,
    STATE(414), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6648] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(537), 1,
      sym_string,
    ACTIONS(539), 1,
      sym_ident,
    ACTIONS(541), 1,
      anon_sym_PERCENT,
    ACTIONS(543), 1,
      anon_sym_GT,
    ACTIONS(545), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(547), 1,
      anon_sym_STAR,
    STATE(50), 1,
      sym_num,
    STATE(107), 1,
      sym_literal_lu,
  [6679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 3,
      sym_ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(549), 6,
      sym_string,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6696] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(304), 1,
      sym_else_tok,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym_else_tok_token1,
    ACTIONS(517), 1,
      aux_sym_else_tok_token2,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_else_tok,
    STATE(172), 1,
      aux_sym_lu_cond_repeat1,
    STATE(414), 1,
      sym_elif_tok,
    ACTIONS(513), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6750] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 1,
      sym_ident,
    ACTIONS(332), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    STATE(114), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    STATE(249), 1,
      sym_output_var_set,
    ACTIONS(249), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    STATE(224), 1,
      sym_output_var_set,
    ACTIONS(111), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6817] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_else_tok_token1,
    STATE(182), 1,
      aux_sym_lu_cond_repeat1,
    STATE(414), 1,
      sym_elif_tok,
    ACTIONS(557), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(559), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6839] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(551), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [6867] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_else_tok_token1,
    STATE(184), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(417), 1,
      sym_elif_tok,
    ACTIONS(564), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(566), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_else_tok_token1,
    ACTIONS(225), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6905] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(544), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [6933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_else_tok_token1,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(237), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_else_tok_token1,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6973] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(566), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [7001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_DOLLAR,
    ACTIONS(573), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7017] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(567), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [7045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_else_tok_token1,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(253), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7065] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(484), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [7093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_else_tok_token1,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(187), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(253), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7113] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(472), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [7141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_else_tok_token1,
    ACTIONS(577), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(257), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_else_tok_token1,
    STATE(197), 1,
      aux_sym_string_cond_repeat1,
    STATE(434), 1,
      sym_elif_tok,
    ACTIONS(580), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(582), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_else_tok_token1,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(188), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(243), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(200), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [7223] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 1,
      sym_ident,
    STATE(305), 1,
      aux_sym_reduce_rule_group_repeat1,
    STATE(200), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [7243] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(575), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [7271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(368), 7,
      sym_string,
      sym_ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7287] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(382), 1,
      sym_ident,
    STATE(576), 1,
      sym_clip,
    STATE(589), 1,
      sym_num,
  [7315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_else_tok_token1,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(192), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    STATE(240), 1,
      sym_output_var_set,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7355] = 3,
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
  [7371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACK2,
    STATE(218), 1,
      sym_output_var_set,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      sym_ident,
      anon_sym_STAR,
    ACTIONS(594), 5,
      sym_string,
      sym_weight,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [7406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_else_tok_token1,
    ACTIONS(257), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7421] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      anon_sym_AT,
    STATE(250), 1,
      aux_sym_attr_rule_repeat1,
    STATE(260), 1,
      sym_attr_default,
    ACTIONS(598), 2,
      sym_string,
      sym_ident,
  [7444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_else_tok_token1,
    ACTIONS(272), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_else_tok_token1,
    ACTIONS(288), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_else_tok_token1,
    ACTIONS(296), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_bool_op,
    ACTIONS(606), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      anon_sym_AT,
    STATE(215), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(608), 2,
      sym_string,
      sym_ident,
  [7523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_bool_op,
    ACTIONS(621), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_bool_op,
    ACTIONS(621), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7555] = 3,
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
  [7569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_bool_op,
    ACTIONS(606), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      aux_sym_else_tok_token1,
    ACTIONS(625), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7597] = 3,
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
  [7611] = 3,
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
  [7625] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(629), 1,
      sym_ident,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(633), 1,
      anon_sym_PERCENT,
    ACTIONS(635), 1,
      anon_sym_LT,
    STATE(511), 1,
      sym_lu_cond,
  [7647] = 3,
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
  [7661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      aux_sym_else_tok_token1,
    ACTIONS(637), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7675] = 3,
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
  [7689] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(541), 1,
      anon_sym_PERCENT,
    ACTIONS(641), 1,
      sym_string,
    STATE(50), 1,
      sym_num,
    ACTIONS(547), 2,
      sym_ident,
      anon_sym_STAR,
  [7709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(643), 1,
      sym_string,
    ACTIONS(647), 1,
      anon_sym_PERCENT,
    STATE(52), 1,
      sym_num,
    ACTIONS(645), 2,
      sym_ident,
      anon_sym_STAR,
  [7729] = 3,
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
  [7743] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(649), 1,
      sym_string,
    ACTIONS(653), 1,
      anon_sym_PERCENT,
    STATE(164), 1,
      sym_num,
    ACTIONS(651), 2,
      sym_ident,
      anon_sym_STAR,
  [7763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_else_tok_token1,
    ACTIONS(268), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      aux_sym_else_tok_token1,
    ACTIONS(655), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_else_tok_token1,
    ACTIONS(659), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(604), 1,
      anon_sym_AT,
    ACTIONS(665), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(663), 2,
      sym_string,
      sym_ident,
  [7825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_else_tok_token1,
    ACTIONS(111), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_bool_op,
    ACTIONS(621), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_else_tok_token1,
    ACTIONS(669), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_else_tok_token1,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7883] = 3,
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
  [7897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_else_tok_token1,
    ACTIONS(249), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_bool_op,
    ACTIONS(673), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7925] = 3,
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
  [7939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(503), 1,
      anon_sym_PERCENT,
    ACTIONS(675), 1,
      sym_string,
    STATE(162), 1,
      sym_num,
    ACTIONS(509), 2,
      sym_ident,
      anon_sym_STAR,
  [7959] = 3,
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
  [7973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_else_tok_token1,
    ACTIONS(324), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      aux_sym_else_tok_token1,
    ACTIONS(681), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym_else_tok_token1,
    ACTIONS(685), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      aux_sym_else_tok_token1,
    ACTIONS(689), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_else_tok_token1,
    ACTIONS(320), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8043] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(604), 1,
      anon_sym_AT,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(663), 2,
      sym_string,
      sym_ident,
  [8063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_else_tok_token1,
    ACTIONS(280), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8077] = 3,
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
  [8091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      aux_sym_else_tok_token1,
    ACTIONS(695), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    STATE(439), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8155] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym_arrow_token1,
    ACTIONS(705), 1,
      sym_ident,
    ACTIONS(707), 1,
      anon_sym_COLON,
    ACTIONS(709), 1,
      anon_sym_GT,
    ACTIONS(711), 1,
      anon_sym_EQ,
  [8174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(641), 1,
      sym_string,
    STATE(50), 1,
      sym_num,
    ACTIONS(547), 2,
      sym_ident,
      anon_sym_STAR,
  [8191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(604), 1,
      anon_sym_AT,
    STATE(234), 1,
      aux_sym_attr_rule_repeat1,
    ACTIONS(713), 2,
      sym_string,
      sym_ident,
  [8208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(715), 1,
      sym_string,
    STATE(49), 1,
      sym_num,
    ACTIONS(717), 2,
      sym_ident,
      anon_sym_STAR,
  [8225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(719), 1,
      sym_string,
    STATE(163), 1,
      sym_num,
    ACTIONS(721), 2,
      sym_ident,
      anon_sym_STAR,
  [8242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(643), 1,
      sym_string,
    STATE(52), 1,
      sym_num,
    ACTIONS(645), 2,
      sym_ident,
      anon_sym_STAR,
  [8259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
    STATE(449), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    STATE(413), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      sym_ident,
    ACTIONS(731), 1,
      anon_sym_PERCENT,
    ACTIONS(733), 1,
      anon_sym_LT,
    STATE(494), 1,
      sym_lu_cond,
  [8356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(649), 1,
      sym_string,
    STATE(164), 1,
      sym_num,
    ACTIONS(651), 2,
      sym_ident,
      anon_sym_STAR,
  [8373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(675), 1,
      sym_string,
    STATE(162), 1,
      sym_num,
    ACTIONS(509), 2,
      sym_ident,
      anon_sym_STAR,
  [8390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 5,
      sym_string,
      sym_ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      anon_sym_LBRACK,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    STATE(438), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym__,
      anon_sym_PIPE,
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(546), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(233), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    STATE(428), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(573), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_ident,
    ACTIONS(749), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 1,
      anon_sym_DOLLAR,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
  [8534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    STATE(409), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    STATE(433), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_ident,
    ACTIONS(761), 1,
      anon_sym_DOLLAR,
    ACTIONS(763), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(765), 1,
      anon_sym_DOLLAR_PERCENT,
  [8578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(767), 1,
      anon_sym_LBRACE,
    STATE(446), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_string,
    ACTIONS(771), 1,
      sym_ident,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      anon_sym_DOLLAR,
  [8608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_ident,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
    ACTIONS(781), 1,
      anon_sym_DOLLAR,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
  [8624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 4,
      sym_string,
      sym_ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_ident,
    ACTIONS(787), 1,
      anon_sym_DOLLAR,
    ACTIONS(789), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(791), 1,
      anon_sym_DOLLAR_PERCENT,
  [8650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(521), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    STATE(458), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_ident,
    ACTIONS(797), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 1,
      anon_sym_DOLLAR,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
  [8694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(803), 1,
      anon_sym_LBRACE,
    STATE(425), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(411), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(558), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(169), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(177), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_ident,
    ACTIONS(805), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(809), 1,
      anon_sym_DOLLAR_PERCENT,
  [8780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_ident,
    ACTIONS(811), 1,
      anon_sym_DOLLAR,
    ACTIONS(813), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(815), 1,
      anon_sym_DOLLAR_PERCENT,
  [8796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
    STATE(465), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_ident,
    ACTIONS(821), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOLLAR,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
  [8826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(570), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      aux_sym_arrow_token1,
    ACTIONS(829), 1,
      sym_ident,
    STATE(142), 1,
      sym_arrow,
    STATE(353), 1,
      aux_sym_reduce_rule_group_repeat1,
  [8856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    STATE(441), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym_LBRACE,
    STATE(455), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(577), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      anon_sym__,
    STATE(375), 1,
      aux_sym_reduce_rule_repeat3,
  [8911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_output_rule_repeat1,
  [8924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_reduce_rule_repeat2,
  [8937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      aux_sym_reduce_rule_repeat3,
  [8950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_output_var_set_repeat1,
  [8963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    STATE(310), 1,
      aux_sym_output_rule_repeat1,
  [8976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [8989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(857), 1,
      sym_always_tok,
    STATE(467), 1,
      sym_if_tok,
  [9002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_output_rule_repeat1,
  [9015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DOT,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_output_rule_repeat1,
  [9028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_reduce_rule_repeat2,
  [9041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      aux_sym_reduce_rule_repeat3,
  [9093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(870), 1,
      sym_always_tok,
    STATE(422), 1,
      sym_if_tok,
  [9106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(872), 1,
      sym_always_tok,
    STATE(463), 1,
      sym_if_tok,
  [9119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(876), 1,
      sym_always_tok,
    STATE(421), 1,
      sym_if_tok,
  [9141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_reduce_rule_repeat3,
  [9167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_retag_rule_repeat1,
  [9206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(321), 1,
      aux_sym_reduce_rule_repeat2,
  [9219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_DOLLAR,
    ACTIONS(892), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_PERCENT,
  [9245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(896), 1,
      sym_always_tok,
    STATE(450), 1,
      sym_if_tok,
  [9258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_reduce_rule_repeat2,
  [9271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_reduce_rule_repeat3,
  [9284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(902), 1,
      sym_ident,
    STATE(524), 1,
      sym_num,
  [9310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(904), 1,
      sym_ident,
    STATE(507), 1,
      sym_num,
  [9323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_output_var_set_repeat1,
  [9336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      aux_sym_reduce_rule_repeat3,
  [9349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_DOLLAR,
    ACTIONS(914), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(916), 1,
      anon_sym_DOLLAR_PERCENT,
  [9384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    STATE(342), 1,
      aux_sym_output_var_set_repeat1,
  [9410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      aux_sym_reduce_rule_repeat3,
  [9423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_reduce_rule_repeat3,
  [9462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      aux_sym_arrow_token1,
    ACTIONS(928), 1,
      sym_ident,
    STATE(353), 1,
      aux_sym_reduce_rule_group_repeat1,
  [9475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    STATE(371), 1,
      aux_sym_output_rule_repeat1,
  [9488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_output_var_set_repeat1,
  [9501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(937), 1,
      anon_sym__,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      aux_sym_reduce_rule_repeat2,
  [9527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    STATE(368), 1,
      aux_sym_output_rule_repeat1,
  [9553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_DOLLAR,
    ACTIONS(763), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(765), 1,
      anon_sym_DOLLAR_PERCENT,
  [9566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(942), 1,
      sym_always_tok,
    STATE(412), 1,
      sym_if_tok,
  [9579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym_reduce_rule_repeat3,
  [9601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_SEMI,
    ACTIONS(948), 1,
      anon_sym_PIPE,
    STATE(378), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      aux_sym_reduce_rule_repeat3,
  [9640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_ident,
    ACTIONS(952), 1,
      anon_sym_LBRACK,
    ACTIONS(954), 1,
      anon_sym_DOLLAR,
  [9653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(956), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_output_rule_repeat1,
  [9666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      anon_sym__,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      aux_sym_reduce_rule_repeat3,
  [9692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_output_rule_repeat1,
  [9705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      aux_sym_if_tok_token1,
    ACTIONS(962), 1,
      sym_always_tok,
    STATE(437), 1,
      sym_if_tok,
  [9718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    STATE(317), 1,
      aux_sym_output_rule_repeat1,
  [9731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(964), 1,
      sym_ident,
    STATE(500), 1,
      sym_num,
  [9744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym_reduce_rule_repeat3,
  [9770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(400), 1,
      aux_sym_reduce_rule_repeat3,
  [9783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_PIPE,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      aux_sym_reduce_rule_repeat2,
  [9822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(974), 1,
      sym_ident,
    STATE(548), 1,
      sym_num,
  [9835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_DOLLAR,
    ACTIONS(978), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(980), 1,
      anon_sym_DOLLAR_PERCENT,
  [9848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    ACTIONS(984), 1,
      anon_sym_PIPE,
    STATE(383), 1,
      aux_sym_reduce_rule_group_repeat2,
  [9861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [9887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(989), 1,
      sym_ident,
    STATE(492), 1,
      sym_num,
  [9900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      aux_sym_reduce_rule_repeat2,
  [9913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_reduce_rule_repeat3,
  [9926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RBRACK,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [9939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(998), 1,
      sym_ident,
    STATE(586), 1,
      sym_num,
  [9952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
    STATE(393), 1,
      aux_sym_retag_rule_repeat1,
  [9965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_output_var_set_repeat1,
  [9978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_SEMI,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_retag_rule_repeat1,
  [9991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      aux_sym_retag_rule_repeat1,
  [10004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [10017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_DOLLAR,
    ACTIONS(789), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(791), 1,
      anon_sym_DOLLAR_PERCENT,
  [10030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
    STATE(365), 1,
      aux_sym_reduce_rule_repeat2,
  [10043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    ACTIONS(1018), 1,
      sym_ident,
    STATE(564), 1,
      sym_num,
  [10056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(345), 1,
      aux_sym_reduce_rule_repeat3,
  [10069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym__,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_reduce_rule_repeat3,
  [10082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    STATE(332), 1,
      aux_sym_retag_rule_repeat1,
  [10095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat2,
  [10108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_ident,
    ACTIONS(1030), 1,
      anon_sym_LBRACK,
  [10150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_condition,
  [10176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 2,
      anon_sym_RBRACE,
      anon_sym__,
  [10184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_condition,
  [10194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_condition,
  [10212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      sym_condition,
  [10238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_condition,
  [10272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(299), 1,
      sym_condition,
  [10282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym_ident,
    ACTIONS(1066), 1,
      anon_sym_LT,
  [10348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_condition,
  [10382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_condition,
  [10408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(275), 1,
      sym_condition,
  [10458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 2,
      anon_sym_sl,
      anon_sym_ref,
  [10498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_condition,
  [10516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym_ident,
    ACTIONS(1102), 1,
      anon_sym_LBRACK,
  [10526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [10574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_condition,
  [10592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_num_token1,
    STATE(531), 1,
      sym_num,
  [10610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_condition,
  [10628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_condition,
  [10638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 2,
      ts_builtin_sym_end,
      sym_ident,
  [10654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_condition,
  [10664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_EQ,
  [10671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym_ident,
  [10678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym_ident,
  [10685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_ident,
  [10692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
  [10699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym_ident,
  [10706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_EQ,
  [10713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_EQ,
  [10720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_COLON,
  [10727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
  [10734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_COLON,
  [10741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_ident,
  [10748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_ident,
  [10755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_ident,
  [10762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_EQ,
  [10769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_ident,
  [10776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RBRACK,
  [10783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [10790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
  [10797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      sym_ident,
  [10804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_ident,
  [10811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      sym_ident,
  [10818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
  [10825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_EQ,
  [10832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_SLASH,
  [10839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_EQ,
  [10846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SEMI,
  [10853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_ident,
  [10860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_ident,
  [10867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_GT,
  [10874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_ident,
  [10881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_ident,
  [10888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_SLASH,
  [10895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_ident,
  [10902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_ident,
  [10909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_EQ,
  [10916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_EQ,
  [10923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym_ident,
  [10930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_EQ,
  [10937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_SLASH,
  [10944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_EQ,
  [10951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
  [10958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_LPAREN,
  [10965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SEMI,
  [10972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
  [10979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_RBRACK,
  [10986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym_ident,
  [10993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_ident,
  [11000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
  [11007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_RBRACK,
  [11014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_EQ,
  [11021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_AT,
  [11028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN,
  [11035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
  [11042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_ident,
  [11049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_ident,
  [11056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_SLASH,
  [11063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_ident,
  [11070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_ident,
  [11077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_EQ,
  [11084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_ident,
  [11091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_ident,
  [11098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym_ident,
  [11105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_DOT,
  [11112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym_ident,
  [11119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_GT,
  [11126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      sym_ident,
  [11133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_AT,
  [11140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
  [11147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_EQ,
  [11154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_COLON,
  [11161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_ident,
  [11168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_ident,
  [11175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym_ident,
  [11182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_AT,
  [11189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_ident,
  [11196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
  [11203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      sym_ident,
  [11210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
  [11217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_EQ,
  [11224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_SLASH,
  [11231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_ident,
  [11238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
  [11245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_RBRACK,
  [11252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym_ident,
  [11259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_EQ,
  [11266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_ident,
  [11273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      sym_ident,
  [11280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_AT,
  [11287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_RBRACK,
  [11294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
  [11301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_EQ,
  [11308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [11315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      sym_ident,
  [11322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym_ident,
  [11329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_RBRACK,
  [11336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_SLASH,
  [11343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_ident,
  [11350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_RBRACK,
  [11357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_RBRACE,
  [11364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [11371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      sym_ident,
  [11378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [11385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym_ident,
  [11392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [11399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [11406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_EQ,
  [11413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RBRACK,
  [11420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
  [11427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [11434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_ident,
  [11441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_ident,
  [11448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_ident,
  [11455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RBRACK,
  [11462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_ident,
  [11469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym_ident,
  [11476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      sym_ident,
  [11483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_EQ,
  [11490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_SLASH,
  [11497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_EQ,
  [11504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      sym_ident,
  [11511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_DOT,
  [11518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      ts_builtin_sym_end,
  [11525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym_ident,
  [11532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym_ident,
  [11539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      sym_ident,
  [11546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym_ident,
  [11553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [11560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym_ident,
  [11567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_ident,
  [11574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_GT,
  [11581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_EQ,
  [11588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym_ident,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 387,
  [SMALL_STATE(12)] = 427,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 547,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 625,
  [SMALL_STATE(18)] = 664,
  [SMALL_STATE(19)] = 703,
  [SMALL_STATE(20)] = 742,
  [SMALL_STATE(21)] = 805,
  [SMALL_STATE(22)] = 868,
  [SMALL_STATE(23)] = 931,
  [SMALL_STATE(24)] = 994,
  [SMALL_STATE(25)] = 1057,
  [SMALL_STATE(26)] = 1120,
  [SMALL_STATE(27)] = 1183,
  [SMALL_STATE(28)] = 1246,
  [SMALL_STATE(29)] = 1309,
  [SMALL_STATE(30)] = 1372,
  [SMALL_STATE(31)] = 1435,
  [SMALL_STATE(32)] = 1498,
  [SMALL_STATE(33)] = 1561,
  [SMALL_STATE(34)] = 1624,
  [SMALL_STATE(35)] = 1687,
  [SMALL_STATE(36)] = 1722,
  [SMALL_STATE(37)] = 1761,
  [SMALL_STATE(38)] = 1800,
  [SMALL_STATE(39)] = 1859,
  [SMALL_STATE(40)] = 1918,
  [SMALL_STATE(41)] = 1977,
  [SMALL_STATE(42)] = 2036,
  [SMALL_STATE(43)] = 2093,
  [SMALL_STATE(44)] = 2150,
  [SMALL_STATE(45)] = 2206,
  [SMALL_STATE(46)] = 2262,
  [SMALL_STATE(47)] = 2318,
  [SMALL_STATE(48)] = 2374,
  [SMALL_STATE(49)] = 2430,
  [SMALL_STATE(50)] = 2466,
  [SMALL_STATE(51)] = 2502,
  [SMALL_STATE(52)] = 2530,
  [SMALL_STATE(53)] = 2566,
  [SMALL_STATE(54)] = 2622,
  [SMALL_STATE(55)] = 2678,
  [SMALL_STATE(56)] = 2734,
  [SMALL_STATE(57)] = 2770,
  [SMALL_STATE(58)] = 2800,
  [SMALL_STATE(59)] = 2852,
  [SMALL_STATE(60)] = 2882,
  [SMALL_STATE(61)] = 2930,
  [SMALL_STATE(62)] = 2982,
  [SMALL_STATE(63)] = 3012,
  [SMALL_STATE(64)] = 3064,
  [SMALL_STATE(65)] = 3112,
  [SMALL_STATE(66)] = 3164,
  [SMALL_STATE(67)] = 3212,
  [SMALL_STATE(68)] = 3264,
  [SMALL_STATE(69)] = 3312,
  [SMALL_STATE(70)] = 3364,
  [SMALL_STATE(71)] = 3416,
  [SMALL_STATE(72)] = 3446,
  [SMALL_STATE(73)] = 3498,
  [SMALL_STATE(74)] = 3528,
  [SMALL_STATE(75)] = 3558,
  [SMALL_STATE(76)] = 3588,
  [SMALL_STATE(77)] = 3640,
  [SMALL_STATE(78)] = 3670,
  [SMALL_STATE(79)] = 3722,
  [SMALL_STATE(80)] = 3774,
  [SMALL_STATE(81)] = 3804,
  [SMALL_STATE(82)] = 3856,
  [SMALL_STATE(83)] = 3908,
  [SMALL_STATE(84)] = 3960,
  [SMALL_STATE(85)] = 4012,
  [SMALL_STATE(86)] = 4042,
  [SMALL_STATE(87)] = 4072,
  [SMALL_STATE(88)] = 4124,
  [SMALL_STATE(89)] = 4172,
  [SMALL_STATE(90)] = 4224,
  [SMALL_STATE(91)] = 4276,
  [SMALL_STATE(92)] = 4328,
  [SMALL_STATE(93)] = 4353,
  [SMALL_STATE(94)] = 4378,
  [SMALL_STATE(95)] = 4403,
  [SMALL_STATE(96)] = 4428,
  [SMALL_STATE(97)] = 4453,
  [SMALL_STATE(98)] = 4480,
  [SMALL_STATE(99)] = 4505,
  [SMALL_STATE(100)] = 4530,
  [SMALL_STATE(101)] = 4555,
  [SMALL_STATE(102)] = 4580,
  [SMALL_STATE(103)] = 4604,
  [SMALL_STATE(104)] = 4628,
  [SMALL_STATE(105)] = 4652,
  [SMALL_STATE(106)] = 4676,
  [SMALL_STATE(107)] = 4700,
  [SMALL_STATE(108)] = 4724,
  [SMALL_STATE(109)] = 4748,
  [SMALL_STATE(110)] = 4772,
  [SMALL_STATE(111)] = 4796,
  [SMALL_STATE(112)] = 4820,
  [SMALL_STATE(113)] = 4844,
  [SMALL_STATE(114)] = 4868,
  [SMALL_STATE(115)] = 4908,
  [SMALL_STATE(116)] = 4948,
  [SMALL_STATE(117)] = 4988,
  [SMALL_STATE(118)] = 5028,
  [SMALL_STATE(119)] = 5049,
  [SMALL_STATE(120)] = 5070,
  [SMALL_STATE(121)] = 5096,
  [SMALL_STATE(122)] = 5132,
  [SMALL_STATE(123)] = 5168,
  [SMALL_STATE(124)] = 5204,
  [SMALL_STATE(125)] = 5240,
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
  [SMALL_STATE(138)] = 5706,
  [SMALL_STATE(139)] = 5742,
  [SMALL_STATE(140)] = 5768,
  [SMALL_STATE(141)] = 5791,
  [SMALL_STATE(142)] = 5824,
  [SMALL_STATE(143)] = 5857,
  [SMALL_STATE(144)] = 5880,
  [SMALL_STATE(145)] = 5903,
  [SMALL_STATE(146)] = 5932,
  [SMALL_STATE(147)] = 5955,
  [SMALL_STATE(148)] = 5978,
  [SMALL_STATE(149)] = 5997,
  [SMALL_STATE(150)] = 6030,
  [SMALL_STATE(151)] = 6049,
  [SMALL_STATE(152)] = 6072,
  [SMALL_STATE(153)] = 6095,
  [SMALL_STATE(154)] = 6118,
  [SMALL_STATE(155)] = 6141,
  [SMALL_STATE(156)] = 6170,
  [SMALL_STATE(157)] = 6193,
  [SMALL_STATE(158)] = 6216,
  [SMALL_STATE(159)] = 6234,
  [SMALL_STATE(160)] = 6260,
  [SMALL_STATE(161)] = 6278,
  [SMALL_STATE(162)] = 6296,
  [SMALL_STATE(163)] = 6322,
  [SMALL_STATE(164)] = 6348,
  [SMALL_STATE(165)] = 6374,
  [SMALL_STATE(166)] = 6401,
  [SMALL_STATE(167)] = 6432,
  [SMALL_STATE(168)] = 6459,
  [SMALL_STATE(169)] = 6486,
  [SMALL_STATE(170)] = 6513,
  [SMALL_STATE(171)] = 6540,
  [SMALL_STATE(172)] = 6567,
  [SMALL_STATE(173)] = 6594,
  [SMALL_STATE(174)] = 6621,
  [SMALL_STATE(175)] = 6648,
  [SMALL_STATE(176)] = 6679,
  [SMALL_STATE(177)] = 6696,
  [SMALL_STATE(178)] = 6723,
  [SMALL_STATE(179)] = 6750,
  [SMALL_STATE(180)] = 6777,
  [SMALL_STATE(181)] = 6797,
  [SMALL_STATE(182)] = 6817,
  [SMALL_STATE(183)] = 6839,
  [SMALL_STATE(184)] = 6867,
  [SMALL_STATE(185)] = 6889,
  [SMALL_STATE(186)] = 6905,
  [SMALL_STATE(187)] = 6933,
  [SMALL_STATE(188)] = 6953,
  [SMALL_STATE(189)] = 6973,
  [SMALL_STATE(190)] = 7001,
  [SMALL_STATE(191)] = 7017,
  [SMALL_STATE(192)] = 7045,
  [SMALL_STATE(193)] = 7065,
  [SMALL_STATE(194)] = 7093,
  [SMALL_STATE(195)] = 7113,
  [SMALL_STATE(196)] = 7141,
  [SMALL_STATE(197)] = 7161,
  [SMALL_STATE(198)] = 7183,
  [SMALL_STATE(199)] = 7203,
  [SMALL_STATE(200)] = 7223,
  [SMALL_STATE(201)] = 7243,
  [SMALL_STATE(202)] = 7271,
  [SMALL_STATE(203)] = 7287,
  [SMALL_STATE(204)] = 7315,
  [SMALL_STATE(205)] = 7335,
  [SMALL_STATE(206)] = 7355,
  [SMALL_STATE(207)] = 7371,
  [SMALL_STATE(208)] = 7391,
  [SMALL_STATE(209)] = 7406,
  [SMALL_STATE(210)] = 7421,
  [SMALL_STATE(211)] = 7444,
  [SMALL_STATE(212)] = 7459,
  [SMALL_STATE(213)] = 7474,
  [SMALL_STATE(214)] = 7489,
  [SMALL_STATE(215)] = 7503,
  [SMALL_STATE(216)] = 7523,
  [SMALL_STATE(217)] = 7539,
  [SMALL_STATE(218)] = 7555,
  [SMALL_STATE(219)] = 7569,
  [SMALL_STATE(220)] = 7583,
  [SMALL_STATE(221)] = 7597,
  [SMALL_STATE(222)] = 7611,
  [SMALL_STATE(223)] = 7625,
  [SMALL_STATE(224)] = 7647,
  [SMALL_STATE(225)] = 7661,
  [SMALL_STATE(226)] = 7675,
  [SMALL_STATE(227)] = 7689,
  [SMALL_STATE(228)] = 7709,
  [SMALL_STATE(229)] = 7729,
  [SMALL_STATE(230)] = 7743,
  [SMALL_STATE(231)] = 7763,
  [SMALL_STATE(232)] = 7777,
  [SMALL_STATE(233)] = 7791,
  [SMALL_STATE(234)] = 7805,
  [SMALL_STATE(235)] = 7825,
  [SMALL_STATE(236)] = 7839,
  [SMALL_STATE(237)] = 7855,
  [SMALL_STATE(238)] = 7869,
  [SMALL_STATE(239)] = 7883,
  [SMALL_STATE(240)] = 7897,
  [SMALL_STATE(241)] = 7911,
  [SMALL_STATE(242)] = 7925,
  [SMALL_STATE(243)] = 7939,
  [SMALL_STATE(244)] = 7959,
  [SMALL_STATE(245)] = 7973,
  [SMALL_STATE(246)] = 7987,
  [SMALL_STATE(247)] = 8001,
  [SMALL_STATE(248)] = 8015,
  [SMALL_STATE(249)] = 8029,
  [SMALL_STATE(250)] = 8043,
  [SMALL_STATE(251)] = 8063,
  [SMALL_STATE(252)] = 8077,
  [SMALL_STATE(253)] = 8091,
  [SMALL_STATE(254)] = 8105,
  [SMALL_STATE(255)] = 8122,
  [SMALL_STATE(256)] = 8133,
  [SMALL_STATE(257)] = 8144,
  [SMALL_STATE(258)] = 8155,
  [SMALL_STATE(259)] = 8174,
  [SMALL_STATE(260)] = 8191,
  [SMALL_STATE(261)] = 8208,
  [SMALL_STATE(262)] = 8225,
  [SMALL_STATE(263)] = 8242,
  [SMALL_STATE(264)] = 8259,
  [SMALL_STATE(265)] = 8270,
  [SMALL_STATE(266)] = 8287,
  [SMALL_STATE(267)] = 8298,
  [SMALL_STATE(268)] = 8309,
  [SMALL_STATE(269)] = 8320,
  [SMALL_STATE(270)] = 8337,
  [SMALL_STATE(271)] = 8356,
  [SMALL_STATE(272)] = 8373,
  [SMALL_STATE(273)] = 8390,
  [SMALL_STATE(274)] = 8401,
  [SMALL_STATE(275)] = 8412,
  [SMALL_STATE(276)] = 8429,
  [SMALL_STATE(277)] = 8440,
  [SMALL_STATE(278)] = 8451,
  [SMALL_STATE(279)] = 8462,
  [SMALL_STATE(280)] = 8476,
  [SMALL_STATE(281)] = 8490,
  [SMALL_STATE(282)] = 8504,
  [SMALL_STATE(283)] = 8518,
  [SMALL_STATE(284)] = 8534,
  [SMALL_STATE(285)] = 8548,
  [SMALL_STATE(286)] = 8562,
  [SMALL_STATE(287)] = 8578,
  [SMALL_STATE(288)] = 8592,
  [SMALL_STATE(289)] = 8608,
  [SMALL_STATE(290)] = 8624,
  [SMALL_STATE(291)] = 8634,
  [SMALL_STATE(292)] = 8650,
  [SMALL_STATE(293)] = 8664,
  [SMALL_STATE(294)] = 8678,
  [SMALL_STATE(295)] = 8694,
  [SMALL_STATE(296)] = 8708,
  [SMALL_STATE(297)] = 8722,
  [SMALL_STATE(298)] = 8736,
  [SMALL_STATE(299)] = 8750,
  [SMALL_STATE(300)] = 8764,
  [SMALL_STATE(301)] = 8780,
  [SMALL_STATE(302)] = 8796,
  [SMALL_STATE(303)] = 8810,
  [SMALL_STATE(304)] = 8826,
  [SMALL_STATE(305)] = 8840,
  [SMALL_STATE(306)] = 8856,
  [SMALL_STATE(307)] = 8870,
  [SMALL_STATE(308)] = 8884,
  [SMALL_STATE(309)] = 8898,
  [SMALL_STATE(310)] = 8911,
  [SMALL_STATE(311)] = 8924,
  [SMALL_STATE(312)] = 8937,
  [SMALL_STATE(313)] = 8950,
  [SMALL_STATE(314)] = 8963,
  [SMALL_STATE(315)] = 8976,
  [SMALL_STATE(316)] = 8989,
  [SMALL_STATE(317)] = 9002,
  [SMALL_STATE(318)] = 9015,
  [SMALL_STATE(319)] = 9028,
  [SMALL_STATE(320)] = 9041,
  [SMALL_STATE(321)] = 9054,
  [SMALL_STATE(322)] = 9067,
  [SMALL_STATE(323)] = 9080,
  [SMALL_STATE(324)] = 9093,
  [SMALL_STATE(325)] = 9106,
  [SMALL_STATE(326)] = 9119,
  [SMALL_STATE(327)] = 9128,
  [SMALL_STATE(328)] = 9141,
  [SMALL_STATE(329)] = 9154,
  [SMALL_STATE(330)] = 9167,
  [SMALL_STATE(331)] = 9180,
  [SMALL_STATE(332)] = 9193,
  [SMALL_STATE(333)] = 9206,
  [SMALL_STATE(334)] = 9219,
  [SMALL_STATE(335)] = 9232,
  [SMALL_STATE(336)] = 9245,
  [SMALL_STATE(337)] = 9258,
  [SMALL_STATE(338)] = 9271,
  [SMALL_STATE(339)] = 9284,
  [SMALL_STATE(340)] = 9297,
  [SMALL_STATE(341)] = 9310,
  [SMALL_STATE(342)] = 9323,
  [SMALL_STATE(343)] = 9336,
  [SMALL_STATE(344)] = 9349,
  [SMALL_STATE(345)] = 9358,
  [SMALL_STATE(346)] = 9371,
  [SMALL_STATE(347)] = 9384,
  [SMALL_STATE(348)] = 9397,
  [SMALL_STATE(349)] = 9410,
  [SMALL_STATE(350)] = 9423,
  [SMALL_STATE(351)] = 9436,
  [SMALL_STATE(352)] = 9449,
  [SMALL_STATE(353)] = 9462,
  [SMALL_STATE(354)] = 9475,
  [SMALL_STATE(355)] = 9488,
  [SMALL_STATE(356)] = 9501,
  [SMALL_STATE(357)] = 9514,
  [SMALL_STATE(358)] = 9527,
  [SMALL_STATE(359)] = 9540,
  [SMALL_STATE(360)] = 9553,
  [SMALL_STATE(361)] = 9566,
  [SMALL_STATE(362)] = 9579,
  [SMALL_STATE(363)] = 9588,
  [SMALL_STATE(364)] = 9601,
  [SMALL_STATE(365)] = 9614,
  [SMALL_STATE(366)] = 9627,
  [SMALL_STATE(367)] = 9640,
  [SMALL_STATE(368)] = 9653,
  [SMALL_STATE(369)] = 9666,
  [SMALL_STATE(370)] = 9679,
  [SMALL_STATE(371)] = 9692,
  [SMALL_STATE(372)] = 9705,
  [SMALL_STATE(373)] = 9718,
  [SMALL_STATE(374)] = 9731,
  [SMALL_STATE(375)] = 9744,
  [SMALL_STATE(376)] = 9757,
  [SMALL_STATE(377)] = 9770,
  [SMALL_STATE(378)] = 9783,
  [SMALL_STATE(379)] = 9796,
  [SMALL_STATE(380)] = 9809,
  [SMALL_STATE(381)] = 9822,
  [SMALL_STATE(382)] = 9835,
  [SMALL_STATE(383)] = 9848,
  [SMALL_STATE(384)] = 9861,
  [SMALL_STATE(385)] = 9874,
  [SMALL_STATE(386)] = 9887,
  [SMALL_STATE(387)] = 9900,
  [SMALL_STATE(388)] = 9913,
  [SMALL_STATE(389)] = 9926,
  [SMALL_STATE(390)] = 9939,
  [SMALL_STATE(391)] = 9952,
  [SMALL_STATE(392)] = 9965,
  [SMALL_STATE(393)] = 9978,
  [SMALL_STATE(394)] = 9991,
  [SMALL_STATE(395)] = 10004,
  [SMALL_STATE(396)] = 10017,
  [SMALL_STATE(397)] = 10030,
  [SMALL_STATE(398)] = 10043,
  [SMALL_STATE(399)] = 10056,
  [SMALL_STATE(400)] = 10069,
  [SMALL_STATE(401)] = 10082,
  [SMALL_STATE(402)] = 10095,
  [SMALL_STATE(403)] = 10108,
  [SMALL_STATE(404)] = 10116,
  [SMALL_STATE(405)] = 10124,
  [SMALL_STATE(406)] = 10132,
  [SMALL_STATE(407)] = 10140,
  [SMALL_STATE(408)] = 10150,
  [SMALL_STATE(409)] = 10158,
  [SMALL_STATE(410)] = 10166,
  [SMALL_STATE(411)] = 10176,
  [SMALL_STATE(412)] = 10184,
  [SMALL_STATE(413)] = 10194,
  [SMALL_STATE(414)] = 10202,
  [SMALL_STATE(415)] = 10212,
  [SMALL_STATE(416)] = 10220,
  [SMALL_STATE(417)] = 10228,
  [SMALL_STATE(418)] = 10238,
  [SMALL_STATE(419)] = 10246,
  [SMALL_STATE(420)] = 10254,
  [SMALL_STATE(421)] = 10262,
  [SMALL_STATE(422)] = 10272,
  [SMALL_STATE(423)] = 10282,
  [SMALL_STATE(424)] = 10290,
  [SMALL_STATE(425)] = 10298,
  [SMALL_STATE(426)] = 10306,
  [SMALL_STATE(427)] = 10314,
  [SMALL_STATE(428)] = 10322,
  [SMALL_STATE(429)] = 10330,
  [SMALL_STATE(430)] = 10338,
  [SMALL_STATE(431)] = 10348,
  [SMALL_STATE(432)] = 10356,
  [SMALL_STATE(433)] = 10364,
  [SMALL_STATE(434)] = 10372,
  [SMALL_STATE(435)] = 10382,
  [SMALL_STATE(436)] = 10390,
  [SMALL_STATE(437)] = 10398,
  [SMALL_STATE(438)] = 10408,
  [SMALL_STATE(439)] = 10416,
  [SMALL_STATE(440)] = 10424,
  [SMALL_STATE(441)] = 10432,
  [SMALL_STATE(442)] = 10440,
  [SMALL_STATE(443)] = 10448,
  [SMALL_STATE(444)] = 10458,
  [SMALL_STATE(445)] = 10466,
  [SMALL_STATE(446)] = 10474,
  [SMALL_STATE(447)] = 10482,
  [SMALL_STATE(448)] = 10490,
  [SMALL_STATE(449)] = 10498,
  [SMALL_STATE(450)] = 10506,
  [SMALL_STATE(451)] = 10516,
  [SMALL_STATE(452)] = 10526,
  [SMALL_STATE(453)] = 10534,
  [SMALL_STATE(454)] = 10542,
  [SMALL_STATE(455)] = 10550,
  [SMALL_STATE(456)] = 10558,
  [SMALL_STATE(457)] = 10566,
  [SMALL_STATE(458)] = 10574,
  [SMALL_STATE(459)] = 10582,
  [SMALL_STATE(460)] = 10592,
  [SMALL_STATE(461)] = 10600,
  [SMALL_STATE(462)] = 10610,
  [SMALL_STATE(463)] = 10618,
  [SMALL_STATE(464)] = 10628,
  [SMALL_STATE(465)] = 10638,
  [SMALL_STATE(466)] = 10646,
  [SMALL_STATE(467)] = 10654,
  [SMALL_STATE(468)] = 10664,
  [SMALL_STATE(469)] = 10671,
  [SMALL_STATE(470)] = 10678,
  [SMALL_STATE(471)] = 10685,
  [SMALL_STATE(472)] = 10692,
  [SMALL_STATE(473)] = 10699,
  [SMALL_STATE(474)] = 10706,
  [SMALL_STATE(475)] = 10713,
  [SMALL_STATE(476)] = 10720,
  [SMALL_STATE(477)] = 10727,
  [SMALL_STATE(478)] = 10734,
  [SMALL_STATE(479)] = 10741,
  [SMALL_STATE(480)] = 10748,
  [SMALL_STATE(481)] = 10755,
  [SMALL_STATE(482)] = 10762,
  [SMALL_STATE(483)] = 10769,
  [SMALL_STATE(484)] = 10776,
  [SMALL_STATE(485)] = 10783,
  [SMALL_STATE(486)] = 10790,
  [SMALL_STATE(487)] = 10797,
  [SMALL_STATE(488)] = 10804,
  [SMALL_STATE(489)] = 10811,
  [SMALL_STATE(490)] = 10818,
  [SMALL_STATE(491)] = 10825,
  [SMALL_STATE(492)] = 10832,
  [SMALL_STATE(493)] = 10839,
  [SMALL_STATE(494)] = 10846,
  [SMALL_STATE(495)] = 10853,
  [SMALL_STATE(496)] = 10860,
  [SMALL_STATE(497)] = 10867,
  [SMALL_STATE(498)] = 10874,
  [SMALL_STATE(499)] = 10881,
  [SMALL_STATE(500)] = 10888,
  [SMALL_STATE(501)] = 10895,
  [SMALL_STATE(502)] = 10902,
  [SMALL_STATE(503)] = 10909,
  [SMALL_STATE(504)] = 10916,
  [SMALL_STATE(505)] = 10923,
  [SMALL_STATE(506)] = 10930,
  [SMALL_STATE(507)] = 10937,
  [SMALL_STATE(508)] = 10944,
  [SMALL_STATE(509)] = 10951,
  [SMALL_STATE(510)] = 10958,
  [SMALL_STATE(511)] = 10965,
  [SMALL_STATE(512)] = 10972,
  [SMALL_STATE(513)] = 10979,
  [SMALL_STATE(514)] = 10986,
  [SMALL_STATE(515)] = 10993,
  [SMALL_STATE(516)] = 11000,
  [SMALL_STATE(517)] = 11007,
  [SMALL_STATE(518)] = 11014,
  [SMALL_STATE(519)] = 11021,
  [SMALL_STATE(520)] = 11028,
  [SMALL_STATE(521)] = 11035,
  [SMALL_STATE(522)] = 11042,
  [SMALL_STATE(523)] = 11049,
  [SMALL_STATE(524)] = 11056,
  [SMALL_STATE(525)] = 11063,
  [SMALL_STATE(526)] = 11070,
  [SMALL_STATE(527)] = 11077,
  [SMALL_STATE(528)] = 11084,
  [SMALL_STATE(529)] = 11091,
  [SMALL_STATE(530)] = 11098,
  [SMALL_STATE(531)] = 11105,
  [SMALL_STATE(532)] = 11112,
  [SMALL_STATE(533)] = 11119,
  [SMALL_STATE(534)] = 11126,
  [SMALL_STATE(535)] = 11133,
  [SMALL_STATE(536)] = 11140,
  [SMALL_STATE(537)] = 11147,
  [SMALL_STATE(538)] = 11154,
  [SMALL_STATE(539)] = 11161,
  [SMALL_STATE(540)] = 11168,
  [SMALL_STATE(541)] = 11175,
  [SMALL_STATE(542)] = 11182,
  [SMALL_STATE(543)] = 11189,
  [SMALL_STATE(544)] = 11196,
  [SMALL_STATE(545)] = 11203,
  [SMALL_STATE(546)] = 11210,
  [SMALL_STATE(547)] = 11217,
  [SMALL_STATE(548)] = 11224,
  [SMALL_STATE(549)] = 11231,
  [SMALL_STATE(550)] = 11238,
  [SMALL_STATE(551)] = 11245,
  [SMALL_STATE(552)] = 11252,
  [SMALL_STATE(553)] = 11259,
  [SMALL_STATE(554)] = 11266,
  [SMALL_STATE(555)] = 11273,
  [SMALL_STATE(556)] = 11280,
  [SMALL_STATE(557)] = 11287,
  [SMALL_STATE(558)] = 11294,
  [SMALL_STATE(559)] = 11301,
  [SMALL_STATE(560)] = 11308,
  [SMALL_STATE(561)] = 11315,
  [SMALL_STATE(562)] = 11322,
  [SMALL_STATE(563)] = 11329,
  [SMALL_STATE(564)] = 11336,
  [SMALL_STATE(565)] = 11343,
  [SMALL_STATE(566)] = 11350,
  [SMALL_STATE(567)] = 11357,
  [SMALL_STATE(568)] = 11364,
  [SMALL_STATE(569)] = 11371,
  [SMALL_STATE(570)] = 11378,
  [SMALL_STATE(571)] = 11385,
  [SMALL_STATE(572)] = 11392,
  [SMALL_STATE(573)] = 11399,
  [SMALL_STATE(574)] = 11406,
  [SMALL_STATE(575)] = 11413,
  [SMALL_STATE(576)] = 11420,
  [SMALL_STATE(577)] = 11427,
  [SMALL_STATE(578)] = 11434,
  [SMALL_STATE(579)] = 11441,
  [SMALL_STATE(580)] = 11448,
  [SMALL_STATE(581)] = 11455,
  [SMALL_STATE(582)] = 11462,
  [SMALL_STATE(583)] = 11469,
  [SMALL_STATE(584)] = 11476,
  [SMALL_STATE(585)] = 11483,
  [SMALL_STATE(586)] = 11490,
  [SMALL_STATE(587)] = 11497,
  [SMALL_STATE(588)] = 11504,
  [SMALL_STATE(589)] = 11511,
  [SMALL_STATE(590)] = 11518,
  [SMALL_STATE(591)] = 11525,
  [SMALL_STATE(592)] = 11532,
  [SMALL_STATE(593)] = 11539,
  [SMALL_STATE(594)] = 11546,
  [SMALL_STATE(595)] = 11553,
  [SMALL_STATE(596)] = 11560,
  [SMALL_STATE(597)] = 11567,
  [SMALL_STATE(598)] = 11574,
  [SMALL_STATE(599)] = 11581,
  [SMALL_STATE(600)] = 11588,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 8),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(37),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(37),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(51),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(259),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(175),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(227),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(44),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(361),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(540),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(56),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(175),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(109),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(283),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 8),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(535),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(139),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(288),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(480),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(481),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(176),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_op, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_op, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(367),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 7),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 7),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(520),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(520),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(289),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(520),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(215),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(470),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(469),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_val, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chunk_val, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_val, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chunk_val, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 6),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 8),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 8),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 7),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 7),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(430),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(353),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat3, 2),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat3, 2), SHIFT_REPEAT(296),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(149),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(346),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(552),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(451),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 8),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 19),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 18),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 17),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 8),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 16),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 7),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 4),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 15),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 4),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 9),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 4),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 5),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 14),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 7),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 12),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 13),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_tok, 1),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1324] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
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
