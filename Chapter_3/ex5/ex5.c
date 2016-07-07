#include <stdio.h>

int main(void)
{
	int num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, 
	    num_9, num_10, num_11, num_12, num_13, num_14, num_15, num_16;
	int row_1_sum = 0;
	int row_2_sum = 0;
	int row_3_sum = 0;
	int row_4_sum = 0;
	int col_1_sum = 0;
	int col_2_sum = 0;
	int col_3_sum = 0;
	int col_4_sum = 0;
	int diag_1_sum = 0;
	int diag_2_sum = 0;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num_1, &num_2, &num_3, &num_4, 
		&num_5, &num_6, &num_7, &num_8, &num_9, &num_10, &num_11, &num_12,
		&num_13, &num_14, &num_15, &num_16);

	printf("\n%d %d %d %d\n", num_1, num_2, num_3, num_4);
	printf("%d %d %d %d\n", num_5, num_6, num_7, num_8);
	printf("%d %d %d %d\n", num_9, num_10, num_11, num_12);
	printf("%d %d %d %d\n", num_13, num_14, num_15, num_16);

	row_1_sum = num_1 + num_2 + num_3 + num_4;
	row_2_sum = num_5 + num_6 + num_7 + num_8;
	row_3_sum = num_9 + num_10 + num_11 + num_12;
	row_4_sum = num_13 + num_14 + num_15 + num_16;

	col_1_sum = num_1 + num_5 + num_9 + num_13;
	col_2_sum = num_2 + num_6 + num_10 + num_14;
	col_3_sum = num_3 + num_7 + num_11 + num_15;
	col_4_sum = num_4 + num_8 + num_12 + num_16;

	diag_1_sum = num_1 + num_6 + num_11 + num_16;
	diag_2_sum = num_13 + num_10 + num_7 + num_4;

	printf("Row sums: %d %d %d %d\n", row_1_sum, row_2_sum, row_3_sum, row_4_sum);
	printf("Column sums: %d %d %d %d\n", col_1_sum, col_2_sum, col_3_sum, col_4_sum);
	printf("Diagonal sums: %d %d\n", diag_1_sum, diag_2_sum);

	return 0;
}
