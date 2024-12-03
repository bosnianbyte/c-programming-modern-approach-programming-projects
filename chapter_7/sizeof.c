// Prints the sizeof operator of an int, short, long, float, double, and long double
// C99 
#include <stdio.h>

int main(void)
{
	//Prints the number of bytes required to store each type
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of short: %zu\n", sizeof(short));
	printf("Size of long: %zu\n", sizeof(long));
	printf("Size of float: %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of long double: %zu\n", sizeof(long double));

	return 0;
}
