/*
 * File: add2Integers
 * ------------------
 * This program read in two decimal integers, adds them, and prints their sum
 */

#include <stdio.h>

// declare a function that gets an integer from the user
int getInteger(void) {
  int input;
  scanf("%d", &input);
  return input;
}


int main(int argc, char *argv[]) {
  int n1, n2, total;

  printf("This program adds two numbers.\n");
  printf("First number? ");
  n1 = getInteger();
  // scanf("%d", &n1);
  printf("Second number? ");
  n2 = getInteger();
  // scanf("%d", &n2);
  total = n1 + n2;
  printf("Your total is %d.\n", total);

  return 0;
}
