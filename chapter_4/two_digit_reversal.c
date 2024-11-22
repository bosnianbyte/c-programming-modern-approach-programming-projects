/*	Program that asks the user to enter a two-digit number, then
	prints the digits in reverse order */
	
#include <stdio.h>

int main(void)
{	
	int number, digit1, digit2;

	// Asks user for 2 digit number
	printf("Write a 2 digit number; ");
	scanf("%d", &number);

	// Assigns each digit their own lvalue;
	digit1 = number / 10;
	digit2 = number % 10;

	// Prints the reversal
	printf("The reversal is: %d%d\n", digit2, digit1);
	return 0;
}
