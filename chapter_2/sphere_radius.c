/* 	a program that computes the volume of a sphere
	with a 10-meter radius. */
#include <stdio.h>
#define PI 3.1415926535f

int main(void)
{	
	int radius = 10;
	float volume;
	volume = (4.0f / 3.0f) * PI * (radius * radius * radius);
	printf("%.2f", volume);
	return 0;
}
