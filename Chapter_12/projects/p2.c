// Name: p2.c
// Purpose: Check if a message is a palindrome (the letters in the message are the same from left to right)
// Author: EM

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define N 100

int main(void)
{
        char a[N] = {'\0'};
        char *p = NULL;
        char *parray = NULL;
        char *parray2 = NULL;
        int array_size = 0;
        bool is_palindrome = false;
        int count = 0;

        /* Get input from user */
        printf("Enter a message: ");
        p = a;
        while ((*p = getchar()) != '\n') {
            p++;
        }

        /* Figure out the number for characters the user entered */
        for (p = a; p < a + N; p++) {
            if (((*p >= 'A') && (*p <= 'Z')) || ((*p >= 'a') && (*p <= 'z'))) {
                array_size = count;
                count++;
            }
        }

        char first[array_size];
        char last[array_size];

        parray = first;
        for (p = a; p < a + N; p++) {
            if (((*p >= 'A') && (*p <= 'Z')) || ((*p >= 'a') && (*p <= 'z'))) {
                *parray = tolower(*p);
                parray++;
            }
        }

        parray = last;
        for (p = a + N - 1; p >= a; p--) {
            if (((*p >= 'A') && (*p <= 'Z')) || ((*p >= 'a') && (*p <= 'z'))) {
                *parray = tolower(*p);
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
        
        /* Print */
        if (is_palindrome != true) {
            printf("Not a palindrome\n");
        } else {
            printf("Palindrome\n");
        }

        return 0;
}
