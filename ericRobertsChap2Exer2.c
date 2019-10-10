/*
 * File: ericRobertsChap2Exer2.c
 * -----------------------------
 *  This program reads two double floating point values and then multiplies
 *  them before dividing them by 2, and then prints the result.
 */

#include <stdio.h>

// Declare the getDouble() function
double getDouble(void);

int main(int agrc, char *argv[]) {

  double b, h, a;

    printf("Enter b: "); // Request user enter value for "b"
    b = getDouble();
    printf("Enter h: "); // Request user enter value for  "h"
    h = getDouble();
    a = ( b * h ) / 2; // Assign "a" the value of this expression
    printf("a = %.1lf\n", a); // Print the result

  return 0;
}

/* Define the getDouble() function that reads a double floating point number
 * from the user.
 */

double getDouble(void) {
  double input;
  scanf("%lf", &input);
  return input;
}
