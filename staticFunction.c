/*
 * File: staticFunction.c
 * ----------------------
 * This program uses a function to increment a variable and then prints in
 * descending order the number of times it calls that function.
 */

#include <stdio.h>

void func(void); // Function declaration

static int count = 5; // Global variable

int main(int argc, char *argv[]) {

  while(count--) {
    func();
  }

  return 0;

}

void func(void) {

  static int i = 5; // Local static variable
  i++;

  printf("i is %d and count is %d.\n", i, count);

}
