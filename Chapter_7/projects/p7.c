// p7.c
/* Adds two fractions */

#include <stdio.h>

int main(void)
{
        int num1;
        int denom1;
        int num2;
        int denom2;
        int result_num;
        int result_denom;
	char operation;

        printf("Enter two fractions separted by a space: ");
        scanf("%d/%d%c%d/%d", &num1, &denom1, &operation, &num2, &denom2);

	if (operation == '+') {
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}

	if (operation == '-') {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The subtraction is %d/%d\n", result_num, result_denom);
	}

	if (operation == '*') {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		printf("The product is %d/%d\n", result_num, result_denom);
	}

	if (operation == '/') {
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
		printf("The dividen is %d/%d\n", result_num, result_denom);
	}

        return 0;
}
