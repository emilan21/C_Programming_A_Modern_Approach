// Name: p9.c
// Purpose: Prompts user to enter two dates and then indicates which date comes eailer on the calendar
// Author: EM

#include <stdio.h>

int main(void)
{
        int month1;
	int day1;
	int year1;

        int month2;
	int day2;
	int year2;

	int earlier_date;
	int later_date;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	if (year1 < year2) {
		earlier_date = 0;
		later_date = 1;
	} else {
		earlier_date = 1;
		later_date = 0;
	}
	printf("edate: %d, ldate: %d\n", earlier_date, later_date);

	if (year1 == year2) {
		if (month1 < month2) {
			earlier_date = 0;
			later_date = 1;
		} else {
			earlier_date = 1;
			later_date = 0;
		}
	}
	printf("edate: %d, ldate: %d\n", earlier_date, later_date);

	if (year1 == year2) {
		if (month1 == month2) {
			if (day1 < day2) {
				earlier_date = 0;
				later_date = 1;
				} else {
					earlier_date = 1;
					later_date = 0;
				}
		}
	}

	printf("edate: %d, ldate: %d\n", earlier_date, later_date);
	if (earlier_date < later_date) {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
	} else {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
	}

        return 0;
}
