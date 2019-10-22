/*
 * File: balancer.c
 * ----------------
 *  This program balances your checkbook based on an initial balance plus
 *  any additional deposits you enter. This program now supports floating point
 *  numbers so that the user can enter both dollars and cents. This program now
 *  supports the deduction of bounced check fees when a user has a balance that
 *  will not cover a check he enters.
 */

#include <stdio.h>

/*
 * Constant: BouncedCheckFee
 * -------------------------
 *  To change the amount of the fee charged for bounced checks, simply change
 *  the value of this constant.  The constant must be a floating point number
 *  (i.e., must contain at least one decimal point)
 */

#define BouncedCheckFee 10.00

float GetInteger(void);

int main(int argc, char *argv[]) {

  float value, balance = 0;

  // get initial account balance
  printf("Enter initial balance: ");
  value = GetInteger();
  balance += value;
  printf("Your starting balance is $%.2f.\n", balance);

  // ask user if he has any deposits to add
  while (1) {
    printf("Add any deposits: ");
    value = GetInteger();
    if (value == 0) break;
    balance = balance + value;
    if (value < 0 && balance < 0) {
      printf("Insufficient funds. $%.2f fee deducted.\n", BouncedCheckFee);
      balance -= BouncedCheckFee;
    }

    printf("Current balance is $%.2f.\n", balance);
  }

  printf("Your final balance is $%.2f.\n", balance);

  return 0;
}

float GetInteger(void) {

  float input;
  scanf("%f", &input);

  return input;

}
