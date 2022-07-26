#!/bin/bash

set -eo pipefail

rm -rf build dist *.egg-info wheelhouse

python3 setup.py sdist bdist_wheel

any_linux=no
for whl in dist/*linux*.whl
do
  auditwheel repair --plat manylinux2014_x86_64 "$whl"
  any_linux=yes
done

if [[ "$any_linux" = "yes" ]]
then
  rm dist/*linux*.whl
  mv wheelhouse/*.whl dist/
  rm -rf wheelhouse
fi
