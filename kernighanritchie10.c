/*
 * File: kernighanritchie10.c
 * Counts lines of input.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
