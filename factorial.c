/*
 * File: factorial.c
 * -----------------
 *  This progam reads an integer (num) and then prints the product of the
 *  integers 1 - num.
 */

#include <stdio.h>

int product(int num);
int get_num(int num);

int main(int argc, char *argv[]) {

	int num;

	num = 0;
	num = get_num(num);
	printf("%d\n", product(num));

	return 0;
}

int get_num(int num)
{
	printf("Number? ");
	scanf("%d", &num);
	return (num);
}

int product(int num)
{
	int i;
	int product;

	product = 1;
	for (i = 1; i <= num; i++) {
		product *= i;
	}

	return (product);
}
