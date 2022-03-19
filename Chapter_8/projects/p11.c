// Name: p11.c
// Purpose: Converts an alphabetic phone number into numeric form
// Author: EM

#include <stdio.h>
 
int main(void)
{
    char ch;
    char phone_number[15];
    int count = 0;

	printf("Enter phone number: ");
	while ((ch = getchar()) != '\n') {
		if (ch == 'A' || ch == 'B' || ch == 'C') {
            phone_number[count] = '2';
		}
		if (ch == 'D' || ch == 'E' || ch == 'F') {
            phone_number[count] = '3';
		}
		if (ch == 'G' || ch == 'H' || ch == 'I') {
            phone_number[count] = '4';
		}
		if (ch == 'J' || ch == 'K' || ch == 'L') {
            phone_number[count] = '5';
		}
		if (ch == 'M' || ch == 'N' || ch == 'O') {
            phone_number[count] = '6';
		}
		if (ch == 'P' || ch == 'R' || ch == 'S') {
            phone_number[count] = '7';
		}
		if (ch == 'T' || ch == 'U' || ch == 'V') {
            phone_number[count] = '8';
		}
		if (ch == 'W' || ch == 'X' || ch == 'Y') {
            phone_number[count] = '9';
		}
		if (ch == '-') {
            phone_number[count] = '-';
		}
		if (ch >= '0' && ch <= '9') {
            phone_number[count] = ch;
		}
        count++;
	}

    printf("In numberic form: ");
    for (int i = 0; i < 15; i++) {
        printf("%c", phone_number[i]);
    }
    printf("\n");

    return 0;
}
