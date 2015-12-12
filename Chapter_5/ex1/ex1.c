/* calculate how many digits a number contains */

#include <stdio.h>

int main(void)
{
	int number;
	int digits;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 9)
		digits = 1;
	else if (number >= 10 && number <= 99)
		digits = 2;
	else if (number >= 100 && number <= 999)
		digits = 3;
	else if (number >= 1000 && number <= 9999)
		digits = 4;
	else 
		printf("Invaild Number\n");

	printf("The number %d has %d digits\n", number, digits);

	return 0;
}
