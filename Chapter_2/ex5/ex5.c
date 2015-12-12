/* ask for x. solve polynomail with x */

#include <stdio.h>

int main(void)
{
	int value;
	int answer;

	printf("Enter a value for x: ");
	scanf("%d", &value);
	
	answer = (3 * (value * value * value * value * value)) + (2 * (value * value * value * value)) - 		(5 * (value * value * value)) - (value * value) + (7 * value) - 6;

	printf("The answer is %d\n", answer);

	return 0; 	
}
