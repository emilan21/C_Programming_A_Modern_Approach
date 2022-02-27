// Name: p12.c
// Purpose: Calculates the average word length for a sentence:
// Author: EM

#include <stdio.h>

int main(void)
{
        char ch;
        float number_of_words = 0.0f;
        float average_word_length = 0.0f;
        float combined_word_length = 0.0f;
        float word_length = 0.0f;
        
        printf("Enter a sentence: ");
        while((ch = getchar())) {

           if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || (ch == '.')) {
                word_length++;
           } 

           if (ch == ' ') {
                number_of_words++;
                combined_word_length += word_length;
                word_length = 0;
           }

           if (ch == '\n') {
                number_of_words++;
                combined_word_length += word_length;
                break;
           }
        }

        average_word_length = combined_word_length / number_of_words;
       
        printf("Average word length: %.1f\n", average_word_length);

        return 0;
}
