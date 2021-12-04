// Name: p3.c
// Purpose: Takes in a three digit number and reverses the digits
// Author: EM

#include <stdio.h>

int main(void)
{
	int first_digit;
	int middle_digit;
	int last_digit;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &first_digit, &middle_digit, &last_digit);

	printf("The reversal is : %d%d%d\n", last_digit, middle_digit, first_digit);

        return 0;
}
