//	Calculates a broker's commission and their rival's commission
	
#include <stdio.h>

int main(void)
{	
	int shares;
	float commission, value, share_price, rival_commission;

	//Asks user for number of shares in the trade
	printf("Enter the number of shares: ");
	scanf("%d", &shares);

	// Asks use for the price of each share in the trade
	printf("Enter the price of each share (in $): ");
	scanf("%f", &share_price);
	// Calculates the value of the trade
	value = shares * share_price;

	// Calculates the commission
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
	// Minimum commission amount is $39.00
	if (commission < 39.00f)
		commission = 39.00f;

	// Calculates rival's commission
	if (shares < 2000)
		rival_commission = 33.00f + 0.03f * shares;
	else
		rival_commission = 33.00f + 0.02f * shares;

	// Prints the commission
	printf("Commission: $%.2f\n", commission);
	printf("Rival's commission: $%.2f\n", rival_commission);
	return 0;
}
