/* 	A program that asks the user to enter a dollar-and-cents
	amount, then displays the amount with 5% tax added */
#include <stdio.h>

int main(void)
{	
	float amount;

	// Asks the user to enter the dollar-and-cents amount
	printf("Enter an amount: ");
	scanf("%f", &amount);

	// Displays the amount with 5% tax added
	printf("With tax added: $%.2f", amount * 1.05);
	return 0;
}
