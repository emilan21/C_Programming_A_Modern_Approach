// Name: p4.c
// Purpose: Add 5% tax to dollar and cents amount.
// Author: EM

#include <stdio.h>

#define TAX .05f

int main(void)
{
        float orginal_amount = 0.0f;
        float total_amount = 0.0f;

        printf("Enter a dolars and cents amount: ");
        scanf("%f", &orginal_amount);

        total_amount = (orginal_amount * TAX) + orginal_amount;

        printf("Total Amount: $%.2f\n", total_amount);



        return 0;
}
