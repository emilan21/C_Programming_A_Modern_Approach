// Name: p2.c
// Purpose: Takes in two integers, then calculates and displays their
// greatest common divisor (GCD)
// Author: EM

#include <stdio.h>

int main(void)
{
        int m;
	int n;
	int r;
	int gcd;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);

	for (;;) {
		if (n == 0) {
			gcd = m;
			break;
		}

		r = m % n;
		m = n;
		n = r;
	}

	printf("Greatest common divisor: %d\n", gcd);

        return 0;
}
