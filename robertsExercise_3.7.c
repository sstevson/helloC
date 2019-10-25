/*
 * File: robertsExercise_3.7.c
 * ---------------------------
 *
 *  This program accepts a list of double floating point numbers and computes
 *  their average.  The user enters the count of numbers he wants to add.
 */

#include <stdio.h>

int get_int(void);
double get_dub(void);

static int i = 0;

int main(int argc, char *argv[]) {
	int counter = 0;
	double total = 0;
	double value = 0;
	double average = 0;

	printf("How many numbers would you like to average? ");
	counter = get_int();

	for (i = 0; i < counter; i++) {
		printf("Number? ");
		value = get_dub();
		total += value;
	}

	average = total / counter;
	printf("Those numbers average to %lg\n", average);

	return 0;

}

int get_int(void)
{
	int input;
	scanf("%d", &input);
	return input;
}

double get_dub(void)
{
	double input;
	scanf("%lg", &input);
	return input;
}
