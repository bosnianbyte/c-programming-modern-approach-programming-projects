//	A program that calculates how many digits a number contains
	
#include <stdio.h>

int main(void)
{	
	int number, digits;

	// Asks user for a number, assuming less that 4 digits are entered
	printf("Enter a number: ");
	scanf("%d", &number);

	// Cascaded if statements to test for the amount of digits
	if (number < 10)
		digits = 1;
	else
		if (number < 100)
			digits = 2;
		else
			if (number < 1000)
				digits = 3;
			else
				if (number < 10000)
					digits = 4;

	// Prints how many digits the number has
	printf("The number %d has %d digits", number, digits);
	return 0;
}
