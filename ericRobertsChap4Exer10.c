/*
 * File: ericRobertsChap4Exer10.c
 * ------------------------------
 *  This program describes a right triangle by printing asterisks on a row.
 */

#include <stdio.h>

/*
 * Constant: rowcount
 * ------------------
 *  The total number of row that make up the triangle.
 */

#define rowcount 8

void print_star();

int main(int argc, char *argv[]) {

	int i;

	for (i = 0; i < rowcount; i++) {

		print_star(i);
		printf("\n");
	}

	return 0;
}

void print_star(int i)
{
	int j;

	for (j = 0; j <= i; j++) {
		printf(" * ");
	}
}
