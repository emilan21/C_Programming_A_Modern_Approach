/* reverses a three digit number */

#include <stdio.h>

int main(void)
{
	int first_digit;
	int second_digit;
	int last_digit;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &first_digit, &second_digit, &last_digit);
	
	printf("The reversal is: %d%d%d\n", last_digit, second_digit, first_digit);

	return 0;
}
