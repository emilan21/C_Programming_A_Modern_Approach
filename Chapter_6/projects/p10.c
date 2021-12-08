// Name: p10.c
// Purpose: Prompts user to enter two dates and then indicates which date comes eailer on the calendar
// Author: EM

#include <stdio.h>

int main(void)
{
        int month = 0;
	int day = 0;
	int year = 0;

	int current_month = 0;
	int current_day = 0;
	int current_year = 0;

	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if (month == 0 && day == 0 && year == 0) {
			break;
		}

		if (current_year == 0) {
			current_year = year;
			current_month = month;
			current_day = day;
		}

		if (year < current_year) {
			current_year = year;
			current_month = month;
			current_day = day;
		} else if (year == current_year && month < current_month) {
			current_year = year;
			current_month = month;
			current_day = day;
		} else if (year == current_year && month == current_month && day < current_day) {
			current_year = year;
			current_month = month;
			current_day = day;
		}
	}

	printf("%d/%d/%.2d is the earliest date\n", current_month, current_day, current_year);


        return 0;
}
