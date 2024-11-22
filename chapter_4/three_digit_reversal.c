/*	Program that asks the user to enter a three-digit number, then
	prints the digits in reverse order */
	
#include <stdio.h>

int main(void)
{	
	int number, digit1, digit2, digit3;

	// Asks user for 3 digit number
	printf("Write a 3 digit number; ");
	scanf("%d", &number);

	// Assigns each digit their own lvalue;
	digit1 = number / 100;
	digit2 = number % 100 / 10;
	digit3 = number % 10;

	// Prints the reversal
	printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
	return 0;
}
