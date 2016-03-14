/*
 * c8p10.c - Modified Version of project 8 from chapter 5 
 *
 * Copyright (C) 2016 Eric Milan
 *
 * Author: Eric Milan <emilan@etmilan.org>
 *
 * License if needed
 *
 * Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an
 * array and the arrival times are stored in a second array. (The times are integers, representing
 * the number of minutes since midnight.) The program wil use a loop to search the array of departure 
 * times for the one closest to the time entered by the user.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int hour;
	int minute;
	int min_midnight;

	int depart[8] = {}
	int arrival[8] = {\
		(9 * 60),\
		(10 * 60 + 43),\
		(12 * 60 + 19),\
		(13 * 60 + 47),\
		(15 * 60),\
		(16 * 60 + 45),\
		(20 * 60),\
		(22 * 60 + 45)\
	};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	min_midnight = (hour +1) * 60 + minute;
}
