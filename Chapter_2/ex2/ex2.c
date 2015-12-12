/* Computes the voume of a sphere */

#include <stdio.h>

#define FACTOR (4.0f/3.0f) 
#define PI 3.14f

int main(void)
{
	float volume;
	float radius;
	
	radius = 10.0f;
	volume = FACTOR * PI * (radius * radius * radius);

	printf("The volum of a sphere with the radius of %.2f is %.2f\n", radius, volume);
	
	return 0;	
}
