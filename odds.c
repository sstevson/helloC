/*
 * File: odds.c
 * ------------
 *  This program is a simplified version of the sumOfOddInt.c program. The idea
 *  was to test versions of get_num() until it worked properly at which point I
 *  could port it over to sumOfOddInt.c.
 */

#include <stdio.h>
int get_num(int input);

int main(int argc, char *argv[]) {

	int i;
	int odds;
	int counter;
	int total;
	int input;

	input = 0;
	odds = 1;
	total = 1;
	counter = get_num(input);
	for (i = 1; i < counter; i++) {
		odds += 2;
		total += odds;
	}

	printf("%d\n", counter * counter);
	printf("%d\n", total);
}

int get_num(int input)
{
	printf("Number? ");
	scanf("%d", &input);
	return (input);
}
