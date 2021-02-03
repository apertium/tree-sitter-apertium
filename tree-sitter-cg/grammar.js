// closely based on https://github.com/TinoDidriksen/cg3/blob/master/cg3.g
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
                "SETS",
                $.list,
                $.set,
                $.template,
                $.include,
                $.before_sections,
                $.section,
                $.after_sections,
                $.null_section,
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
            )),
            optional("END")
        ),

        eq: $ => "=",
        semicolon: $ => ";",

        special_list_name: $ => choice(
            "DELIMITERS",
            "SOFT-DELIMITERS",
            "PREFERRED-TARGETS"
        ),
        
        set_special_list: $ => seq(
            $.special_list_name,
            $.eq,
            $.taglist,
            $.semicolon
        ),

        static_sets: $ => seq(
            "STATIC-SETS",
            $.eq,
            repeat1($.setname),
            $.semicolon
        ),

        mapping_prefix: $ => seq(
            "MAPPING-PREFIX",
            $.eq,
            $.prefix,
            $.semicolon
        ),

        subreadings: $ => seq(
            "SUBREADINGS",
            $.eq,
            choice("RTL", "LTR"),
            $.semicolon
        ),

        parentheses: $ => seq(
            "PARENTHESES",
            $.eq,
            repeat1($.compotag),
            $.semicolon
        ),

        list: $ => seq(
            "LIST",
            $.setname,
            $.eq,
            $.taglist,
            $.semicolon
        ),

        set: $ => seq(
            "SET",
            $.setname,
            $.eq,
            $.inlineset,
            $.semicolon
        ),

        include: $ => seq(
            "INCLUDE",
            $.rawpath,
            $.semicolon
        ),

        before_sections: $ => choice(
            "BEFORE-SECTIONS",
            "MAPPINGS",
            "CORRECTIONS"
        ),

        section: $ => choice(
            "SECTION",
            "CONSTRAINTS"
        ),

        after_sections: $ => "AFTER-SECTIONS",

        null_section: $ => "NULL-SECTION",

        _context: $ => repeat1(seq(
            "(",
            $.contexttest,
            ")"
        )),
        
        _if_context: $ => seq(
            optional("IF"),
            $._context
        ),

        _rule_target: $ => seq(
            optional("TARGET"),
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
            $._shared_rule_end
        ),

        rule_substitute_etc: $ => seq(
            optional($.qtag),
            $.ruletype_substitute_etc,
            optional($._rule_tag),
            optional($.ruleflag),
            $.inlineset,
            $.inlineset,
            $._shared_rule_end
        ),

        rule_map_etc: $ => seq(
            optional($.qtag),
            $.ruletype_map_etc,
            optional($._rule_tag),
            optional($.ruleflag),
            $.inlineset,
            $._shared_rule_end
        ),

        _to_from: $ => seq(
            choice("TO", "FROM"),
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

        _child_specifier: $ => choice(
            seq("WITHCHILD", $.inlineset),
            "NOCHILD"
        ),

        rule_move: $ => seq(
            optional($.qtag),
            $.ruletype_move,
            optional($._rule_tag),
            optional($.ruleflag),
            $._child_specifier,
            $._rule_target,
            optional($._if_context),
            choice("BEFORE", "AFTER"),
            optional($._child_specifier),
            $._context,
            $.semicolon
        ),

        rule_switch: $ => seq(
            optional($.qtag),
            $.ruletype_switch,
            optional($._rule_tag),
            optional($.ruleflag),
            $._rule_target,
            optional($._if_context),
            "WITH",
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
            choice("BEFORE", "AFTER"),
            $._shared_rule_end
        ),

        rule_external: $ => seq(
            optional($.qtag),
            $.ruletype_external,
            optional($._rule_tag),
            choice("ONCE", "ALWAYS"),
            $.filepath,
            optional($.ruleflag),
            $._shared_rule_end
        ),

        template: $ => seq(
            "TEMPLATE",
            $.ntag,
            $.eq,
            $.contexttest,
            $.semicolon
        ),

        contexttest: $ => choice(
            seq(
                optional(choice("ALL", "NONE", "NOT", "NEGATE")),
                choice(
                    seq(optional($.contextpos), $.setname_t),
                    seq($.contextpos, optional($.setname))
                ),
                optional(seq(
                    /C?BARRIER/,
                    $.inlineset
                )),
                optional(seq(
                    "LINK",
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
                    "LINK",
                    $.contexttest
                ))
            ),
            seq(
                "(",
                $.contexttest,
                ")",
                repeat(seq(
                    "OR",
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

        set_op: $ => /OR|[|+^∆∩-]/,

        taglist: $ => repeat1(choice($.tag, $.compotag)),

        compotag: $ => seq("(", repeat1($.tag), ")"),

        rawpath: $ => /[^;#\s][^;#]*/,

        filepath: $ => choice($.ntag, $.qtag),

        tag: $ => choice($.ntag, $.qtag),

        contextpos: $ => $.ntag, // there's a TODO on this one

        prefix: $ => /[^\s#]/,

        ruletype: $ => /SELECT|REMOVE|IFF|DELIMIT|MATCH|REMCOHORT|UNMAP/,

        ruletype_substitute_etc: $ => /SUBSTITTUTE|SETVARIABLE|EXECUTE/,

        ruletype_parentchild: $ => /SETPARENT|SETCHILD/,

        ruletype_relation: $ => /(ADD|SET|REM)RELATION/,

        ruletype_relations: $ => /(ADD|SET|REM)RELATIONS/,

        ruletype_map_etc: $ => /ADD|MAP|REPLACE|APPEND|COPY|REMVARIABLE|JUMP/,

        ruletype_addcohort: $ => "ADDCOHORT",

        ruletype_move: $ => "MOVE",

        ruletype_switch: $ => "SWITCH",

        ruletype_external: $ => "EXTERNAL",

        ruleflag_name: $ => /NEAREST|ALLOWLOOP|DELAYED|IMMEDIATE|LOOK(DELETED|DELAYED)|(UN)?SAFE|REMEMBERX|RESETX|(KEEP|VARY)ORDER|ENCL_(INNER|OUTER|FINAL|ANY)|ALLOWCROSS|(NO)?ITERATE|UNMAPLAST|REVERSE|SUB/,

        ruleflag: $ => repeat1(seq(
            $.ruleflag_name,
            optional(seq(
                ":",
                $.ntag
            ))
        )),

        // cannot begin with [
        // cannot end with ] or ,
        // cannot contain " ( ) ; \s
        setname: $ => prec(1, /[^\[\],"();\s]|[^\[();\s"][^();\s"]*[^();\s",\]]/),
        setname_t: $ => prec(2, /T:([^();\s"]*[^();\s",\]])?/),

        ntag: $ => /[^\"#();\s]+/,

        qtag: $ => /[!^]?"(\\[^\n\r]|[^"\\])+"[^();\s]*/,

        comment: $ => /#[^\r\n]*/
    }
})
