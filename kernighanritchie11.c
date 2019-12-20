/*
 * File: kernighanritchie11.c
 * Copies input to output, replacing tab by \t, backspace by \b, and backslash
 * by \\.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	int c;

	c = getchar();
	switch (c) {
		case '\n':
			printf("\\n\n");
			break;
		case '\t':
			printf("\\t\n");
			break;
		case '\\':
			printf("\\\n");
			break;
		default:
			printf("That's not a backspace, tab, or \\.\n");
	}
}
