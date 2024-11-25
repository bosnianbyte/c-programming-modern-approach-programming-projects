//	Calculates a broker's commission until the value entered is 0
	
#include <stdio.h>

int main(void)
{	
	float commission, value;

	while (1) {
		// Asks user for value of the trade
		printf("Enter value of trade: ");
		scanf("%f", &value);

		// Breaks out of loop once value == 0
		if (value == 0)
			break;
		
		// Calculates the commission based on value of trade
		if (value < 2500.00f)
			commission = 30.00f + .017f * value;
		else if (value < 6250.00f)
			commission = 56.00f + .0066f * value;
		else if (value < 20000.00f)
			commission = 76.00f + .0034f * value;
		else if (value < 50000.00f)
			commission = 100.00f + .0022f * value;
		else if (value < 500000.00f)
			commission = 155.00f + .0011f * value;
		else
			commission = 255.00f + .0009f * value;
		
		if (commission < 39.00f)
			commission = 39.00f;
		
		// Prints the commission
		printf("Commission: $%.2f\n\n", commission);
	}

	return 0;
}
