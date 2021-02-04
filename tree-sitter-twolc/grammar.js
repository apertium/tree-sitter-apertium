module.exports = grammar({
    name: "twolc",

    extras: $ => [
	$.comment,
	/[\s\n]/
    ],

    rules: {
	source_file: $ => seq(
	    $.alphabet,
	    $.sets,
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
	    $.semicolon
	),

	rules_header: $ => "Rules",
	rules: $ => seq(
	    $.rules_header,
	    repeat1($.rule)
	),

	arrow: $ => choice("=>", "<=", "<=>", "/<="),
	rule: $ => seq(
	    $.rule_name,
	    $.symbol_pair,
	    $.arrow,
	    repeat1($.context)
	),

	rule_name: $ => /"[^\"\n]+"/,

	locus: $ => "_",
	context: $ => seq(
	    optional($.pattern),
	    $.locus,
	    optional($.pattern),
	    $.semicolon
	),

	lpar: $ => "[",
	rpar: $ => "]",
	prefix_op: $ => /[~\\$]/,
	suffix_op: $ => /([*+^]|\.[ruli])/,
	ignore_op: $ => "/",
	bool_op: $ => /[|&-]/,
	replace_op: $ => /->|=>/,
	compose_op: $ => /\.[xo]\./,
	
	pattern: $ => choice(
	    $.symbol,
	    $.symbol_pair,
	    prec(8, seq($.lpar, $.pattern, $.rpar)),
	    prec(7, seq($.prefix_op, $.pattern)),
	    prec(6, seq($.pattern, $.suffix_op)),
	    prec.left(5, seq($.pattern, $.ignore_op, $.pattern)),
	    prec.left(4, seq($.pattern, $.pattern)),
	    prec.left(3, seq($.pattern, $.bool_op, $.pattern)),
	    prec.left(2, seq($.pattern, $.replace_op, $.pattern)),
	    prec.left(1, seq($.pattern, $.compose_op, $.pattern))
	),

	// special chars: \s%:\[\]~\\$*+^\./|&-=
	symbol: $ => /([^\s%:\[\]~\\$*+^\./|&-=]|%.)+/,
	symbol_pair: $ => /(([^\s%:\[\]~\\$*+^\./|&-=]|%.)*|0):(([^\s%:\[\]~\\$*+^\./|&-=]|%.)*|0)/,

	comment: $ => /![^\n]*/
    }
})
