/*
 * File: ericRobertsChap4Exer1.c
 * -----------------------------
 *  This program generates the lyrics to the song "99 bottles of beer".
 */

#include <stdio.h>

/* Constant: StartingCount
 * -----------------------
 *  The initial number of beers on the wall.
 */

#define StartingCount 10

int main(int argc, char *argv[]) {

	int i;
	int remain;

	for (i = StartingCount; i > 0; i--) {

		printf("%d bottle%s of beer on the wall.\n", i, (i > 1) ? "s" : "");
		printf("%d bottle%s of beer.\n", i, (i > 1) ? "s" : "");
		printf("You take one down, pass it around.\n");
		remain = i - 1;
		if (remain == 0) {
			printf("No more bottles of beer on the wall.\n");
		} else {
			printf("%d bottle%s of beer on the wall.\n\n",
					remain, (remain > 1) ? "s" : "");
		}
	}

	return 0;
}
