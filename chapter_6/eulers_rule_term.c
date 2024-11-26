/*	A program that calculates eulers rule, until the current term becomes less than
	an input given by the user (epsilon)
	1 + 1/1! + 1/2! + 1/3! + ... + 1/n! */
	
#include <stdio.h>

int main(void)
{	
	int i, j;
	float e, factorial, epsilon;

	// Asks user for 'n'
	printf("Enter a small rational number: ");
	scanf("%f", &epsilon);

	// Initializes e as 1 because the first summand in the expression is 1
	e = 1.0f;

	// Loop that calculates the sum of e
	i = 1;
	do {
		factorial = 1.0f;
		// Nested loop that calculates the denominator value
		for (j = 1; j <= i; j++) {
			factorial = factorial * j;
		}
		e += 1/factorial;
		++i;
	} while (1/factorial > epsilon);

	// Prints the approximate value of e;
	printf("e = %.10f", e);
	return 0;
}
