// Name: sum.c
// Purpose: Sums command line arguments
// Author: EM

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    int val = 0;

    for (int i = 1; i < argc; i++) {
        val = atoi(argv[i]);
        sum += val;
    }

    printf("Total: %d\n", sum);

    return 0;
}
