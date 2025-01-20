//	Calculates the factorial of a positive integer
	
#include <stdio.h>

int main(void)
{	
	int n, i;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("Factorial of %d: ", n);

	// For loop that calculates the factorial
	for (i = n; i > 1; --i) {
		n = n * (i - 1);
	}

	// Prints the factorial
	printf("%d", n);

	return 0;
}
