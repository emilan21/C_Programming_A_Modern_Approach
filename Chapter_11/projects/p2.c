// Name: p8.c
// Purpose: Ask user to enter a time using 24-hour clock then displays the departure and arrival
// times for the flight whose departure time is closet to the entered by the user.
// Author: EM

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	if (desired_time > 8 * 60 + 0 && desired_time < 9 * 60 + 43) {
        *departure_time = 8 * 60 + 0; 
        *arrival_time = 10 * 60 + 16;
	}

	if (desired_time > 9 * 60 + 43 && desired_time < 11 * 60 + 19) {
        *departure_time = 9 * 60 + 43; 
        *arrival_time = 11 * 60 + 52;
	}

	if (desired_time > 11 * 60 + 19 && desired_time < 12 * 60 + 47) {
        *departure_time = 11 * 60 + 19; 
        *arrival_time = 13 * 60 + 31;
	}

	if (desired_time > 12 * 60 + 47 && desired_time < 14 * 60 + 0) {
        *departure_time = 12 * 60 + 47; 
        *arrival_time = 15 * 60 + 0;
	}

	if (desired_time > 14 * 60 + 0 && desired_time < 15 * 60 + 45) {
        *departure_time = 14 * 60 + 0; 
        *arrival_time = 16 * 60 + 8;
	}

	if (desired_time > 15 * 60 + 45 && desired_time < 19 * 60 + 0) {
        *departure_time = 3 * 60 + 45; 
        *arrival_time = 17 * 60 + 55;
	}

	if (desired_time > 19 * 60 + 0 && desired_time < 21 * 60 + 45) {
        *departure_time = 19 * 60 + 0; 
        *arrival_time = 21 * 60 + 20;
	}

	if (desired_time > 21 * 60 + 45 || desired_time < 8 * 60 + 0) {
        *departure_time = 21 * 60 + 45; 
        *arrival_time = 23 * 60 + 58;
	}
}

int main(void)
{
    int hour, minute, converted_time;
    int *departure_time;
    int *arrival_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	converted_time = hour * 60 + minute;

    find_closest_flight(converted_time, &departure_time, &arrival_time);

    printf("Closest departure time is %d, arriving at %d\n", departure_time, arrival_time);

    return 0;
}
