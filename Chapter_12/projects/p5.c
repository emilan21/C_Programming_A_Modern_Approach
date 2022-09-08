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
        char *t;
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
                    t = p;
                    for (j = 0; j < word_size + 1; j++) {
                        printf("%c", *p);
                        p++;
                    }
                    word_size = 0;
                    p = t;
                }
                else if (p == a) {
                    printf(" ");
                    t = p;
                    for (j = 0; j < word_size + 1; j++) {
                        printf("%c", *p);
                        p++;
                    }
                    word_size = 0;
                    p = t;
                    
                }
                else {
                    word_size++;
                }
            } 
        }

        printf("%c\n", terminating_char);

        return 0;
}
