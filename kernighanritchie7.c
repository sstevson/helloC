/*
 * File: kernighanritchie7.c
 * The 3rd version program reads a character input stream and prints it to the
 * console until EOF (Ctrl + D), at which point it prints "EOF".
 */

#include <stdio.h>

int main(int agrc, char *argv[]) {

	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	printf("EOF\n");
}
