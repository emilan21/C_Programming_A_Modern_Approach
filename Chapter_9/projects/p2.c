// Name: p2.c
// Purpose: Ask user to enter the amount of taxable income then displays the tax due
// Author: EM

#include <stdio.h>

float
calulate_tax(float income)
{
    float tax_due;
    
	if (income < 750.00f)
		tax_due = income * .01f;
	else if (income > 750.00f && income < 2250.00f)
		tax_due = 7.50f + (.02f * (income - 750.00f));
	else if (income > 2250.00f && income < 3750.00f)
		tax_due = 37.50f + (.03f * (income - 2250.00f));
	else if (income > 3750.00f && income < 5250.00f)
		tax_due = 82.50f + (.04f * (income - 3750.00f));
	else if (income > 5250.00f && income < 7000.00f)
		tax_due = 142.50f + (.05f * (income - 5250.00f));
	else if (income > 7000.00f)
		tax_due = 230.00f + (.06f * (income - 7000.00f));

    return tax_due;
}

int main(void)
{
    float income;

	printf("Enter taxable income: ");
	scanf("%f", &income);

    printf("The amount of tax due is %.2f\n", calulate_tax(income));

    return 0;
}
