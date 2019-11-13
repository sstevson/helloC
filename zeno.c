/*
 * File: zeno.c
 * ------------
 *  This program computes a Zeno series.  See Roberts, page 204 for more
 *  details.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	double sum, term;

	sum = 0.0;
	term = 0.5;
	while (sum != sum + term) {
		sum += term;
		term /= 2;
	}
	printf("The sum of Zeno's series is %lg.\n", sum);

}
