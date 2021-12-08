// Name: p5.c
// Purpose: Takes in a two digit number and reverses the digits
// Author: EM

#include <stdio.h>

int main(void)
{
	int num;
	int reversal = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The reversal is : ");

	do {
		printf("%d", num % 10);
		num /= 10;
	} while (num > 0);

	printf("\n");

        return 0;
}
