/* Checks numbers for repeated digits */

#include <stdbool.h>	/* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit_repeat[10] = {0};
	int digit, i, last_repeat;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	i = 0;
	last_repeat = 0;

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			digit_repeat[i] = digit;	
			i++;
		}
		digit_seen[digit] = true;
		n /= 10;
	}
	printf("Repeated digit (s) : ");
	for (i = 0; i < 10; i++) {
		if (digit_repeat[i] != 0 && digit_repeat[i] != last_repeat)  
			printf("%d ", digit_repeat[i]);
		last_repeat = digit_repeat[i];
	}

	printf("\n");

	return 0;
}
