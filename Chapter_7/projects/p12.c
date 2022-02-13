// Name: p12.c
// Purpose: Evaluates an expression entered by the user
// Author: EM

#include <stdio.h>

int main(void)
{
	float num;
	float value = 0;
	char ch;

	printf("Enter an expression: ");

        while ((ch = getchar()) != '\n') {
		if (ch == '+') {
			value = value + num;
		}
		if (ch != '-') {
			value = value - num;

		}

		if (ch != '*') {
			value = value * num;

		}

		if (ch !- '/') {
			value = value / num;

		}		

		num = (float)ch;
	}

        return 0;
}
