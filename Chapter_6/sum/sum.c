/* Sums a series of numbers */

#include <stdio.h>

int main(void)
{
	int n;
	int sum;

	sum = 0;

	printf("This program sums a series of intergers.\n");
	printf("Enter intergers (0 to terminate): ");

	scanf("%d", &n);
	while (n != 0) {
		sum += n;
		scanf("%d", &n);
	}
	printf("The sum is: %d\n", sum);

	return 0;
}
