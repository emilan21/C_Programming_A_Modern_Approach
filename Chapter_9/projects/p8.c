// Name: p8.c
// Purpose: Simulates the game of craps
// Author: EM

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int
roll_dice(void)
{
    int num1;
    int num2;

    num1 = rand() % 6;
    num2 = rand() % 6;

    return num1 + num2;
}

bool
play_game(void)
{
    int sum = 0;
    int roll_num = 0;
    int point = 0;

    while(true) {
        sum = roll_dice();
        printf("You rolled %d\n", sum);
        if (roll_num == 0) {
            if ((sum == 7) || (sum == 11)) {
                return true;
            }
            else if ((sum == 2) || (sum == 3) || (sum == 12)) {
                return false;
            }
            else {
                point = sum;
                printf("Your point is %d\n", point);
            }
        }
        else {
            if (sum == point) {
                return true;
            }

            if (sum == 7) {
                return false;
            }
        }
        roll_num++;
    }
}

int main(void)
{
        char play_again = 'y';
        int wins = 0;
        int losses = 0;
        bool result;

        srand((unsigned) time(NULL));

        while (true) {
            result = play_game();

            if (result == true) {
                printf("You win!\n");
                wins++;
            }
            else {
                printf("You lose!\n");
                losses++;
            }

            printf("Play again? ");
            scanf(" %c", &play_again);

            if (play_again != 'y') {
                break;
            }
        }

        printf("Wins: %d\tLosses: %d\n", wins, losses);
    
        return 0;
}
