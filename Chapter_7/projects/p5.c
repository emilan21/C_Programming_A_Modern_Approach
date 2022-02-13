// Name: p5.c
// Purpose: Computes the value of a word by summing the values of its letters
// for SCRABBLE
// Author: EM

#include <stdio.h>
 
int main(void)
{
        char ch;
	int sum = 0;

	printf("Enter a word: ");
	while ((ch = getchar()) != '\n') {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'l' || ch == 'n' || ch == 'o' || ch == 'r' || ch == 's' || ch == 't' || ch == 'u') {
			sum += 1;
		}
		if (ch == 'd' || ch == 'g') {
			sum += 2;
		}
		if (ch == 'b' || ch == 'c' || ch == 'm' || ch == 'p') {
			sum += 3;
		}
		if (ch == 'f' || ch == 'h' || ch == 'v' || ch == 'w' || ch == 'y') {
			sum += 4;
		}
		if (ch == 'k') {
			sum += 5;
		}
		if (ch == 'j' || ch == 'x') {
			sum += 8;
		}
		if (ch == 'q' || ch == 'z') {
			sum += 10;
		}
	}

	printf("Scrabble value: %d\n", sum);

        return 0;
}
