//	A program that displays all even squares between 1 and an entered number
	
#include <stdio.h>

int main(void)
{
	int limit, i, square;

	// Asks user for the limit
	printf("Enter a number: ");
	scanf("%d", &limit);

	/*	Loop that squares i then increments it afterwards
		only printing the result if its even and less than or equal to the limit */
	for(i = 1; (square = i * i) <= limit; i++) {
		if (square % 2 == 0)
			printf("%d\n", square);
	}
	return 0;
}
