/*	Program that asks the user to enter a three-digit number, then
	prints the digits in reverse order */
	
#include <stdio.h>

int main(void)
{	
	int number, digit1, digit2, digit3;

	// Asks user for 3 digit number
	printf("Write a 3 digit number: ");
	scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

	// Prints the reversal
	printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
	return 0;
}
