// Name: p7.c
// Purpose: Asks the user for a two digit number then printes the english world for the number.
// Author: EM

#include <stdio.h>

int main(void)
{
    int num1;
	int num2;

    char *digits1[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifthy", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *digits2[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *tens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifthteen", "sixteen", "seventeen", "eighteen", "nineteen"};

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &num1, &num2);

    if (num1 == 1) {
        printf("You entered the number %s\n", tens[num2]);
    } else if (num1 == 0){
        printf("You entered the number %s\n", digits2[num2]);
    } else {
        printf("You entered the number %s-%s\n", digits1[num1], digits2[num2]);
    }

    return 0;
}
