// Name: p2.c
// Purpose: Computes the volume of a sphere with a radius of 10
// Author: EM 

#include <stdio.h>

#define FRACTIONAL 4.0f / 3.0f
#define PI 3.14159f

int main(void)
{
       int radius = 10; 
       float volume = 0;

       volume = FRACTIONAL * PI * (radius * radius * radius);

       printf("Sphere volume: %f\n", volume);

       return 0;
}
