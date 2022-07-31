#!/usr/bin/env python3

from importlib.resources import path as get_path
from tree_sitter import Language, Parser

__all__ = [
    'CG', 'LEXC', 'LEXD', 'RTX', 'TWOLC', 'XFST',
    'parse_bytes', 'parse_file',
    'text', 'line', 'end_comment',
]

with get_path('tree_sitter_apertium', 'langs.so') as path:
    CG = Language(path, 'cg')
    LEXC = Language(path, 'lexc')
    LEXD = Language(path, 'lexd')
    RTX = Language(path, 'rtx')
    TWOLC = Language(path, 'twolc')
    XFST = Language(path, 'xfst')

def parse_bytes(b, lang):
    p = Parser()
    p.set_language(lang)
    return p.parse(b).root_node

def parse_file(fname, lang):
    with open(fname, 'rb') as fin:
        byt = fin.read()
        return byt, parse_bytes(byt, lang)

def text(byt, node, offset=0):
    return byt[node.start_byte-offset:node.end_byte-offset].decode('utf-8')

def line(node):
    return node.start_point[0]+1

def end_comment(node):
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
