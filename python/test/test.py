#!/usr/bin/env python3

from unittest import TestCase
import tree_sitter_apertium as TSA

class TSATest(TestCase):
    def test_text_line(self):
        byt = b'PATTERNS\nX\n'
        tree = TSA.parse_bytes(byt, TSA.LEXD)
        self.assertEqual(tree.type, 'source_file')
        pat = tree.children[0]
        self.assertEqual(pat.type, 'pattern_block')
        line = pat.children[1]
        self.assertEqual(line.type, 'pattern_line')
        node = line.children[0]
        self.assertEqual(node.type, 'pattern_token')
        self.assertEqual(TSA.text(byt, node), 'X')
        self.assertEqual(TSA.line(node), 2)
    def test_end_comment(self):
        byt = b'LEXICON Root\na:b # ; ! blah\nc:d # ; ! yo\ne:f # ;\n'
        tree = TSA.parse_bytes(byt, TSA.LEXC)
        self.assertEqual(tree.type, 'source_file')
        lex = tree.children[0]
        self.assertEqual(lex.type, 'lexicon')
        l1 = lex.children[2]
        l2 = lex.children[4]
        l3 = lex.children[6]
        self.assertEqual(l1.type, 'lexicon_line')
        self.assertEqual(l2.type, 'lexicon_line')
        self.assertEqual(l3.type, 'lexicon_line')
        c1 = TSA.end_comment(l1)
        c2 = TSA.end_comment(l2)
        c3 = TSA.end_comment(l3)
        self.assertEqual(c1.type, 'comment')
        self.assertEqual(c2.type, 'comment')
        self.assertEqual(c3, None)
        self.assertEqual(TSA.text(byt, c1), '! blah')
        self.assertEqual(TSA.text(byt, c2), '! yo')
