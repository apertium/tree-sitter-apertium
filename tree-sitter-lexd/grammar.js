module.exports = grammar({
    name: "lexd",
    
    extras: $ => [
        $.comment,
        /\s/
    ],

    rules: {
        source_file: $ => repeat(
            choice($.pattern_block,
                   $.lexicon_block,
                   $.alias_command)
        ),
        
        pattern_block: $ => prec(2, seq(
            choice(
                $.pattern_start,
                seq($.named_pattern_start,
                    $.identifier)
            ),
            repeat(choice($.pattern_line, $._empty_line))
        )),

        pattern_start: $ => "PATTERNS",
        named_pattern_start: $ => "PATTERN",
        lexicon_start: $ => "LEXICON",
        alias: $ => "ALIAS",
        left_sieve: $ => "<",
        right_sieve: $ => ">",
        colon: $ => ":",
        
        pattern_line: $ => seq(
            repeat1($.pattern_token),
            "\n"
        ),
        
        pattern_token: $ => choice(
            $.left_sieve,
            $.right_sieve,
            seq($.identifier,
                optional($.number)
               ),
            $.anonymous_lexicon,
            seq(
                "(",
                repeat($.pattern_token),
                ")"
            )
        ),
        
        anonymous_lexicon: $ => seq(
            "[",
            $.lexicon_segment,
            "]"
        ),
        
        lexicon_block: $ => prec(2, seq(
            $.lexicon_start,
            $.identifier,
            optional($.number),
            "\n",
            repeat(choice($.lexicon_line, $._empty_line))
        )),
        
        lexicon_line: $ => seq(
            $.lexicon_segment,
            repeat(seq(
                /\s/,
                $.lexicon_segment
            )),
            "\n"
        ),

        _lexicon_side: $ => repeat1(
            choice($.lexicon_string, $.escaped_char)
        ),

        lexicon_segment: $ => choice(
            $._lexicon_side,
            seq(
                optional($._lexicon_side),
                $.colon,
                optional($._lexicon_side)
            )
        ),

        lexicon_string: $ => /[^\s\n\\#:\[\]]+/,

        escaped_char: $ => /\\./,

        comment: $ => seq("#", /.*/),

        alias_command: $ => seq(
            alias($.alias, "ALIAS"),
            $.identifier,
            $.identifier,
            "\n"
        ),

        identifier: $ => /[^\s?|()<>\[\]*+]+/,

        number: $ => /\(\d+\)/,

        _empty_line: $ => "\n"
    }
});
