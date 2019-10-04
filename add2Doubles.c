/*
 * File: add2Doubles
 * -----------------
 * This program read in two double integers, adds them, and prints their sum
 */

#include <stdio.h>

// declare a function that gets an integer from the user
double getDouble(void) {
  double input;
  scanf("%lf", &input);
  return input;
}


int main(int argc, char *argv[]) {
  double n1, n2, total;

  printf("This program adds two numbers.\n");
  printf("First number? ");
  n1 = getDouble();
  printf("Second number? ");
  n2 = getDouble();
  total = n1 + n2;
  printf("Your total is %lg.\n", total);

  return 0;
}
