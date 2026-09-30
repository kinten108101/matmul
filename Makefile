.PHONY: test

all:
	@echo hello world

TESTS=test/simple.exe

test: ${TESTS}
	$^; tst=$$?; printf "test '%s' %d\n" "$^" $${tst}

%.exe: %.c
	gcc $^ -o $@
