/*-----------------------------------------------------------------------------
 * c8p09.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 9, Page 179
 *
 * Write a program that generates a "random walk" across a 10x10 matrix.
 * The matrix will contain characters (all '.' initially). The program
 * must randomly "walk" from element to element, always going up, down,
 * left, or right by one element. The elements visited by the program
 * will be labeled with the letters A through Z, in the order visited.
 * Here's an example of the desired output:
 *
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 * Hint: Use the srand and rand functions (see deal.c) to generate random
 * numbers. After generating a number, look at its remainder when divided
 * by 4. There are four possible values for the remainder (0, 1, 2, and 3)
 * indicating the direction of the next move. Before performing a move,
 * check that (a) it won't go outside the matrix, and (b) it doesn't take
 * us to an element that already has a letter assigned. If either condition
 * is violated, try moving in another direction. If all four directions are
 * blocked, the program must terminate. Here's an example of a premature
 * termination:
 *
 *  A B G H I . . . . .
 *  . C F . J K . . . .
 *  . D E . M L . . . .
 *  . . . . N O . . . .
 *  . . W X Y P Q . . .
 *  . . V U T S R . . .
 *  . . . . . . . . . .
 *  . . . . . . . . . .
 *  . . . . . . . . . .
 *  . . . . . . . . . .
 *
 * Y is blocked on all four sides, so there's no place to put Z.
 *
 * Eric Milan
 * 03/05/2016
 *-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROW 10
#define COL 10

int main(void)
{
	char matrix[ROW][COL];	
	char trapped_letter;

	int row;
	int col;
	int direction;
	int i;
	int j;
	int times_blocked = 0;

	bool is_trapped = false;

	/* create a 10x10 matrix populated with the '.' character. */
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			matrix[i][j] = '.';	
		}
	}

	/* pick a random starting cell in the matrix */
	srand((unsigned) time(NULL));
	row = rand() % ROW;
	col = rand() % COL;

	matrix[row][col] = 'A';

	for (i = 'B'; i <= 'Z'; i++) {
		/* pick a random directions for the move */
		direction = ((rand() % ROW) % 4);

		switch (direction) {
		case 0:		/* north is the direction */
			/* North is open */
			if ((row - 1 >= 0) && (matrix[row - 1][col] == '.')) {
				matrix[--row][col] = i;
				printf("North: %c North to %c\n", i -1, i);
				break;
			} else {
				times_blocked++;
			}

			/* South is open */	
			if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
				matrix[++row][col] = i;
				printf("North: %c South to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
			
			/* East is open */
			if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
				matrix[row][++col] = i;
				printf("North: %c East to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
				/* West is open */
			if ((col - 1 >= 0) && (matrix[row][col-1] == '.')) {
				matrix[row][--col] = i;
				printf("North: %c West to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
			
			break;

		case 1:		/* South is the direction */
			/* South is open */	
			if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
				matrix[++row][col] = i;
				printf("North: %c South to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
			
			/* North is open */
			if ((row - 1 >= 0) && (matrix[row - 1][col] == '.')) {
				matrix[--row][col] = i;
				printf("North: %c North to %c\n", i -1, i);
				break;
			} else {
				times_blocked++;
			}

			/* East is open */
			if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
				matrix[row][++col] = i;
				printf("North: %c East to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
				/* West is open */
			if ((col - 1 >= 0) && (matrix[row][col-1] == '.')) {
				matrix[row][--col] = i;
				printf("North: %c West to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
			
			break;

		case 2:		/* East is the direction */
			/* East is open */

			if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
				matrix[row][++col] = i;
				printf("North: %c East to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
				/* West is open */
			if ((col - 1 >= 0) && (matrix[row][col-1] == '.')) {
				matrix[row][--col] = i;
				printf("North: %c West to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}

			/* North is open */
			if ((row - 1 >= 0) && (matrix[row - 1][col] == '.')) {
				matrix[--row][col] = i;
				printf("North: %c North to %c\n", i -1, i);
				break;
			} else {
				times_blocked++;
			}
			
			/* South is open */	
			if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
				matrix[++row][col] = i;
				printf("North: %c South to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}

			break;

		case 3:		/* West is the direction */
				/* West is open */
			if ((col - 1 >= 0) && (matrix[row][col-1] == '.')) {
				matrix[row][--col] = i;
				printf("North: %c West to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}

			/* East is open */

			if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
				matrix[row][++col] = i;
				printf("North: %c East to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}
			/* North is open */
			if ((row - 1 >= 0) && (matrix[row - 1][col] == '.')) {
				matrix[--row][col] = i;
				printf("North: %c North to %c\n", i -1, i);
				break;
			} else {
				times_blocked++;
			}
			
			/* South is open */	
			if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
				matrix[++row][col] = i;
				printf("North: %c South to %c\n", i - 1, i);
				break;
			} else {
				times_blocked++;
			}

			break;
		}

		if (times_blocked == 4) {
			is_trapped = true;
			trapped_letter = --i;
			break;
		}

		times_blocked = 0;
	}

	printf("\n");

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%c", matrix[i][j]);	
		}
		printf("\n");
	}

	if (is_trapped) 
		printf("\nThe letter %c got trapped~\n", trapped_letter);
	else 
		printf("\nCompleted 'A' through 'Z'\n");

	return 0;
}
