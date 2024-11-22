//	A program to estimate the wind force using the Beaufort scale
	
#include <stdio.h>

int main(void)
{	
	float wind_speed;

	// Asks user for the wind speed;
	printf("Enter a wind speed (in knots): ");
	scanf("%f", &wind_speed);

	// Prints the description of the wind speed
	if (wind_speed < 1.00f)
		printf("Description: Calm\n");
	else if (wind_speed < 4.00f)
		printf("Description: Light air\n");
	else if (wind_speed < 28.00f)
		printf("Description: Breeze\n");
	else if (wind_speed < 48.00f)
		printf("Description: Gale\n");
	else if (wind_speed < 64)
		printf("Description: Storm\n");
	else
		printf("Description: Hurricane\n");
	return 0;
}
