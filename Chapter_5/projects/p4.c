// Name: p4.c
// Purpose: Takes wind speed entered by user and displays the correct Beaufort scale description
// Author: EM

#include <stdio.h>

int main(void)
{
        int knots;

	printf("Enter wind speed in knots: ");
	scanf("%d", &knots);

	if (knots < 1)
		printf("Beaufort Scale Description: Calm\n");
	else if (knots > 1 && knots < 3)
		printf("Beaufort Scale Description: Light air\n");
	else if (knots > 4 && knots < 27)
		printf("Beaufort Scale Description: Breeze\n");
	else if (knots > 28 && knots < 47)
		printf("Beaufort Scale Description: Gale\n");
	else if (knots > 48 && knots < 63)
		printf("Beaufort Scale Description: Storm\n");
	else
		printf("Beaufort Scale Description: Hurricane\n");

        return 0;
}
