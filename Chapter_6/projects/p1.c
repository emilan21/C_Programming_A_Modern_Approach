// Name: p1.c
// Purpose: Program takes in a series of numbers and displays the largest number
// Author: EM

#include <stdio.h>

int main(void)
{
        float num;
	float largest = 0.0f;

	for (;;) {
		printf("Enter a number: ");
		scanf("%f", &num);

		if (num == 0.0f) {
			break;
		}

		if (num > largest) {
			largest = num;
		}
	}

	printf("The largest number eneterd was %.2f\n", largest);

        return 0;
}
