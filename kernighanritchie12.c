/*
 * File: kernighanritchie12.c
 * Copies input to output by printing a single space (" ") for any arbitrary
 * number of spaces.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	int c;

	while ((c = getchar()) == ' ' || (c = getchar()) != EOF)
		if (c != ' ')
			printf("this program only accepts spaces.\n");
	printf("single space\n");
}
