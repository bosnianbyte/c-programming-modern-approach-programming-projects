/*	A program that asks the user to enter a fraction, then
	reduces the fraction to lowest terms */
	
#include <stdio.h>

int main(void)
{	
	int numerator, denominator, larger, smaller, remainder, gcd;

	// Asks user for fraction
	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	// Finds the larger and the smaller number
	if (numerator > denominator) {
		larger = numerator;
		smaller = denominator;
	} else {
		larger = denominator;
		smaller = numerator;
	}

	// Finds the greatest common divisor
	while (smaller != 0) {
		remainder = larger % smaller;
		larger = smaller;
		smaller = remainder;
	}
	gcd = larger;

	// Divides the numerator and the denominator by the GCD
	numerator /= gcd;
	denominator /= gcd;

	// Prints the fraction in lowest terms
	printf("In lowest terms: %d/%d\n", numerator, denominator);
	return 0;
}
