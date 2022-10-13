// Name: p10.c
// Purpose: Take a first name and last name entered by the user
// and displays the lastname, a comma, and the first inital, followed by a period
// Author: EM

#include <stdio.h>
#include <string.h>

#define MAX_NAME 50

int read_line(char str[], int n);
void reverse_name(char *name);

int main(void)
{
    char name[MAX_NAME];

	printf("Enter a first and last name: ");
    read_line(name, MAX_NAME);
    reverse_name(name);
    printf("%s\n", name);

    return 0;
}

void reverse_name(char *name)
{
    char first_name[MAX_NAME];
    char last_name[MAX_NAME];
    char first_inital[2];
    char inital;
    char delim[] = " ";

    char *ptr = strtok(name, delim);
    strcpy(first_name, name);

    while (ptr != NULL) {
        strcpy(last_name, ptr);
        ptr = strtok(NULL, delim);
    }

    inital = first_name[0];
    sprintf(first_inital, "%c", inital);

    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_inital);
    strcat(name, ".");
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
