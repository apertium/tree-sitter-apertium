#!/bin/bash
PYTHON="${PYTHON:-python3}"

rm -rf dist
mkdir dist

for lang in {cg,lexc,lexd,rtx,twolc,xfst}
do
    pushd "tree-sitter-$lang"
    ../build-single.sh
    mv dist/* ../dist/
    popd
done

$PYTHON setup.py sdist
