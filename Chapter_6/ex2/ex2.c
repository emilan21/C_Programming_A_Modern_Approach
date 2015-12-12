/* Ask the user to enter two integers, then calculate and display their GCD */

#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int gcd;
	int remainder;
	
	printf("Enter two intergers: ")	;
	scanf("%d %d", &num1, &num2);
	
	if (num2 == 0)
		gcd = num1;
	else {
		while (num2 != 0) {
			remainder = num1 % num2;
			num1 = num2;
			num2 = remainder;	
		}
		gcd = num1;
	}
	
	printf("Greatest common divisor: %d\n", gcd);

	return 0;
	
}
