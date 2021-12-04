// Name: p8.c
// Purpose: Ask user to enter a time using 24-hour clock then displays the departure and arrival
// times for the flight whose departure time is closet to the entered by the user.
// Author: EM

#include <stdio.h>

int main(void)
{
        int hour, minute, converted_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	converted_time = hour * 60 + minute;

	if (converted_time > 8 * 60 + 0 && converted_time < 9 * 60 + 43) {
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	}

	if (converted_time > 9 * 60 + 43 && converted_time < 11 * 60 + 19) {
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	}

	if (converted_time > 11 * 60 + 19 && converted_time < 12 * 60 + 47) {
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	}

	if (converted_time > 12 * 60 + 47 && converted_time < 14 * 60 + 0) {
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}

	if (converted_time > 14 * 60 + 0 && converted_time < 15 * 60 + 45) {
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	}

	if (converted_time > 15 * 60 + 45 && converted_time < 19 * 60 + 0) {
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}

	if (converted_time > 19 * 60 + 0 && converted_time < 21 * 60 + 45) {
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}

	if (converted_time > 21 * 60 + 45 || converted_time < 8 * 60 + 0) {
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}


        return 0;
}
