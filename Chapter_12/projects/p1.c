// Name: p1.c
// Purpose: Reverse message
// Author: EM

#include <stdio.h>

#define N 100

int main(void)
{
        char a[N] = {'\0'};
        char *p = NULL;
        int i = 0;

        printf("Enter a message: ");
        while ((p = getchar()) != '\n') {
            a[i] = p;
            i++;
        }

        printf("Reversal is: ");
        for (p = a + N - 1; p >= a; p--) {
            printf("%c", *p);
        }
        printf("\n");

        return 0;
}
