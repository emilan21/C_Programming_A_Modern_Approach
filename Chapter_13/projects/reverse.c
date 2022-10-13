// Name: p4.c
// Purpose: Echoes command line arguments in reverse order
// Author: EM

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i = argc - 1;

    while (i > 0) {
        printf("%s ", argv[i]);
        i--;
    }
    printf("\n");

    return 0;
}
