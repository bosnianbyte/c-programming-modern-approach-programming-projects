// A program that displays the largest nonnegative number entered
	
#include <stdio.h>

int main(void)
{	
	float number, largest_number;
	largest_number = 0;

	// While loop that records the largest number entered and exits when the user enters 0
	while (number != 0) {
		printf("Enter a number: ");
		scanf("%f", &number);
		if (number > largest_number)
			largest_number = number;
	}

	// Prints the largest number entered
	printf("The largest number entered was %.2f", largest_number);

	return 0;
}
