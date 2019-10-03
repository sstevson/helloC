/*
 * File: ex10.c
 * ------------
 *
 * An introduction to switch statements
 */

#include <stdio.h>

// Declare the main function which is an integer type
int main(int argc, char *argv[]) {

  // Check that the user supplied an argument
  if (argc != 2) {
    printf("Error. You need one argument.\n");
    // this is how you abort the program
    return 1;
  }

  // Declare an integer variable (call it i) and initilize it to zero
  int i =0;

  // Start a for-loop which says to increment i from a beginning value of zero
  // if the argument vector number isn't a null terminator.  In other words,
  // store any character in the array that isn't a null character.
  for (i = 0; argv[1][i] != '\0'; i++) {

    // Declare a character variable (call it letter) and assign the current
    // argument vector as its value.
    char letter = argv[1][i];

    // Begin switch statement
    // If the letter is one of these vowels, then print it along with its
    // argument vector position
    switch (letter) {
      case 'a':
      case 'A':
        printf("argv[%d]: 'A'\n", i);
        break;

      case 'e':
      case 'E':
        printf("argv[%d]: 'E'\n", i);
        break;

      case 'i':
      case 'I':
        printf("argv[%d]: 'I'\n", i);
        break;

      case 'o':
      case 'O':
        printf("argv[%d]: 'O'\n", i);
        break;

      case 'u':
      case 'U':
        printf("argv[%d]: 'U'\n", i);
        break;

      case 'y':
      case 'Y':
        // Treat Y like a vowel is its vector position is greater than 2
        if (i > 2) {
          // it's only sometimes Y
          printf("argv[%d]: 'Y'\n", i);
        }
        break;
      // The default case statement.
      default:
        printf("argv[%d] %c is not a vowel\n", i, letter);
    }
  }

  return 0;
}
