// Name: p13.c
// Purpose: Take a first name and last name entered by the user
// and displays the lastname, a comma, and the first inital, followed by a period
// Author: EM

#include <stdio.h>

int main(void)
{
    char firstname;
    char lastname[20] = {0};
	char ch;
    int count = 0;

	printf("Enter a first and last name: ");
	firstname = getchar();

	while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            break;
        }
	}

	while ((ch = getchar()) != '\n') {
        lastname[count] = ch;
        count++;
	}

    printf("You entered the name: ");
    for (int i = 0; i < 20; i++) {
        if (lastname[i] == 0) {
            break;
        }
        printf("%c", lastname[i]);
    }
    printf(", %1c.\n", firstname);

    return 0;
}
