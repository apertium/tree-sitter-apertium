function listof(thing, sep) {
  return seq(thing, repeat(seq(sep, thing)));
}

function operator(s, fold) {
  if(fold) {
    var plain = operator(s, false);
    var cl = operator(s + "cl", false);
    var caseless = operator(s + "caseless", false);
    var fold = operator(s + "fold", false);
    var foldcase = operator(s + "foldcase", false);
    return new RegExp(plain.source + "|" +
                      cl.source + "|" + caseless.source + "|" +
                      fold.source + "|" + foldcase.source);
  } else {
    var ret = "[-_]*";
    for(var i = 0; i < s.length; i++) {
      if(s.codePointAt(i) >= 97 && s.codePointAt(i) <= 122) {
        ret += "[" + s[i].toUpperCase() + s[i] + "]";
      } else {
        ret += s[i];
      }
      ret += "[-_]*";
    }
    return new RegExp(ret);
  }
}

function condtype(key) {
  return $ => seq(
    "(",
    choice(
      seq(
        $.always_tok,
        $[key]
      ),
      seq(
        $.if_tok,
        $.condition,
        $[key],
        repeat(seq(
          $.elif_tok,
          $.condition,
          $[key]
        )),
        optional(seq(
          $.else_tok,
          $[key]
        ))
      )
    ),
    ")"
  );
}

module.exports = grammar({
  name: "rtx",

  extras: $ => [
    $.comment,
    /[\s\n]/
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.attr_rule,
      $.output_rule,
      $.retag_rule,
      $.reduce_rule_group
    )),

    arrow: $ => prec(2, /->|→/),

    string: $ => /"([^\"]|\\.)*"/,
    ident: $ => /([^!@$%()={}\[\]|\/:;<>,.→\s\n\d\"]|\\.)([^!@$%()={}\[\]|\/:;<>,.→\s\n]|\\.)*/,

    comment: $ => /![^\n]*/,

    num: $ => prec(2, /\d+/),

    weight: $ => /\d+(\.\d+)?/,

    output_rule: $ => seq(
      $.ident,
      ":",
      optional(":"),
      choice(
        $.lu_cond,
        "%",
        listof(
          choice(
            $.ident,
            seq("<", $.ident, ">")
          ),
          "."
        )
      ),
      ";"
    ),

    retag_rule: $ => seq(
      $.ident,
      ">",
      $.ident,
      ":",
      listof(
        choice(
          $.ident,
          seq("[", $.ident, "]")
        ),
        ","
      ),
      ";"
    ),

    attr_default: $ => seq(
      "(",
      $.ident,
      $.ident,
      ")"
    ),

    attr_rule: $ => seq(
      $.ident,
      "=",
      optional($.attr_default),
      repeat1(choice(
        $.ident,
        $.string,
        seq("@", $.ident),
        seq("[", $.ident, "]")
      )),
      ";"
    ),

    clip: $ => choice(
      seq(
        choice(
          seq(
            optional(">"),
            $.num,
            "."
          ),
          "$",
          seq(
            "$$",
            $.ident,
            "."
          )
        ),
        $.ident,
        optional(seq("/", choice("sl", "tl", "ref"))),
        optional(seq(">", $.ident))
      ),
      seq(
        "$%",
        $.ident
      ),
      $.ident
    ),

    str_op: $ => choice(
      operator("equal", true),
      operator("=", true),

      operator("isprefix", true),
      operator("startswith", true),
      operator("beginswith", true),
      operator("hasprefix", true),
      operator("startswithlist", true),
      operator("beginswithlist", true),

      operator("issuffix", true),
      operator("endswith", true),
      operator("hassuffix", true),
      operator("endswithlist", true),

      operator("in", true),
      operator("∈", true),

      operator("issubstring", true),
      operator("contains", false)
    ),

    bool_op: $ => choice(
      operator("and", false),
      operator("&", false),
      operator("or", false),
      /[-_]*\|[-_]*/
    ),

    not: $ => prec(2, choice(
      token(prec(2, operator("not", false))),
      token(prec(2, operator("~", false))),
      token(prec(2, operator("⌐", false)))
    )),

    _string_val: $ => choice(
      $.clip,
      $.string,
      $.string_cond
    ),

    _cond_base_bool: $ => seq(
      $._string_val,
      optional($.not),
      $.str_op,
      $._string_val
    ),

    _cond_bool: $ => choice(
      $._cond_base_bool,
      prec(3, seq("(", $._cond_bool, ")")),
      prec(2, seq($.not, $._cond_bool)),
      prec.left(1, seq($._cond_bool, $.bool_op, $._cond_bool))
    ),

    condition: $ => seq(
      "(",
      optional($.not),
      $._cond_bool,
      ")"
    ),

    pattern_element: $ => seq(
      optional("%"),
      optional(seq(
        choice(
          seq("$", $.ident),
          seq("[", $.ident, "]"),
          $.ident,
          $.string
        ),
        "@"
      )),
      $.ident,
      repeat(seq(
        ".",
        choice(
          seq(optional("$"), $.ident),
          seq("[", $.ident, "]")
        )
      ))
    ),

    unknown: $ => "*",

    output_var_set: $ => seq(
      token.immediate("["),
      listof(
        seq($.ident, "=", $._string_val),
        ","
      ),
      "]"
    ),

    macro_name: $ => seq(
      token.immediate("("),
      $.ident,
      ")"
    ),

    literal_lu: $ => seq(
      choice($.ident, $.string),
      token.immediate("@"),
      listof(
        choice(
          $.ident,
          seq("$", $.ident),
          seq("[", $.clip, "]"),
          seq("{", $.clip, "}")
        ),
        "."
      )
    ),

    output_element: $ => seq(
      optional(choice("+", "<")),
      choice(
        seq(
          optional(">"),
          optional("%"),
          choice(
            $.num,
            $.ident,
            $.string,
            "*"
          ),
          optional($.macro_name),
          optional($.output_var_set)
        ),
        seq("$$", $.ident),
        $.literal_lu
      )
    ),

    blank: $ => "_",

    if_tok: $ => operator("if", false),
    elif_tok: $ => choice(
      operator("if", false),
      operator("elif", false),
      operator("elseif", false)
    ),
    else_tok: $ => choice(
      operator("else", false),
      operator("otherwise", false)
    ),
    always_tok: $ => operator("always", false),

    string_cond: condtype("_string_val"),
    chunk_cond: condtype("_chunk_val"),
    lu_cond: condtype("_lu_val"),

    _chunk_val: $ => choice(
      seq(
        "{",
        repeat($._lu_val),
        "}"
      ),
      $.chunk_cond
    ),

    _lu_val: $ => choice(
      $.output_element,
      $.blank,
      $.lu_cond,
      seq("[", repeat($._lu_val), "]")
    ),

    reduce_rule_group: $ => seq(
      repeat1($.ident),
      $.arrow,
      listof($.reduce_rule, "|"),
      ";"
    ),

    reduce_rule: $ => seq(
      optional($.string),
      optional(seq($.weight, ":")),
      repeat1(choice($.unknown, $.pattern_element)),
      optional(seq("?", $.condition)),
      optional(seq(
        "[",
        listof(
          choice(
            seq(
              "$",
              $.num,
              "/",
              choice("sl", "ref"),
              "=",
              $._lu_val
            ),
            seq("$$", $.ident, "=", $._lu_val),
            seq("$%", $.ident, "=", $._string_val),
            seq("$", $.ident, "=", $._string_val)
          ),
          ","
        ),
        "]"
      )),
      choice(
        $._chunk_val,
        seq(
          "{",
          listof($._chunk_val, "_"),
          "}"
        )
      )
    )
  }
})
