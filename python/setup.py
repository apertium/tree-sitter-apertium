#!/usr/bin/env python3

from distutils.core import setup, Extension
from distutils.command.build import build
from tree_sitter import Language, Parser

def build_langs():
    import os
    from tree_sitter import Language
    TOP_PATH = os.path.join(os.path.dirname(__file__), 'tree_sitter_apertium')
    SO_PATH = os.path.join(TOP_PATH, 'langs.so')
    SRC_PATHS = [os.path.join(TOP_PATH, 'grammars', name)
                 for name in ['cg', 'lexc', 'lexd', 'rtx', 'twolc']]
    Language.build_library(SO_PATH, SRC_PATHS)

TSA_ext = Extension('tree_sitter_apertium_builder', [])

class TSA_build(build):
    def run(self):
        build_langs()
        super().run()

setup(
    name='tree-sitter-apertium',
    version='0.0.1',
    description='tree-sitter grammars for Apertium formats',
    url='https://github.com/apertium/tree-sitter-apertium',
    author='Daniel Swanson',
    author_email='awesomeevildudes@gmail.com',
    classifiers=[
        'Development Status :: 1 - Planning',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: GNU General Public License v3 or later (GPLv3+)',
        'Programming Language :: Python :: 3 :: Only',
        'Topic :: Text Processing :: Linguistic',
    ],
    packages=['tree_sitter_apertium'],
    package_data={'tree_sitter_apertium': ['langs.so']},
    cmdclass={'build': TSA_build},
)
