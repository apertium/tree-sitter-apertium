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
#define STATE_COUNT 627
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 19

enum {
  aux_sym_arrow_token1 = 1,
  sym__str = 2,
  sym__ident = 3,
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
  sym_rule_name = 65,
  anon_sym_QMARK = 66,
  sym_source_file = 67,
  sym_arrow = 68,
  sym_ident = 69,
  sym_num = 70,
  sym_output_rule = 71,
  sym_retag_rule = 72,
  sym_attr_default = 73,
  sym_attr_rule = 74,
  sym_clip = 75,
  sym_str_op = 76,
  sym_bool_op = 77,
  sym_not = 78,
  sym__string_val = 79,
  sym__cond_base_bool = 80,
  sym__cond_bool = 81,
  sym_condition = 82,
  sym_pattern_element = 83,
  sym_unknown = 84,
  sym_output_var_set = 85,
  sym_macro_name = 86,
  sym_literal_lu = 87,
  sym_output_element = 88,
  sym_blank = 89,
  sym_if_tok = 90,
  sym_elif_tok = 91,
  sym_else_tok = 92,
  sym_string_cond = 93,
  sym_chunk_cond = 94,
  sym_lu_cond = 95,
  sym__chunk_val = 96,
  sym__lu_val = 97,
  sym_reduce_rule_group = 98,
  sym_reduce_rule = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_output_rule_repeat1 = 101,
  aux_sym_retag_rule_repeat1 = 102,
  aux_sym_attr_rule_repeat1 = 103,
  aux_sym_pattern_element_repeat1 = 104,
  aux_sym_output_var_set_repeat1 = 105,
  aux_sym_literal_lu_repeat1 = 106,
  aux_sym_string_cond_repeat1 = 107,
  aux_sym_chunk_cond_repeat1 = 108,
  aux_sym_lu_cond_repeat1 = 109,
  aux_sym__chunk_val_repeat1 = 110,
  aux_sym_reduce_rule_group_repeat1 = 111,
  aux_sym_reduce_rule_group_repeat2 = 112,
  aux_sym_reduce_rule_repeat1 = 113,
  aux_sym_reduce_rule_repeat2 = 114,
  aux_sym_reduce_rule_repeat3 = 115,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_arrow_token1] = "arrow_token1",
  [sym__str] = "_str",
  [sym__ident] = "_ident",
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
  [sym_rule_name] = "rule_name",
  [anon_sym_QMARK] = "\?",
  [sym_source_file] = "source_file",
  [sym_arrow] = "arrow",
  [sym_ident] = "ident",
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
  [sym__str] = sym__str,
  [sym__ident] = sym__ident,
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
  [sym_rule_name] = sym_rule_name,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_source_file] = sym_source_file,
  [sym_arrow] = sym_arrow,
  [sym_ident] = sym_ident,
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
  [sym__str] = {
    .visible = false,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
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
  [sym_rule_name] = {
    .visible = true,
    .named = true,
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
  [sym_ident] = {
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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__ident_character_set_2(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    lookahead == '!' ||
    lookahead == '$' ||
    lookahead == '%' ||
    lookahead == '(' ||
    lookahead == ')' ||
    (',' <= lookahead && lookahead <= '/') ||
    (':' <= lookahead && lookahead <= '>') ||
    lookahead == '@' ||
    ('[' <= lookahead && lookahead <= ']') ||
    ('{' <= lookahead && lookahead <= '}') ||
    lookahead == 8594;
}

static inline bool sym__ident_character_set_4(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
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
    lookahead == 8594;
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(319);
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(355);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == 8594) ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '+') ADVANCE(421);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '+') ADVANCE(421);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < ':' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '+') ADVANCE(421);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '/' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '+') ADVANCE(421);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '+') ADVANCE(421);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '|' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '=' < lookahead) &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '/' || '>' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '.' || '>' < lookahead) &&
          lookahead != '@' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == 8594) ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '0' || '<' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(336);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == 8594) ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '(' &&
          (lookahead < '0' || '<' < lookahead) &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(336);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '&') ADVANCE(409);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '|') ADVANCE(411);
      if (lookahead == '~') ADVANCE(413);
      if (lookahead == 8712) ADVANCE(401);
      if (lookahead == 8976) ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '&') ADVANCE(409);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '|') ADVANCE(411);
      if (lookahead == '~') ADVANCE(413);
      if (lookahead == 8712) ADVANCE(401);
      if (lookahead == 8976) ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == 8712) ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(356);
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(409);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '|') ADVANCE(411);
      if (lookahead == '~') ADVANCE(413);
      if (lookahead == 8712) ADVANCE(401);
      if (lookahead == 8976) ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(16);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == 8712) ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(320);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(360);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 23:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(23);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(29);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(32);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(38);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(45);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(98);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(368);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 54:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 58:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(426);
      END_STATE();
    case 65:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(386);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(76);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(79);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(81);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(377);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(83);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      END_STATE();
    case 88:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(91);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 92:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(92);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(392);
      END_STATE();
    case 93:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(96);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(97);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 100:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(103);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 104:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 105:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(109);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 111:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(111);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 112:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      END_STATE();
    case 113:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 114:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(114);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 116:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 117:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
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
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 120:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(120);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(122);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 124:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 125:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      END_STATE();
    case 126:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 127:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 128:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 129:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 130:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 131:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 132:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 133:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 134:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 136:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 139:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(148);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 149:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 150:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(390);
      END_STATE();
    case 151:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 152:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 153:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(369);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 155:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
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
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 158:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 159:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 160:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      END_STATE();
    case 161:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(161);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 162:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 163:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(163);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 164:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 165:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 166:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      END_STATE();
    case 167:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 168:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      END_STATE();
    case 169:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      END_STATE();
    case 171:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(171);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 173:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(173);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 174:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(174);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 175:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 176:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(176);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 177:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(177);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 179:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 181:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 190:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
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
          lookahead == 's') ADVANCE(142);
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
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 198:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
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
          lookahead == 's') ADVANCE(150);
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
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 203:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
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
          lookahead == 's') ADVANCE(153);
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
          lookahead == 's') ADVANCE(139);
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
          lookahead == 's') ADVANCE(156);
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
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 213:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(213);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
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
          lookahead == 's') ADVANCE(158);
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
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 218:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
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
          lookahead == 's') ADVANCE(160);
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
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 223:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
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
          lookahead == 's') ADVANCE(162);
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
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 228:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
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
          lookahead == 's') ADVANCE(164);
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
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 233:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(233);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
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
          lookahead == 's') ADVANCE(166);
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
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 238:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(238);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
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
          lookahead == 's') ADVANCE(168);
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
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 243:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(243);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
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
          lookahead == 's') ADVANCE(169);
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
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 248:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 249:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 250:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(250);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 251:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 252:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(252);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 253:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(253);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 254:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(254);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 255:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(255);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(180);
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
          lookahead == 'l') ADVANCE(183);
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
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 260:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(260);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 261:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(261);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 262:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 263:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 265:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(265);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 266:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(266);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 267:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(267);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 268:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(268);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 269:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(269);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(270);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 271:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 272:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(273);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 274:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 275:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(275);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 277:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 278:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(279);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 280:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 281:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 283:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 284:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(285);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 286:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 287:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(287);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 289:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 290:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(290);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 292:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(292);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 293:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(294);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 295:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 296:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 298:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(298);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 299:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 300:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 301:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      END_STATE();
    case 302:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      END_STATE();
    case 303:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(303);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      END_STATE();
    case 304:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(304);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 305:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 306:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(306);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 307:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 308:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      END_STATE();
    case 309:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(284);
      END_STATE();
    case 310:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(310);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 311:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 312:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 313:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 314:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(314);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 316:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(316);
      END_STATE();
    case 317:
      if (eof) ADVANCE(319);
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(355);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == 8594) ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(317)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 318:
      if (eof) ADVANCE(319);
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(355);
      if (lookahead == '%') ADVANCE(342);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(353);
      if (lookahead == '[') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead == '~') ADVANCE(325);
      if (lookahead == 8976) ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(324);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < ',' || '=' < lookahead) &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}' &&
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__str);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__str);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '>') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(335);
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
          lookahead != 8594) ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '~') ADVANCE(325);
      if (lookahead == 8976) ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(324);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(325);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(326);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(327);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(325);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(328);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(329);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(331);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(331);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(332);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (!sym__ident_character_set_2(lookahead)) ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
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
          lookahead == 8594) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '\\') ADVANCE(335);
      if (!sym__ident_character_set_4(lookahead)) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_num_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_weight);
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_weight);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_PERCENT);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(356);
      if (lookahead == '%') ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_sl);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_tl);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DOLLAR_PERCENT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(362);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_str_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(364);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_str_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(367);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(368);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_str_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(370);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(371);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_str_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(374);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_str_op_token5);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(377);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_str_op_token6);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(380);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(249);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_str_op_token7);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(382);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_str_op_token8);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_str_op_token9);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(389);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(199);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_str_op_token10);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(391);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(392);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_str_op_token11);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(395);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_str_op_token12);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(398);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_str_op_token13);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_str_op_token14);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(403);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(404);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_str_op_token15);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(406);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_str_op_token16);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_bool_op_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_bool_op_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_bool_op_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_bool_op_token4);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_not_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(335);
      if (!sym__ident_character_set_4(lookahead)) ADVANCE(336);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(335);
      if (!sym__ident_character_set_4(lookahead)) ADVANCE(336);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\\') ADVANCE(335);
      if (!sym__ident_character_set_4(lookahead)) ADVANCE(336);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_if_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_elif_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_elif_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_else_tok_token1);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(427);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_else_tok_token2);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_always_tok);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(335);
      if (!sym__ident_character_set_4(lookahead)) ADVANCE(336);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 318},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 318},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 318},
  [52] = {.lex_state = 318},
  [53] = {.lex_state = 318},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 318},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 318},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 318},
  [121] = {.lex_state = 318},
  [122] = {.lex_state = 318},
  [123] = {.lex_state = 318},
  [124] = {.lex_state = 318},
  [125] = {.lex_state = 318},
  [126] = {.lex_state = 318},
  [127] = {.lex_state = 318},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 318},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 318},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 318},
  [134] = {.lex_state = 318},
  [135] = {.lex_state = 318},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 318},
  [138] = {.lex_state = 318},
  [139] = {.lex_state = 318},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 318},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 318},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 318},
  [167] = {.lex_state = 318},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 318},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 318},
  [175] = {.lex_state = 318},
  [176] = {.lex_state = 318},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 318},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 318},
  [196] = {.lex_state = 318},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 11},
  [201] = {.lex_state = 318},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 318},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 318},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 318},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 318},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 318},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 318},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 318},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 318},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 318},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 318},
  [268] = {.lex_state = 318},
  [269] = {.lex_state = 318},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 318},
  [276] = {.lex_state = 318},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 318},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 318},
  [283] = {.lex_state = 318},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 318},
  [288] = {.lex_state = 318},
  [289] = {.lex_state = 318},
  [290] = {.lex_state = 318},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 318},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 318},
  [297] = {.lex_state = 318},
  [298] = {.lex_state = 318},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 318},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 318},
  [305] = {.lex_state = 318},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 318},
  [310] = {.lex_state = 318},
  [311] = {.lex_state = 318},
  [312] = {.lex_state = 318},
  [313] = {.lex_state = 318},
  [314] = {.lex_state = 318},
  [315] = {.lex_state = 318},
  [316] = {.lex_state = 318},
  [317] = {.lex_state = 318},
  [318] = {.lex_state = 318},
  [319] = {.lex_state = 318},
  [320] = {.lex_state = 318},
  [321] = {.lex_state = 318},
  [322] = {.lex_state = 318},
  [323] = {.lex_state = 318},
  [324] = {.lex_state = 318},
  [325] = {.lex_state = 318},
  [326] = {.lex_state = 318},
  [327] = {.lex_state = 318},
  [328] = {.lex_state = 318},
  [329] = {.lex_state = 318},
  [330] = {.lex_state = 318},
  [331] = {.lex_state = 318},
  [332] = {.lex_state = 318},
  [333] = {.lex_state = 318},
  [334] = {.lex_state = 318},
  [335] = {.lex_state = 318},
  [336] = {.lex_state = 318},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 318},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 318},
  [341] = {.lex_state = 318},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 318},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 318},
  [352] = {.lex_state = 318},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 318},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 318},
  [362] = {.lex_state = 318},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 318},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 318},
  [367] = {.lex_state = 318},
  [368] = {.lex_state = 318},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 318},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 318},
  [374] = {.lex_state = 318},
  [375] = {.lex_state = 318},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 318},
  [379] = {.lex_state = 11},
  [380] = {.lex_state = 318},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 318},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 318},
  [386] = {.lex_state = 318},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 318},
  [391] = {.lex_state = 318},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 318},
  [395] = {.lex_state = 318},
  [396] = {.lex_state = 318},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 318},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 318},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 318},
  [406] = {.lex_state = 318},
  [407] = {.lex_state = 318},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 318},
  [410] = {.lex_state = 318},
  [411] = {.lex_state = 318},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 318},
  [415] = {.lex_state = 11},
  [416] = {.lex_state = 318},
  [417] = {.lex_state = 318},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 318},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 318},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 318},
  [427] = {.lex_state = 318},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 318},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 318},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 318},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 318},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 318},
  [442] = {.lex_state = 318},
  [443] = {.lex_state = 318},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 318},
  [447] = {.lex_state = 318},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 318},
  [452] = {.lex_state = 318},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 318},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 318},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 318},
  [464] = {.lex_state = 318},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 318},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 318},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 318},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 318},
  [481] = {.lex_state = 318},
  [482] = {.lex_state = 318},
  [483] = {.lex_state = 318},
  [484] = {.lex_state = 318},
  [485] = {.lex_state = 318},
  [486] = {.lex_state = 318},
  [487] = {.lex_state = 318},
  [488] = {.lex_state = 318},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 318},
  [491] = {.lex_state = 318},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 318},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 318},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 318},
  [498] = {.lex_state = 318},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 318},
  [501] = {.lex_state = 318},
  [502] = {.lex_state = 318},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 318},
  [505] = {.lex_state = 318},
  [506] = {.lex_state = 318},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 318},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 318},
  [511] = {.lex_state = 318},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 318},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 318},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 318},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 318},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 318},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 318},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 318},
  [545] = {.lex_state = 318},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 318},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 318},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 318},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 318},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 318},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_arrow_token1] = ACTIONS(1),
    [sym__str] = ACTIONS(1),
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
    [sym_rule_name] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(593),
    [sym_ident] = STATE(241),
    [sym_output_rule] = STATE(175),
    [sym_retag_rule] = STATE(175),
    [sym_attr_rule] = STATE(175),
    [sym_reduce_rule_group] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(175),
    [aux_sym_reduce_rule_group_repeat1] = STATE(264),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__str] = ACTIONS(7),
    [sym__ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(9), 31,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SLASH,
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
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_AT2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [43] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(13), 27,
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
  [82] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(17), 27,
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
  [121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_GT,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    ACTIONS(27), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(23), 25,
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
  [164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(31), 25,
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
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(37), 27,
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
  [246] = 3,
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
  [285] = 3,
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
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(31), 27,
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
  [363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_GT,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(55), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(51), 25,
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
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(23), 27,
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
  [445] = 3,
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
  [484] = 3,
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
  [523] = 3,
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
  [562] = 3,
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
  [601] = 3,
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
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(43), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(41), 25,
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
  [680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_GT,
    ACTIONS(35), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(31), 25,
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
  [720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(15), 4,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
      aux_sym_else_tok_token1,
    ACTIONS(13), 25,
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
  [760] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(499), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [826] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(369), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [892] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(445), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [958] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(477), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1024] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(424), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1090] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(462), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1156] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(468), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1222] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(473), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1288] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(432), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1354] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(404), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1420] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(454), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1486] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(456), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1552] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(342), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1618] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(384), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1684] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(466), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1750] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(123), 1,
      aux_sym_if_tok_token1,
    ACTIONS(125), 1,
      sym_always_tok,
    STATE(4), 1,
      sym_ident,
    STATE(505), 1,
      sym_not,
    STATE(506), 1,
      sym_if_tok,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    ACTIONS(121), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(47), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
    STATE(225), 3,
      sym__cond_base_bool,
      sym__cond_bool,
      sym_condition,
  [1809] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
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
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym__,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_ident,
    STATE(165), 1,
      sym_num,
    STATE(248), 1,
      sym_literal_lu,
    STATE(183), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(186), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1871] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__str,
    ACTIONS(154), 1,
      sym__ident,
    ACTIONS(157), 1,
      aux_sym_num_token1,
    ACTIONS(160), 1,
      anon_sym_PERCENT,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(166), 1,
      anon_sym_GT,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(186), 1,
      anon_sym__,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    ACTIONS(172), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(38), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [1931] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
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
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym__,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_ident,
    STATE(165), 1,
      sym_num,
    STATE(248), 1,
      sym_literal_lu,
    STATE(184), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(179), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [1993] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(622), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(553), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2055] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(570), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(565), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [2117] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(49), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2176] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(38), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2235] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(43), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2294] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(38), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2353] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(38), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym_not,
    STATE(125), 1,
      sym_str_op,
    ACTIONS(211), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(213), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    ACTIONS(209), 13,
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
  [2447] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(45), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2506] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(38), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2565] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_num,
    STATE(79), 1,
      sym_ident,
    STATE(101), 1,
      sym_literal_lu,
    STATE(46), 5,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
      aux_sym__chunk_val_repeat1,
  [2624] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(505), 1,
      sym_not,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    ACTIONS(121), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(47), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
    STATE(266), 3,
      sym__cond_base_bool,
      sym__cond_bool,
      sym_condition,
  [2674] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(505), 1,
      sym_not,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    ACTIONS(121), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(47), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
    STATE(225), 3,
      sym__cond_base_bool,
      sym__cond_bool,
      sym_condition,
  [2724] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(505), 1,
      sym_not,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    ACTIONS(121), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(47), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
    STATE(230), 3,
      sym__cond_base_bool,
      sym__cond_bool,
      sym_condition,
  [2774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    STATE(84), 1,
      sym_macro_name,
    STATE(107), 1,
      sym_output_var_set,
    ACTIONS(223), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(221), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2810] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    STATE(82), 1,
      sym_macro_name,
    STATE(104), 1,
      sym_output_var_set,
    ACTIONS(231), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(229), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2846] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    STATE(85), 1,
      sym_macro_name,
    STATE(103), 1,
      sym_output_var_set,
    ACTIONS(235), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(233), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2882] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(505), 1,
      sym_not,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    ACTIONS(121), 3,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    STATE(47), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
    STATE(234), 3,
      sym__cond_base_bool,
      sym__cond_bool,
      sym_condition,
  [2932] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    STATE(83), 1,
      sym_macro_name,
    STATE(100), 1,
      sym_output_var_set,
    ACTIONS(239), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(237), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [2968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(241), 14,
      sym__str,
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
  [2996] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(606), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3051] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
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
    ACTIONS(145), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym__,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_ident,
    STATE(165), 1,
      sym_num,
    STATE(248), 1,
      sym_literal_lu,
    STATE(245), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3106] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
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
    ACTIONS(145), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym__,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_ident,
    STATE(165), 1,
      sym_num,
    STATE(248), 1,
      sym_literal_lu,
    STATE(179), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3161] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(581), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3216] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(565), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3271] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(348), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3326] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(438), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3381] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(542), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3436] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(381), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3491] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(532), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3546] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(553), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3601] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
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
    ACTIONS(145), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym__,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_ident,
    STATE(165), 1,
      sym_num,
    STATE(248), 1,
      sym_literal_lu,
    STATE(186), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3656] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(398), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(9), 13,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_AT2,
      anon_sym_RBRACE,
  [3738] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(458), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3793] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(448), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3848] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(568), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3903] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(418), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [3958] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    ACTIONS(247), 1,
      anon_sym_AT2,
    STATE(83), 1,
      sym_macro_name,
    STATE(100), 1,
      sym_output_var_set,
    ACTIONS(239), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(237), 8,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [3995] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    ACTIONS(247), 1,
      anon_sym_AT2,
    STATE(82), 1,
      sym_macro_name,
    STATE(104), 1,
      sym_output_var_set,
    ACTIONS(231), 6,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(229), 8,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4032] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(358), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4087] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_num,
    STATE(101), 1,
      sym_literal_lu,
    STATE(188), 1,
      sym_ident,
    STATE(586), 4,
      sym_output_element,
      sym_blank,
      sym_lu_cond,
      sym__lu_val,
  [4142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    STATE(100), 1,
      sym_output_var_set,
    ACTIONS(239), 5,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(237), 11,
      sym__str,
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
  [4172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    STATE(107), 1,
      sym_output_var_set,
    ACTIONS(223), 5,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(221), 11,
      sym__str,
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
  [4202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    STATE(103), 1,
      sym_output_var_set,
    ACTIONS(235), 5,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(233), 11,
      sym__str,
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
  [4232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    STATE(105), 1,
      sym_output_var_set,
    ACTIONS(251), 5,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(249), 11,
      sym__str,
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
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(253), 13,
      sym__str,
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
  [4287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(257), 13,
      sym__str,
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
  [4312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(135), 1,
      sym_str_op,
    ACTIONS(211), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(209), 13,
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
  [4339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(261), 13,
      sym__str,
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
  [4364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(265), 12,
      sym__str,
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
  [4389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(269), 13,
      sym__str,
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
  [4414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(273), 13,
      sym__str,
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
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      aux_sym_str_op_token4,
      aux_sym_str_op_token5,
      aux_sym_str_op_token10,
    ACTIONS(277), 14,
      anon_sym_LPAREN,
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
  [4464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(281), 13,
      sym__str,
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
  [4489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(285), 13,
      sym__str,
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
  [4514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(291), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(289), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(295), 12,
      sym__str,
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
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(299), 12,
      sym__str,
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
  [4590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(305), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(303), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(221), 12,
      sym__str,
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
  [4642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(229), 12,
      sym__str,
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
  [4666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(307), 12,
      sym__str,
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
  [4690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(249), 12,
      sym__str,
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
  [4714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(237), 12,
      sym__str,
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
  [4738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(311), 12,
      sym__str,
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
  [4762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(315), 12,
      sym__str,
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
  [4786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(233), 12,
      sym__str,
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
  [4810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(321), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(319), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(325), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(323), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(327), 12,
      sym__str,
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
  [4890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(275), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(273), 10,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [4918] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_QMARK,
    STATE(141), 1,
      sym_ident,
    STATE(548), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(136), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [4961] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      anon_sym_QMARK,
    STATE(141), 1,
      sym_ident,
    STATE(543), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(136), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__ident,
    ACTIONS(9), 14,
      aux_sym_arrow_token1,
      sym__str,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_AT,
      anon_sym_SLASH,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(9), 11,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_RBRACE,
  [5050] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(141), 1,
      sym_ident,
    STATE(536), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(136), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5093] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    STATE(141), 1,
      sym_ident,
    STATE(550), 2,
      sym_chunk_cond,
      sym__chunk_val,
    STATE(136), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5136] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(561), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5173] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      sym_weight,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_rule_name,
    STATE(141), 1,
      sym_ident,
    STATE(387), 1,
      sym_reduce_rule,
    STATE(112), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5212] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(377), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5249] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(438), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5286] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(542), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5323] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(400), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5360] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(592), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5397] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_ident,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    STATE(284), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5434] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(348), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5471] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(547), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(386), 9,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACE,
  [5529] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(398), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 4,
      sym__ident,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym__,
    ACTIONS(390), 9,
      sym__str,
      aux_sym_num_token1,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_LBRACE,
  [5587] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(381), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5624] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      sym_weight,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_rule_name,
    STATE(141), 1,
      sym_ident,
    STATE(539), 1,
      sym_reduce_rule,
    STATE(112), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5663] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_ident,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    STATE(177), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5700] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(600), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5737] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_ident,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    STATE(285), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5774] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__str,
    ACTIONS(397), 1,
      sym__ident,
    ACTIONS(400), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOLLAR,
    ACTIONS(411), 1,
      anon_sym_STAR,
    ACTIONS(414), 1,
      anon_sym_QMARK,
    STATE(141), 1,
      sym_ident,
    ACTIONS(406), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    STATE(136), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [5811] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(418), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5848] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_PERCENT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_ident,
    STATE(601), 1,
      sym_num,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
    STATE(263), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5885] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(358), 3,
      sym_clip,
      sym__string_val,
      sym_string_cond,
  [5922] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      anon_sym_AT,
    STATE(142), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(418), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(416), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      anon_sym_AT,
    STATE(156), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(426), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(424), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(432), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(430), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [5997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(436), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(434), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(9), 8,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(440), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(438), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6062] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 1,
      sym_weight,
    STATE(141), 1,
      sym_ident,
    STATE(113), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6095] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    ACTIONS(449), 1,
      anon_sym_LPAREN2,
    ACTIONS(451), 1,
      anon_sym_AT2,
    STATE(189), 1,
      sym_macro_name,
    STATE(243), 1,
      sym_output_var_set,
    ACTIONS(237), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6124] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    ACTIONS(449), 1,
      anon_sym_LPAREN2,
    ACTIONS(451), 1,
      anon_sym_AT2,
    STATE(192), 1,
      sym_macro_name,
    STATE(256), 1,
      sym_output_var_set,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(157), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(455), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(453), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(459), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(457), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(459), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(457), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(436), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(434), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6245] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(432), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(430), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(455), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(453), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_DOLLAR,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
    ACTIONS(461), 7,
      sym__str,
      sym__ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [6310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(418), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(416), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_pattern_element_repeat1,
    ACTIONS(467), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(465), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6356] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_ident,
    STATE(117), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6386] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    ACTIONS(449), 1,
      anon_sym_LPAREN2,
    STATE(189), 1,
      sym_macro_name,
    STATE(243), 1,
      sym_output_var_set,
    ACTIONS(237), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6412] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__str,
    ACTIONS(336), 1,
      sym__ident,
    ACTIONS(338), 1,
      anon_sym_PERCENT,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_ident,
    STATE(116), 3,
      sym_pattern_element,
      sym_unknown,
      aux_sym_reduce_rule_repeat1,
  [6442] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    STATE(616), 1,
      sym_clip,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [6474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(469), 7,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6492] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(473), 1,
      anon_sym_PERCENT,
    ACTIONS(475), 1,
      anon_sym_GT,
    ACTIONS(477), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(479), 1,
      anon_sym_STAR,
    STATE(147), 1,
      sym_ident,
    STATE(159), 1,
      sym_num,
    STATE(256), 1,
      sym_literal_lu,
  [6526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    ACTIONS(449), 1,
      anon_sym_LPAREN2,
    STATE(197), 1,
      sym_macro_name,
    STATE(233), 1,
      sym_output_var_set,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    ACTIONS(449), 1,
      anon_sym_LPAREN2,
    STATE(192), 1,
      sym_macro_name,
    STATE(256), 1,
      sym_output_var_set,
    ACTIONS(229), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6578] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    STATE(589), 1,
      sym_clip,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [6610] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    STATE(598), 1,
      sym_clip,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [6642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(438), 7,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6660] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      anon_sym_GT,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_STAR,
    STATE(58), 1,
      sym_num,
    STATE(78), 1,
      sym_ident,
    STATE(104), 1,
      sym_literal_lu,
  [6694] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(489), 1,
      anon_sym_PERCENT,
    ACTIONS(491), 1,
      anon_sym_GT,
    ACTIONS(493), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(58), 1,
      sym_num,
    STATE(104), 1,
      sym_literal_lu,
    STATE(207), 1,
      sym_ident,
  [6728] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    ACTIONS(449), 1,
      anon_sym_LPAREN2,
    STATE(202), 1,
      sym_macro_name,
    STATE(246), 1,
      sym_output_var_set,
    ACTIONS(233), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [6754] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(562), 1,
      sym_clip,
    STATE(567), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [6786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(495), 7,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [6804] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym_ident,
    STATE(264), 1,
      aux_sym_reduce_rule_group_repeat1,
    ACTIONS(501), 2,
      sym__str,
      sym__ident,
    STATE(174), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(241), 1,
      sym_ident,
    STATE(264), 1,
      aux_sym_reduce_rule_group_repeat1,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
    STATE(174), 5,
      sym_output_rule,
      sym_retag_rule,
      sym_attr_rule,
      sym_reduce_rule_group,
      aux_sym_source_file_repeat1,
  [6852] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(370), 1,
      anon_sym_GT,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(4), 1,
      sym_ident,
    STATE(567), 1,
      sym_num,
    STATE(579), 1,
      sym_clip,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [6884] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      aux_sym_else_tok_token1,
    ACTIONS(512), 1,
      aux_sym_else_tok_token2,
    STATE(134), 1,
      sym_else_tok,
    STATE(178), 1,
      aux_sym_string_cond_repeat1,
    STATE(511), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6911] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_else_tok_token1,
    ACTIONS(512), 1,
      aux_sym_else_tok_token2,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_else_tok,
    STATE(199), 1,
      aux_sym_string_cond_repeat1,
    STATE(511), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6938] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    STATE(76), 1,
      sym_else_tok,
    STATE(182), 1,
      aux_sym_lu_cond_repeat1,
    STATE(520), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_else_tok,
    STATE(193), 1,
      aux_sym_lu_cond_repeat1,
    STATE(520), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [6992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(327), 1,
      sym_else_tok,
    STATE(516), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_else_tok,
    STATE(193), 1,
      aux_sym_lu_cond_repeat1,
    STATE(520), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7046] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(326), 1,
      sym_else_tok,
    STATE(516), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(316), 1,
      sym_else_tok,
    STATE(516), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 3,
      sym__ident,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(532), 6,
      sym__str,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [7117] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_else_tok,
    STATE(180), 1,
      aux_sym_lu_cond_repeat1,
    STATE(520), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7144] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_else_tok_token1,
    ACTIONS(520), 1,
      aux_sym_else_tok_token2,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(323), 1,
      sym_else_tok,
    STATE(516), 1,
      sym_elif_tok,
    ACTIONS(508), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      anon_sym_AT2,
    STATE(82), 1,
      sym_macro_name,
    STATE(104), 1,
      sym_output_var_set,
    ACTIONS(229), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    STATE(233), 1,
      sym_output_var_set,
    ACTIONS(221), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 7,
      sym__str,
      sym__ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_else_tok_token1,
    ACTIONS(241), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    STATE(243), 1,
      sym_output_var_set,
    ACTIONS(237), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      aux_sym_else_tok_token1,
    STATE(193), 1,
      aux_sym_lu_cond_repeat1,
    STATE(520), 1,
      sym_elif_tok,
    ACTIONS(542), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(544), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_else_tok_token1,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(289), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7309] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      anon_sym_PERCENT,
    ACTIONS(555), 1,
      anon_sym_LT,
    STATE(359), 1,
      sym_ident,
    STATE(619), 1,
      sym_lu_cond,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [7335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      anon_sym_AT,
    STATE(239), 1,
      sym_attr_default,
    ACTIONS(557), 2,
      sym__str,
      sym__ident,
    STATE(218), 2,
      sym_ident,
      aux_sym_attr_rule_repeat1,
  [7359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    STATE(246), 1,
      sym_output_var_set,
    ACTIONS(233), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 3,
      sym__ident,
      anon_sym_STAR,
      sym_rule_name,
    ACTIONS(565), 5,
      sym__str,
      sym_weight,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [7395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym_else_tok_token1,
    STATE(199), 1,
      aux_sym_string_cond_repeat1,
    STATE(511), 1,
      sym_elif_tok,
    ACTIONS(569), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(571), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym_else_tok_token1,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(203), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(319), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 7,
      sym__str,
      sym__ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_else_tok_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACK2,
    STATE(254), 1,
      sym_output_var_set,
    ACTIONS(249), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_else_tok_token1,
    ACTIONS(576), 1,
      anon_sym_DOT,
    STATE(203), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(273), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_else_tok_token1,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(203), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(303), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_else_tok_token1,
    STATE(205), 1,
      aux_sym_chunk_cond_repeat1,
    STATE(516), 1,
      sym_elif_tok,
    ACTIONS(579), 2,
      anon_sym_RPAREN,
      aux_sym_else_tok_token2,
    ACTIONS(581), 3,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
  [7535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_DOLLAR,
    ACTIONS(586), 7,
      sym__str,
      sym__ident,
      aux_sym_num_token1,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOLLAR_DOLLAR,
      anon_sym_DOLLAR_PERCENT,
  [7551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK2,
    ACTIONS(227), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      anon_sym_AT2,
    STATE(83), 1,
      sym_macro_name,
    STATE(100), 1,
      sym_output_var_set,
    ACTIONS(237), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym_else_tok_token1,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(200), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(323), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(590), 1,
      anon_sym_PERCENT,
    ACTIONS(592), 1,
      anon_sym_STAR,
    STATE(54), 2,
      sym_ident,
      sym_num,
  [7618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(487), 1,
      anon_sym_STAR,
    STATE(58), 2,
      sym_ident,
      sym_num,
  [7641] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__str,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(592), 1,
      anon_sym_STAR,
    ACTIONS(594), 1,
      sym__ident,
    ACTIONS(596), 1,
      anon_sym_PERCENT,
    STATE(54), 2,
      sym_ident,
      sym_num,
  [7664] = 3,
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
  [7679] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      anon_sym_PERCENT,
    ACTIONS(600), 1,
      anon_sym_LT,
    STATE(392), 1,
      sym_ident,
    STATE(599), 1,
      sym_lu_cond,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [7702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_else_tok_token1,
    ACTIONS(265), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK2,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_else_tok_token1,
    ACTIONS(273), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_AT,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(557), 2,
      sym__str,
      sym__ident,
    STATE(221), 2,
      sym_ident,
      aux_sym_attr_rule_repeat1,
  [7753] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(604), 1,
      anon_sym_PERCENT,
    ACTIONS(606), 1,
      anon_sym_STAR,
    STATE(164), 2,
      sym_ident,
      sym_num,
  [7776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_AT,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(557), 2,
      sym__str,
      sym__ident,
    STATE(221), 2,
      sym_ident,
      aux_sym_attr_rule_repeat1,
  [7797] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__str,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(489), 1,
      anon_sym_PERCENT,
    ACTIONS(594), 1,
      sym__ident,
    STATE(58), 2,
      sym_ident,
      sym_num,
  [7820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(473), 1,
      anon_sym_PERCENT,
    ACTIONS(479), 1,
      anon_sym_STAR,
    STATE(159), 2,
      sym_ident,
      sym_num,
  [7843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_LBRACK,
    ACTIONS(618), 1,
      anon_sym_AT,
    ACTIONS(610), 2,
      sym__str,
      sym__ident,
    STATE(221), 2,
      sym_ident,
      aux_sym_attr_rule_repeat1,
  [7864] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__str,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(487), 1,
      anon_sym_STAR,
    ACTIONS(594), 1,
      sym__ident,
    STATE(58), 2,
      sym_ident,
      sym_num,
  [7884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__str,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(592), 1,
      anon_sym_STAR,
    ACTIONS(594), 1,
      sym__ident,
    STATE(54), 2,
      sym_ident,
      sym_num,
  [7904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_else_tok_token1,
    ACTIONS(621), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_bool_op,
    ACTIONS(627), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [7934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOLLAR,
    ACTIONS(631), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(633), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(575), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [7954] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(479), 1,
      anon_sym_STAR,
    STATE(159), 2,
      sym_ident,
      sym_num,
  [7974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_else_tok_token1,
    ACTIONS(269), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [7988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_else_tok_token1,
    ACTIONS(281), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_bool_op,
    ACTIONS(627), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8018] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_DOLLAR,
    ACTIONS(639), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(641), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(575), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      aux_sym_else_tok_token1,
    ACTIONS(643), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym_else_tok_token1,
    ACTIONS(233), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_bool_op,
    ACTIONS(627), 4,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_DOLLAR,
    ACTIONS(651), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(653), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(575), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_else_tok_token1,
    ACTIONS(327), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(487), 1,
      anon_sym_STAR,
    STATE(58), 2,
      sym_ident,
      sym_num,
  [8136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(655), 1,
      anon_sym_STAR,
    STATE(56), 2,
      sym_ident,
      sym_num,
  [8156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      anon_sym_AT,
    ACTIONS(557), 2,
      sym__str,
      sym__ident,
    STATE(216), 2,
      sym_ident,
      aux_sym_attr_rule_repeat1,
  [8174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_else_tok_token1,
    ACTIONS(285), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__ident,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(663), 1,
      anon_sym_GT,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(657), 2,
      aux_sym_arrow_token1,
      sym__str,
  [8208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      aux_sym_else_tok_token1,
    ACTIONS(667), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8222] = 3,
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
  [8236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      aux_sym_else_tok_token1,
    ACTIONS(671), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_else_tok_token1,
    ACTIONS(675), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8264] = 3,
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
  [8278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_else_tok_token1,
    ACTIONS(299), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8292] = 3,
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
  [8306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__str,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(594), 1,
      sym__ident,
    ACTIONS(655), 1,
      anon_sym_STAR,
    STATE(56), 2,
      sym_ident,
      sym_num,
  [8326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_else_tok_token1,
    ACTIONS(679), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_else_tok_token1,
    ACTIONS(257), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8354] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(683), 1,
      anon_sym_STAR,
    STATE(171), 2,
      sym_ident,
      sym_num,
  [8374] = 3,
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
  [8388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_else_tok_token1,
    ACTIONS(311), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__str,
    ACTIONS(83), 1,
      sym__ident,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    ACTIONS(592), 1,
      anon_sym_STAR,
    STATE(54), 2,
      sym_ident,
      sym_num,
  [8422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_else_tok_token1,
    ACTIONS(237), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__str,
    ACTIONS(127), 1,
      sym__ident,
    ACTIONS(129), 1,
      aux_sym_num_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    STATE(164), 2,
      sym_ident,
      sym_num,
  [8456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      aux_sym_else_tok_token1,
    ACTIONS(307), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_else_tok_token1,
    ACTIONS(295), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_else_tok_token1,
    ACTIONS(261), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8498] = 3,
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
  [8512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_else_tok_token1,
    ACTIONS(315), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_else_tok_token1,
    ACTIONS(693), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__str,
    ACTIONS(594), 1,
      sym__ident,
    ACTIONS(697), 1,
      aux_sym_arrow_token1,
    STATE(119), 1,
      sym_arrow,
    STATE(277), 2,
      sym_ident,
      aux_sym_reduce_rule_group_repeat1,
  [8560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_else_tok_token1,
    ACTIONS(699), 5,
      anon_sym_RPAREN,
      aux_sym_if_tok_token1,
      aux_sym_elif_tok_token1,
      aux_sym_elif_tok_token2,
      aux_sym_else_tok_token2,
  [8574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_bool_op,
    ACTIONS(703), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_DOLLAR,
    ACTIONS(707), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(709), 1,
      anon_sym_DOLLAR_PERCENT,
    STATE(575), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 5,
      sym__str,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(620), 1,
      sym_num,
    STATE(621), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(272), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(289), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(302), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(303), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(302), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(319), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 5,
      sym__str,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(585), 1,
      sym_ident,
    STATE(626), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      aux_sym_arrow_token1,
    ACTIONS(717), 1,
      sym__str,
    ACTIONS(720), 1,
      sym__ident,
    STATE(277), 2,
      sym_ident,
      aux_sym_reduce_rule_group_repeat1,
  [8748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    STATE(550), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(588), 1,
      sym_ident,
    STATE(590), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(611), 1,
      sym_num,
    STATE(612), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [8832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    ACTIONS(733), 1,
      anon_sym_LBRACE,
    STATE(518), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 5,
      sym__str,
      sym__ident,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(735), 1,
      anon_sym_LBRACK,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    STATE(509), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [8910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_LBRACK,
    ACTIONS(741), 1,
      anon_sym_DOLLAR,
    STATE(168), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [8927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_GT,
    ACTIONS(745), 1,
      anon_sym_SLASH,
    ACTIONS(23), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      anon_sym_DOLLAR,
    STATE(140), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [8959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym__,
      anon_sym_RBRACE,
      anon_sym_PIPE,
  [8981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_RPAREN,
      aux_sym_bool_op_token1,
      aux_sym_bool_op_token2,
      aux_sym_bool_op_token3,
      aux_sym_bool_op_token4,
  [8992] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(580), 1,
      sym_num,
    STATE(583), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(594), 1,
      sym_ident,
    STATE(595), 1,
      sym_num,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    STATE(536), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_GT,
    ACTIONS(755), 1,
      anon_sym_SLASH,
    ACTIONS(51), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(576), 1,
      sym_num,
    STATE(577), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(274), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(323), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_DOT,
    STATE(302), 1,
      aux_sym_literal_lu_repeat1,
    ACTIONS(273), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_GT,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    ACTIONS(31), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    STATE(540), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LT,
    STATE(538), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_GT,
    ACTIONS(31), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_GT,
    ACTIONS(41), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_GT,
    ACTIONS(13), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LBRACK,
    STATE(194), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [9198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    STATE(215), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [9212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    STATE(526), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    STATE(431), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    STATE(530), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 4,
      sym__str,
      sym__ident,
      anon_sym_LBRACK,
      anon_sym_AT,
  [9264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym_ident,
    ACTIONS(784), 2,
      sym__str,
      sym__ident,
  [9278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(617), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(224), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(570), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    STATE(529), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
    STATE(531), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACK,
    STATE(528), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(534), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(603), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_ident,
    ACTIONS(784), 2,
      sym__str,
      sym__ident,
  [9404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(183), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(587), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(591), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_LBRACK,
    STATE(271), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(622), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    STATE(503), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    STATE(549), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(552), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    STATE(512), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(184), 2,
      sym_chunk_cond,
      sym__chunk_val,
  [9558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [9567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      aux_sym_retag_rule_repeat1,
  [9580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(625), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(816), 1,
      sym_always_tok,
    STATE(508), 1,
      sym_if_tok,
  [9604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(614), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(612), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_reduce_rule_repeat3,
  [9639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(822), 1,
      sym_always_tok,
    STATE(510), 1,
      sym_if_tok,
  [9652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(613), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [9685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_DOLLAR,
    ACTIONS(828), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(830), 1,
      anon_sym_DOLLAR_PERCENT,
  [9698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_reduce_rule_repeat2,
  [9711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DOLLAR,
    ACTIONS(838), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(840), 1,
      anon_sym_DOLLAR_PERCENT,
  [9724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [9737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(566), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(602), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_output_var_set_repeat1,
  [9772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [9792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(850), 1,
      sym_always_tok,
    STATE(537), 1,
      sym_if_tok,
  [9814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(393), 1,
      aux_sym_reduce_rule_repeat2,
  [9827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    STATE(399), 1,
      aux_sym_output_rule_repeat1,
  [9840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(582), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(401), 1,
      sym_ident,
    ACTIONS(557), 2,
      sym__str,
      sym__ident,
  [9871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [9884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym_ident,
    ACTIONS(557), 2,
      sym__str,
      sym__ident,
  [9895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(862), 1,
      sym_always_tok,
    STATE(506), 1,
      sym_if_tok,
  [9908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [9917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(584), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(583), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(402), 1,
      aux_sym_reduce_rule_repeat3,
  [9952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(574), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [9963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [9976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [9985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [9996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(569), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(577), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [10031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_output_var_set_repeat1,
  [10044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(572), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(875), 1,
      sym_always_tok,
    STATE(514), 1,
      sym_if_tok,
  [10068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(575), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      aux_sym_reduce_rule_repeat2,
  [10092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_output_var_set_repeat1,
  [10105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(573), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_reduce_rule_repeat3,
  [10129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(621), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(618), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_SEMI,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    STATE(413), 1,
      aux_sym_reduce_rule_group_repeat2,
  [10164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_DOLLAR,
    ACTIONS(892), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_PERCENT,
  [10177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(564), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [10212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    STATE(419), 1,
      aux_sym_output_rule_repeat1,
  [10225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [10238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(243), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [10258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(256), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [10269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      aux_sym_output_var_set_repeat1,
  [10282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      aux_sym_reduce_rule_repeat2,
  [10295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      aux_sym_output_rule_repeat1,
  [10308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
    STATE(397), 1,
      aux_sym_output_var_set_repeat1,
  [10321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(560), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    STATE(425), 1,
      aux_sym_reduce_rule_repeat3,
  [10367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(559), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(558), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(153), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [10400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(469), 1,
      aux_sym_retag_rule_repeat1,
  [10413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [10433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 3,
      anon_sym_sl,
      anon_sym_tl,
      anon_sym_ref,
  [10451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    STATE(450), 1,
      aux_sym_reduce_rule_group_repeat2,
  [10464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [10475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(920), 1,
      sym_always_tok,
    STATE(533), 1,
      sym_if_tok,
  [10488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(436), 1,
      aux_sym_reduce_rule_repeat2,
  [10519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(928), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      aux_sym_output_rule_repeat1,
  [10532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [10545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [10556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(928), 1,
      anon_sym_SEMI,
    STATE(475), 1,
      aux_sym_output_rule_repeat1,
  [10569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(104), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
    STATE(440), 1,
      aux_sym_reduce_rule_repeat3,
  [10593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(604), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym__,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DOT,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      aux_sym_output_rule_repeat1,
  [10652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(605), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    STATE(489), 1,
      aux_sym_retag_rule_repeat1,
  [10676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    STATE(444), 1,
      aux_sym_reduce_rule_repeat3,
  [10689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_DOLLAR,
    ACTIONS(639), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(641), 1,
      anon_sym_DOLLAR_PERCENT,
  [10702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [10737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(143), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [10748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      aux_sym_reduce_rule_repeat2,
  [10761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(624), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(173), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [10818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    STATE(453), 1,
      aux_sym_reduce_rule_repeat3,
  [10844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [10853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      aux_sym_reduce_rule_repeat2,
  [10877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [10890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    ACTIONS(962), 1,
      anon_sym_PIPE,
    STATE(450), 1,
      aux_sym_reduce_rule_group_repeat2,
  [10903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(623), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(585), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [10925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [10938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(461), 1,
      aux_sym_reduce_rule_repeat3,
  [10951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(149), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [10962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      aux_sym_reduce_rule_repeat3,
  [10975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [10988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_reduce_rule_repeat2,
  [11001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      aux_sym_if_tok_token1,
    ACTIONS(969), 1,
      sym_always_tok,
    STATE(544), 1,
      sym_if_tok,
  [11014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [11038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
    STATE(467), 1,
      aux_sym_reduce_rule_repeat3,
  [11051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(594), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(596), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_reduce_rule_repeat2,
  [11086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(496), 1,
      aux_sym_reduce_rule_repeat3,
  [11099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [11112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(472), 1,
      aux_sym_reduce_rule_repeat3,
  [11125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    STATE(469), 1,
      aux_sym_retag_rule_repeat1,
  [11138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [11147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    STATE(492), 1,
      aux_sym_output_rule_repeat1,
  [11160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [11173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_reduce_rule_repeat3,
  [11186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 3,
      ts_builtin_sym_end,
      sym__str,
      sym__ident,
  [11195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      aux_sym_output_rule_repeat1,
  [11208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(992), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [11221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(992), 1,
      anon_sym_RBRACE,
    STATE(479), 1,
      aux_sym_reduce_rule_repeat3,
  [11234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(615), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [11258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(609), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(578), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(303), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [11313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(608), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(104), 1,
      sym_ident,
    ACTIONS(784), 2,
      sym__str,
      sym__ident,
  [11335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [11346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_ident,
    ACTIONS(109), 2,
      sym__str,
      sym__ident,
  [11357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    STATE(469), 1,
      aux_sym_retag_rule_repeat1,
  [11370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(299), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 1,
      sym_ident,
    ACTIONS(334), 2,
      sym__str,
      sym__ident,
  [11392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(998), 1,
      anon_sym_SEMI,
    STATE(429), 1,
      aux_sym_output_rule_repeat1,
  [11405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_DOLLAR,
    ACTIONS(651), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(653), 1,
      anon_sym_DOLLAR_PERCENT,
  [11429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym_ident,
    ACTIONS(784), 2,
      sym__str,
      sym__ident,
  [11440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      aux_sym_reduce_rule_repeat3,
  [11453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(557), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(588), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym__,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    STATE(435), 1,
      aux_sym_reduce_rule_repeat3,
  [11488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(291), 1,
      sym_ident,
    ACTIONS(7), 2,
      sym__str,
      sym__ident,
  [11510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      sym_condition,
  [11520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_condition,
  [11538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      sym_condition,
  [11548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_condition,
  [11558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym_condition,
  [11576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_condition,
  [11594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_condition,
  [11604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_condition,
  [11630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(574), 1,
      sym_num,
  [11640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym_condition,
  [11650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_condition,
  [11684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_num_token1,
    STATE(608), 1,
      sym_num,
  [11694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [11702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [11710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [11750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym_condition,
  [11792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_condition,
  [11810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_condition,
  [11828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [11836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_condition,
  [11886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_condition,
  [11896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [11912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [11936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 2,
      anon_sym_sl,
      anon_sym_ref,
  [11944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 2,
      anon_sym__,
      anon_sym_RBRACE,
  [11952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
  [11959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [11966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_EQ,
  [11973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_EQ,
  [11980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_EQ,
  [11987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_AT,
  [11994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_RBRACK,
  [12001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
  [12008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
  [12015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_RBRACK,
  [12022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_EQ,
  [12029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_GT,
  [12036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
  [12043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_GT,
  [12050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_DOT,
  [12057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
  [12064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_EQ,
  [12071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
  [12078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_COLON,
  [12085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
  [12092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_AT,
  [12099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_DOT,
  [12106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
  [12113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_SLASH,
  [12120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_EQ,
  [12127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
  [12134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACK,
  [12141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_SLASH,
  [12148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
  [12155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
  [12162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_EQ,
  [12169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_EQ,
  [12176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_EQ,
  [12183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
  [12190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
  [12197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_EQ,
  [12204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
  [12211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      anon_sym_SLASH,
  [12218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
  [12225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
  [12232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      ts_builtin_sym_end,
  [12239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_EQ,
  [12246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_SLASH,
  [12253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_EQ,
  [12260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
  [12267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RBRACK,
  [12274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
  [12281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
  [12288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_DOT,
  [12295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_EQ,
  [12302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
  [12309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_GT,
  [12316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_RBRACK,
  [12323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
  [12330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_COLON,
  [12337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_DOT,
  [12344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
  [12351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_AT,
  [12358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_SLASH,
  [12365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_EQ,
  [12372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_COLON,
  [12379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_EQ,
  [12386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_EQ,
  [12393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
  [12400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
  [12407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_EQ,
  [12414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [12421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_SLASH,
  [12428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_EQ,
  [12435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
  [12442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_EQ,
  [12449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_RBRACK,
  [12456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_EQ,
  [12463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_SLASH,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 406,
  [SMALL_STATE(13)] = 445,
  [SMALL_STATE(14)] = 484,
  [SMALL_STATE(15)] = 523,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 601,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 680,
  [SMALL_STATE(20)] = 720,
  [SMALL_STATE(21)] = 760,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 892,
  [SMALL_STATE(24)] = 958,
  [SMALL_STATE(25)] = 1024,
  [SMALL_STATE(26)] = 1090,
  [SMALL_STATE(27)] = 1156,
  [SMALL_STATE(28)] = 1222,
  [SMALL_STATE(29)] = 1288,
  [SMALL_STATE(30)] = 1354,
  [SMALL_STATE(31)] = 1420,
  [SMALL_STATE(32)] = 1486,
  [SMALL_STATE(33)] = 1552,
  [SMALL_STATE(34)] = 1618,
  [SMALL_STATE(35)] = 1684,
  [SMALL_STATE(36)] = 1750,
  [SMALL_STATE(37)] = 1809,
  [SMALL_STATE(38)] = 1871,
  [SMALL_STATE(39)] = 1931,
  [SMALL_STATE(40)] = 1993,
  [SMALL_STATE(41)] = 2055,
  [SMALL_STATE(42)] = 2117,
  [SMALL_STATE(43)] = 2176,
  [SMALL_STATE(44)] = 2235,
  [SMALL_STATE(45)] = 2294,
  [SMALL_STATE(46)] = 2353,
  [SMALL_STATE(47)] = 2412,
  [SMALL_STATE(48)] = 2447,
  [SMALL_STATE(49)] = 2506,
  [SMALL_STATE(50)] = 2565,
  [SMALL_STATE(51)] = 2624,
  [SMALL_STATE(52)] = 2674,
  [SMALL_STATE(53)] = 2724,
  [SMALL_STATE(54)] = 2774,
  [SMALL_STATE(55)] = 2810,
  [SMALL_STATE(56)] = 2846,
  [SMALL_STATE(57)] = 2882,
  [SMALL_STATE(58)] = 2932,
  [SMALL_STATE(59)] = 2968,
  [SMALL_STATE(60)] = 2996,
  [SMALL_STATE(61)] = 3051,
  [SMALL_STATE(62)] = 3106,
  [SMALL_STATE(63)] = 3161,
  [SMALL_STATE(64)] = 3216,
  [SMALL_STATE(65)] = 3271,
  [SMALL_STATE(66)] = 3326,
  [SMALL_STATE(67)] = 3381,
  [SMALL_STATE(68)] = 3436,
  [SMALL_STATE(69)] = 3491,
  [SMALL_STATE(70)] = 3546,
  [SMALL_STATE(71)] = 3601,
  [SMALL_STATE(72)] = 3656,
  [SMALL_STATE(73)] = 3711,
  [SMALL_STATE(74)] = 3738,
  [SMALL_STATE(75)] = 3793,
  [SMALL_STATE(76)] = 3848,
  [SMALL_STATE(77)] = 3903,
  [SMALL_STATE(78)] = 3958,
  [SMALL_STATE(79)] = 3995,
  [SMALL_STATE(80)] = 4032,
  [SMALL_STATE(81)] = 4087,
  [SMALL_STATE(82)] = 4142,
  [SMALL_STATE(83)] = 4172,
  [SMALL_STATE(84)] = 4202,
  [SMALL_STATE(85)] = 4232,
  [SMALL_STATE(86)] = 4262,
  [SMALL_STATE(87)] = 4287,
  [SMALL_STATE(88)] = 4312,
  [SMALL_STATE(89)] = 4339,
  [SMALL_STATE(90)] = 4364,
  [SMALL_STATE(91)] = 4389,
  [SMALL_STATE(92)] = 4414,
  [SMALL_STATE(93)] = 4439,
  [SMALL_STATE(94)] = 4464,
  [SMALL_STATE(95)] = 4489,
  [SMALL_STATE(96)] = 4514,
  [SMALL_STATE(97)] = 4542,
  [SMALL_STATE(98)] = 4566,
  [SMALL_STATE(99)] = 4590,
  [SMALL_STATE(100)] = 4618,
  [SMALL_STATE(101)] = 4642,
  [SMALL_STATE(102)] = 4666,
  [SMALL_STATE(103)] = 4690,
  [SMALL_STATE(104)] = 4714,
  [SMALL_STATE(105)] = 4738,
  [SMALL_STATE(106)] = 4762,
  [SMALL_STATE(107)] = 4786,
  [SMALL_STATE(108)] = 4810,
  [SMALL_STATE(109)] = 4838,
  [SMALL_STATE(110)] = 4866,
  [SMALL_STATE(111)] = 4890,
  [SMALL_STATE(112)] = 4918,
  [SMALL_STATE(113)] = 4961,
  [SMALL_STATE(114)] = 5004,
  [SMALL_STATE(115)] = 5027,
  [SMALL_STATE(116)] = 5050,
  [SMALL_STATE(117)] = 5093,
  [SMALL_STATE(118)] = 5136,
  [SMALL_STATE(119)] = 5173,
  [SMALL_STATE(120)] = 5212,
  [SMALL_STATE(121)] = 5249,
  [SMALL_STATE(122)] = 5286,
  [SMALL_STATE(123)] = 5323,
  [SMALL_STATE(124)] = 5360,
  [SMALL_STATE(125)] = 5397,
  [SMALL_STATE(126)] = 5434,
  [SMALL_STATE(127)] = 5471,
  [SMALL_STATE(128)] = 5508,
  [SMALL_STATE(129)] = 5529,
  [SMALL_STATE(130)] = 5566,
  [SMALL_STATE(131)] = 5587,
  [SMALL_STATE(132)] = 5624,
  [SMALL_STATE(133)] = 5663,
  [SMALL_STATE(134)] = 5700,
  [SMALL_STATE(135)] = 5737,
  [SMALL_STATE(136)] = 5774,
  [SMALL_STATE(137)] = 5811,
  [SMALL_STATE(138)] = 5848,
  [SMALL_STATE(139)] = 5885,
  [SMALL_STATE(140)] = 5922,
  [SMALL_STATE(141)] = 5948,
  [SMALL_STATE(142)] = 5974,
  [SMALL_STATE(143)] = 5997,
  [SMALL_STATE(144)] = 6020,
  [SMALL_STATE(145)] = 6039,
  [SMALL_STATE(146)] = 6062,
  [SMALL_STATE(147)] = 6095,
  [SMALL_STATE(148)] = 6124,
  [SMALL_STATE(149)] = 6153,
  [SMALL_STATE(150)] = 6176,
  [SMALL_STATE(151)] = 6199,
  [SMALL_STATE(152)] = 6222,
  [SMALL_STATE(153)] = 6245,
  [SMALL_STATE(154)] = 6268,
  [SMALL_STATE(155)] = 6291,
  [SMALL_STATE(156)] = 6310,
  [SMALL_STATE(157)] = 6333,
  [SMALL_STATE(158)] = 6356,
  [SMALL_STATE(159)] = 6386,
  [SMALL_STATE(160)] = 6412,
  [SMALL_STATE(161)] = 6442,
  [SMALL_STATE(162)] = 6474,
  [SMALL_STATE(163)] = 6492,
  [SMALL_STATE(164)] = 6526,
  [SMALL_STATE(165)] = 6552,
  [SMALL_STATE(166)] = 6578,
  [SMALL_STATE(167)] = 6610,
  [SMALL_STATE(168)] = 6642,
  [SMALL_STATE(169)] = 6660,
  [SMALL_STATE(170)] = 6694,
  [SMALL_STATE(171)] = 6728,
  [SMALL_STATE(172)] = 6754,
  [SMALL_STATE(173)] = 6786,
  [SMALL_STATE(174)] = 6804,
  [SMALL_STATE(175)] = 6828,
  [SMALL_STATE(176)] = 6852,
  [SMALL_STATE(177)] = 6884,
  [SMALL_STATE(178)] = 6911,
  [SMALL_STATE(179)] = 6938,
  [SMALL_STATE(180)] = 6965,
  [SMALL_STATE(181)] = 6992,
  [SMALL_STATE(182)] = 7019,
  [SMALL_STATE(183)] = 7046,
  [SMALL_STATE(184)] = 7073,
  [SMALL_STATE(185)] = 7100,
  [SMALL_STATE(186)] = 7117,
  [SMALL_STATE(187)] = 7144,
  [SMALL_STATE(188)] = 7171,
  [SMALL_STATE(189)] = 7195,
  [SMALL_STATE(190)] = 7215,
  [SMALL_STATE(191)] = 7231,
  [SMALL_STATE(192)] = 7247,
  [SMALL_STATE(193)] = 7267,
  [SMALL_STATE(194)] = 7289,
  [SMALL_STATE(195)] = 7309,
  [SMALL_STATE(196)] = 7335,
  [SMALL_STATE(197)] = 7359,
  [SMALL_STATE(198)] = 7379,
  [SMALL_STATE(199)] = 7395,
  [SMALL_STATE(200)] = 7417,
  [SMALL_STATE(201)] = 7437,
  [SMALL_STATE(202)] = 7453,
  [SMALL_STATE(203)] = 7473,
  [SMALL_STATE(204)] = 7493,
  [SMALL_STATE(205)] = 7513,
  [SMALL_STATE(206)] = 7535,
  [SMALL_STATE(207)] = 7551,
  [SMALL_STATE(208)] = 7575,
  [SMALL_STATE(209)] = 7595,
  [SMALL_STATE(210)] = 7618,
  [SMALL_STATE(211)] = 7641,
  [SMALL_STATE(212)] = 7664,
  [SMALL_STATE(213)] = 7679,
  [SMALL_STATE(214)] = 7702,
  [SMALL_STATE(215)] = 7717,
  [SMALL_STATE(216)] = 7732,
  [SMALL_STATE(217)] = 7753,
  [SMALL_STATE(218)] = 7776,
  [SMALL_STATE(219)] = 7797,
  [SMALL_STATE(220)] = 7820,
  [SMALL_STATE(221)] = 7843,
  [SMALL_STATE(222)] = 7864,
  [SMALL_STATE(223)] = 7884,
  [SMALL_STATE(224)] = 7904,
  [SMALL_STATE(225)] = 7918,
  [SMALL_STATE(226)] = 7934,
  [SMALL_STATE(227)] = 7954,
  [SMALL_STATE(228)] = 7974,
  [SMALL_STATE(229)] = 7988,
  [SMALL_STATE(230)] = 8002,
  [SMALL_STATE(231)] = 8018,
  [SMALL_STATE(232)] = 8038,
  [SMALL_STATE(233)] = 8052,
  [SMALL_STATE(234)] = 8066,
  [SMALL_STATE(235)] = 8082,
  [SMALL_STATE(236)] = 8102,
  [SMALL_STATE(237)] = 8116,
  [SMALL_STATE(238)] = 8136,
  [SMALL_STATE(239)] = 8156,
  [SMALL_STATE(240)] = 8174,
  [SMALL_STATE(241)] = 8188,
  [SMALL_STATE(242)] = 8208,
  [SMALL_STATE(243)] = 8222,
  [SMALL_STATE(244)] = 8236,
  [SMALL_STATE(245)] = 8250,
  [SMALL_STATE(246)] = 8264,
  [SMALL_STATE(247)] = 8278,
  [SMALL_STATE(248)] = 8292,
  [SMALL_STATE(249)] = 8306,
  [SMALL_STATE(250)] = 8326,
  [SMALL_STATE(251)] = 8340,
  [SMALL_STATE(252)] = 8354,
  [SMALL_STATE(253)] = 8374,
  [SMALL_STATE(254)] = 8388,
  [SMALL_STATE(255)] = 8402,
  [SMALL_STATE(256)] = 8422,
  [SMALL_STATE(257)] = 8436,
  [SMALL_STATE(258)] = 8456,
  [SMALL_STATE(259)] = 8470,
  [SMALL_STATE(260)] = 8484,
  [SMALL_STATE(261)] = 8498,
  [SMALL_STATE(262)] = 8512,
  [SMALL_STATE(263)] = 8526,
  [SMALL_STATE(264)] = 8540,
  [SMALL_STATE(265)] = 8560,
  [SMALL_STATE(266)] = 8574,
  [SMALL_STATE(267)] = 8588,
  [SMALL_STATE(268)] = 8608,
  [SMALL_STATE(269)] = 8619,
  [SMALL_STATE(270)] = 8636,
  [SMALL_STATE(271)] = 8647,
  [SMALL_STATE(272)] = 8662,
  [SMALL_STATE(273)] = 8677,
  [SMALL_STATE(274)] = 8688,
  [SMALL_STATE(275)] = 8703,
  [SMALL_STATE(276)] = 8714,
  [SMALL_STATE(277)] = 8731,
  [SMALL_STATE(278)] = 8748,
  [SMALL_STATE(279)] = 8759,
  [SMALL_STATE(280)] = 8770,
  [SMALL_STATE(281)] = 8787,
  [SMALL_STATE(282)] = 8798,
  [SMALL_STATE(283)] = 8815,
  [SMALL_STATE(284)] = 8832,
  [SMALL_STATE(285)] = 8843,
  [SMALL_STATE(286)] = 8854,
  [SMALL_STATE(287)] = 8865,
  [SMALL_STATE(288)] = 8882,
  [SMALL_STATE(289)] = 8893,
  [SMALL_STATE(290)] = 8910,
  [SMALL_STATE(291)] = 8927,
  [SMALL_STATE(292)] = 8942,
  [SMALL_STATE(293)] = 8959,
  [SMALL_STATE(294)] = 8970,
  [SMALL_STATE(295)] = 8981,
  [SMALL_STATE(296)] = 8992,
  [SMALL_STATE(297)] = 9009,
  [SMALL_STATE(298)] = 9026,
  [SMALL_STATE(299)] = 9043,
  [SMALL_STATE(300)] = 9058,
  [SMALL_STATE(301)] = 9075,
  [SMALL_STATE(302)] = 9090,
  [SMALL_STATE(303)] = 9105,
  [SMALL_STATE(304)] = 9120,
  [SMALL_STATE(305)] = 9134,
  [SMALL_STATE(306)] = 9148,
  [SMALL_STATE(307)] = 9160,
  [SMALL_STATE(308)] = 9172,
  [SMALL_STATE(309)] = 9184,
  [SMALL_STATE(310)] = 9198,
  [SMALL_STATE(311)] = 9212,
  [SMALL_STATE(312)] = 9226,
  [SMALL_STATE(313)] = 9240,
  [SMALL_STATE(314)] = 9254,
  [SMALL_STATE(315)] = 9264,
  [SMALL_STATE(316)] = 9278,
  [SMALL_STATE(317)] = 9292,
  [SMALL_STATE(318)] = 9306,
  [SMALL_STATE(319)] = 9320,
  [SMALL_STATE(320)] = 9334,
  [SMALL_STATE(321)] = 9348,
  [SMALL_STATE(322)] = 9362,
  [SMALL_STATE(323)] = 9376,
  [SMALL_STATE(324)] = 9390,
  [SMALL_STATE(325)] = 9404,
  [SMALL_STATE(326)] = 9418,
  [SMALL_STATE(327)] = 9432,
  [SMALL_STATE(328)] = 9446,
  [SMALL_STATE(329)] = 9460,
  [SMALL_STATE(330)] = 9474,
  [SMALL_STATE(331)] = 9488,
  [SMALL_STATE(332)] = 9502,
  [SMALL_STATE(333)] = 9516,
  [SMALL_STATE(334)] = 9530,
  [SMALL_STATE(335)] = 9544,
  [SMALL_STATE(336)] = 9558,
  [SMALL_STATE(337)] = 9567,
  [SMALL_STATE(338)] = 9580,
  [SMALL_STATE(339)] = 9591,
  [SMALL_STATE(340)] = 9604,
  [SMALL_STATE(341)] = 9615,
  [SMALL_STATE(342)] = 9626,
  [SMALL_STATE(343)] = 9639,
  [SMALL_STATE(344)] = 9652,
  [SMALL_STATE(345)] = 9663,
  [SMALL_STATE(346)] = 9672,
  [SMALL_STATE(347)] = 9685,
  [SMALL_STATE(348)] = 9698,
  [SMALL_STATE(349)] = 9711,
  [SMALL_STATE(350)] = 9724,
  [SMALL_STATE(351)] = 9737,
  [SMALL_STATE(352)] = 9748,
  [SMALL_STATE(353)] = 9759,
  [SMALL_STATE(354)] = 9772,
  [SMALL_STATE(355)] = 9781,
  [SMALL_STATE(356)] = 9792,
  [SMALL_STATE(357)] = 9801,
  [SMALL_STATE(358)] = 9814,
  [SMALL_STATE(359)] = 9827,
  [SMALL_STATE(360)] = 9840,
  [SMALL_STATE(361)] = 9849,
  [SMALL_STATE(362)] = 9860,
  [SMALL_STATE(363)] = 9871,
  [SMALL_STATE(364)] = 9884,
  [SMALL_STATE(365)] = 9895,
  [SMALL_STATE(366)] = 9908,
  [SMALL_STATE(367)] = 9917,
  [SMALL_STATE(368)] = 9928,
  [SMALL_STATE(369)] = 9939,
  [SMALL_STATE(370)] = 9952,
  [SMALL_STATE(371)] = 9963,
  [SMALL_STATE(372)] = 9976,
  [SMALL_STATE(373)] = 9985,
  [SMALL_STATE(374)] = 9996,
  [SMALL_STATE(375)] = 10007,
  [SMALL_STATE(376)] = 10018,
  [SMALL_STATE(377)] = 10031,
  [SMALL_STATE(378)] = 10044,
  [SMALL_STATE(379)] = 10055,
  [SMALL_STATE(380)] = 10068,
  [SMALL_STATE(381)] = 10079,
  [SMALL_STATE(382)] = 10092,
  [SMALL_STATE(383)] = 10105,
  [SMALL_STATE(384)] = 10116,
  [SMALL_STATE(385)] = 10129,
  [SMALL_STATE(386)] = 10140,
  [SMALL_STATE(387)] = 10151,
  [SMALL_STATE(388)] = 10164,
  [SMALL_STATE(389)] = 10177,
  [SMALL_STATE(390)] = 10190,
  [SMALL_STATE(391)] = 10201,
  [SMALL_STATE(392)] = 10212,
  [SMALL_STATE(393)] = 10225,
  [SMALL_STATE(394)] = 10238,
  [SMALL_STATE(395)] = 10247,
  [SMALL_STATE(396)] = 10258,
  [SMALL_STATE(397)] = 10269,
  [SMALL_STATE(398)] = 10282,
  [SMALL_STATE(399)] = 10295,
  [SMALL_STATE(400)] = 10308,
  [SMALL_STATE(401)] = 10321,
  [SMALL_STATE(402)] = 10332,
  [SMALL_STATE(403)] = 10345,
  [SMALL_STATE(404)] = 10354,
  [SMALL_STATE(405)] = 10367,
  [SMALL_STATE(406)] = 10378,
  [SMALL_STATE(407)] = 10389,
  [SMALL_STATE(408)] = 10400,
  [SMALL_STATE(409)] = 10413,
  [SMALL_STATE(410)] = 10422,
  [SMALL_STATE(411)] = 10433,
  [SMALL_STATE(412)] = 10442,
  [SMALL_STATE(413)] = 10451,
  [SMALL_STATE(414)] = 10464,
  [SMALL_STATE(415)] = 10475,
  [SMALL_STATE(416)] = 10488,
  [SMALL_STATE(417)] = 10497,
  [SMALL_STATE(418)] = 10506,
  [SMALL_STATE(419)] = 10519,
  [SMALL_STATE(420)] = 10532,
  [SMALL_STATE(421)] = 10545,
  [SMALL_STATE(422)] = 10556,
  [SMALL_STATE(423)] = 10569,
  [SMALL_STATE(424)] = 10580,
  [SMALL_STATE(425)] = 10593,
  [SMALL_STATE(426)] = 10606,
  [SMALL_STATE(427)] = 10615,
  [SMALL_STATE(428)] = 10626,
  [SMALL_STATE(429)] = 10639,
  [SMALL_STATE(430)] = 10652,
  [SMALL_STATE(431)] = 10663,
  [SMALL_STATE(432)] = 10676,
  [SMALL_STATE(433)] = 10689,
  [SMALL_STATE(434)] = 10702,
  [SMALL_STATE(435)] = 10711,
  [SMALL_STATE(436)] = 10724,
  [SMALL_STATE(437)] = 10737,
  [SMALL_STATE(438)] = 10748,
  [SMALL_STATE(439)] = 10761,
  [SMALL_STATE(440)] = 10772,
  [SMALL_STATE(441)] = 10785,
  [SMALL_STATE(442)] = 10796,
  [SMALL_STATE(443)] = 10807,
  [SMALL_STATE(444)] = 10818,
  [SMALL_STATE(445)] = 10831,
  [SMALL_STATE(446)] = 10844,
  [SMALL_STATE(447)] = 10853,
  [SMALL_STATE(448)] = 10864,
  [SMALL_STATE(449)] = 10877,
  [SMALL_STATE(450)] = 10890,
  [SMALL_STATE(451)] = 10903,
  [SMALL_STATE(452)] = 10914,
  [SMALL_STATE(453)] = 10925,
  [SMALL_STATE(454)] = 10938,
  [SMALL_STATE(455)] = 10951,
  [SMALL_STATE(456)] = 10962,
  [SMALL_STATE(457)] = 10975,
  [SMALL_STATE(458)] = 10988,
  [SMALL_STATE(459)] = 11001,
  [SMALL_STATE(460)] = 11014,
  [SMALL_STATE(461)] = 11025,
  [SMALL_STATE(462)] = 11038,
  [SMALL_STATE(463)] = 11051,
  [SMALL_STATE(464)] = 11062,
  [SMALL_STATE(465)] = 11073,
  [SMALL_STATE(466)] = 11086,
  [SMALL_STATE(467)] = 11099,
  [SMALL_STATE(468)] = 11112,
  [SMALL_STATE(469)] = 11125,
  [SMALL_STATE(470)] = 11138,
  [SMALL_STATE(471)] = 11147,
  [SMALL_STATE(472)] = 11160,
  [SMALL_STATE(473)] = 11173,
  [SMALL_STATE(474)] = 11186,
  [SMALL_STATE(475)] = 11195,
  [SMALL_STATE(476)] = 11208,
  [SMALL_STATE(477)] = 11221,
  [SMALL_STATE(478)] = 11234,
  [SMALL_STATE(479)] = 11245,
  [SMALL_STATE(480)] = 11258,
  [SMALL_STATE(481)] = 11269,
  [SMALL_STATE(482)] = 11280,
  [SMALL_STATE(483)] = 11291,
  [SMALL_STATE(484)] = 11302,
  [SMALL_STATE(485)] = 11313,
  [SMALL_STATE(486)] = 11324,
  [SMALL_STATE(487)] = 11335,
  [SMALL_STATE(488)] = 11346,
  [SMALL_STATE(489)] = 11357,
  [SMALL_STATE(490)] = 11370,
  [SMALL_STATE(491)] = 11381,
  [SMALL_STATE(492)] = 11392,
  [SMALL_STATE(493)] = 11405,
  [SMALL_STATE(494)] = 11416,
  [SMALL_STATE(495)] = 11429,
  [SMALL_STATE(496)] = 11440,
  [SMALL_STATE(497)] = 11453,
  [SMALL_STATE(498)] = 11464,
  [SMALL_STATE(499)] = 11475,
  [SMALL_STATE(500)] = 11488,
  [SMALL_STATE(501)] = 11499,
  [SMALL_STATE(502)] = 11510,
  [SMALL_STATE(503)] = 11520,
  [SMALL_STATE(504)] = 11528,
  [SMALL_STATE(505)] = 11538,
  [SMALL_STATE(506)] = 11548,
  [SMALL_STATE(507)] = 11558,
  [SMALL_STATE(508)] = 11566,
  [SMALL_STATE(509)] = 11576,
  [SMALL_STATE(510)] = 11584,
  [SMALL_STATE(511)] = 11594,
  [SMALL_STATE(512)] = 11604,
  [SMALL_STATE(513)] = 11612,
  [SMALL_STATE(514)] = 11620,
  [SMALL_STATE(515)] = 11630,
  [SMALL_STATE(516)] = 11640,
  [SMALL_STATE(517)] = 11650,
  [SMALL_STATE(518)] = 11658,
  [SMALL_STATE(519)] = 11666,
  [SMALL_STATE(520)] = 11674,
  [SMALL_STATE(521)] = 11684,
  [SMALL_STATE(522)] = 11694,
  [SMALL_STATE(523)] = 11702,
  [SMALL_STATE(524)] = 11710,
  [SMALL_STATE(525)] = 11718,
  [SMALL_STATE(526)] = 11726,
  [SMALL_STATE(527)] = 11734,
  [SMALL_STATE(528)] = 11742,
  [SMALL_STATE(529)] = 11750,
  [SMALL_STATE(530)] = 11758,
  [SMALL_STATE(531)] = 11766,
  [SMALL_STATE(532)] = 11774,
  [SMALL_STATE(533)] = 11782,
  [SMALL_STATE(534)] = 11792,
  [SMALL_STATE(535)] = 11800,
  [SMALL_STATE(536)] = 11810,
  [SMALL_STATE(537)] = 11818,
  [SMALL_STATE(538)] = 11828,
  [SMALL_STATE(539)] = 11836,
  [SMALL_STATE(540)] = 11844,
  [SMALL_STATE(541)] = 11852,
  [SMALL_STATE(542)] = 11860,
  [SMALL_STATE(543)] = 11868,
  [SMALL_STATE(544)] = 11876,
  [SMALL_STATE(545)] = 11886,
  [SMALL_STATE(546)] = 11896,
  [SMALL_STATE(547)] = 11904,
  [SMALL_STATE(548)] = 11912,
  [SMALL_STATE(549)] = 11920,
  [SMALL_STATE(550)] = 11928,
  [SMALL_STATE(551)] = 11936,
  [SMALL_STATE(552)] = 11944,
  [SMALL_STATE(553)] = 11952,
  [SMALL_STATE(554)] = 11959,
  [SMALL_STATE(555)] = 11966,
  [SMALL_STATE(556)] = 11973,
  [SMALL_STATE(557)] = 11980,
  [SMALL_STATE(558)] = 11987,
  [SMALL_STATE(559)] = 11994,
  [SMALL_STATE(560)] = 12001,
  [SMALL_STATE(561)] = 12008,
  [SMALL_STATE(562)] = 12015,
  [SMALL_STATE(563)] = 12022,
  [SMALL_STATE(564)] = 12029,
  [SMALL_STATE(565)] = 12036,
  [SMALL_STATE(566)] = 12043,
  [SMALL_STATE(567)] = 12050,
  [SMALL_STATE(568)] = 12057,
  [SMALL_STATE(569)] = 12064,
  [SMALL_STATE(570)] = 12071,
  [SMALL_STATE(571)] = 12078,
  [SMALL_STATE(572)] = 12085,
  [SMALL_STATE(573)] = 12092,
  [SMALL_STATE(574)] = 12099,
  [SMALL_STATE(575)] = 12106,
  [SMALL_STATE(576)] = 12113,
  [SMALL_STATE(577)] = 12120,
  [SMALL_STATE(578)] = 12127,
  [SMALL_STATE(579)] = 12134,
  [SMALL_STATE(580)] = 12141,
  [SMALL_STATE(581)] = 12148,
  [SMALL_STATE(582)] = 12155,
  [SMALL_STATE(583)] = 12162,
  [SMALL_STATE(584)] = 12169,
  [SMALL_STATE(585)] = 12176,
  [SMALL_STATE(586)] = 12183,
  [SMALL_STATE(587)] = 12190,
  [SMALL_STATE(588)] = 12197,
  [SMALL_STATE(589)] = 12204,
  [SMALL_STATE(590)] = 12211,
  [SMALL_STATE(591)] = 12218,
  [SMALL_STATE(592)] = 12225,
  [SMALL_STATE(593)] = 12232,
  [SMALL_STATE(594)] = 12239,
  [SMALL_STATE(595)] = 12246,
  [SMALL_STATE(596)] = 12253,
  [SMALL_STATE(597)] = 12260,
  [SMALL_STATE(598)] = 12267,
  [SMALL_STATE(599)] = 12274,
  [SMALL_STATE(600)] = 12281,
  [SMALL_STATE(601)] = 12288,
  [SMALL_STATE(602)] = 12295,
  [SMALL_STATE(603)] = 12302,
  [SMALL_STATE(604)] = 12309,
  [SMALL_STATE(605)] = 12316,
  [SMALL_STATE(606)] = 12323,
  [SMALL_STATE(607)] = 12330,
  [SMALL_STATE(608)] = 12337,
  [SMALL_STATE(609)] = 12344,
  [SMALL_STATE(610)] = 12351,
  [SMALL_STATE(611)] = 12358,
  [SMALL_STATE(612)] = 12365,
  [SMALL_STATE(613)] = 12372,
  [SMALL_STATE(614)] = 12379,
  [SMALL_STATE(615)] = 12386,
  [SMALL_STATE(616)] = 12393,
  [SMALL_STATE(617)] = 12400,
  [SMALL_STATE(618)] = 12407,
  [SMALL_STATE(619)] = 12414,
  [SMALL_STATE(620)] = 12421,
  [SMALL_STATE(621)] = 12428,
  [SMALL_STATE(622)] = 12435,
  [SMALL_STATE(623)] = 12442,
  [SMALL_STATE(624)] = 12449,
  [SMALL_STATE(625)] = 12456,
  [SMALL_STATE(626)] = 12463,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 6),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 7),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 6),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clip, 8),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clip, 8),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 7),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_cond, 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_cond, 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(73),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(73),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(59),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(237),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(169),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(210),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(50),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(357),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(486),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(55),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(169),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__chunk_val_repeat1, 2), SHIFT_REPEAT(98),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 7),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 8),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 8),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_lu_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lu_cond, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lu_cond, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_element, 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_element, 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_var_set, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_var_set, 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 6),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_lu, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_lu, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lu_val, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lu_val, 3),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(324),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tok, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tok, 1),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(144),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(144),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(292),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(380),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(383),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2), SHIFT_REPEAT(185),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 2), SHIFT_REPEAT(290),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 6),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_op, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_op, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_element, 7),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_element, 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pattern_element_repeat1, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 2), SHIFT_REPEAT(597),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 2), SHIFT_REPEAT(597),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(310),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 2), SHIFT_REPEAT(597),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_op, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_op, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(288),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(361),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 2), SHIFT_REPEAT(364),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_cond_repeat1, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 5),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_val, 3),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chunk_val, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lu_cond_repeat1, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_val, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chunk_val, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 6),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 6),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 7),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 7),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_cond_repeat1, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_cond, 8),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_cond, 8),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_rule_repeat1, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(114),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduce_rule_group_repeat1, 2), SHIFT_REPEAT(114),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_bool, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cond_base_bool, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_lu_repeat1, 2), SHIFT_REPEAT(331),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_default, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 6),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 9),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 2), SHIFT_REPEAT(349),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 2), SHIFT_REPEAT(352),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 8),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 7),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 8),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat3, 2), SHIFT_REPEAT(333),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat3, 2),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2), SHIFT_REPEAT(305),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_rule, 5),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule_group, 5),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduce_rule_group_repeat2, 2), SHIFT_REPEAT(132),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 2), SHIFT_REPEAT(321),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retag_rule, 7),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_rule, 6),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 10),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 7),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 8),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 6),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_rule_repeat1, 4),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_retag_rule_repeat1, 4),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 19),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 18),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 9),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 17),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 16),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 15),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 14),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 7),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 13),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 5),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 12),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduce_rule_repeat2, 5),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_var_set_repeat1, 4),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 11),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_rule, 4),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tok, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_tok, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
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
