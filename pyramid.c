/*
 * File: pyramid.c
 * ---------------
 *  This program prints a pyramid of stars (*) based on user input.  The user
 *  specifies the total number of lines to be printed and the program then
 *  distributes the *'s is such a way that they look like this:
 *
 *     *
 *    ***
 *   *****
 *  *******
 *
 *  The idea is to print one * and then increment by two *'s until the pyramid
 *  appears.  The program inserts the appropriate white space per line.
 */

#include <stdio.h>
int get_num(int n);
void print_pyramid(int n);

int main(int argc, char *argv[]) {

	int n;

	n = 0;
	printf("This program prints a triangle of stars '*'.\n");
	printf("You determine the number of lines to print\n");
	printf("by chosing an odd number.\n");
	n = get_num(n);
	print_pyramid(n);

	return 0;

}


int get_num(int n)
{
	int input;

	printf("Number? ");
	scanf("%d", &input);
	while (input % 2 == 0) {
		printf("That's not an odd number.\n");
		printf("Please choose an odd number.\n");
		printf("Number? ");
		scanf("%d", &input);
	}

	return input;

}

void print_pyramid(int n)
{

	int i;
	int j;
	int counter;
	int end;

	counter = n;
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
}
