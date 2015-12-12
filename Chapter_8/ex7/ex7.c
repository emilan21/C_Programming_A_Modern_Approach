/* Reads a 5x5 array of intergers and then prints the row sums and the column sums: */

#include <stdio.h>

#define SIZE ((int) (sizeof(int_array) / sizeof(int_array[0])))
#define ROWSIZE ((int) (sizeof(row_sums) / sizeof(row_sums[0])))
#define COLUMNSIZE ((int) (sizeof(column_sums) / sizeof(column_sums[0])))

int main(void)
{
	int i, j;
	int int_array[5][5];
	int row_sums[5];
	int column_sums[5];

	/* initalize the int_array to 0 */
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			int_array[i][j] = 0;			
	}		

	/* initalize the row_sums to 0 */
	for (i = 0; i < ROWSIZE; i++) {
		row_sums[i] = 0;			
	}		

	/* initalize the column_sums to 0 */
	for (i = 0; i < COLUMNSIZE; i++) {
		column_sums[i] = 0;			
	}		
	
	/* get input */
	for (i = 0; i < SIZE; i++) {
		printf("Enter row %d: ", i + 1);	
		for (j = 0; j < SIZE; j++) {
			scanf("%d", &int_array[i][j]);
		}
	}	

	/* compute sums of rows and colums */
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			row_sums[i] = row_sums[i] + int_array[i][j];
			column_sums[i] = column_sums[i] + int_array[j][i];
		}
	}

	/* output */
	printf("\n");

	printf("Row totals: ");
	for (i = 0; i < ROWSIZE; i++)
		printf("%d ", row_sums[i]);
	printf("\n");
	
	printf("Columns totals: ");
	for (i = 0; i < COLUMNSIZE; i++)
		printf("%d ", column_sums[i]);
	printf("\n");
	
	return 0;
}
