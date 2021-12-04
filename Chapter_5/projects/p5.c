// Name: p5.c
// Purpose: Ask user to enter the amount of taxable income then displays the tax due
// Author: EM

#include <stdio.h>

int main(void)
{
        float income;

	printf("Enter taxable income: ");
	scanf("%f", &income);

	if (income < 750.00f)
		printf("Tax due: %.2f\n", income * .01f);
	else if (income > 750.00f && income < 2250.00f)
		printf("Tax due: %.2f\n", 7.50f + (.02f * (income - 750.00f)));
	else if (income > 2250.00f && income < 3750.00f)
		printf("Tax due: %.2f\n", 37.50f + (.03f * (income - 2250.00f)));
	else if (income > 3750.00f && income < 5250.00f)
		printf("Tax due: %.2f\n", 82.50f + (.04f * (income - 3750.00f)));
	else if (income > 5250.00f && income < 7000.00f)
		printf("Tax due: %.2f\n", 142.50f + (.05f * (income - 5250.00f)));
	else if (income > 7000.00f)
		printf("Tax due: %.2f\n", 230.00f + (.06f * (income - 7000.00f)));

        return 0;
}
