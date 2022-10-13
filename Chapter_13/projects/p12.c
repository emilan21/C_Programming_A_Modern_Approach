// Name: p12.c
// Purpose: Reverses the words in a sentence
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE 30
#define MAX_WORD 20

int main(void)
{
        char sentence[MAX_SENTENCE][MAX_WORD];
        char ch;
        char terminating_char;
        int i = 0;
        int j = 0;
        int sentence_size = 0;

        printf("Enter a sentence: ");
        while ((ch = getchar()) != '\n') {
            if ((ch == '.') || (ch == '!') || (ch == '?')) {
                terminating_char = ch; 
                break;
            }            
            if (ch == ' ') {
                sentence[i][j] = '\0';
                i++;
                j = 0;
                continue;
            }
            sentence[i][j] = ch;
            j++;

        }

        sentence_size = i;

        printf("Reversed: ");
        for (i = sentence_size; i >= 0; i--) {
            printf("%s ", sentence[i]);
        }

        printf("%c\n", terminating_char);

        return 0;
}
