/*	A program that asks the user to enter a fraction, then
	reduces the fraction to lowest terms.
    Modified to include a function. */

#include <stdio.h>

/* external variables*/
int numerator, denominator, reduced_num, reduced_den;

/* prototypes */
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{	
	// Asks user for fraction
	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_num, &reduced_den);

	// Prints the fraction in lowest terms
	printf("In lowest terms: %d/%d\n", reduced_num, reduced_den);
	return 0;
}

/* reduce:  Numerator and denominator are the numerator and denomionator of a fraction.
            reduced_numerator and reduced_denomionator are pointers to variables in which
            the function will store the numerator and denominator of the fraction once
            it has been reduced to lowest terms. */
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int larger, smaller;
    // Finds the larger and the smaller number
	if (numerator > denominator) {
		larger = numerator;
		smaller = denominator;
	} else {
		larger = denominator;
		smaller = numerator;
	}

    // Finds the greatest common divisor
    int remainder;
	while (smaller != 0) {
		remainder = larger % smaller;
		larger = smaller;
		smaller = remainder;
	}
    int gcd = larger;

    // Divides the numerator and the denominator by the GCD
	*reduced_numerator = numerator / gcd;
	*reduced_denominator = denominator / gcd;
}
