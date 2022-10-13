// Name: p16.c
// Purpose: Reverse message
// Author: EM

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_MESSAGE 100

void reverse(char *message);
int read_line(char str[], int n);

int main(void)
{
    char message[MAX_MESSAGE];

    printf("Enter a message: ");
    read_line(message, MAX_MESSAGE);

    reverse(message);

    printf("Reversal is: %s\n", message);

    return 0;
}

void reverse(char *message)
{
    int message_len = strlen(message);
    char *first = message;
    char *last = message + message_len - 1;
    char temp;

    while (true) {
        if (first == last) {
            break;
        }

        temp = *first;
        *first = *last;
        *last = temp;

        first += 1;
        last -= 1;
    }

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
