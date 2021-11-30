// Name: p5.c
// Purpose: Prompts the user to enter the numbers from 1 to 16 (in any order)
// and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
// and diagonals
// Author: EM

#include <stdio.h>

int main(void)
{
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int x4 = 0;
	int x5 = 0;
	int x6 = 0;
	int x7 = 0;
	int x8 = 0;
	int x9 = 0;
	int x10 = 0;
	int x11 = 0;
	int x12 = 0;
	int x13 = 0;
	int x14 = 0;
	int x15 = 0;
	int x16 = 0;
	int row_sum1 = 0;
	int row_sum2 = 0;
	int row_sum3 = 0;
	int row_sum4 = 0;
	int column_sum1 = 0;
	int column_sum2 = 0;
	int column_sum3 = 0;
	int column_sum4 = 0;
	int diag_sum1 = 0;
	int diag_sum2 = 0;

        printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &x1, &x2, &x3, &x4,
						  &x5, &x6, &x7, &x8,
						  &x9, &x10, &x11, &x12,
						  &x13, &x14, &x15, &x16);
	row_sum1 = x1 + x2 + x3 + x4;
	row_sum2 = x5 + x6 + x7 + x8;
	row_sum3 = x9 + x10 + x11 + x12;
	row_sum4 = x13 + x14 + x15 + x16;

	column_sum1 = x1 + x2 + x3 + x4;
	column_sum2 = x5 + x6 + x7 + x8;
	column_sum3 = x9 + x10 + x11 + x12;
	column_sum4 = x13 + x14 + x15 + x16;

	diag_sum1 = x1 + x6 + x11 + x16;
	diag_sum2 = x13 + x10 + x7 + x4;

	printf("%d\t%d\t%d\t%d\n", x1, x2, x3, x4);
	printf("%d\t%d\t%d\t%d\n", x5, x6, x7, x8);
	printf("%d\t%d\t%d\t%d\n", x9, x10, x11, x12);
	printf("%d\t%d\t%d\t%d\n", x13, x14, x15, x16);

	printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
	printf("Column sums: %d %d %d %d\n", column_sum1, column_sum2, column_sum3, column_sum4);
	printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2);

        return 0;
}
