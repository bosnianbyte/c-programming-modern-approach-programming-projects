// 	A program that computes the volume of a sphere.
#include <stdio.h>
#define PI 3.1415926535f

int main(void)
{	
	float radius, volume;

	// Prompts the user to enter the radius of the sphere
	printf("Enter the radius in meters: ");
	scanf("%f", &radius);

	// Computes the volume
	volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

	// Prints the results
	printf("The volume of the sphere with a %.2f radius is %.2f", radius, volume);
	return 0;
}
