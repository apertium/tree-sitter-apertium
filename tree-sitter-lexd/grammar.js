module.exports = grammar({
  name: "lexd",

  extras: $ => [
    $.comment,
  ],

  rules: {
    source_file: $ => seq(
      optional($._nl),
      repeat(choice(
        $.pattern_block,
        $.lexicon_block,
        $.alias_command,
      ))
    ),

    pattern_block: $ => seq(
      choice(
        $.pattern_start,
        seq($.named_pattern_start,
            $._ws,
            $.identifier)
      ),
      $._nl,
      repeat1($.pattern_line)
    ),

    pattern_start: $ => token(prec(1, "PATTERNS")),
    named_pattern_start: $ => token(prec(1, "PATTERN")),
    lexicon_start: $ => token(prec(1, "LEXICON")),
    alias: $ => "ALIAS",
    left_sieve: $ => "<",
    right_sieve: $ => ">",
    pattern_or: $ => "|",
    colon: $ => ":",

    pattern_line: $ => seq(
      $.pattern_token,
      repeat(seq($._ws, $.pattern_token)),
      $._nl
    ),

    pattern_operator: $ => choice(
      "*",
      "+",
      "?"
    ),

    anonymous_pattern: $ => seq(
      "(",
      $.pattern_token,
      repeat(seq($._ws, $.pattern_token)),
      ")"
    ),

    lexicon_reference: $ => seq(
      $.identifier,
      optional($.number),
      optional($.tag_filter)
    ),

    _modifiable_pat_tok: $ => choice(
      $.lexicon_reference,
      prec(2, seq($.lexicon_reference, $.colon)),
      seq($.colon, $.lexicon_reference),
      seq($.lexicon_reference, $.colon, $.lexicon_reference),
      seq($.anonymous_lexicon, optional($.tag_filter)),
      seq($.anonymous_pattern, optional($.tag_filter))
    ),

    pattern_token: $ => choice(
      $.left_sieve,
      $.right_sieve,
      $.pattern_or,
      prec.left(2, seq(
        $._modifiable_pat_tok,
        optional($.pattern_operator)
      ))
    ),

    _tag_or_neg: $ => seq(
      optional("-"),
      $.tag
    ),

    _tag_list: $ => seq(
      $._tag_or_neg,
      optional($._ws),
      repeat(prec.left(2, seq(
        ",",
        optional($._ws),
        $._tag_or_neg,
        optional($._ws),
      ))),
    ),

    tag_setting: $ => seq(
      "[",
      optional($._ws),
      $._tag_list,
      "]"
    ),

    tag_distribution_operator: $ => choice(
      "^",
      "|"
    ),

    tag_distribution: $ => seq(
      $.tag_distribution_operator,
      "[",
      optional($._ws),
      $._tag_list,
      "]"
    ),

    _tag_filter_segment: $ => choice(
      $.tag_distribution,
      $._tag_or_neg
    ),

    tag_filter: $ => seq(
      "[",
      optional($._ws),
      $._tag_filter_segment,
      repeat(seq(
        optional($._ws),
        ",",
        optional($._ws),
        $._tag_filter_segment
      )),
      optional($._ws),
      "]"
    ),

    anonymous_lexicon: $ => seq(
      "[",
      optional($._ws),
      $.lexicon_segment,
      optional($._ws),
      "]"
    ),

    lexicon_block: $ => prec(2, seq(
      $.lexicon_start,
      $._ws,
      $.identifier,
      optional($.number),
      optional($.tag_setting),
      $._nl,
      repeat1($.lexicon_line)
    )),

    lexicon_line: $ => seq(
      $.lexicon_segment,
      repeat(seq(
        $._ws,
        $.lexicon_segment
      )),
      $._nl
    ),

    _lexicon_side: $ => repeat1(
      choice($.lexicon_string, $.escaped_char)
    ),

    lexicon_segment: $ => seq(
      choice(
        $._lexicon_side,
        seq(
          optional($._lexicon_side),
          $.colon,
          optional($._lexicon_side)
        )
      ),
      optional($.tag_setting)
    ),

    lexicon_string: $ => /[^\s\n\\#:\[\]]+/,

    escaped_char: $ => /\\./,

    comment: $ => seq("#", /.*/),

    alias_command: $ => seq(
      $.alias,
      $._ws,
      $.identifier,
      $._ws,
      $.identifier,
      $._nl
    ),

    identifier: $ => /[^\s?|()<>\[\]*+:]+/,
    tag: $ => /[^\s?|()<>\[\]*+,^-][^\s?|()<>\[\]*+,^]*/,

    number: $ => /\(\d+\)/,

    _nl: $ => seq(
      optional($._ws),
      "\n",
      repeat(choice($._ws, "\n"))
    ),
    _ws: $ => /[ \t]+/
  }
});
