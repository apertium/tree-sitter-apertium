const XFST = require("tree-sitter-xfst/grammar");

const STRING_REGEX = /([^\s<>;%:!]|%.)+/;

module.exports = grammar(XFST, {
  name: 'lexc',

  extras: $ => [
    $.comment,
    /[\s\n]/,
    $.end_comment
  ],

  rules: {
    source_file: $ => seq(
      optional($.multichar_symbols),
      repeat1($.lexicon)
    ),

    multichar_symbols_header: $ => "Multichar_Symbols",
    symbol: $ => STRING_REGEX,
    multichar_symbols: $ => seq(
      $.multichar_symbols_header,
      repeat1($.symbol)
    ),

    lexicon_start: $ => prec(2, "LEXICON"),
    lexicon_start_wrong_case: $ => "Lexicon",
    lexicon: $ => seq(
      choice($.lexicon_start, $.lexicon_start_wrong_case),
      token.immediate(/\s+/),
      alias(STRING_REGEX, $.lexicon_name),
      repeat1(choice($.empty_lexicon_line, $.lexicon_line))
    ),

    lexicon_line: $ => seq(
      choice(
        $.lexicon_string,
        $.lexicon_pair,
        $.regex
      ),
      $.lexicon_name,
      $.semicolon
    ),
    empty_lexicon_line: $ => seq(
      $.lexicon_name,
      $.semicolon
    ),

    _string: $ => STRING_REGEX,
    lexicon_name: $ => $._string,
    lexicon_string: $ => $._string,

    lexicon_pair: $ => choice(
      $.colon,
      seq(
        $.lexicon_string,
        alias(token.immediate(":"), $.colon)
      ),
      seq(
        $.colon,
        alias(token.immediate(STRING_REGEX), $.lexicon_string)
      ),
      prec(20, seq(
        $.lexicon_string,
        alias(token.immediate(":"), $.colon),
        alias(token.immediate(STRING_REGEX), $.lexicon_string)
      ))
    ),

    regex: $ => seq(
      "<",
      $.expression,
      ">"
    ),

    end_comment: $ => seq(
      "END",
      /.*/
    )
  }
});
