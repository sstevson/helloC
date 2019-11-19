/*
 * File: w3resource_2.c
 * --------------------
 *  This program gets the installed Clang version and prints it to the screen
 *  per the instructions in https://www.w3resource.com/c-programming-exercises.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

#if __STDC_VERSION__ >= 201710L
	printf("We are using C18!\n");
#elif __STDC_VERSION__ >= 201110L
	printf("We are using C11!\n");
#elif __STDC_VERSION__ >= 199901L
	printf("We are using C99!\n");
#else
	printf("We are using C89/C90!\n");
#endif

	return 0;
}
