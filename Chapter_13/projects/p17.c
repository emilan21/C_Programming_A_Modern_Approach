// Name: p17.c
// Purpose: Check if a message is a palindrome (the letters in the message are the same from left to right)
// Author: EM

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define MAX_MESSAGE 100

bool is_palindrome(const char *message);
int read_line(char str[], int n);

int main(void)
{
    char message[MAX_MESSAGE];
    bool is_palindrome_value;

    /* Get input from user */
    printf("Enter a message: ");
    read_line(message, MAX_MESSAGE);
    
     is_palindrome_value = is_palindrome(message);

    /* Print */
    if (is_palindrome_value) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}

bool is_palindrome(const char *message)
{
    int message_len = strlen(message);
    char *parray = NULL;
    char *parray2 = NULL;
    int array_size = 0;
    bool is_palindrome = false;
    int count = 0;

    /* Figure out the number for characters the user entered */
    for (int i = 0; i < message_len; i++) {
        if (((message[i] >= 'A') && (message[i] <= 'Z')) || ((message[i] >= 'a') && (message[i] <= 'z'))) {
            array_size = count;
            count++;
        }
    }

    char first[array_size];
    char last[array_size];

    parray = first;
    for (int i = 0; i < message_len; i++) {
        if (((message[i] >= 'A') && (message[i] <= 'Z')) || ((message[i] >= 'a') && (message[i] <= 'z'))) {
            *parray = tolower(message[i]);
            parray++;
        }
    }

    parray = last;
    for (int i = message_len - 1; i >= 0; i--) {
        if (((message[i] >= 'A') && (message[i] <= 'Z')) || ((message[i] >= 'a') && (message[i] <= 'z'))) {
            *parray = tolower(message[i]);
            parray++;
        }
    }

    /* Check if input is a palindrome */
    parray = first;
    parray2 = last;
    for (int i = 0; i < array_size; i++) {
        if (*parray == *parray2) {
            is_palindrome = true;
        } else {
            is_palindrome = false;
            break;
        }
        parray++;
        parray2++;
    }

    return is_palindrome;

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
