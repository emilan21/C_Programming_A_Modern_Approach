// Name: p11.c
// Purpose: Asks the user for a two digit number then printes the english world for the number.
// Author: EM

#include <stdio.h>

int main(void)
{
        int num1;
	int num2;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &num1, &num2);

	switch (num1) {
		case 0:
			printf("You entered the number ");
			break;
		case 1:
			printf("You entered the number ");
			break;
		case 2:
			printf("You entered the number twenty-");
			break;
		case 3:
			printf("You entered the number thirty-");
			break;
		case 4:
			printf("You entered the number fourty-");
			break;
		case 5:
			printf("You entered the number fifthy-");
			break;
		case 6:
			printf("You entered the number sixty-");
			break;
		case 7:
			printf("You entered the number seventy-");
			break;
		case 8:
			printf("You entered the number eighty-");
			break;
		case 9:
			printf("You entered the number ninety-");
			break;
	}

	switch (num2) {
		case 0:
			if (num1 == 1) {
				printf("ten.\n");
			} else
				printf("zero.\n");
			break;
		case 1:
			if (num1 == 1) {
				printf("eleven.\n");
			} else
				printf("one.\n");
			break;
		case 2:
			if (num1 == 1) {
				printf("twelve.\n");
			} else
				printf("two.\n");
			break;
		case 3:
			if (num1 == 1) {
				printf("thirteen.\n");
			} else
				printf("three.\n");
			break;
		case 4:
			if (num1 == 1) {
				printf("fourteen.\n");
			} else
				printf("four.\n");
			break;
		case 5:
			if (num1 == 1) {
				printf("fifthteen.\n");
			} else
				printf("five.\n");
			break;
		case 6:
			if (num1 == 1) {
				printf("sixteen.\n");
			} else
				printf("six.\n");
			break;
		case 7:
			if (num1 == 1) {
				printf("seventeen.\n");
			} else
				printf("seven.\n");
			break;
		case 8:
			if (num1 == 1) {
				printf("eigthteen.\n");
			} else
				printf("eigth.\n");
			break;
		case 9:
			if (num1 == 1) {
				printf("nineteen.\n");
			} else
				printf("nine.\n");
			break;
	}

        return 0;
}
