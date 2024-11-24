// A program that asks for 2 integers and displays their greatest common divisor using Euclid's algorithm
	
#include <stdio.h>

int main(void)
{	
	int int1, int2, big_int, small_int, remainder;

	// Asks user for two integers
	printf("Enter two integers: ");
	scanf("%d %d", &int1, &int2);

	// If statement to find out while integer is larger and which is smaller
	if(int1 > int2) {
		big_int = int1;
		small_int = int2;
	} else {
		big_int = int2;
		small_int = int1;
	}

	// While loop for Euclid's algorithm
	while (small_int != 0) {
		remainder = big_int % small_int;
		big_int = small_int;
		small_int = remainder;
	}

	// Prints the greatest common divisor (GCD)
	printf("Greatest common divisor: %d\n", big_int);

	return 0;
}
