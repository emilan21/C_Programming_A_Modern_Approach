/* asks the user to enter a fraction, then reduces the fraction to lowest terms */

#include <stdio.h>

int main(void)
{
	int numerator;
	int denominator;
	int num_temp;
	int den_temp;
	int low_num;
	int low_den;
	int remainder;
	int gcd;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	num_temp = numerator;
	den_temp = denominator;
	
	if (denominator == 0)
		gcd = numerator;
	else {
		while (denominator != 0) {
			remainder = numerator % denominator;
			numerator = denominator;
			denominator = remainder;
		}
		gcd = numerator;
	}
	
	low_num = num_temp / gcd;
	low_den = den_temp / gcd;
	
	printf("In lowest terms: %d/%d\n", low_num, low_den);

	return 0;	
}
