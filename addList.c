/*
 * File: addList.c
 * ---------------
 *  This program adds a list of numbers.  The user indicates the end of the
 *  input by entering 0 as a sentinel value.
 */

#include <stdio.h>

// Declare function
int getInteger(void);

int main(int argc, char *argv[]) {

  int value, total;

  printf("This program adds a list of numbers.\n");
  printf("Signal the end of the list with a 0 (zero).\n");
  total = 0;
  while (1) {
    printf("Number: ");
    value = getInteger();
    if (value == 0) break;
    total += value;
  }

  printf("The total is %d.\n", total);

}

// Define function that gets an integer from the user
int getInteger(void) {
  int input;
  scanf("%d", &input);
  return input;
}
