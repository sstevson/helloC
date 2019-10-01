#include <stdio.h>

int main(int argc, char *argv[]) {

  // intitialize i to zero
  int i = 0;

  // test the number of arguments.
  // if there's only one, let the user know
  if (argc == 1) {

    printf("You must supply at least one argument.\n");

    // test the number or arguments again
    // if there are between one and four,
    // print the arguments the user entered
  } else if (argc > 1 && argc < 4) {

    printf("Here are your arugments:\n");
    // loop through the number of arguments
    for (i = 0; i < argc; i++) {
    // for each one, print the string
      printf("%s ", argv[i]);

    }
    // print a newline after each
    printf("\n");
    // if the number of arguments is greater
    // than four, print the following statement
  } else {

    printf("You have too many arguments.\n");

  }

  // return your exit code
  return 0;

}
