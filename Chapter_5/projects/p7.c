// Name: p7.c
// Purpose: Finds the largest and smallest of four integers entered by the user
// Author: EM

#include <stdio.h>

int main(void)
{
        int num1, num2, num3, num4, s1, l1, s2, l2, largest, smallest;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

	// Figure out largest and smallest
	if (num1 < num2) {
		s1 = num1;
		l1 = num2;
	} else {
		s1 = num2;
		l1 = num1;

	}

	if (num3 < num4) {
		s2 = num3;
		l2 = num4;
	} else {
		s2 = num4;
		l2 = num3;

	}

	if (s1 < s2) {
		smallest = s1;
	} else {
		smallest = s2;
	}

	if (l1 > l2) {
		largest = l1;
	} else {
		largest = l2;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

        return 0;
}
