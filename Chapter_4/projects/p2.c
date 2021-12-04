// Name: p2.c
// Purpose: Takes in a three digit number and reverses the digits
// Author: EM

#include <stdio.h>

int main(void)
{
	int num;
	int first_digit;
	int middle_digit;
	int last_digit;

	printf("Enter a three-digit number: ");
	scanf("%d", &num);

	first_digit = (num / 10) / 10;
	middle_digit = (num / 10) % 10;
	last_digit = num % 10;

	printf("The reversal is : %d%d%d\n", last_digit, middle_digit, first_digit);

        return 0;
}
