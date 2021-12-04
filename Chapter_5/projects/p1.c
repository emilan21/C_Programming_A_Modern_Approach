// Name: p1.c
// Purpose: Calculates how many digits a number contains.
// Author: EM

#include <stdio.h>

int main(void)
{
        int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num >= 0 && num <= 9)
		printf("The number %d has %d digits\n", num, 1);
	else if (num >= 10 && num <= 99)
		printf("The number %d has %d digits\n", num, 2);
	else if (num >= 100 && num <= 999) 
		printf("The number %d has %d digits\n", num, 3);
	else 
		printf("The number %d has %d digits\n", num, 4);

        return 0;
}
