// Name: p9.c
// Purpose: Counts the number of vowels (a, e, i, o, u) in a sentence
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE 100

int read_line(char str[], int n);
int compute_vowel_count(const char *sentence);

int main(void)
{
    char sentence[MAX_SENTENCE];
    int count = 0;

	printf("Enter a sentence: ");
    read_line(sentence, MAX_SENTENCE);

    count = compute_vowel_count(sentence);

	printf("Your sentence contains %d vowels\n", count);

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int str_len = strlen(sentence);
    int count = 0;

    for (int i = 0; i < str_len; i++) {
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
			count++;	
		}
    }

    return count;
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
