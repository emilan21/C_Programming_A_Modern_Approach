// Name: p6.c
// Purpose: Print sizeof values
// Author: EM

#include <stdio.h>

int main(void)
{
        printf("Size of int: %lu\n", (unsigned long) sizeof(int)); 
        printf("Size of short: %lu\n", (unsigned long) sizeof(short)); 
        printf("Size of long: %lu\n", (unsigned long) sizeof(long)); 
        printf("Size of float: %f\n", (unsigned long double) sizeof(float)); 
        printf("Size of double: %f\n", (unsigned long double) sizeof(double)); 
        printf("Size of long double: %f\n", (unsigned long double) sizeof(long double)); 

        return 0;
}
