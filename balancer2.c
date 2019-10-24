/*
 * File: balancer.c
 * ----------------
 *  This program balances your checkbook based on an initial balance plus
 *  any additional deposits you enter. This program now supports floating point
 *  numbers so that the user can enter both dollars and cents.
 */

#include <stdio.h>

float get_int(void);

int main(int argc, char *argv[]) {

  float value, balance = 0;

  // get initial account balance
  printf("Enter initial balance: ");
  value = get_int();
  balance += value;
  printf("Your starting balance is %.2f.\n", balance);

  // ask user if he has any deposits to add
  while (1) {
    printf("Add any deposits: ");
    value = get_int();
    if (value == 0) break;
    balance = balance + value;
    printf("Current balance is %.2f.\n", balance);
  }

  printf("Your final balance is %.2f.\n", balance);

  return 0;
}

float get_int(void) {

  float input;
  scanf("%f", &input);

  return input;

}
