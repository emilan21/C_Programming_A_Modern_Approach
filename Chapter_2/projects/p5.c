// Name: p5.c
// Purpose: Prompts the user the enter a value for x and displays the value
// of a polynomial.
// Author: EM

#include <stdio.h>

int main(void)
{
        int x = 0;
        int cal = 0;

        printf("Enter a value for x: ");
        scanf("%d", &x);

        cal = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);

        printf("Polynomial Value: %d\n", cal);

        return 0;
}
