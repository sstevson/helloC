/*
 * File: robertsExercise_3.4.c
 * ---------------------------
 *
 *  This program accepts a range of integers and then prints that squares of
 *  each number in the range.
 */

#include <stdio.h>

int GetInteger(void) {
  int input;
  scanf("%d", &input);
  return input;
}

int main(int argc, char *argv[]) {
  int i, r1, r2 = 0;

  printf("This program sqaures integers within a range.\n");
  printf("Enter starting number ");
  r1 = GetInteger();
  printf("Enter ending number ");
  r2 = GetInteger();
  for (i = r1; i <= r2; i++) {
    printf("%d\n", i * i);
  }

  return 0;

}
