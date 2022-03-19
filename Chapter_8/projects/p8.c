// Name: p8.c
// Purpose: Takes five quiz grades for each of five students, then computes
// the total score and average score for each student, and the average
// score, high score, and low score for each quiz.
// Author: EM

#include <stdio.h>

#define SIZE 5

int main(void)
{
        int a[SIZE][SIZE] = {0};
        int total_student_scores[SIZE] = {0};
        int average_student_scores[SIZE] = {0};
        int average_quiz_scores[SIZE] = {0};
        int total_quiz_scores[SIZE] = {0};
        int high_quiz_scores[SIZE] = {0};
        int low_quiz_scores[SIZE] = {0};

        /* Get 5 quiz grades for five students */
        for (int i = 0; i < SIZE; i++) {
            printf("Enter student %d quiz grades: ", i + 1);
            for (int y = 0; y < SIZE; y++) {
                scanf("%d", &a[i][y]);
            }
        }

        /* Compute the total score and average score for each student */
        for (int i = 0; i < SIZE; i++) {
            for (int y = 0; y < SIZE; y++) {
                total_student_scores[i] += a[i][y];
            }
            average_student_scores[i] = total_student_scores[i] / SIZE;
        }

        /* Compute the average score, high score, and low score for each quiz */
        for (int y = 0; y < SIZE; y++) {
            low_quiz_scores[y] = 0;

            for (int i = 0; i < SIZE; i++) {
                total_quiz_scores[y] += a[y][i]; 
                if (low_quiz_scores[i] == 0) {
                    low_quiz_scores[i] = a[y][i];
                }

                if (a[y][i] > high_quiz_scores[i]) {
                    high_quiz_scores[i] = a[y][i]; 
                }

                if (a[y][i] < low_quiz_scores[i]) {
                    low_quiz_scores[i] = a[y][i];
                }
            }
            average_quiz_scores[y] = total_quiz_scores[y] / SIZE;
        }

        /* Print student total scores and student average scores */
        printf("Student total scores: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", total_student_scores[i]);
        }
        printf("\n");

        printf("Student average scores: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", average_student_scores[i]);
        }
        printf("\n");

        /* Print quiz average score, high score, and low score */
        printf("Quiz average scores: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", average_quiz_scores[i]);
        }
        printf("\n");

        printf("Quiz high scores: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", high_quiz_scores[i]);
        }
        printf("\n");

        printf("Quiz low scores: ");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", low_quiz_scores[i]);
        }
        printf("\n");

        return 0;
}
