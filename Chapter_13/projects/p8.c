// Name: p8.c
// Purpose: Computes the value of a word by summing the values of its letters
// for SCRABBLE
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_WORD 50

int compute_scrabble_value(const char *word);
int read_line(char str[], int n);
 
int main(void)
{
    char word[MAX_WORD];
    int sum = 0;

	printf("Enter a word: ");
    read_line(word, MAX_WORD);

    sum = compute_scrabble_value(word);

	printf("Scrabble value: %d\n", sum);

    return 0;
}

int compute_scrabble_value(const char *word)
{
	int sum = 0;
    int str_len = strlen(word);

    for (int i = 0; i < str_len; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'l' || word[i] == 'n' || word[i] == 'o' || word[i] == 'r' || word[i] == 's' || word[i] == 't' || word[i] == 'u') {
            sum += 1;
        }
        if (word[i] == 'd' || word[i] == 'g') {
            sum += 2;
        }
        if (word[i] == 'b' || word[i] == 'c' || word[i] == 'm' || word[i] == 'p') {
            sum += 3;
        }
        if (word[i] == 'f' || word[i] == 'h' || word[i] == 'v' || word[i] == 'w' || word[i] == 'y') {
            sum += 4;
        }
        if (word[i] == 'k') {
            sum += 5;
        }
        if (word[i] == 'j' || word[i] == 'x') {
            sum += 8;
        }
        if (word[i] == 'q' || word[i] == 'z') {
            sum += 10;
        }
    }

    return sum;
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
