// Name: p12.c
// Purpose: Evaluates an expression entered by the user
// Author: EM

#include <stdio.h>

int main(void)
{
	float value = 0.0f;
	char ch;
    float i = 1.0f;
    float num = 0.0f;
    char operator;

	printf("Enter an expression: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '.') {
            i = 0.1;
        } 
        else if ((ch >= '0') && (ch <= '9')) {
            if (i == 1) {
                num *= 10;
                num += ch - '0';
            }
            else {
                num += (ch - '0') * i;
                i /= 10;
            }
        }
        else if ((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/')) {
            operator = ch;
        }

        switch (operator) {
            case '+':
                value = num + value;
                num = 0.0f;
                break;
            case '-':
                value = num - value;
                num = 0.0f;
                break;
            case '*':
                value = num * value;
                num = 0.0f;
                break;
            case '/':
                value = num / value;
                num = 0.0f;
                break;
        }

	}

    printf("Value of expression: %.2f\n", value);

    return 0;
}
