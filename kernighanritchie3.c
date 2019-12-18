/*
 * File: kernighanritchie3.c
 * A simple converter for temperatures Fahrenheit-Celsius.
 * Similar to kernighanritchie2.c but this program prints the temperatures in
 * descending order.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;
	while (fahr >= lower) {
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
	return 0;
}
