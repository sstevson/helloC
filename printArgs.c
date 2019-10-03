/*
 * File: printArgs.c
 * -----------------
 * This program accepts an arbitrary number of arguments and prints them out.
 */

// Include the standard IO library.
#include <stdio.h>

// Declare the main function with an argument count and argument vector.
int main(int argc, char *argv[])
{
  // Declare the 'count' variable.
  int count;
  // Print the single argument with which the user called the program.
  printf("This program was called with \"%s\".\n", argv[0]);

  // If the argument count is greater than one, increment the count variable
  // to a number equal to all the arguments the user provided.
  if (argc > 1)
  {
    for (count = 1; count < argc; count++)
    {
      // And then print the string corresponding to the argument vector
      // position.
      printf("argv[%d] = %s\n", count, argv[count]);
    }
  }
  else
  {
    // Otherwise, let the user know there are no other arguments.
    printf("The command has no other arguments.\n");
  }

  return 0;
}
