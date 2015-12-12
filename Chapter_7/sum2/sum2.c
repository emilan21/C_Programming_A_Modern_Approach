/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
	long n;
	long sum = 0;

	printf("This program sums a series of intergers.\n");
	printf("Enter integers (0 to terminate): ");

	scanf("%ld", &n);
	while (n != 0) {
		sum += n;
		scanf("%ld", &n);
	}
	printf("The sum is: %ld\n", sum);

	return 0;
}
