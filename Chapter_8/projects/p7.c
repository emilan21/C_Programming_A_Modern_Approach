// Name: p7.c
// Purpose: Reads a 5 x 5 array of intergers and then prints the row
// sums and the columns sums
// Author: EM

#include <stdio.h>

#define SIZE 5

int main(void)
{
        int a[SIZE][SIZE] = {0};
        int row_sums[SIZE] = {0};
        int column_sums[SIZE] = {0};
        int row_num = 0;
        int column_num = 0;

        /* Get 5 x 5 input */
        for (int i = 0; i < SIZE; i++) {
            printf("Enter row %d: ", i + 1);
            for (int y = 0; y < SIZE; y++) {
                scanf("%d", &a[i][y]);
            }
        }

        /* Sum rows and columns */
        for (int i = 0; i < SIZE; i++) {
            for (int y = 0; y < SIZE; y++) {
                row_num = a[i][y];
                row_sums[i] += row_num;
            }
        }

        for (int y = 0; y < SIZE; y++) {
            for (int i = 0; i < SIZE; i++) {
                column_num = a[y][i];
                column_sums[i] += column_num;
            }
        }

        /* Print rows and columns */
        printf("Row totals: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", row_sums[i]);
        }
        printf("\n");

        printf("Column totals: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", column_sums[i]);
        }
        printf("\n");

        return 0;
}
