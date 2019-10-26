/*
 * File: robertsExercise_3.8.c
 * ---------------------------
 *  This program averages a list of integers until the user enters a sentinel
 *  (-1)#include <stdio.h>
 *
 */

#include <stdio.h>

double get_num(void);

int main(int argc, char *argv[]) {
	int count = 0;
	double value = 0;
	double total = 0;
	double average = 0;

	printf("This program averages a list of integers.\n");
	printf("Signal the end of the list by entering -1.\n");
	while (1) {
		printf("Number ");
		value = get_num();
		if (value == -1) break;
		total += value;
		count++;
	}

	average = total / count;
	printf("Your average is %lg.\n", average);

	return 0;

}

double get_num(void)
{
	double input;
	scanf("%lg", &input);
	return input;
}
