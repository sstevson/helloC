/*
 * File: add2Doubles
 * -----------------
 * This program read in two double integers, adds them, and prints their sum
 */

#include <stdio.h>

// declare a function that gets an integer from the user
int getDouble(void) {
  float input;
  scanf("%f", &input);
  return input;
}


int main(int argc, char *argv[]) {
  float n1, n2, total;

  printf("This program adds two numbers.\n");
  printf("First number? ");
  n1 = getDouble();
  printf("Second number? ");
  n2 = getDouble();
  total = n1 + n2;
  printf("Your total is %f.\n", total);

  return 0;
}
