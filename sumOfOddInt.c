/*
 * File: sumOfOddInt.c
 * -------------------
 *  This program reads a positive integer N and then calculates and displays the
 *  sum of the first N odd integers.  For example, if N is 4, the program should
 *  display the value 16, which is 1 + 3 + 5 + 7.  These values can also be
 *  calculated as N * N.
 */

#include <stdio.h>

// Function prototype

int get_int(int input);
int add_odds(int num);

int main(int argc, char *argv[]) {

	int input;
	int num;
	int sum;
	int product;

	input = 0;
	sum = 0;
	printf("Number? ");
	num = get_int(input);
	product = num * num;
	printf("%d\n", product);
	/* for (int i = 0; i < num; i++) {
		sum += add_odds(num);
	}*/
	sum += add_odds(num);
	printf("%d\n", sum);

	return 0;
}

int get_int(int input)
{
	scanf("%d", &input);
	return (input);
}

int add_odds(int num)
{
	int i;
	int odds;
	int total;

	total = 0;
	odds = 1;
	for (i = 0; i < num; i++) {
		odds += 2;
	}

	total += odds;
	return (total);
}
