// A program that approximates e, where n is an integer entered by the user.
// 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
	
#include <stdio.h>

int main(void)
{	
	int n, i, j;
	float e, factorial;

	// Asks user for 'n'
	printf("Enter an integer: ");
	scanf("%d", &n);

	// Initializes e as 1 because the first summand in the expression is 1
	e = 1.0f;

	// Loop that calculates the sum of e
	for(i = 1; i <= n; i++) {
		factorial = 1.0f;
		// Nested loop that calculates the denominator value
		for (j = 1; j <= i; j++) {
			factorial = factorial * j;
		}
		e += 1/factorial;
	}
	// Prints the approximate value of e;
	printf("e = %.10f", e);
	return 0;
}
