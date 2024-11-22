//	Reads an integer then displays it in octal
	
#include <stdio.h>

int main(void)
{	
	int number, digit1, digit2, digit3, digit4, digit5;

	// Asks user for a number
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	// Computes each digit in octal
	digit1 = number % 8;
	digit2 = (number / 8) % 8;
	digit3 = (number / 8 / 8) % 8;
	digit4 = (number / 8 / 8 / 8) % 8;
	digit5 = (number / 8 / 8 / 8 / 8) % 8;

	// Prints the octal result
	printf("In octal, your number is: %d%d%d%d%d\n", digit5, digit4, digit3, digit2, digit1);
	return 0;
}
