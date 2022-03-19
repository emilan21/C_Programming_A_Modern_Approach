// Name: p14.c
// Purpose: Reverses the words in a sentence
// Author: EM

#include <stdio.h>

#define SIZE 255

int main(void)
{
        char a[SIZE] = {0};
        char ch;
        char terminating_char;
        int i = 0;
        int j = 0;
        int word_size = 0;

        printf("Enter a sentence: ");
        while ((ch = getchar()) != '\n') {
            if ((ch == '.') || (ch == '!') || (ch == '?')) {
                terminating_char = ch; 
                break;
            }            
            a[i] = ch;
            i++;
        }

        printf("Reversal of sentence: ");
        for (i = SIZE; i >= 0; i--) {
            if (a[i] != 0) {
                if (a[i] == ' ') {
                    for (j = 0; j < word_size + 1; j++) {
                        printf("%c", a[i + j]);
                    }
                    word_size = 0;
                }
                else if (i == 0) {
                    printf(" ");
                    for (j = 0; j < word_size + 1; j++) {
                        printf("%c", a[i + j]);
                    }
                    word_size = 0;
                    
                }
                else {
                    word_size++;
                }
            } 
        }

        printf("%c\n", terminating_char);

        return 0;
}
