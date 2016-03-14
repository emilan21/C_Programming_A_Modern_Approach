/* Checks numbers for repeated digits */

#include <stdbool.h>	/* C99 only */
#include <stdio.h>

int main(void)
{
	int digit_repeat[10] = {0};
	int digit, i;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_repeat[digit] += 1;	
		n /= 10;
	}

	printf("Digit:		");
	for (i = 0; i< 10; i++)
		printf("%d ", i);
	printf("\nOccurrences:	");
	for (i = 0; i < 10; i++)
		printf("%d ", digit_repeat[i]);

	printf("\n");

	return 0;
}
