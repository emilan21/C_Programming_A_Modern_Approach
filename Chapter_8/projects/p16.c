// Name: p16.c
// Purpose: Tests whether two words are anagrams
// Author: EM

#include <stdio.h>
#include <stdbool.h>

#define SIZE 26

int main(void)
{
        int a[SIZE] = {0};
        char ch;
        bool is_anagram;

        printf("Enter first word: ");
        while((ch = getchar()) != '\n') {
            if (!((ch >= 0) && (ch <= 9))) {
                if ((ch >= 'A') && (ch <= 'Z')) {
                    a[ch - 65] += 1;
                }

                if ((ch >= 'a') && (ch <= 'z')) {
                    a[ch - 97] += 1;
                }
            }
        }

        printf("Enter second word: ");
        while((ch = getchar()) != '\n') {
            if (!((ch >= 0) && (ch <= 9))) {
                if ((ch >= 'A') && (ch <= 'Z')) {
                    a[ch - 65] -= 1;
                }

                if ((ch >= 'a') && (ch <= 'z')) {
                    a[ch - 97] -= 1;
                }
            }
        }

        for (int i = 0; i < SIZE; i++) {
            if (a[i] == 0) {
                is_anagram = true;
            }
            else {
                is_anagram = false;
                break;
            }
        }

        if (is_anagram == true) {
            printf("The words are anagrams.\n");
        }
        else {
            printf("The words are not anagrams.\n");
        }

        return 0;
}
