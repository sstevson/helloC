/*
 * File: balancer.c
 * ----------------
 *  This program balances your checkbook based on an initial balance plus
 *  any additional deposits you enter.
 */

#include <stdio.h>

int get_int(void);

int main(int argc, char *argv[]) {

  int value, balance = 0;

  // get initial account balance
  printf("Enter initial balance: ");
  value = get_int();
  balance += value;
  printf("Your starting balance is %d.\n", balance);

  // ask user if he has any deposits to add
  while (1) {
    printf("Add any deposits: ");
    value = get_int();
    if (value == 0) break;
    balance = balance + value;
    printf("Current balance is %d.\n", balance);
  }

  printf("Your final balance is %d.\n", balance);

  return 0;
}

int get_int(void) {

  int input;
  scanf("%d", &input);

  return input;

}
