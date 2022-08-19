// Name: p5.c
// Purpose: Reverses the words in a sentence
// Author: EM

#include <stdio.h>

#define SIZE 255

int main(void)
{
        char a[SIZE] = {0};
        char ch;
        char *p = a;
        char terminating_char;
        //int i = 0;
        int j = 0;
        int word_size = 0;

        printf("Enter a sentence: ");
        while ((ch = getchar()) != '\n') {
            if ((ch == '.') || (ch == '!') || (ch == '?')) {
                terminating_char = ch; 
                break;
            }            
            *p = ch;
            p++;
        }

        printf("Reversal of sentence: ");
        for (p = a + SIZE - 1; p >= a; p--) {
            if (*p != 0) {
                if (*p == ' ') {
                    for (j = 0; j < word_size + 1; j++) {
                        printf("%s", p + j);
                    }
                    word_size = 0;
                }
                else if (*p == 0) {
                    printf(" ");
                    for (j = 0; j < word_size + 1; j++) {
                        printf("%s", p + j);
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
