// Name: p2.c
// Purpose: Converts 24-hours time to 12-hour time
// Author: EM

#include <stdio.h>

int main(void)
{
        int hour;
	int minute;

	printf("Enter a 24-hours time: ");
	scanf("%d:%d", &hour, &minute);

	if (hour > 12) {
		hour = hour - 12;	
		printf("Equivalent 12-hour time: %d:%d PM\n", hour, minute);
	}	
	else
		printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);

        return 0;
}
