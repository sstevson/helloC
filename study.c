/*
 * File: study.c
 * -------------
 *  A study of how to print lines of characters.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	int i;
	int j;
	int counter;
	int end;

	counter = 5;
	end = 1;

	while (counter > 0) {
		for (i = counter; i > 1; i--) {
			printf(" ");
		}
		for (j = 0; j < end; j++) {
			printf("*");
		}
		printf("\n");
		counter--;
		end += 2;
	}

	return 0;
}
