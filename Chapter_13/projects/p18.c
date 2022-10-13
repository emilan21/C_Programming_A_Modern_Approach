// Name: p18.c
// Purpose: Accepts date from user in the form mm/dd/yyy and prints it in month dd, yyyy where month is the name of the month
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_STR 30

int main(void)
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month;
    int day;
    int year;
    char day_str[3];
    char year_str[5];

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    sprintf(day_str, "%2d", day);
    sprintf(year_str, "%4d", year);

    printf("You entered the date %s %s, %s\n", months[month - 1], day_str, year_str);


    return 0;
}
