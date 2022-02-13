// Name: p4.c
// Purpose: Converts an alphabetic phone number into numeric form
// Author: EM

#include <stdio.h>
 
int main(void)
{
        char ch;

	printf("Enter phone number: ");
	while ((ch = getchar()) != '\n') {
		if (ch == 'A' || ch == 'B' || ch == 'C') {
			printf("2");
		}
		if (ch == 'D' || ch == 'E' || ch == 'F') {
			printf("3");
		}
		if (ch == 'G' || ch == 'H' || ch == 'I') {
			printf("4");
		}
		if (ch == 'J' || ch == 'K' || ch == 'L') {
			printf("5");
		}
		if (ch == 'M' || ch == 'N' || ch == 'O') {
			printf("6");
		}
		if (ch == 'P' || ch == 'R' || ch == 'S') {
			printf("7");
		}
		if (ch == 'T' || ch == 'U' || ch == 'V') {
			printf("8");
		}
		if (ch == 'W' || ch == 'X' || ch == 'Y') {
			printf("9");
		}
		if (ch == '-') {
			printf("-");
		}
		if (ch >= '0' && ch <= '9') {
			printf("%c", ch);
		}
	}
	printf("\n");

        return 0;
}
