// Name: p3.c
// Purpose: Reverse message - simplfied array pointers
// Author: EM

#include <stdio.h>

#define N 100

int main(void)
{
        char a[N] = {'\0'};
        char *p = a;

        printf("Enter a message: ");
        while ((*p = getchar()) != '\n') {
            p++;
        }

        printf("Reversal is: ");
        for (p = a + N - 1; p >= a; p--) {
            printf("%c", *p);
        }
        printf("\n");

        return 0;
}
