const XFST = require("tree-sitter-xfst/grammar");

const STRING_REGEX = /([^\s<>;%:!"]|%.)+/;

module.exports = grammar(XFST, {
  name: 'lexc',

  extras: $ => [
    $.comment,
    /[\s\n]/,
    $.end_comment
  ],

  conflicts: $ => [
    [$.lexicon_line],
    [$.regex, $.expression]
  ],

  rules: {
    source_file: $ => seq(
      optional($.multichar_symbols),
      repeat1($.lexicon)
    ),

    multichar_symbols_header: $ => "Multichar_Symbols",
    alphabet_symbol: $ => STRING_REGEX,
    multichar_symbols: $ => seq(
      $.multichar_symbols_header,
      repeat1($.alphabet_symbol)
    ),

    lexicon_start: $ => prec(2, "LEXICON"),
    lexicon_start_wrong_case: $ => "Lexicon",
    lexicon: $ => seq(
      choice($.lexicon_start, $.lexicon_start_wrong_case),
      token.immediate(/\s+/),
      alias(STRING_REGEX, $.lexicon_name),
      repeat1($.lexicon_line)
    ),

    lexicon_line: $ => seq(
      optional(prec.dynamic(10, choice(
        field('whole', $.lexicon_string),
        seq(
          field('left', optional($.lexicon_string)),
          $.colon,
          field('right', optional($.lexicon_string))
        ),
        field('whole', $.regex)
      ))),
      field('continuation', $.lexicon_name),
      field('gloss', optional($.gloss)),
      $.semicolon
    ),

    lexicon_name: $ => STRING_REGEX,
    lexicon_string: $ => STRING_REGEX,

    gloss: $ => /"([^\"]+)"/,

    regex: $ => prec.dynamic(10, seq(
      "<",
      repeat1($.expression),
      ">"
    )),

    // override xfst comments, since they allow #
    comment: $ => /![^\n]*/,

    end_comment: $ => seq(
      "END",
      /.*/
    )
  }
});
