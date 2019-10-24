/*
 * File: robertsExercise_3.3.c
 * ---------------------------
 *
 * This program uses a for loop to print the repeated parts of Macbeth's
 * lament, "Tomorrow and tomorrow and tomorrow" an arbitrary number of times
 * based on the user input.
 */

#include <stdio.h>

int GetInteger(void) {
    int input;
    scanf("%d", &input);
    return input;
}

int main(int argc, char *argv[]) {
    int i, counter = 0;

    printf("How many times would you like me to repeat \"and tomorrow\"?.");
    counter = GetInteger();
    for (i = 0; i < counter; i++) {
        if (i == counter - 1) {
            printf("and tomorrow.\n");
        } else {
            printf("and tomrrow ");
        }
    }

    return 0;

}
