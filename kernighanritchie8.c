/*
 * File: kernighanritchie8.c
 * Count characters in input; 1st edition
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc; // using prefix form of ++
	printf("%ld\n", nc);
}
