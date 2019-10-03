/* Example 9
 *
 * By Scott Stevson
 * written on September 30, 2019
 *
 */

#include <stdio.h>

// declaring the main function which is an integer data type
int main(int argc, char *argv[]) {

  //declaring i as an integer variable, and initializing it to zero
  int i = 0;
  //starting a while-loop that says as long as i is less than 25, then print
  //that number and increment to the next number
  while (i < 25) {
    printf("%d", i);
    i++;
  }
  //printing a final newline
  printf("\n");

  //returning from the function
  return 0;

}
