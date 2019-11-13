#include <stdio.h>

int main(int argc, char *argv[]) {

	int x = 1;

	for (int i=0; i<3; i++)
		x += 5*i;

	printf("%d\n", x);
}
