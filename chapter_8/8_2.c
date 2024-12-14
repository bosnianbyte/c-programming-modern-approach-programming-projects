//	Prints a table showing how many times each digit appears in a number
	
#include <stdio.h>

int main(void)
{	
	int digit_seen[10] = {0}; // Initializes array with all 0's
	int i;
	long n;

	// Asks user for a number and stores it as a long integer
	printf("Enter a number: ");
	scanf("%ld", &n);

	// Converts any negative number entered into positive
	n = (n < 0) ? -n : n;

	printf("Digit:\t\t");
	
	// Prints numbers 0 - 9
	for (i = 0; i <= 9; i++) {
		printf("%d\t", i);
	}

	// Adds 1 to each array digit found in the long integer
	while (n > 0) {
		++digit_seen[n % 10];
		n /= 10;
	}

	printf("\nOccurances:");

	// Prints the amount associated with each single digit in the long integer
	for(i = 0; i <= 9; i++) {
		printf("\t%d", digit_seen[i]);
	}
	return 0;
}