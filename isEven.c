/*
 * File: isEven.c
 * --------------
 *  This program is a study using boolean data types.
 */

#include <stdio.h>

int is_even(int i);

int main(int argc, char *argv[]) {

	int i;

	for (i = 1; i <= 20; i++) {
		if (is_even(i)) printf("%2d\n", i);
	}
}

int is_even(int i)
{
	return (i % 2 == 0);

}
