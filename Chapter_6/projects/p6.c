// Name: p6.c
// Purpose: Prompts the user to enter a number n, then prints all
// even squares between 1 and n
// Author: EM

#include <stdio.h>

int main(void)
{
        int n;
	int i = 1;
	int square;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (i <= n) {
		square = i * i;
		if (square % 2 == 0) {
			printf("Square is: %d\n", square);
		}
		if (square >= n)
			break;
		i++;
	}

        return 0;
}
