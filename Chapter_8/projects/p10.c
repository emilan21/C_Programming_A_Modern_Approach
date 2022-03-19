// Name: p10.c
// Purpose: Ask user to enter a time using 24-hour clock then displays the departure and arrival
// times for the flight whose departure time is closet to the entered by the user.
// Author: EM

#include <stdio.h>

int main(void)
{
    int hour;
    int minute;
    int converted_time;
    int departure_hour;
    int departure_minute;
    int arrival_hour;
    int arrival_minute;
    int departure_times[8] = {
        8 * 60 + 0, 9 * 60 + 43, 11 * 60 + 19,
        12 * 60 + 47, 2 * 60 + 0, 3 * 60 + 45,
        7 * 60 + 0, 9 * 60 + 45
    };
    int arrival_times[8] = {
        10 * 60 + 16, 11 * 60 + 52, 1 * 60 + 31,
        3 * 60 + 0, 4 * 60 + 8, 5 * 60 + 55,
        9 * 60 + 20, 11 * 60 + 58 
    };

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	converted_time = hour * 60 + minute;

    for (int i = 0; i < 8; i++) {
        if ((converted_time > departure_times[i]) && (converted_time < departure_times[i + 1])) {
            departure_hour = departure_times[i] / 60;
            departure_minute = departure_times[i] % 60;
            arrival_hour = arrival_times[i] / 60;
            arrival_minute = arrival_times[i] % 60;
            printf("Closest departure time is %d:%d, arriving at %d:%d\n", departure_hour, departure_minute, arrival_hour, arrival_minute);
        }
    }

    return 0;
}
