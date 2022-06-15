#!/usr/bin/env python3

from importlib.resources import path as get_path
from tree_sitter import Language

with get_path('tree_sitter_apertium', 'langs.so') as path:
    CG = Language(path, 'cg')
    LEXC = Language(path, 'lexc')
    LEXD = Language(path, 'lexd')
    RTX = Language(path, 'rtx')
    TWOLC = Language(path, 'twolc')
    __all__ = ['CG', 'LEXC', 'LEXD', 'RTX', 'TWOLC']
