// Name: p16.c
// Purpose: Tests whether two words are anagrams
// Author: EM

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define WORD_SIZE 50
#define ALPH_SIZE 26

int read_line(char str[], int n);
bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[WORD_SIZE];
    char word2[WORD_SIZE];
    bool is_anagram;

    printf("Enter first word: ");
    read_line(word1, WORD_SIZE);
    printf("Enter second word: ");
    read_line(word2, WORD_SIZE);

    is_anagram = are_anagrams(word1, word2);

    if (is_anagram == true) {
        printf("word1 and word2 are anagrams\n");
    } else {
        printf("word1 and word2 are not anagrams\n");
    }

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    bool is_anagram;
    int word1_len = strlen(word1);
    int word2_len = strlen(word2);
    int a[ALPH_SIZE] = {0};

    // Word1
    for (int i = 0; i < word1_len; i++) {
        if (!((word1[i] >= 0) && (word1[i] <= 9))) {
            if ((word1[i] >= 'A') && (word1[i] <= 'Z')) {
                a[word1[i] - 65] += 1;
            }

            if ((word1[i] >= 'a') && (word1[i] <= 'z')) {
                a[word1[i] - 97] += 1;
            }
        }
    }

    // Word2
    for (int i = 0; i < word2_len; i++) {
        if (!((word2[i] >= 0) && (word2[i] <= 9))) {
            if ((word2[i] >= 'A') && (word2[i] <= 'Z')) {
                a[word2[i] - 65] -= 1;
            }

            if ((word2[i] >= 'a') && (word2[i] <= 'z')) {
                a[word2[i] - 97] -= 1;
            }
        }
    }

    for (int i = 0; i < ALPH_SIZE; i++) {
        if (a[i] == 0) {
            is_anagram = true;
        }
        else {
            is_anagram = false;
            break;
        }
    }

    return is_anagram;
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
