// Name: p3.c
// Purpose: Asks the user to enter a fraction, then reduces the fraction to the lowest terms.
// Author: EM

#include <stdio.h>

int main(void)
{
        int num;
	int denom;
	int gcd;
	int r;
	int temp_num;
	int temp_denom;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);

	temp_num = num;
	temp_denom = denom;

	for (;;) {
		if (temp_num == 0) {
			gcd = temp_denom;
			break;
		} 

		r = temp_denom % temp_num;
		temp_denom = temp_num;
		temp_num = r;
	}

	printf("In lowest terms: %d/%d\n", num / gcd, denom / gcd);

        return 0;
}
