// closely based on https://github.com/TinoDidriksen/cg3/blob/master/cg3.g

/*
  ToDo:
  - Handle no space between rule type and first inlineset, e.g. ADD(tag). The workaround of choice(/[\s\n]+/, $.rule_name) to correctly handle rule names such as ADD:name unfortunately ruins parsing other immediate tokens.
*/

function kwd(in_str) {
  var out_str = '';
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
  name: 'cg',

  extras: $ => [
    $.comment,
    /[\s\n]/,
  ],

  rules: {
    source_file: $ => seq(
      repeat1(choice(
        $.set_special_list,
        $.static_sets,
        $.parentheses,
        $.mapping_prefix,
        $.subreadings,
        $.options,
        $.list_tags,
        $.strict_tags,
        $.list,
        $.set,
        $.template,
        $.include,
        $.section_header,
        $.anchor,
        $.rule,
        $.rule_substitute_etc,
        $.rule_map_etc,
        $.rule_parentchild,
        $.rule_move,
        $.rule_switch,
        $.rule_relation,
        $.rule_relations,
        $.rule_addcohort,
        $.rule_mergecohorts,
        $.rule_external,
        $.semicolon,
      )),
    ),

    END: $ => kwd('END'),

    eq: $ => '=',
    pluseq: $ => '+=',
    semicolon: $ => ';',

    special_list_name: $ => choice(
      kwd('DELIMITERS'),
      kwd('SOFT-DELIMITERS'),
      kwd('PREFERRED-TARGETS'),
      kwd('REOPEN-MAPPINGS'),
    ),

    set_special_list: $ => seq(
      $.special_list_name,
      $.eq,
      $.taglist,
      $.semicolon,
    ),

    STATIC_SETS: $ => kwd('STATIC-SETS'),
    static_sets: $ => seq(
      $.STATIC_SETS,
      $.eq,
      repeat1($.setname),
      $.semicolon,
    ),

    MAPPING_PREFIX: $ => kwd('MAPPING-PREFIX'),
    mapping_prefix: $ => seq(
      $.MAPPING_PREFIX,
      $.eq,
      $.prefix,
      $.semicolon,
    ),

    SUBREADINGS: $ => kwd('SUBREADINGS'),
    RTL: $ => kwd('RTL'),
    LTR: $ => kwd('LTR'),
    subreadings: $ => seq(
      $.SUBREADINGS,
      $.eq,
      choice($.RTL, $.LTR),
      $.semicolon,
    ),

    OPTIONS: $ => kwd('OPTIONS'),
    options: $ => seq(
      $.OPTIONS,
      $.pluseq,
      repeat1($.ntag),
      $.semicolon,
    ),

    LIST_TAGS: $ => kwd('LIST-TAGS'),
    list_tags: $ => seq(
      $.LIST_TAGS,
      $.pluseq,
      repeat1($.ntag),
      $.semicolon,
    ),

    STRICT_TAGS: $ => kwd('STRICT-TAGS'),
    strict_tags: $ => seq(
      $.STRICT_TAGS,
      $.pluseq,
      repeat1($.ntag),
      $.semicolon,
    ),

    PARENTHESES: $ => kwd('PARENTHESES'),
    parentheses: $ => seq(
      $.PARENTHESES,
      $.eq,
      repeat1($.compotag),
      $.semicolon,
    ),

    LIST: $ => kwd('LIST'),
    list: $ => seq(
      $.LIST,
      $.setname,
      $.eq,
      $.taglist,
      $.semicolon,
    ),

    SET: $ => kwd('SET'),
    set: $ => seq(
      $.SET,
      $.setname,
      $.eq,
      $.inlineset,
      $.semicolon,
    ),

    INCLUDE: $ => kwd('INCLUDE'),
    include: $ => seq(
      $.INCLUDE,
      $.rawpath,
      $.semicolon,
    ),

    section_header: $ => seq(
      choice(
        kwd('SETS'),
        kwd('BEFORE-SECTIONS'),
        kwd('MAPPINGS'),
        kwd('CORRECTIONS'),
        kwd('SECTION'),
        kwd('CONSTRAINTS'),
        kwd('AFTER-SECTIONS'),
        kwd('NULL-SECTION'),
      ),
      choice('\n', optional(seq($.ntag, $.semicolon))),
    ),

    ANCHOR: $ => kwd('ANCHOR'),
    anchor: $ => seq(
      $.ANCHOR,
      $.ntag,
      $.semicolon,
    ),

    _context: $ => repeat1(seq(
      '(',
      $.contexttest,
      ')',
    )),

    IF: $ => kwd('IF'),

    TARGET: $ => kwd('TARGET'),
    rule_target: $ => seq(
      optional($.TARGET),
      $.inlineset,
    ),

    _shared_rule_end: $ => seq(
      $.rule_target,
      optional($.IF),
      optional($._context),
      $.semicolon,
    ),

    rule_name: $ => seq(
      token.immediate(':'),
      $.ntag,
    ),

    rule: $ => seq(
      optional($.qtag),
      $.ruletype,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $._shared_rule_end,
    ),

    rule_substitute_etc: $ => seq(
      optional($.qtag),
      $.ruletype_substitute_etc,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.inlineset,
      $.inlineset,
      $._shared_rule_end,
    ),

    EXCEPT: $ => kwd('EXCEPT'),
    BEFORE: $ => kwd('BEFORE'),
    AFTER: $ => kwd('AFTER'),
    rule_map_etc: $ => seq(
      optional($.qtag),
      $.ruletype_map_etc,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.inlineset,
      optional(seq($.EXCEPT, $.inlineset)),
      optional(seq(choice($.BEFORE, $.AFTER), $.inlineset)),
      $._shared_rule_end,
    ),

    TO: $ => kwd('TO'),
    FROM: $ => kwd('FROM'),
    _to_from: $ => seq(
      choice($.TO, $.FROM),
      $._context,
    ),

    rule_parentchild: $ => seq(
      optional($.qtag),
      $.ruletype_parentchild,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.rule_target,
      optional($.IF),
      optional($._context),
      $._to_from,
      $.semicolon,
    ),

    WITHCHILD: $ => kwd('WITHCHILD'),
    NOCHILD: $ => kwd('NOCHILD'),
    _child_specifier: $ => choice(
      seq($.WITHCHILD, $.inlineset),
      $.NOCHILD,
    ),

    rule_move: $ => seq(
      optional($.qtag),
      $.ruletype_move,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      optional($._child_specifier),
      $.rule_target,
      optional($.IF),
      optional($._context),
      choice($.BEFORE, $.AFTER),
      optional($._child_specifier),
      $._context,
      $.semicolon,
    ),

    WITH: $ => kwd('WITH'),
    rule_switch: $ => seq(
      optional($.qtag),
      $.ruletype_switch,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.rule_target,
      optional($.IF),
      optional($._context),
      $.WITH,
      $._context,
      $.semicolon,
    ),

    rule_relation: $ => seq(
      optional($.qtag),
      $.ruletype_relation,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.inlineset,
      $.rule_target,
      optional($.IF),
      optional($._context),
      $._to_from,
      $.semicolon,
    ),

    rule_relations: $ => seq(
      optional($.qtag),
      $.ruletype_relations,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.inlineset,
      $.inlineset,
      $.rule_target,
      optional($.IF),
      optional($._context),
      $._to_from,
      $.semicolon,
    ),

    rule_addcohort: $ => seq(
      optional($.qtag),
      $.ruletype_addcohort,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.inlineset,
      choice($.BEFORE, $.AFTER),
      optional($._child_specifier),
      $._shared_rule_end,
    ),

    rule_mergecohorts: $ => seq(
      optional($.qtag),
      $.ruletype_mergecohorts,
      choice(/[\s\n]+/, $.rule_name),
      optional($.ruleflag),
      $.inlineset,
      $.rule_target,
      optional($.IF),
      optional($._context),
      $.WITH,
      $._context,
      $.semicolon,
    ),

    ONCE: $ => kwd('ONCE'),
    ALWAYS: $ => kwd('ALWAYS'),
    rule_external: $ => seq(
      optional($.qtag),
      $.ruletype_external,
      choice(/[\s\n]+/, $.rule_name),
      choice($.ONCE, $.ALWAYS),
      $.filepath,
      optional($.ruleflag),
      $._shared_rule_end,
    ),

    TEMPLATE: $ => kwd('TEMPLATE'),
    template: $ => seq(
      $.TEMPLATE,
      $.ntag,
      $.eq,
      $.contexttest,
      $.semicolon,
    ),

    context_modifier: $ => kwd('ALL|NONE|NOT|NEGATE'),
    BARRIER: $ => kwd('C?BARRIER'),
    LINK: $ => kwd('LINK'),
    OR: $ => kwd('OR'),
    contexttest: $ => seq(
      repeat($.context_modifier),
      choice(
        seq(
          choice(
            seq(optional($.contextpos), $.setname_t),
            seq($.contextpos, optional($.inlineset)),
          ),
          optional(seq(
            $.BARRIER,
            $.inlineset,
          )),
          optional(seq(
            $.LINK,
            $.contexttest,
          )),
        ),
        seq(
          '[',
          $.inlineset,
          repeat(seq(
            ',',
            $.inlineset,
          )),
          ']',
          optional(seq(
            $.LINK,
            $.contexttest,
          )),
        ),
        seq(
          '(',
          $.contexttest,
          ')',
          repeat(seq(
            $.OR,
            '(',
            $.contexttest,
            ')',
          )),
          optional(seq(
            $.LINK,
            $.contexttest,
          )),
        ),
      ),
    ),

    inlineset: $ => seq(
      $.inlineset_single,
      repeat(seq(
        $.set_op,
        $.inlineset_single,
      )),
    ),

    inlineset_single: $ => choice(
      seq('(', $.taglist, ')'),
      $.setname,
    ),

    set_op: $ => /[Oo][Rr]|[|+^∆∩\\-]/,

    taglist: $ => repeat1(choice($.tag, $.compotag)),

    compotag: $ => seq('(', repeat1($.tag), ')'),

    rawpath: $ => /[^;#\s][^;#]*/,

    filepath: $ => choice($.ntag, $.qtag),

    tag: $ => choice($.ntag, $.qtag),

    contextpos: $ => /[^\[\]()\s\n]+/,

    prefix: $ => /[^\s#]/,

    ruletype: $ => kwd('SELECT|REMOVE|IFF|DELIMIT|MATCH|REMCOHORT|UNMAP|PROTECT|UNPROTECT'),

    ruletype_substitute_etc: $ => kwd('SUBSTITUTE|SETVARIABLE|EXECUTE'),

    ruletype_parentchild: $ => kwd('SETPARENT|SETCHILD'),

    ruletype_relation: $ => kwd('(ADD|SET|REM)RELATION'),

    ruletype_relations: $ => kwd('(ADD|SET|REM)RELATIONS'),

    ruletype_map_etc: $ => kwd('ADD|MAP|REPLACE|APPEND|COPY|REMVARIABLE|JUMP|RESTORE|SPLITCOHORT'),

    ruletype_addcohort: $ => kwd('ADDCOHORT'),

    ruletype_mergecohorts: $ => kwd('MERGECOHORTS'),

    ruletype_move: $ => kwd('MOVE'),

    ruletype_switch: $ => kwd('SWITCH'),

    ruletype_external: $ => kwd('EXTERNAL'),

    ruleflag_name: $ => kwd('NEAREST|ALLOWLOOP|DELAYED|IMMEDIATE|LOOK(DELETED|DELAYED)|(UN)?SAFE|REMEMBERX|RESETX|(KEEP|VARY)ORDER|ENCL_(INNER|OUTER|FINAL|ANY)|ALLOWCROSS|(NO)?ITERATE|UNMAPLAST|REVERSE|SUB|REPEAT'),

    ruleflag: $ => repeat1(choice(
      $.subreading,
      seq(
        $.ruleflag_name,
        optional(seq(
          token.immediate(':'),
          $.ntag,
        )),
      ),
    )),

    // TODO: it would be nice to give this some internal structure
    subreading: $ => /[Ss][Uu][Bb]:(-?[0123456789]+|\*)/,

    // cannot begin with [
    // cannot end with ] or ,
    // cannot contain ( ) ; \s
    setname: $ => prec(1, /[^\[\],();\s]|[^\[();\s][^();\s]*[^();\s,\]]/),
    setname_t: $ => prec(2, /T:([^();\s"]*[^();\s",\]])?/),

    ntag: $ => /(\\[^\n\r]|[^\"#();\s])+(\\[^\n\r]|[^#();\s])*/,

    //
    qtag: $ => /[!^]?\"(\\[^\n\r]|[^\"\\])*\"(\\[^\r\n]|[^();\s])*/,

    comment: $ => choice(
      /#[^\r\n]*/,
      seq($.END, /(.|\n)*/),
    ),
  },
})
