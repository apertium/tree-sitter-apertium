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

#### Runtime dependencies

* [tree-sitter Python bindings](https://github.com/tree-sitter/py-tree-sitter)

```bash
pip3 install tree_sitter
```

#### Build dependencies

* `setuptools`
* on Linux, `auditwheel` and `patchelf`

```bash
pip3 install auditwheel setuptools
apt install patchelf
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
