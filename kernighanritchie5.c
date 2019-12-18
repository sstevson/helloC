/*
 * File: kernighanritchie5.c
 * This program reads a character input stream and prints it to the console.
 */

#include <stdio.h>

int main(int agrc, char *argv[]) {

	int c;

	c = getchar();

	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
