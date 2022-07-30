// special chars: \s%:[]~\\$*+^./|&-=?()"_!
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
      repeat(choice($.sets, $.definitions, $.diacritics, $.rule_variables)),
      $.rules
    ),

    semicolon: $ => ";",

    alphabet_header: $ => "Alphabet",
    alphabet: $ => seq(
      $.alphabet_header,
      repeat1(choice($.symbol, $.symbol_pair)),
      $.semicolon
    ),

    diacritics_header: $ => "Diacritics",
    diacritics: $ => seq(
      $.diacritics_header,
      repeat1($.symbol),
      $.semicolon
    ),

    rule_variables_header: $ => "Rule-variables",
    rule_variables: $ => seq(
      $.rule_variables_header,
      repeat1($.symbol),
      $.semicolon
    ),

    sets_header: $ => "Sets",
    sets: $ => seq(
      $.sets_header,
      repeat1($.set)
    ),

    eq: $ => "=",
    set: $ => seq(
      field('name', $.symbol),
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
      field('name', $.symbol),
      $.eq,
      field('pattern', $.pattern),
      repeat1($.semicolon)
    ),

    rules_header: $ => "Rules",
    rules: $ => seq(
      $.rules_header,
      repeat1($.rule)
    ),

    arrow: $ => choice("=>", "<=", "<=>", "/<="),
    regex_arrow: $ => choice("==>", "<==", "<==>", "/<=="),
    rule: $ => seq(
      field('name', $.rule_name),
      choice(
        seq(
          field('target', choice($.symbol, $.symbol_pair)),
          field('arrow', $.arrow),
        ),
        seq(
          field('target', $.regex_target),
          field('arrow', $.regex_arrow)
        )
      ),
      field('contexts', $.positive_contexts),
      field('neg_contexts', optional($.negative_contexts)),
      field('variables', optional($.variables))
    ),

    regex_target: $ => seq(
      "<[",
      $.pattern,
      "]>"
    ),

    positive_contexts: $ => repeat1($.context),
    negative_contexts: $ => seq(
      $.except,
      repeat1($.context)
    ),

    rule_name: $ => /"[^\"\n]+"/,

    locus: $ => "_",
    context: $ => seq(
      field('left', optional($.pattern)),
      field('locus', $.locus),
      field('right', optional($.pattern)),
      repeat1($.semicolon)
    ),

    except: $ => "except",
    where: $ => "where",
    variable_keyword: $ => choice("mixed", "matched"),
    in_keyword: $ => "in",

    variables: $ => seq(
      $.where,
      repeat1(seq(
        field('name', $.symbol),
        $.in_keyword,
        field('set', choice(
          $.symbol,
          seq(
            $.loptional,
            $.pattern,
            $.roptional
          )
        ))
      )),
      field('type', optional($.variable_keyword)),
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
        field('left', $.symbol),
        alias(token.immediate(":"), $.colon),
        field('right', optional(alias($._imm_sym, $.symbol)))
      ),
      seq(
        $.colon,
        field('right', optional(alias($._imm_sym, $.symbol)))
      )
    ),

    comment: $ => /![^\n]*/
  }
})
