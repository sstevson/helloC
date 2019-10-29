/*
 * File: timestab.c
 * ----------------
 *  This program generates a multiplication table where each axis run from
 *  LowerLimit to UpperLimit.
 */

/*
 * Contstants
 * ----------
 *  LowerLimt = Starting value for the table.
 *  UpperLimit = Final value for the table.
 */

#include <stdio.h>

#define LowerLimit 1
#define UpperLimit 10

int main(int argc, char *argv[]) {

	int i;
	int j;

	for (i = LowerLimit; i <= UpperLimit; i++) {
		for (j = LowerLimit; j <= UpperLimit; j++) {
			printf(" %4d", i * j);
		}
		printf("\n");
	}
}
