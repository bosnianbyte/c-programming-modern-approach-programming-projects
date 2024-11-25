//	A program that displays a number's digits in reverse
	
#include <stdio.h>

int main(void)
{	
	int number, digit;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Reversal: ");

	// Do loop that keeps dividing the number by 10 and prints the remainder each time
	do {
		digit = number % 10;
		printf("%d", digit);
		number /= 10;
	} while (number != 0);

	return 0;
}
