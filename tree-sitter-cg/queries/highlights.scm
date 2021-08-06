[
  (section_header)
  (END)
  (LIST)
  (SET)
  (INCLUDE)
  (TEMPLATE)
] @keyword.control

[
  (ruletype)
  (ruletype_substitute_etc)
  (ruletype_parentchild)
  (ruletype_relation)
  (ruletype_relations)
  (ruletype_map_etc)
  (ruletype_addcohort)
  (ruletype_mergecohorts)
  (ruletype_move)
  (ruletype_switch)
  (ruletype_external)
] @keyword.control

[
  (IF)
  (TARGET)
  (TO)
  (FROM)
  (WITHCHILD)
  (NOCHILD)
  (BEFORE)
  (AFTER)
  (WITH)
  (ONCE)
  (ALWAYS)
  (context_modifier)
  (BARRIER)
  (LINK)
  (OR)
  (set_op)
  (ruleflag_name)
] @keyword.operator

[
  (eq)
  (semicolon)
] @keyword.operator

(comment) @comment

(qtag) @string

(contextpos) @constant.number

(inlineset_single ["(" ")"] @constant.other.symbol)

(taglist) @constant.other.symbol

((setname) @variable (#match? @variable "\$\$.*"))

(list (setname) @variable)
(set (setname) @variable)

[
  (special_list_name)
  (STATIC_SETS)
  (MAPPING_PREFIX)
  (SUBREADINGS)
  (PARENTHESES)
] @keyword.other.special-method
