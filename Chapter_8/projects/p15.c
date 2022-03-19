// Name: p15.c
// Purpose: Encrypts a message using a Caesar cipher
// Author: EM

#include <stdio.h>

#define SIZE 80

int main(void)
{
        char message[SIZE] = {0};
        char ch;
        int shift_amount;
        int count = 0;

        printf("Enter message to be encrypted: ");
        while((ch = getchar()) != '\n') {
            message[count] = ch;
            count++;
        }

        printf("Enter shift amount (1 - 25): ");
        scanf("%d", &shift_amount);

        printf("Encrypted message: ");
        for (int i = 0; i < SIZE; i++) {
            if (message[i] != '0') {
                if ((message[i] >= 'A') && (message[i] <= 'Z')) {
                    printf("%c", ((message[i] - 'A') + shift_amount) % 26 + 'A');
                }
                else if ((message[i] >= 'a') && (message[i] <= 'z')) {
                    printf("%c", ((message[i] - 'a') + shift_amount) % 26 + 'a');
                }
                else {
                    printf("%c", message[i]);
                }
            }
        }

        printf("\n");

        return 0;
}
