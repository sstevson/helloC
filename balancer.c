/*
 * File: balancer.c
 * ----------------
 *  This program balances your checkbook based on an initial balance plus
 *  any additional deposits you enter.
 */

#include <stdio.h>

int GetInteger(void);

int main(int argc, char *argv[]) {

  int value, balance = 0;

  // get initial account balance
  printf("Enter initial balance: ");
  value = GetInteger();
  balance += value;
  printf("Your starting balance is %d.\n", balance);

  // ask user if he has any deposits to add
  while (1) {
    printf("Add any deposits: ");
    value = GetInteger();
    if (value == 0) break;
    balance = balance + value;
    printf("Current balance is %d.\n", balance);
  }

  printf("Your final balance is %d.\n", balance);

  return 0;
}

int GetInteger(void) {

  int input;
  scanf("%d", &input);

  return input;

}
