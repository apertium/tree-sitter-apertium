all: langs logs/py

LOGS = logs/cg logs/lexc logs/lexd logs/rtx logs/twolc logs/xfst
TESTS = logs/cg.test logs/lexc.test logs/lexd.test \
        logs/rtx.test logs/twolc.test logs/xfst.test
PYDEPS = python/setup.py python/MANIFEST.in python/README python/build.sh

langs: $(LOGS)
test: $(TESTS) logs/py.test
test-langs: $(TESTS)

logs/.log:
	mkdir -p logs
	touch $@

logs/%: tree-sitter-%/package.json tree-sitter-%/grammar.js logs/.log
	(cd "tree-sitter-$*" && tree-sitter generate) > $@

logs/lexc: logs/xfst tree-sitter-lexc/package.json tree-sitter-lexc/grammar.js
	(cd tree-sitter-lexc && tree-sitter generate) > $@

logs/py: pyproject.toml setup.py tree_sitter_apertium/__init__.py $(LOGS)
	./venv/bin/pip install ./tree-sitter-cg ./tree-sitter-lexc ./tree-sitter-lexd \
		./tree-sitter-rtx ./tree-sitter-twolc ./tree-sitter-xfst . > $@

logs/%.test: logs/%
	(cd "tree-sitter-$*" && rm -f test/*/*~ && tree-sitter test)

logs/py.test: logs/py
	./venv/bin/python -m unittest discover

clean:
	rm -rf logs
