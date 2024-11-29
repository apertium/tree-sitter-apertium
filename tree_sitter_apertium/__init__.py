#!/usr/bin/env python3

from tree_sitter import Language, Parser
import tree_sitter_cg
import tree_sitter_lexc
import tree_sitter_lexd
import tree_sitter_rtx
import tree_sitter_twolc
import tree_sitter_xfst

__all__ = [
    'CG', 'LEXC', 'LEXD', 'RTX', 'TWOLC', 'XFST',
    'parse_bytes', 'parse_file',
    'text', 'line', 'end_comment',
]

CG = Language(tree_sitter_cg.language())
LEXC = Language(tree_sitter_lexc.language())
LEXD = Language(tree_sitter_lexd.language())
RTX = Language(tree_sitter_rtx.language())
TWOLC = Language(tree_sitter_twolc.language())
XFST = Language(tree_sitter_xfst.language())

def parse_bytes(b, lang):
    '''
    parse_bytes(b: bytes, lang: tree_sitter.Language) -> tree_sitter.Node
    Create a parser for lang and use it to parse b.
    Return the root node of the resulting tree.
    '''
    p = Parser(lang)
    return p.parse(b).root_node

def parse_file(fname, lang):
    '''
    parse_file(fname: str, lang: tree_sitter.Language)
      -> (bytes, tree_sitter.Node)
    Open file at path fname and parse it with lang.
    Return the file contents as a bytestring and the root node of the tree.
    '''
    with open(fname, 'rb') as fin:
        byt = fin.read()
        return byt, parse_bytes(byt, lang)

def text(byt, node, offset=0):
    '''
    text(byt: bytes, node: tree_sitter.Node, offset: int = 0) -> str
    Extract and decode the string corresponding to a particular node.
    If byt is not the entire original text, offset specifies the starting
    index of the slice it corresponds to.
    '''
    return byt[node.start_byte-offset:node.end_byte-offset].decode('utf-8')

def line(node):
    '''
    line(node: tree_sitter.Node) -> int
    Return the human-readable (1-indexed) line number a node starts on.
    '''
    return node.start_point[0]+1

def end_comment(node):
    '''
    end_comment(node: tree_sitter.Node) -> Optional[tree_sitter.Node]
    Return the comment on the same line as node, if one exists, otherwise None.
    '''
    if node.type == 'comment':
        return node
    com = node.child_by_field_name('comment')
    if com is not None:
        return com
    cur = node
    ln = node.end_point[0]
    while cur is not None and cur.start_point[0] == ln:
        if cur.type == 'comment':
            return cur
        elif cur.next_named_sibling is not None:
            cur = cur.next_named_sibling
        else:
            cur = cur.parent
    return None
