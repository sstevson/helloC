/*
 * File: liftoff.c
 * ---------------
 *  This program simulates a countdown for a rocket launch.
 */

#include <stdio.h>

/*
 * Constant: StartingCount
 * -----------------------
 *  Change this constant in order to use a different starting value for the
 *  countdown.
 */

#define StartingCount 10

// Main Program

int main(int argc, char *argv[]) {

	int t;

	for (t = StartingCount; t >= 0; t--) {
		printf("%2d\n", t);
	}

	printf("Liftoff!\n");

	return 0;
}
