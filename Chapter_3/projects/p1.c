// Name: p1.c
// Purpose: Takes a date in mm/dd/yyyy format and displays it in yyyymmmdd format
// Author: EM

#include <stdio.h>

int main(void)
{
        int month = 0;
        int day = 0;
        int year = 0;

        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        printf("You entered the date %d%.2d%.2d\n", year, month, day);

        return 0;
}
