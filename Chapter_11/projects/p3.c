// Name: p3.c
// Purpose: Asks the user to enter a fraction, then reduces the fraction to the lowest terms.
// Author: EM

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int temp_num = numerator;
	int temp_denom = denominator;
    int r;
	int gcd;

	for (;;) {
		if (temp_num == 0) {
			gcd = temp_denom;
			break;
		} 

		r = temp_denom % temp_num;
		temp_denom = temp_num;
		temp_num = r;
	}

    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}

int main(void)
{
    int numerator;
	int denominator;
    int *reduced_numerator;
    int *reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);


	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}
