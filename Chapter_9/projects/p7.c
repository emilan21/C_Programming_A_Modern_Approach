// Name: p7.c
// Purpose: Purposehere
// Author: EM

#include <stdio.h>

int
power(int x, int n)
{
    if (n == 0) {
        return 1;
    }
    else {
        if (n % 2 == 0) {
            return x * power(x, n - 1);
            //return (x * power(x, n / 2)) * 2;
        }

        //if (n % 2 == 1) {
        //    return x * x * n - 1 * power(x, n / 2);
        //}
    }
}

int main(void)
{
        int x;
        int n;
        int result;

        printf("Enter a number: ");
        scanf("%d", &x);
        printf("Enter a power: ");
        scanf("%d", &n);

        result = power(x, n);

        printf("The power of %d and %d is %d\n", x, n, result);

        return 0;
}
