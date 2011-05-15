test:
	@gcc -g -ansi -Wall minify/minify.c tests/tests_minify.c && ./a.out
