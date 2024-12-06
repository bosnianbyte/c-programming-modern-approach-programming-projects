//	Checks numbers for repeated digits and prints which were repeated
	
#include <stdio.h>
#include <stdbool.h>

int main(void)
{	
	bool digit_seen[10] = {false};
	int digit;
	long n;
	bool repeated = false;

	printf("Enter a number: ");
	scanf("%ld", &n);

	printf("Repeated digits(s):");
	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			printf(" %d", digit);
			repeated = true;
		}
		digit_seen[digit] = true;
		n /= 10;
	}

	if (!repeated)
		printf("None");
	printf("\n");

	return 0;
}
