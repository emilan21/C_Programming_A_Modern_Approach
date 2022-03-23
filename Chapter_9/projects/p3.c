// Name: p3.c
// Purpose: Generates a "random walk" across a 10x10 array.
// The program will randomly "walk" from element to elment, always going up,
// dwon, left, or right by one element
// Author: EM

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10
#define ALPH 26
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

void
generate_random_walk(char walk[SIZE][SIZE])
{
    char alph[ALPH];
    unsigned int direction = 0;
    unsigned int alph_count = 0;
    bool can_move = false;
    int i;
    int y;
    int stuck = 0;

    srand((unsigned) time(NULL));

    /* Fill walk with '.' characters */
    for (i = 0; i < 10; i++) {
        for (y = 0; y < 10; y++) {
            walk[i][y] = '.';
        }
    }

    /* Fill alph array with alphbet characters */
    for (i = 0; i < ALPH; i++) {
       alph[i] = i + 65; 
    }

    i = 0;
    y = 0;

    walk[i][y] = alph[alph_count];
    alph_count++;

    while (alph_count < ALPH) {
        while (can_move == false) {
                /* Get random direction */
            direction = rand() % 4;

            /* Check direction */
            if (direction == UP) {
                if ((i - 1 > 0) && (i-1 < SIZE)) {
                    if (walk[i - 1][y] == '.') {
                        walk[i - 1][y] = alph[alph_count];
                        i--;
                        can_move = true;
                    }
                    else {
                        can_move = false;
                    }
                }
                else {
                    can_move = false;
                    stuck++;
                }
            }

            if (direction == DOWN) {
                if ((i + 1 > 0)  && (i+1 < SIZE)) {
                    if (walk[i + 1][y] == '.') {
                        walk[i + 1][y] = alph[alph_count];
                        i++;
                        can_move = true;
                    }
                    else {
                        can_move = false;
                    }
                }
                else {
                    can_move = false;
                    stuck++;
                }
            }

            if (direction == LEFT) {
                if ((y - 1 > 0)  && (y - 1 < SIZE)) {
                    if (walk[i][y - 1] == '.') {
                        walk[i][y - 1] = alph[alph_count];
                        y--;
                        can_move = true;
                    }
                    else {
                        can_move = false;
                    }
                }
                else {
                    can_move = false;
                    stuck++;
                }
            }

            if (direction == RIGHT) {
                if ((y + 1 > 0)  && (y + 1 < SIZE)) {
                    if (walk[i][y + 1] == '.') {
                        walk[i][y + 1] = alph[alph_count];
                        y++;
                        can_move = true;
                    }
                    else {
                        can_move = false;
                    }
                }
                else {
                    can_move = false;
                    stuck++;
                }
            }

        }

        if (stuck >= 4) {
            break;
        }

        alph_count++;
        can_move = false;
        stuck = 0;
    }
}

void
print_array(char walk[SIZE][SIZE])
{
    int i;
    int y;

    for (i = 0; i < SIZE; i++) {
        for (y = 0; y < SIZE; y++) {
            printf("%c ", walk[i][y]);
        }
        printf("\n");
    }
}

int main(void)
{
        char a[SIZE][SIZE];

        generate_random_walk(a);
        print_array(a);

        return 0;
}
