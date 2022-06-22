// Name: p7.c
// Purpose: Prompts user for number and prints it as a 7-segment display
// Author: EM

#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 1},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++) {
        for (int y = 0; y < MAX_DIGITS * 4; y++) {
            digits[i][y] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    switch (digit) {
        case '0':
            digits[0][(position * 4) + 1] = segments[0][0];
            digits[1][(position * 4) + 2] = segments[0][1];
            digits[2][(position * 4) + 2] = segments[0][2];
            digits[3][(position * 4) + 1] = segments[0][3];
            digits[2][position * 4] = segments[0][4];
            digits[1][position * 4] = segments[0][5];
            digits[2][(position * 4) + 1] = segments[0][6];
    } 
}

void print_digits_array(void)
{
    for (int i = 0; i < 4; i++) {
        for (int y = 0; y < MAX_DIGITS * 4; y++) {
            if (digits[i][y] == 1) {
                printf("-");
            }
        }
        printf("\n");
    }

}

int main(void)
{
    char ch;
    int count;

    clear_digits_array();
        
    
    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            process_digit(ch, count);

            if (count >= MAX_DIGITS - 1) {
                break;
            }

            count++;
        } 
        
    }

    print_digits_array();

    return 0;
}
