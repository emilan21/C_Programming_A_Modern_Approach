/* get taxable income from user. Display tax due */

#include <stdio.h>

int main(void)
{
	int income;
	float amount_tax;

	printf("Enter taxable income: ");
	scanf("%d", &income);

	if (income < 750)
		amount_tax = 750 * .01;
	else if (income >= 750 && income <= 2250)
		amount_tax = 7.50f + (income * .02);
	else if (income >= 2250 && income <= 3750)
		amount_tax = 37.50f + (income * .03);
	else if (income >= 3750 && income <= 5250)
		amount_tax = 82.50f + (income * .04);
	else if (income >= 5250 && income <= 7000)
		amount_tax = 142.50f + (income * .05);
	else if (income > 7000)
		amount_tax = 230.00f + (income * .06);
	else
		printf("Invaild Amount\n");

	printf("Tax due: $%.2f\n", amount_tax);
	
	return 0;	
}
