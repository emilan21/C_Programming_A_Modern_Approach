// Name: p4.c
// Purpose: Reads interger in and displays it in octal (base 8)
// Author: EM

#include <stdio.h>

int main(void)
{
        int num;
	int first_digit;
	int second_digit;
	int third_digit;
	int fourth_digit;
	int last_digit;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	last_digit = num % 8;
	fourth_digit = (num / 8) % 8;
	third_digit = ((num / 8) / 8)  % 8;
	second_digit = (((num / 8) / 8) / 8)  % 8;
	first_digit = ((((num / 8) / 8) / 8) / 8) % 8;

	printf("In octal, your number is: %d%d%d%d%d\n",
		first_digit,
		second_digit,
		third_digit,
		fourth_digit,
		last_digit);

        return 0;
}
