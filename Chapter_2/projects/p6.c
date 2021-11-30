// Name: p6.c
// Purpose: Prompts the user the enter a value for x and displays the value
// of a polynomial.
// Author: EM

#include <stdio.h>

int main(void)
{
        int x = 0;
        int cal = 0;
        int poly1 = 0;
        int poly2 = 0;
        int poly3 = 0;
        int poly4 = 0;
        int poly5 = 0;

        printf("Enter a value for x: ");
        scanf("%d", &x);

        poly1 = 3 * x + 2;
        poly2 = poly1 * x - 5;
        poly3 = poly2 * x - 1;
        poly4 = poly3 * x + 7;
        poly5 = poly4 * x - 6;

        printf("Polynomial Value: %d\n", poly5);

        return 0;
}
