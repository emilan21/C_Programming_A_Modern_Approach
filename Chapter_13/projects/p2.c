/* Program that stores and prints reminders */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN];

    char month_str[3];
    char day_str[3];
    char date_str[10];
    char hour_str[3];
    char minute_str[3];
    char time_str[10];
    char date_time_str[15];
    char msg_str[MSG_LEN + 1];

    int month = 0;
    int day = 0;
    int hour = 0;
    int minute = 0;
    int i = 0;
    int j = 0;
    int num_remind = 0;

    for (;;) {
        /* Check if we reached the max amount of reminders */
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        /* Get input */
        printf("Enter a month and day, 24-hour time, and reminder: ");
        scanf("%2d/%2d", &month, &day);
        if (month == 0) {
            break;
        }

        /* If day is outside of range */
        if (day < 0 || day > 31) {
            printf("ERROR: Day %d can not be used\n", day);
            continue;
        } else {
            scanf("%2d:%2d", &hour, &minute);
            /* Put input into strings */
            sprintf(month_str, "%2d", month);
            sprintf(day_str, "%2d", day);
            sprintf(hour_str, "%2d", hour);
            sprintf(minute_str, "%2d", minute);
            /* Make new strings for date and time */
            strcpy(date_str, month_str);
            strcat(date_str, "/");
            strcat(date_str, day_str);
            strcpy(time_str, " ");
            strcat(time_str, hour_str);
            strcat(time_str, ":");
            strcat(time_str, minute_str);
            read_line(msg_str, MSG_LEN);


            /* Sort reminders by date and then time */
            for (i = 0; i < num_remind; i++) {
                strcpy(date_time_str, date_str);
                strcat(date_time_str, time_str);
                if (strcmp(date_time_str, reminders[i]) < 0) {
                    break;
                }
            }
            for (j = num_remind; j > i; j--) {
                strcpy(reminders[j], reminders[j - 1]);
            }

            /* Make reminder list */
            strcpy(reminders[i], date_str);
            strcat(reminders[i], time_str);
            strcat(reminders[i], msg_str);

            num_remind++;
        }
    }

    /* Print reminder list */
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) {
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch = 0;
    int i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}
