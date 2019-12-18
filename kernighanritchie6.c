/*
 * File: kernighanritchie6.c
 * The 2nd version program reads a character input stream and prints it to the
 * console.
 */

#include <stdio.h>

int main(int agrc, char *argv[]) {

	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
