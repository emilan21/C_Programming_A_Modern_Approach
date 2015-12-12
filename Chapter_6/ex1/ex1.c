/* finds largest in a series of numbers entered by the user */

#include <stdio.h>

int main(void)
{
	float number = 0.0;
	float storage = 0.0;

	for (;;) {
		printf("Enter a number: ");
		scanf("%f", &number);
		
		if (number > storage)
			storage = number;
		if (number == 0)
			break;	
	}

	printf("\nThe largest number entered was %.2f\n", storage);
	
	return 0;
}
