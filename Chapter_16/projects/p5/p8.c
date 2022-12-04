// Name: p8.c
// Purpose: Ask user to enter a time using 24-hour clock then displays the departure and arrival
// times for the flight whose departure time is closet to the entered by the user.
// Author: EM

#include <stdio.h>

#define NUM 8

struct flight_time {
    int departure_time;
    int arrival_time;
};

int main(void)
{
    const struct flight_time flight_times[] = {
       {8 * 60 + 0, 10 * 60 + 16},
       {9 * 60 + 43, 10 * 60 + 52},
       {11 * 60 + 19, 10 * 60 + 31},
       {12 * 60 + 47, 10 * 60 + 0},
       {14 * 60 + 0, 10 * 60 + 8},
       {15 * 60 + 45, 10 * 60 + 55},
       {19 * 60 + 0, 10 * 60 + 20},
       {21 * 60 + 45, 10 * 60 + 58},
    };
    int hour, minute, converted_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	converted_time = hour * 60 + minute;

    for (int i = 0; i < NUM; i++) {
        if (converted_time > flight_times[i].departure_time && converted_time < flight_times[i+1].departure_time) {
            printf("Closest departure time is %d, arriving at %d\n", flight_times[i].departure_time, flight_times[i].arrival_time);
        }
    }

    return 0;
}
