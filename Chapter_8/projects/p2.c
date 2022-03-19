/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>    /* C99 Only */

#define NUM_OF_DIGITS 10

int main(void)
{
    int digit_amount[NUM_OF_DIGITS] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0) {
        digit = n % NUM_OF_DIGITS;
        digit_amount[digit] += 1;
        n /= NUM_OF_DIGITS;
    }

    printf("Digit:\t\t");
    for (int i = 0; i < NUM_OF_DIGITS; i++) {
        printf("%d\t", i);
    }
    printf("\n");

    printf("Occurrences:\t");
    for (int i = 0; i < NUM_OF_DIGITS; i++) {
        printf("%d\t", digit_amount[i]);
    }
    printf("\n");

    return 0;
}
