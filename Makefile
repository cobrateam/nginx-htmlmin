test:
	@gcc -ansi -Wall minify/minify.c tests/tests_minify.c && ./a.out
	@rm -f a.out
