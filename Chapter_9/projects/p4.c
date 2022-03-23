// Name: p4.c
// Purpose: Tests whether two words are anagrams
// Author: EM

#include <stdio.h>
#include <stdbool.h>

#define SIZE 26

void
read_word(int counts[SIZE])
{
    char ch;

    while((ch = getchar()) != '\n') {
        if (!((ch >= 0) && (ch <= 9))) {
            if ((ch >= 'A') && (ch <= 'Z')) {
                counts[ch - 65] += 1;
            }

            if ((ch >= 'a') && (ch <= 'z')) {
                counts[ch - 97] += 1;
            }
        }
    }
}

bool
equal_array(int counts1[SIZE], int counts2[SIZE])
{
    for (int i = 0; i < SIZE; i++) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }

    return true;
}

int main(void)
{
        int word1[SIZE] = {0};
        int word2[SIZE] = {0};

        printf("Enter first word: ");
        read_word(word1);
        printf("Enter second word: ");
        read_word(word2);

        if (equal_array(word1, word2)) {
            printf("The words are anagrams.\n");
        }
        else {
            printf("The words are not anagrams.\n");
        }

        return 0;
}
