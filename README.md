# tree-sitter-apertium

This repository contains tree-sitter parsers for the various non-XML file formats used in Apertium.

## Requirements

### Parsers

* `npm`
* [`tree-sitter`](https://github.com/tree-sitter/tree-sitter) CLI
* a C compiler

```bash
npm install tree-sitter-cli
```

### Python bindings

* [tree-sitter Python bindings](https://github.com/tree-sitter/py-tree-sitter)

```bash
pip3 install tree_sitter
```

## Compiling

To compile everything, run

```bash
make
```

To compile only the parsers and not the Python bindings, run

```bash
make langs
```

The LexC grammar depends on the XFST grammar, so this process locally installs the XFST grammar using `npm`.
