/* Generates a "random walk" across a 10 x 10 array */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	char array[SIZE][SIZE];	
	int i, j, move;
	char rand_letter;

	srand((unsigned) time(NULL));

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			array[i][j] = '.';	
		}
	}

	i = 0;
	j = 0;

	while (1) {
		move = rand() % 4;
		rand_letter = (rand() % (26 + 1 - 0) + 0) + 'A';
		
		switch (move) {
			case 0:
				array[i][j-1] = rand_letter;
				break;
			case 1:
				array[i+1][j] = rand_letter;
				break;
			case 2: 
				array[i][j+1] = rand_letter;
				break;
			case 3: array[i-1][j] = rand_letter;
				break;
		}
	}

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("%c", array[i][j]);	
		}
		printf("\n");
	}

	return 0;
}
