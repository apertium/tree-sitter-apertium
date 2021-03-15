// closely based on https://github.com/TinoDidriksen/cg3/blob/master/cg3.g

function kwd(in_str) {
    var out_str = "";
    for (var i = 0; i < in_str.length; i++) {
        if ('-|()?'.includes(in_str[i])) {
            out_str += in_str[i];
        } else {
            out_str += '[' + in_str[i] + in_str[i].toLowerCase() + ']';
        }
    }
    return new RegExp(out_str);
}

module.exports = grammar({
    name: "cg",

    extras: $ => [
        $.comment,
        /[\s\n]/
    ],

    rules: {
        source_file: $ => seq(
            repeat1(choice(
                $.set_special_list,
                $.static_sets,
                $.parentheses,
                $.mapping_prefix,
                $.subreadings,
                $.list,
                $.set,
                $.template,
                $.include,
                $.section_header,
                $.rule,
                $.rule_substitute_etc,
                $.rule_map_etc,
                $.rule_parentchild,
                $.rule_move,
                $.rule_switch,
                $.rule_relation,
                $.rule_relations,
                $.rule_addcohort,
                $.rule_external
            ))
        ),

        END: $ => kwd("END"),

        eq: $ => "=",
        semicolon: $ => ";",

        special_list_name: $ => choice(
            kwd("DELIMITERS"),
            kwd("SOFT-DELIMITERS"),
            kwd("PREFERRED-TARGETS")
        ),

        set_special_list: $ => seq(
            $.special_list_name,
            $.eq,
            $.taglist,
            $.semicolon
        ),

        STATIC_SETS: $ => kwd("STATIC-SETS"),
        static_sets: $ => seq(
            $.STATIC_SETS,
            $.eq,
            repeat1($.setname),
            $.semicolon
        ),

        MAPPING_PREFIX: $ => kwd("MAPPING-PREFIX"),
        mapping_prefix: $ => seq(
            $.MAPPING_PREFIX,
            $.eq,
            $.prefix,
            $.semicolon
        ),

        SUBREADINGS: $ => kwd("SUBREADINGS"),
        RTL: $ => kwd("RTL"),
        LTR: $ => kwd("LTR"),
        subreadings: $ => seq(
            $.SUBREADINGS,
            $.eq,
            choice($.RTL, $.LTR),
            $.semicolon
        ),

        PARENTHESES: $ => kwd("PARENTHESES"),
        parentheses: $ => seq(
            $.PARENTHESES,
            $.eq,
            repeat1($.compotag),
            $.semicolon
        ),

        LIST: $ => kwd("LIST"),
        list: $ => seq(
            $.LIST,
            $.setname,
            $.eq,
            $.taglist,
            $.semicolon
        ),

        SET: $ => kwd("SET"),
        set: $ => seq(
            $.SET,
            $.setname,
            $.eq,
            $.inlineset,
            $.semicolon
        ),

        INCLUDE: $ => kwd("INCLUDE"),
        include: $ => seq(
            $.INCLUDE,
            $.rawpath,
            $.semicolon
        ),

        section_header: $ => choice(
            kwd("SETS"),
            kwd("BEFORE-SECTIONS"),
            kwd("MAPPINGS"),
            kwd("CORRECTIONS"),
            kwd("SECTION"),
            kwd("CONSTRAINTS"),
            kwd("AFTER-SECTIONS"),
            kwd("NULL-SECTION")
        ),

        _context: $ => repeat1(seq(
            "(",
            $.contexttest,
            ")"
        )),

        IF: $ => kwd("IF"),
        _if_context: $ => seq(
            optional($.IF),
            $._context
        ),

        TARGET: $ => kwd("TARGET"),
        _rule_target: $ => seq(
            optional($.TARGET),
            $.inlineset
        ),

        _shared_rule_end: $ => seq(
            $._rule_target,
            optional($._if_context),
            $.semicolon
        ),

        _rule_tag: $ => seq(
            ":",
            $.ntag
        ),

        rule: $ => seq(
            optional($.qtag),
            $.ruletype,
            optional($._rule_tag),
            optional($.ruleflag),
			optional($.subreading),
            $._shared_rule_end
        ),

        rule_substitute_etc: $ => seq(
            optional($.qtag),
            $.ruletype_substitute_etc,
            optional($._rule_tag),
            optional($.ruleflag),
			optional($.subreading),
            $.inlineset,
            $.inlineset,
            $._shared_rule_end
        ),

        rule_map_etc: $ => seq(
            optional($.qtag),
            $.ruletype_map_etc,
            optional($._rule_tag),
            optional($.ruleflag),
			optional($.subreading),
            $.inlineset,
            $._shared_rule_end
        ),

        TO: $ => kwd("TO"),
        FROM: $ => kwd("FROM"),
        _to_from: $ => seq(
            choice($.TO, $.FROM),
            $._context
        ),

        rule_parentchild: $ => seq(
            optional($.qtag),
            $.ruletype_parentchild,
            optional($._rule_tag),
            optional($.ruleflag),
            $._rule_target,
            optional($._if_context),
            $._to_from,
            $.semicolon
        ),

        WITHCHILD: $ => kwd("WITHCHILD"),
        NOCHILD: $ => kwd("NOCHILD"),
        _child_specifier: $ => choice(
            seq($.WITHCHILD, $.inlineset),
            $.NOCHILD
        ),

        BEFORE: $ => kwd("BEFORE"),
        AFTER: $ => kwd("AFTER"),
        rule_move: $ => seq(
            optional($.qtag),
            $.ruletype_move,
            optional($._rule_tag),
            optional($.ruleflag),
            $._child_specifier,
            $._rule_target,
            optional($._if_context),
            choice($.BEFORE, $.AFTER),
            optional($._child_specifier),
            $._context,
            $.semicolon
        ),

        WITH: $ => kwd("WITH"),
        rule_switch: $ => seq(
            optional($.qtag),
            $.ruletype_switch,
            optional($._rule_tag),
            optional($.ruleflag),
            $._rule_target,
            optional($._if_context),
            $.WITH,
            $._context,
            $.semicolon
        ),

        rule_relation: $ => seq(
            optional($.qtag),
            $.ruletype_relation,
            optional($._rule_tag),
            optional($.ruleflag),
            $.inlineset,
            $._rule_target,
            optional($._if_context),
            $._to_from,
            $.semicolon
        ),

        rule_relations: $ => seq(
            optional($.qtag),
            $.ruletype_relations,
            optional($._rule_tag),
            optional($.ruleflag),
            $.inlineset,
            $.inlineset,
            $._rule_target,
            optional($._if_context),
            $._to_from,
            $.semicolon
        ),

        rule_addcohort: $ => seq(
            optional($.qtag),
            $.ruletype_addcohort,
            optional($._rule_tag),
            optional($.ruleflag),
            $.inlineset,
            choice($.BEFORE, $.AFTER),
            $._shared_rule_end
        ),

        ONCE: $ => kwd("ONCE"),
        ALWAYS: $ => kwd("ALWAYS"),
        rule_external: $ => seq(
            optional($.qtag),
            $.ruletype_external,
            optional($._rule_tag),
            choice($.ONCE, $.ALWAYS),
            $.filepath,
            optional($.ruleflag),
            $._shared_rule_end
        ),

        TEMPLATE: $ => kwd("TEMPLATE"),
        template: $ => seq(
            $.TEMPLATE,
            $.ntag,
            $.eq,
            $.contexttest,
            $.semicolon
        ),

        context_modifier: $ => kwd("ALL|NONE|NOT|NEGATE"),
        BARRIER: $ => kwd("C?BARRIER"),
        LINK: $ => kwd("LINK"),
        OR: $ => kwd("OR"),
        contexttest: $ => choice(
            seq(
                optional($.context_modifier),
                choice(
                    seq(optional($.contextpos), $.setname_t),
                    seq($.contextpos, optional($.inlineset))
                ),
                optional(seq(
                    $.BARRIER,
                    $.inlineset
                )),
                optional(seq(
                    $.LINK,
                    $.contexttest
                ))
            ),
            seq(
                "[",
                $.inlineset,
                repeat(seq(
                    ",",
                    $.inlineset
                )),
                "]",
                optional(seq(
                    $.LINK,
                    $.contexttest
                ))
            ),
            seq(
                "(",
                $.contexttest,
                ")",
                repeat(seq(
                    $.OR,
                    "(",
                    $.contexttest,
                    ")"
                ))
            )
        ),

        inlineset: $ => seq(
            $.inlineset_single,
            repeat(seq(
                $.set_op,
                $.inlineset_single
            ))
        ),

        inlineset_single: $ => choice(
            seq("(", $.taglist, ")"),
            $.setname
        ),

        set_op: $ => /[Oo][Rr]|[|+^∆∩-]/,

        taglist: $ => repeat1(choice($.tag, $.compotag)),

        compotag: $ => seq("(", repeat1($.tag), ")"),

        rawpath: $ => /[^;#\s][^;#]*/,

        filepath: $ => choice($.ntag, $.qtag),

        tag: $ => choice($.ntag, $.qtag),

        contextpos: $ => $.ntag, // there's a TODO on this one

        prefix: $ => /[^\s#]/,

        ruletype: $ => kwd("SELECT|REMOVE|IFF|DELIMIT|MATCH|REMCOHORT|UNMAP"),

        ruletype_substitute_etc: $ => kwd("SUBSTITUTE|SETVARIABLE|EXECUTE"),

        ruletype_parentchild: $ => kwd("SETPARENT|SETCHILD"),

        ruletype_relation: $ => kwd("(ADD|SET|REM)RELATION"),

        ruletype_relations: $ => kwd("(ADD|SET|REM)RELATIONS"),

        ruletype_map_etc: $ => kwd("ADD|MAP|REPLACE|APPEND|COPY|REMVARIABLE|JUMP"),

        ruletype_addcohort: $ => kwd("ADDCOHORT"),

        ruletype_move: $ => kwd("MOVE"),

        ruletype_switch: $ => kwd("SWITCH"),

        ruletype_external: $ => kwd("EXTERNAL"),

        ruleflag_name: $ => kwd("NEAREST|ALLOWLOOP|DELAYED|IMMEDIATE|LOOK(DELETED|DELAYED)|(UN)?SAFE|REMEMBERX|RESETX|(KEEP|VARY)ORDER|ENCL_(INNER|OUTER|FINAL|ANY)|ALLOWCROSS|(NO)?ITERATE|UNMAPLAST|REVERSE|SUB"),

        ruleflag: $ => repeat1(seq(
            $.ruleflag_name,
            optional(seq(
                ":",
                $.ntag
            ))
        )),

		// TODO: it would be nice to give this some internal structure
		subreading: $ => /[Ss][Uu][Bb]:-?[0123456789]+/,

        // cannot begin with [
        // cannot end with ] or ,
        // cannot contain " ( ) ; \s
        setname: $ => prec(1, /[^\[\],"();\s]|[^\[();\s"][^();\s"]*[^();\s",\]]/),
        setname_t: $ => prec(2, /T:([^();\s"]*[^();\s",\]])?/),

        ntag: $ => /[^\"#();\s]+/,

        qtag: $ => /[!^]?"(\\[^\n\r]|[^"\\])+"[^();\s]*/,

        comment: $ => choice(
            /#[^\r\n]*/,
            seq($.END, /(.|\n)*/)
        )
    }
})
