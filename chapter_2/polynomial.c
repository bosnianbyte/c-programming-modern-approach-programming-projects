/* 	Asks the user for x value then displays the result
	of a polynomial */
#include <stdio.h>

int main(void)
{	
	float x, result;
	// Prompts the user for x value
	printf("Enter a value for x: ");
	scanf("%f", &x);

	// Computes the polynomial and prints the result
	result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;
	printf("The result of the polynomial is: %.2f", result);
	return 0;
}
