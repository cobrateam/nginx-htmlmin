test:
	@gcc -g -ansi -Wall minify/minify.c tests/tests_minify.c tests/tests.c && ./a.out
