// special chars: \s%:\[\]~\\$*+^\./|&-=?()"_
SYMBOL_REGEX = /(%.|[^\s%:\[\]~\\$*+^/|&-=?()"_!]|[0-9'\.,])+/;

module.exports = grammar({
  name: "twolc",

  extras: $ => [
	  $.comment,
	  /[\s\n]/
  ],

  rules: {
	  source_file: $ => seq(
	    $.alphabet,
	    optional($.sets),
	    optional($.definitions),
	    $.rules
	  ),

	  semicolon: $ => ";",

	  alphabet_header: $ => "Alphabet",
	  alphabet: $ => seq(
	    $.alphabet_header,
	    repeat1(choice($.symbol, $.symbol_pair)),
	    $.semicolon
	  ),

	  sets_header: $ => "Sets",
	  sets: $ => seq(
	    $.sets_header,
	    repeat1($.set)
	  ),

	  eq: $ => "=",
	  set: $ => seq(
	    $.symbol,
	    $.eq,
	    repeat1(choice($.symbol, $.symbol_pair)),
	    repeat1($.semicolon)
	  ),

	  definitions_header: $ => "Definitions",
	  definitions: $ => seq(
	    $.definitions_header,
	    repeat1($.definition)
	  ),

	  definition: $ => seq(
	    $.symbol,
	    $.eq,
	    $.pattern,
	    repeat1($.semicolon)
	  ),

	  rules_header: $ => "Rules",
	  rules: $ => seq(
	    $.rules_header,
	    repeat1($.rule)
	  ),

	  arrow: $ => choice("=>", "<=", "<=>", "/<="),
	  rule: $ => seq(
	    $.rule_name,
	    choice($.symbol, $.symbol_pair),
	    $.arrow,
	    repeat1($.context),
	    optional($.variables)
	  ),

	  rule_name: $ => /"[^\"\n]+"/,

	  locus: $ => "_",
	  context: $ => seq(
	    optional($.except),
	    optional($.pattern),
	    $.locus,
	    optional($.pattern),
	    repeat1($.semicolon)
	  ),

	  except: $ => "except",
	  where: $ => "where",
	  variable_keyword: $ => choice("mixed", "matched"),
	  in_keyword: $ => "in",

	  variables: $ => seq(
	    $.where,
	    repeat1(seq(
		    $.symbol,
		    $.in_keyword,
		    choice(
		      $.symbol,
		      seq(
			      $.loptional,
			      $.pattern,
			      $.roptional
		      )
		    )
	    )),
	    optional($.variable_keyword),
	    $.semicolon
	  ),

	  lpar: $ => "[",
	  rpar: $ => "]",
	  loptional: $ => "(",
	  roptional: $ => ")",
	  prefix_op: $ => /[~\\$]/,
	  suffix_op: $ => /([*+^]|\.[ruli]|\^\d+(,\d+)?)/,
	  ignore_op: $ => "/",
	  bool_op: $ => /[|&-]/,
	  replace_op: $ => /->|=>/,
	  compose_op: $ => /\.[xo]\./,
	  word_boundary: $ => ".#.",
	  any: $ => "?",

	  pattern: $ => choice(
	    $.symbol,
	    $.symbol_pair,
	    $.word_boundary,
	    $.any,
	    prec(8, seq($.lpar, $.pattern, $.rpar)),
	    prec(8, seq($.loptional, $.pattern, $.roptional)),
	    prec(7, seq($.prefix_op, $.pattern)),
	    prec(6, seq($.pattern, $.suffix_op)),
	    prec.left(5, seq($.pattern, $.ignore_op, $.pattern)),
	    prec.left(4, seq($.pattern, $.pattern)),
	    prec.left(3, seq($.pattern, $.bool_op, $.pattern)),
	    prec.left(2, seq($.pattern, $.replace_op, $.pattern)),
	    prec.left(1, seq($.pattern, $.compose_op, $.pattern))
	  ),

	  symbol: $ => SYMBOL_REGEX,
    _imm_sym: $ => token.immediate(SYMBOL_REGEX),
    colon: $ => ":",
	  symbol_pair: $ => choice(
	    seq(
        $.symbol,
        alias(token.immediate(":"), $.colon),
        optional(alias($._imm_sym, $.symbol))
	    ),
	    seq(
		    $.colon,
        optional(alias($._imm_sym, $.symbol))
	    )
	  ),

	  comment: $ => /![^\n]*/
  }
})
