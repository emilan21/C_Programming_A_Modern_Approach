// Name: p3.c
// Purpose: Computes the volume of a sphere.
// Author: EM 

#include <stdio.h>

#define FRACTIONAL 4.0f / 3.0f
#define PI 3.14159f

int main(void)
{
       int radius = 0; 
       float volume = 0;

       printf("Enter the sphere radius: ");
       scanf("%d", &radius);

       volume = FRACTIONAL * PI * (radius * radius * radius);

       printf("Sphere volume: %f\n", volume);

       return 0;
}
