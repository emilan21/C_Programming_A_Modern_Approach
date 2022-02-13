// Name: p9.c
// Purpose: Ask user for 12-hour time and displays the 24-hour time
// Author: EM

#include <stdio.h>

int main(void)
{
	int hour;
	int minute;
	int converted_hour;
	char noon;

        printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &minute, &noon);

	if (noon == 'A' || noon == 'a' || noon == 'AM' || noon == 'am') {
		converted_hour = hour;
	}

	if (noon == 'P' || noon == 'p' || noon == 'PM' || noon == 'pm') {
		converted_hour = (12 + hour);
	}

	printf("Equivalent 24-hour time: %d:%d\n", converted_hour, minute);

        return 0;
}
