/* calculates dollars and cents amount with 5% tax added */

#include <stdio.h>

#define TAX .05

int main(void)
{
	float amount;
	float total_amount;
	
	printf("Enter a dollar and cent amount: ");
	scanf("%f", &amount);

	total_amount = amount + (amount * TAX);

	printf("With tax added: $%.2f\n", total_amount);

	return 0;
}
