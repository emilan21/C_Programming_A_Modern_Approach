/* Reads a 5x5 array of intergers and then prints the row sums and the column sums: */

#include <stdio.h>

#define SIZE 5

int main(void)
{
	int student, quiz, high_score, low_score;
	int int_array[SIZE][SIZE];
	int student_total_scores[SIZE] = {0};
	int student_average_scores[SIZE] = {0};
	int quiz_total_scores[SIZE] = {0};
	int quiz_average_scores[SIZE] = {0};
	int quiz_high_scores[SIZE] = {0};
	int quiz_low_scores[SIZE] = {0};

	/* initalize the int_array to 0 */
	for (student = 0; student < SIZE; student++) {
		for (quiz = 0; quiz < SIZE; quiz++)
			int_array[student][quiz] = 0;			
	}		

	/* get input */
	for (student = 0; student < SIZE; student++) {
		printf("Enter row %d: ", student + 1);	
		for (quiz = 0; quiz < SIZE; quiz++) {
			scanf("%d", &int_array[student][quiz]);
		}
	}	

	/* find high score and low score for each quiz */
	for (quiz = 0; quiz < SIZE; quiz++) {
		high_score = int_array[0][quiz];
		low_score = int_array[0][quiz];
		for (student = 0; student < SIZE; student++) {
			if (int_array[student][quiz] > high_score) {
				high_score = int_array[student][quiz];
			}

			if (int_array[student][quiz] < low_score) {
				low_score  = int_array[student][quiz];
			}
			
			quiz_high_scores[quiz] = high_score;
			quiz_low_scores[quiz] = low_score;
		}
	}
	
	/* compute */
	for (student = 0; student < SIZE; student++) {
		for (quiz = 0; quiz < SIZE; quiz++) {
			student_total_scores[student] = student_total_scores[student] + int_array[student][quiz];
			student_average_scores[student] = student_total_scores[student] / SIZE;
			quiz_total_scores[student] = quiz_total_scores[student] + int_array[quiz][student];
			quiz_average_scores[student] = quiz_total_scores[student] / SIZE;
			
		}
	}

	/* output */
	printf("\n");

	printf("Student Total Scores: ");
	for (student = 0; student < SIZE; student++)
		printf("%d ", student_total_scores[student]);
	printf("\n");
	
	printf("Student average scores: ");
	for (student = 0; student < SIZE; student++)
		printf("%d ", student_average_scores[student]);
	printf("\n");

	printf("Quiz total scores: ");
	for (student = 0; student < SIZE; student++)
		printf("%d ", quiz_total_scores[student]);
	printf("\n");
	
	printf("Quiz average scores: ");
	for (student = 0; student < SIZE; student++)
		printf("%d ", quiz_average_scores[student]);
	printf("\n");

	printf("Quiz high scores: ");
	for (student = 0; student < SIZE; student++)
		printf("%d ", quiz_high_scores[student]);
	printf("\n");

	printf("Quiz low scores: ");
	for (student = 0; student < SIZE; student++)
		printf("%d ", quiz_low_scores[student]);
	printf("\n");

	return 0;
}
