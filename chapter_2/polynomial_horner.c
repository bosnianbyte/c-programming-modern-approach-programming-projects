/* 	Asks the user for x value then displays the result
	of a polynomial using Horner's Rule */
#include <stdio.h>

int main(void)
{	
	float x, result;
	// Prompts the user for x value
	printf("Enter a value for x: ");
	scanf("%f", &x);

	// Computes the polynomial and prints the result
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("The result of the polynomial is: %.2f", result);
	return 0;
}
