#include <stdio.h>

int main(void)
{
	int number = 0;
	int oct_1 = 0;
	int oct_2 = 0;
	int oct_3 = 0;
	int oct_4 = 0;
	int oct_5 = 0;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	oct_1 = number % 8;
	number /= 8;
	oct_2 = number % 8;
	number /= 8;
	oct_3 = number % 8;
	number /= 8;
	oct_4 = number % 8;
	number /= 8;
	oct_5 = number % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", oct_5, oct_4, oct_3, oct_2, oct_1);

	return 0;
}
