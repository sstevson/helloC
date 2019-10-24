
/*
 * File: robertsExercise_3.2.c
 * ---------------------------
 * Exercise 2, Chapter 3, From "The Art and Science of C", by Eric Roberts.
 *
 * This program prints the phrase "Hello, world" 10 times on separate lines.
 */

#include <stdio.h>

// declare a function that gets an integer from the user
int GetInteger(void) {
  int input;
  scanf("%d", &input);
  return input;
}

int main(int argc, char *argv[]) {
  int i, count = 0;

  printf("How many times would you like me to print \"Hello, world?\". ");
  count = GetInteger();
  for (i = 0; i < count; i++) {
    printf("Hello, world!\n");
  }

  return 0;

}
