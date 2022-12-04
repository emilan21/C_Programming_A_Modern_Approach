// Name: p9.c
// Purpose: Prompts user to enter two dates and then indicates which date comes eailer on the calendar
// Author: EM

#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int compare_dates(struct date d1, struct date d2);

int main(void)
{
    struct date d1;
    struct date d2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    int result = compare_dates(d1, d2);

	if (result == -1) {
		printf("d1 is earlier than d2\n");
	} else if (result == 1) { 
		printf("d2 is earlier than d1\n");
	} else {
		printf("The dates are the same\n");
    }

    return 0;
}

/* Returns: -1 if d1 is an earlier date than d2,
            +1 if d1 is a later date than d2,
            and 0 if d1 and d2 are the same
*/
int compare_dates(struct date d1, struct date d2)
{
    if ((d1.year == d2.year) && (d1.month == d2.month) && (d1.day == d2.day)) {
        return 0;
    }

	if (d1.year < d2.year) {
        return -1;
	} else {
        return 1;
	}

	if (d1.year == d2.year) {
		if (d1.month < d2.month) {
            return -1;
		} else {
            return 1;
		}
	}

	if (d1.year == d2.year) {
		if (d1.month == d2.month) {
			if (d1.day < d2.day) {
                    return -1;
				} else {
                    return 1;
				}
		}
	}
}
