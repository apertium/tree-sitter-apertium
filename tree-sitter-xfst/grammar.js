// this covers everything in the FSM book
// it does not yet cover everything listed at
// https://github.com/hfst/hfst/wiki/Regular-Expression-Operators

module.exports = grammar({
  name: "xfst",

  extras: $ => [
    $.comment,
    /[\s\n]/
  ],

  rules: {
    source_file: $ => repeat1(seq(
      $.expression,
      optional($.semicolon)
    )),

    semicolon: $ => ";",

    expression: $ => choice(
      $.symbol,
      $.string,
      $.any,
      $.zero,
      $.boundary,
      $.symbol_group,

      prec(9, seq("[", optional($.expression), "]")),
      $.optional,
      $.substitute,

      prec.left(8, seq($.expression, $.colon, $.expression)),

      prec(7, seq(
        choice($.complement, $.term_complement, $.contains),
        $.expression
      )),

      prec(6, seq(
        $.expression,
        choice(
          $.plus, $.star, $.repeat,
          $.upper, $.lower, $.reverse, $.inverse
        )
      )),

      prec.left(5, seq(
        $.expression,
        choice($.ignore, $.ignore_inside),
        $.expression
      )),

      // for some reason this will group pairs
      // even if we make it repeat1($.expression)
      prec.left(4, seq($.expression, $.expression)),

      prec.left(3, seq(
        $.expression,
        choice($.union, $.intersect, $.subtract),
        $.expression
      )),

      $.restrict,
      $.simple_replace,
      $.single_replace,
      $.mark,
      $.parallel_replace,
      $.conditional_replace,
      $.parallel_conditional_replace,

      prec.left(1, seq(
        $.expression,
        choice($.crossproduct, $.compose),
        $.expression
      ))
    ),

    // atomic symbols
    // \x60 because ` really screws up highlighting and indentation
    symbol: $ => /([^\s%:~\\$+*^\./|&\-=<>0?\"#\[\](){}\x60,]|%.)+/,
    string: $ => /"[^\"]+"/,
    any: $ => "?",
    zero: $ => "0",
    boundary: $ => ".#.",
    symbol_group: $ => /\{[^\}]+\}/,

    // brackets, precedence 9
    optional: $ => prec(9, seq("(", repeat($.expression), ")")),
    substitute: $ => prec(9, seq(
      "`",
      "[",
      $.expression,
      ",",
      $.symbol,
      ",",
      repeat($.symbol),
      "]"
    )),

    // colon cross product, precedence 8
    colon: $ => ":",

    // prefix operators, precedence 7
    complement: $ => "~",
    term_complement: $ => "\\",
    contains: $ => "$",

    // suffix operators, precedence 6
    plus: $ => "+",
    star: $ => "*",
    repeat: $ => /\^([<>]?\d+|\{\d+,\d+\}|\d+,\d+)/,
    upper: $ => ".u",
    lower: $ => ".l",
    reverse: $ => ".r",
    inverse: $ => ".i",

    // ignore, precedence 5
    ignore: $ => "/",
    ignore_inside: $ => "./.",

    // whitespace concatenation is precedence 4

    // boolean operators, precedence 3
    union: $ => "|",
    intersect: $ => "&",
    subtract: $ => "-",

    // replacement and restrictions, precedence 2
    context: $ => prec.left(2, seq(
      optional($.expression),
      "_",
      optional($.expression)
    )),

    context_list: $ => prec.left(2, seq(
      $.context,
      repeat(seq(",", $.context))
    )),

    restrict: $ => prec.left(2, seq(
      $.expression,
      "=>",
      $.context_list
    )),

    arrow: $ => choice(
      "->",
      "<-",
      "(->)",
      "(<-)",
      "@->",
      "->@",
      "@>",
      ">@"
    ),

    simple_replace: $ => prec.left(2, seq(
      $.expression,
      $.arrow,
      $.expression
    )),

    single_replace: $ => prec.left(2, seq(
      "[.",
      $.expression,
      ".]",
      $.arrow,
      $.expression
    )),

    mark: $ => prec.left(2, seq(
      $.expression,
      $.arrow,
      optional($.expression),
      "...",
      optional($.expression)
    )),

    parallel_replace: $ => prec.left(2, seq(
      choice($.simple_replace, $.single_replace),
      repeat1(prec(11, seq(",", choice($.simple_replace, $.single_replace))))
    )),

    condition_operators: $ => choice(
      "||",
      "//",
      "\\\\",
      "\\/"
    ),
    conditional_replace: $ => prec.left(2, seq(
      choice($.simple_replace, $.single_replace, $.parallel_replace),
      $.condition_operators,
      $.context_list
    )),
    parallel_conditional_replace: $ => prec.left(2, seq(
      $.conditional_replace,
      repeat1(prec(10, seq(",,", $.conditional_replace)))
    )),

    // crossproduct and composition, precedence 1
    crossproduct: $ => ".x.",
    compose: $ => ".o.",

    // comments
    // documentation only mentions !
    // but hfst-regexp2fst accepts #, so we shall too
    comment: $ => /[!#][^\n]*/
  }
});
