#include <stdio.h>

#define SIZE 256

int main(void)
{
    char a[SIZE] = {0};
    int i = 0;
    char ch;

    printf("Enter message: ");
	while ((ch = getchar()) != '\n') {
        a[i] = ch;
        i++;
    }

    printf("In BIFF-speak: ");
    for (i = 0; i < SIZE; i++) {
        if ((a[i] >= 'a') && (a[i] <= 'z'))
            a[i] -= 32;
        if (a[i] == 'A')
            printf("4");
        else if (a[i] == 'B')
            printf("8");
        else if (a[i] == 'E')
            printf("3");
        else if (a[i] == 'I')
            printf("1");
        else if (a[i] == 'O')
            printf("0");
        else if (a[i] == 'S')
            printf("5");
        else
            printf("%c", a[i]);
    }

    printf("!!!!!!!!!!");
    printf("\n");

    return 0;
}
