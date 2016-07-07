/* reverses a three digit number */

#include <stdio.h>

int main(void)
{
	int number;
	int first_digit;
	int second_digit;
	int last_digit;

	printf("Enter a three-digit number: ");
	scanf("%d", &number);
	
	first_digit = number / 100;
	printf("First digit is: %d\n", first_digit);
	second_digit = (number / 10) % 10;
	last_digit = number % 10;
	printf("Last digit is: %d\n", last_digit);
	
	printf("The reversal is: %d%d%d\n", last_digit, second_digit, first_digit);

	return 0;
}
