// Name: p6.c
// Purpose: Computes the following polynomial: 3x^5 + 2x^4 + 5x^3 - x^2 + 7x - 6
// Author: EM

#include <stdio.h>
#include <math.h>

float
compute_polynomial(float x)
{
    float result;

    result = 3 * pow(x, 5.0f) + 2 * pow(x, 4.0f) + 5 * pow(x, 3.0f) - pow(x, 2.0f) + 7 * x - 6;

    return result;
}

int main(void)
{
        float x;

        printf("Enter a number for x: ");
        scanf("%f", &x);

        printf("The polynomial value when solved for %.2f is %.2f\n", x, compute_polynomial(x));

        return 0;
}
