// Name: p10.c
// Purpose: Converts a numerical grade into a letter grade
// Author: EM

#include <stdio.h>

int main(void)
{
        int grade1;
        int grade2;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &grade1, &grade2);

	switch (grade1) {
		case 9:
			printf("Letter grade: A\n");
			break;
		case 8:
			printf("Letter grade: B\n");
			break;
		case 7:
			printf("Letter grade: C\n");
			break;
		case 6:
			printf("Letter grade: D\n");
			break;
		case 1:
			printf("The grade is greater than 100\n");
			break;
		default:
			printf("Letter grade: F\n");
			break;
	}

        return 0;
}
