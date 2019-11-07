#include <stdio.h>

int main(int argc, char *argv[]) {

	int n = 0;
	int o = 365;

	// calculate the day of the week in years past
	n = (n - o) % 7;
	printf("%d\n", n);

	return 0;
}
