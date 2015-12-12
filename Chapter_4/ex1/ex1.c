/* reverses a two digit number */

#include <stdio.h>

int main(void)
{
	int number;
	int first_digit;
	int last_digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	
	first_digit = number / 10;
	last_digit = number % 10;
	
	printf("The reversal is: %d%d\n", last_digit, first_digit);

	return 0;
}
