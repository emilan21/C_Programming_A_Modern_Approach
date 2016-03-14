/*
 * c5p08.c - displays closest departure time to users input 
 *
 * Copyright (C) 2016 Eric Milan
 *
 * Author: Eric Milan <emilan@etmilan.org>
 *
 * License if needed
 *
 * The following table shows the daily flights from one city to another:
 * 
 * Departure time 		Arrival time
 * 8:00 am			10:16 am
 * 9:43 am			11:52 pm
 * 11:19 am			1:31 pm
 * 12:47 pm			3:00 pm
 * 2:00 pm			4:08 pm
 * 3:45 pm			5:55 pm
 * 7:00 pm			9:20 pm
 * 9:45 pm			11:58 pm
 *
 * Write a program that asks user to enter a time (expressed in hours and minutes,
 * using the 24-hour clock). The program then displays the departure and arrival
 * times for the flight whose departure time is closest to that entered by the user.
 *
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: Covert the input into a time expressed in minutes since midnight, and compare
 * it to the departure times, also expressed in minutes since midnight. For example,
 * 12:15 is 13 x 60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m.
 * (767 minutes since midnight) than to any of the other departure times.
 */

#include <stdio.h>

#define DEPART1 = 8 * 60 
#define DEPART_STRING1 = "8:00 a.m."
#define DEPART2 = 9 * 60 + 43
#define DEPART_STRING2 = "9:43 a.m."
#define DEPART3 = 11 * 60 + 19;
#define DEPART_STRING3 = "11:19 a.m."
#define DEPART4 = 13 * 60 + 47;
#define DEPART_STRING4 = "12:47 p.m."
#define DEPART5 = 15 * 60;
#define DEPART_STRING5 = "2:00 p.m."
#define DEPART6 = 16 * 60 + 45;
#define DEPART_STRING6 = "3:45 p.m."
#define DEPART7 = 20 * 60;
#define DEPART_STRING7 = "7:00 p.m."
#define DEPART8 = 22 * 60 + 45;
#define DEPART_STRING8 = "9:45 p.m."

#define ARRIVAL1 = "10:16 a.m."
#define ARRIVAL2 = "11:52 p.m."
#define ARRIVAL3 = "1:31 p.m."
#define ARRIVAL4 = "3:00 p.m."
#define ARRIVAL5 = "4:08 p.m."
#define ARRIVAL6 = "5:55 p.m."
#define ARRIVAL7 = "9:20 p.m."
#define ARRIVAL8 = "11:58 p.m."

int main(void)
{
	int hour;
	int minute;
	int min_midnight;


	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	min_midnight = (hour + 1) * 60 + minute;

	printf("Minutes from midnight: %d\n", min_midnight);

	printf("Closest departure time is %, arriving at %s\n");
}

