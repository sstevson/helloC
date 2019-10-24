/*
 * File: robertsExercise_3.1.c
 * ---------------------------
 *
 * This program reads in in an arbitrary number of decimal integers, adds them,
 * and prints their sum.  The user indicates the number of values he wants to
 * add when the program starts.
 */

#include <stdio.h>

// declare a function that gets an integer from the user
int get_int(void) {
	int input;
	scanf("%d", &input);
	return input;
}


int main(int argc, char *argv[]) {
	int i, counter, value, total = 0;

	// Tell user what's going on.
	printf("This program adds numbers.\n");
	// Get the count of numbers to be added.
	printf("How many numbers would you like to add? ");
	counter = get_int();
	for (i = 0; i < counter; i++) {
		printf("Number? ");
		value = get_int();
		total += value;
	}

	printf("Your total is %d.\n", total);

	return 0;
}
