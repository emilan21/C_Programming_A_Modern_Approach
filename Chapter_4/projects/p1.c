// Name: p1.c
// Purpose: Takes in a two digit number and reverses the digits
// Author: EM

#include <stdio.h>

int main(void)
{
	int num;
	int first_digit;
	int last_digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &num);

	first_digit = num / 10;
	last_digit = num % 10;

	printf("The reversal is : %d%d\n", last_digit, first_digit);

        return 0;
}
