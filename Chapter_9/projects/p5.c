// Name: p5.c
// Purpose: Prints an n x n magic square
// Author: EM

#include <stdio.h>

int main(void)
{
        int n;
        int i;
        int y;

        printf("This program creates a magic square of a specified size.\n");
        printf("The size must be an odd number between 1 and 99.\n");
        printf("Enter size of magic square: ");
        scanf("%d", &n);

        int a[n][n];

        for (i = 0; i < n; i++) {
            for (y = 0; y < n; y++) {
                a[i][y] = 0;
            }
        }

        a[0][n / 2] = 1;

        for (i = 0; i < n; i++) {
            for (y = 0; y < n; y++) {
                a[i + 1][y + 1] = (y + 1) * (y + 1);
            }
        }

        for (i = 0; i < n; i++) {
            for (y = 0; y < n; y++) {
                printf("%3d ", a[i][y]);
            }
            printf("\n");
        }



        return 0;
}
