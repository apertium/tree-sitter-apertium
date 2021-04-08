const XFST = require("tree-sitter-xfst/grammar");

const NAME_REGEX = /[^\s;<>:]+/;
const STRING_REGEX = /([^\s<>;%:]|%.)+/;

module.exports = grammar(XFST, {
  name: 'lexc',

  extras: $ => [
    $.comment,
    /[\s\n]/,
    $.end_comment
  ],

  rules: {
    source_file: $ => seq(
      $.multichar_symbols,
      repeat1($.lexicon)
    ),

    multichar_symbols: $ => seq(
      "MULTICHAR_SYMBOLS",
      ";"
    ),

    lexicon_start: $ => "LEXICON",
    lexicon_start_wrong_case: $ => "Lexicon",
    lexicon: $ => seq(
      choice($.lexicon_start, $.lexicon_start_wrong_case),
      token.immediate(/\s+/),
      alias(NAME_REGEX, $.lexicon_name),
      repeat1($.lexicon_line)
    ),

    lexicon_line: $ => seq(
      optional(choice(
        $.lexicon_string,
        $.lexicon_pair,
        $.regex
      )),
      $.lexicon_name,
      $.semicolon
    ),

    lexicon_name: $ => NAME_REGEX,

    lexicon_string: $ => STRING_REGEX,

    lexicon_pair: $ => choice(
      $.colon,
      seq(
        $.lexicon_string,
        token.immediate(":")
      ),
      seq(
        $.colon,
        token.immediate(alias(STRING_REGEX, $.lexicon_string))
      ),
      seq(
        $.lexicon_string,
        token.immediate(":"),
        token.immediate(alias(STRING_REGEX, $.lexicon_string))
      )
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
