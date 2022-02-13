// Name: p11.c
// Purpose: Take a first name and last name entered by the user
// and displays the lastname, a comma, and the first inital, followed by a period
// Author: EM

#include <stdio.h>

int main(void)
{
        char firstname;
	char ch;

	printf("Enter a first and last name: ");
	firstname = getchar();
	while ((ch = getchar()) != ' ') {
		;
	}
	while ((ch = getchar()) != '\n') {
		printf("%c", ch);
	}

	printf(", %1c.\n", firstname);

        return 0;
}
