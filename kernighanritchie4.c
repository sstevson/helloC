/*
 * File: kernighanritchie2.c
 * A simple converter for temperatures Fahrenheit-Celsius.
 * This version uses symbolic constants instead of variables.
 */

#include <stdio.h>

#define LOWER 0

#define UPPER 300

#define STEP  20

int main(int argc, char *argv[]) {

	float fahr, celsius;

	fahr = LOWER;
	while (fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	return 0;
}
