// Name: p11.c
// Purpose: Calculates the average word length for a sentence:
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE 100

double compute_average_word_length(const char *sentence);
int read_line(char str[], int n);

int main(void)
{
    char sentence[MAX_SENTENCE];
    double average_word_length = 0.0;
    
    printf("Enter a sentence: ");
    read_line(sentence, MAX_SENTENCE);

    average_word_length = compute_average_word_length(sentence);
   
    printf("Average word length: %.1f\n", average_word_length);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    double number_of_words = 0.0f;
    double average_word_length = 0.0f;
    double combined_word_length = 0.0f;
    double word_length = 0.0f;

    for (int i = 0; i < strlen(sentence); i++) {
       if (((sentence[i] >= 'A') && (sentence[i] <= 'Z')) || ((sentence[i] >= 'a') && (sentence[i] <= 'z')) || (sentence[i] == '.')) {
            word_length++;
       } 

       if (sentence[i] == ' ') {
            number_of_words++;
            combined_word_length += word_length;
            word_length = 0;
       }

       if (sentence[i] == '\n') {
            number_of_words++;
            combined_word_length += word_length;
            break;
       }
    }

    return average_word_length = combined_word_length / number_of_words;

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
