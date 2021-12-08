// Name: p8.c
// Purpose: Prints a one-month calendar. The user specifies the number of days in the month
// and the day of the week on which the month begins
// Author: EM

#include <stdio.h>

int main(void)
{
        int days_in_month;
	int day_month_begins;
	int days_in_week = 7;
	int day = 1;

	printf("Enter a number of days in month: ");
	scanf("%d", &days_in_month);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day_month_begins);

	for (int i = 1; i <= days_in_month + (day_month_begins - 1); i++) {
		if (i < day_month_begins)
			printf("   ");
		else
			printf("%2d ", day++);

		if (i % days_in_week == 0) {
			printf("\n");
		}

	}

        return 0;
}
