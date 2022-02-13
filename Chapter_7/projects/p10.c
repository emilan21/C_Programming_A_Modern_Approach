// Name: p10.c
// Purpose: Counts the number of vowels (a, e, i, o, u) in a sentence
// Author: EM

#include <stdio.h>

int main(void)
{
        int count = 0;
	char ch;

	printf("Enter a sentence: ");
	while((ch = getchar()) != '\n') {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			count++;	
		}
	}

	printf("Your sentence contains %d vowels\n", count);

        return 0;
}
