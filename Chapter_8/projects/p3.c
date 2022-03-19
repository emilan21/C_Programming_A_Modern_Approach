/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>    /* C99 Only */

int main(void)
{
    bool digit_seen[10] = {false};
    bool repeat_flag = false;
    int digit;
    long n;

    printf("Enter a 0 or a negative number to quit\n");

    while (true) {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n <= 0) {
            printf("Quiting Program\n");
            break;
        }
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                repeat_flag = true;
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (repeat_flag)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        repeat_flag = false;
        for (int i = 0; i < 10; i++)
            digit_seen[i] = false;
    }

    return 0;
}
