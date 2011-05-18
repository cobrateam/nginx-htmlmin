test:
	@gcc -g -ansi -Wall minify/minify.c tests/*.c && ./a.out
