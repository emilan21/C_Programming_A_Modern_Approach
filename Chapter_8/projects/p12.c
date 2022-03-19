// Name: p12.c
// Purpose: Computes the value of a word by summing the values of its letters
// for SCRABBLE
// Author: EM

#include <stdio.h>
 
int main(void)
{
    char ch;
	int sum = 0;
    int scabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 8, 1, 1, 4, 4, 8, 4, 10};

	printf("Enter a word: ");
	while ((ch = getchar()) != '\n') {
        sum += scabble[ch - 97];
	}

	printf("Scrabble value: %d\n", sum);

    return 0;
}
