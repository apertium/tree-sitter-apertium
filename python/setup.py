#!/usr/bin/env python3

from setuptools import setup
# setuptools doesn't seem to have an overridable build command yet
# TODO: is there a better way to do this besides mixing build systems?
from distutils.command.build import build
from setuptools.dist import Distribution
from tree_sitter import Language
import os

TOP_PATH = os.path.join(os.path.dirname(__file__), 'tree_sitter_apertium')
SO_PATH = os.path.join(TOP_PATH, 'langs.so')
SRC_PATHS = [os.path.join(TOP_PATH, 'grammars', name)
             for name in ['cg', 'lexc', 'lexd', 'rtx', 'twolc', 'xfst']]

class TSA_build(build):
    def run(self):
        print('Compiling grammars')
        Language.build_library(SO_PATH, SRC_PATHS)
        super().run()

class BD(Distribution):
    def has_ext_modules(self):
        return True

setup(
    name='tree-sitter-apertium',
    version='0.1.0',
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
    distclass=BD,
)
