// Name: p7.c
// Purpose: Compute the smalles number of $20, $10, $5, and $1 bills for a given amount.
// Author: EM

#include <stdio.h>

int main(void)
{
        int amount = 0;
        int twentys = 0;
        int tens = 0;
        int fives = 0;
        int dollars = 0;

        printf("Enter a dollar amount: ");
        scanf("%d", &amount);

        twentys = amount / 20;
        amount = amount - (twentys * 20);
        tens = amount / 10;
        amount = amount - (tens * 10);
        fives = amount / 5;
        amount = amount - (fives * 5);
        dollars = amount / 1;

        printf("$20 bills: %d\n", twentys);
        printf("$10 bills: %d\n", tens);
        printf("$5 bills: %d\n", fives);
        printf("$1 bills: %d\n", dollars);

        return 0;
}
