/*
 * File: thisOldMan.c
 * ------------------
 *  This program prints the words to the song "This old man" and replaces the
 *  number in line 1 and rhyming word in line 2. See Chapter 4, exercise 2 in
 *  the book "The Art and Science of C" for complete details.
 */

#include <stdio.h>

// Function prototype

void rhyme(int i);

int main(int argc, char *argv[]) {

	int i;

	for (i = 1; i <= 10; i++) {
		printf("This old man, he played %d.\n", i);
		printf("He played knick-knack on my ");
		rhyme(i);
		printf("With a knick-knack, paddy-whack,\n");
		printf("Give your dog a bone.\n");
		printf("This old man came rolling home.\n");
		printf("\n");
	}

	return 0;
}

/*
 * Function: rhyme()
 * -----------------
 *  This function accepts an integer argument and returns whichever string maps
 *  to the value of that integer
 */

void rhyme(int i)
{

	switch (i) {
		case  1: printf("thumb.\n"); break;
		case  2: printf("shoe.\n"); break;
		case  3: printf("knee.\n"); break;
		case  4: printf("door.\n"); break;
		case  5: printf("hive.\n"); break;
		case  6: printf("sticks.\n"); break;
		case  7: printf("heaven.\n"); break;
		case  8: printf("pate.\n"); break;
		case  9: printf("spine.\n"); break;
		case 10: printf("shin.\n"); break;
	}
}
