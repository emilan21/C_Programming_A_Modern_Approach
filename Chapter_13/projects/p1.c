// Name: p1.c
// Purpose: Find the smallest and largest in a series of words
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_WORD 20
#define STOP_INPUT 4

int read_line(char str[], int n);

int main(void)
{
    char smallest_word[MAX_WORD + 1] = ""; 
    char largest_word[MAX_WORD + 1] = ""; 
    char msg_str[MAX_WORD + 1];

    for (;;) {
        printf("Enter word: ");
        read_line(msg_str, MAX_WORD);

        if (strlen(msg_str) == 4) {
            break;
        }

        if (strcmp(smallest_word, "") == 0) {
            strcpy(smallest_word, msg_str);
        }
        if (strcmp(largest_word, "") == 0) {
            strcpy(largest_word, msg_str);
        }

        if (strcmp(msg_str, smallest_word) < 0) {
            strcpy(smallest_word, msg_str);
        } else if (strcmp(msg_str, largest_word) > 0){
            strcpy(largest_word, msg_str);
        }
    }

    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

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
