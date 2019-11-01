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

int main(int argc, char *argv[]) {

	int row;
	int star;

	for (row = 0; row < rowcount; row++) {
		for (star = 0; star <= row; star++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
