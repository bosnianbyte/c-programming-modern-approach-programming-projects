//	Calculates a broker's commission
	
#include <stdio.h>

int main(void)
{	
	int shares;
	float commission, value, share_price;

	//Asks user for number of shares in the trade
	printf("Enter the number of shares: ");
	scanf("%d", &shares);

	// Asks use for the price of each share in the trade
	printf("Enter the price of each share (in $): ");
	scanf("$%f", &share_price);

	value = shares * share_price;

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

	printf("Commission: $%.2f\n", commission);

	return 0;
}
