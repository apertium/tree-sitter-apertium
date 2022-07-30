module.exports = grammar({
  name: "lexd",

  conflicts: $ => [
    [$.lexicon_reference],
    [$.pattern_token],
  ],

  rules: {
    source_file: $ => seq(
      optional($._real_nl),
      optional($.block_comment),
      repeat(choice(
        $.pattern_block,
        $.lexicon_block,
        $.alias_command,
      ))
    ),

    pattern_block: $ => seq(
      choice(
        $.pattern_start,
        seq(
          $.named_pattern_start,
          $._ws,
          field('name', $.identifier)
        )
      ),
      optional($._end_com),
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
    question_op: $ => "?",
    star_op: $ => "*",
    plus_op: $ => "+",

    pattern_line: $ => seq(
      optional($._ws),
      repeat1(seq(
        choice(
          $.pattern_token,
          $.pattern_option,
          $.left_sieve,
          $.right_sieve
        ),
        optional($._ws)
      )),
      field('comment', optional($.comment)),
      $._nl
    ),

    anonymous_pattern: $ => prec.dynamic(20, prec(20, seq(
      "(",
      optional($._ws),
      repeat1(seq(
        choice(
          $.pattern_token,
          $.pattern_option,
          $.left_sieve,
          $.right_sieve
        ),
        optional($._ws),
      )),
      choice(")", seq($._ws, ")")),
    ))),

    pattern_option: $ => prec.dynamic(30, prec.right(30, seq(
      $.pattern_token,
      optional($._ws),
      $.pattern_or,
      optional($._ws),
      choice($.pattern_token, alias($.pattern_option, 'flattened_operator')),
      optional($._ws)
    ))),

    pattern_operator: $ => prec.dynamic(3, choice(
      $.star_op,
      $.plus_op,
      $.question_op
    )),

    lexicon_reference: $ => seq(
      field('name', $.identifier),
      optional(seq(
        optional(prec.dynamic(2, field('disjoint', $.question_op))),
        field('column', $.number),
      )),
      field('filter', optional($.tag_filter))
    ),

    pattern_token: $ => seq(
      choice(
        field('whole', $.lexicon_reference),
        prec(2, seq(field('left', $.lexicon_reference), $.colon)),
        seq($.colon, field('right', $.lexicon_reference)),
        seq(
          field('left', $.lexicon_reference),
          $.colon,
          field('right', $.lexicon_reference),
        ),
        seq(
          field('whole', choice($.anonymous_lexicon, $.anonymous_pattern)),
          field('filter', optional($.tag_filter))
        )
      ),
      field('operator', optional($.pattern_operator))
    ),

    neg_tag: $ => seq(
      "-",
      field('tag', $.tag)
    ),

    _tag_or_neg: $ => choice(
      $.tag,
      $.neg_tag
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
      field('op', $.tag_distribution_operator),
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
      field('name', $.identifier),
      field('columns', optional($.number)),
      field('defaults', optional($.tag_setting)),
      optional($._end_com),
      $._nl,
      repeat1($.lexicon_line)
    )),

    lexicon_line: $ => seq(
      $.lexicon_segment,
      repeat(seq(
        $._ws,
        $.lexicon_segment
      )),
      optional($._end_com),
      $._nl
    ),

    regex_char_class: $ => seq(
      "[",
      repeat(choice($.lexicon_string, $.escaped_char)),
      "]"
    ),

    regex_string: $ => /[^\s\n\\#:\[\]\/()?*+]+/,

    _plain_regex_string: $ => repeat1(choice(
      $.regex_string,
      $.escaped_char,
      $.regex_char_class
    )),

    regex_line: $ => prec.right(choice(
      $._plain_regex_string,
      seq(
        optional($._plain_regex_string),
        $.colon,
        optional($._plain_regex_string)
      )
    )),

    regex_group: $ => seq(
      "(",
      repeat(choice(
        $.regex_group,
        $.regex_line,
        $.pattern_or
      )),
      ")",
      optional($.pattern_operator)
    ),

    regex: $ => seq(
      "/",
      repeat(choice(
        $.regex_line,
        $.regex_group,
        $.pattern_or
      )),
      "/",
    ),

    _lexicon_side_left: $ => seq(
      choice($.lexicon_string, $.escaped_char),
      optional($._lexicon_side_right)
    ),

    _lexicon_side_right: $ => repeat1(
      choice($.lexicon_string, $.escaped_char, "/")
    ),

    lexicon_segment: $ => seq(
      field('tags', optional($.tag_setting)),
      choice(
        field('whole', prec(2, $.regex)),
        field('whole', $._lexicon_side_left),
        seq(
          field('left', optional($._lexicon_side_left)),
          $.colon,
          field('right', optional($._lexicon_side_right))
        )
      ),
      field('tags', optional($.tag_setting))
    ),

    lexicon_string: $ => /[^\s\n\\#:\[\]\/]+/,

    escaped_char: $ => /\\./,

    comment: $ => /#[^\n]*/,
    _end_com: $ => seq(optional($._ws), field('comment', $.comment)),

    alias_command: $ => seq(
      $.alias,
      $._ws,
      field('src', $.identifier),
      $._ws,
      field('trg', $.identifier),
      optional($._end_com),
      $._nl
    ),

    identifier: $ => /[^\s?|()<>\[\]*+:]+/,
    tag: $ => /[^\s?|()<>\[\]*+,^-][^\s?|()<>\[\]*+,^]*/,

    number: $ => /\(\d+\)/,

    // really this should be \n or EOF
    // but there isn't a way to match EOF
    // (see https://github.com/tree-sitter/tree-sitter/issues/160 )
    // so we'll just put up with having issues
    // on files missing trailing newline
    _real_nl: $ => /[ \t]*\n[ \t\n]*/,
    block_comment: $ => repeat1(seq(
      $.comment,
      $._real_nl
    )),
    _nl: $ => seq(
      $._real_nl,
      optional($.block_comment)
    ),
    _ws: $ => /[ \t]+/
  }
});
