/*
 * File: readAndPrintChar.c
 * ------------------------
 * This program reads a string of character data types, and then prints them to
 * the console.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

  char input[0];

  printf("Enter a string of characters: ");
  scanf("%s", input);
  printf("You entered %s.\n", input);

  return 0;
}
