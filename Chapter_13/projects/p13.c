// Name: p13.c
// Purpose: Encrypts a message using a Caesar cipher
// Author: EM

#include <stdio.h>

#define SIZE 80

void encrypt(char *message, int shift);
int read_line(char str[], int n);

int main(void)
{
    char message[SIZE];
    int shift_amount;

    printf("Enter message to be encrypted: ");
    read_line(message, SIZE);

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift_amount);

    encrypt(message, shift_amount);

    printf("Encrypted message: %s\n", message);

    return 0;
}

void encrypt(char *message, int shift)
{
    for (int i = 0; i < SIZE; i++) {
        if ((message[i] >= 'A') && (message[i] <= 'Z')) {
            message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        }
        else if ((message[i] >= 'a') && (message[i] <= 'z')) {
            message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
        }
    }

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
