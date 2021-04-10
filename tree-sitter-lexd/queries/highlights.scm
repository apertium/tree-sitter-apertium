(pattern_start) @keyword.control
(named_pattern_start) @keyword.control
(lexicon_start) @keyword.control
(alias) @keyword.control

(left_sieve) @keyword.operator
(right_sieve) @keyword.operator
(pattern_or) @keyword.operator
(colon) @keyword.operator
(pattern_operator) @keyword.operator
"(" @keyword.operator
")" @keyword.operator
"[" @keyword.operator
"]" @keyword.operator
"-" @keyword.operator
"," @keyword.operator
(tag_distribution_operator) @keyword.operator

(tag) @entity.name.function

(lexicon_block (identifier) @entity.name.function)
(pattern_block (identifier) @entity.name.function)

(lexicon_string) @string.quoted
(escaped_char) @constant.character.escape

(comment) @comment

(number) @constant.number
