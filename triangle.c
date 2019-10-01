#include <stdio.h>

void printStar(int size) {

//  int starCount = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 1; j <= size; j++) {
      printf("*");
    }
    printf("\n");
  }

}

int main(int argc, char *argv[]) {

  printStar(5);

}
