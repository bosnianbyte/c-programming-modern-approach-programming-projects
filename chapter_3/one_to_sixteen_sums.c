/*	A program that asks the user to enter the numbers from 1-16 in any order, then displays
	them in a 4 by 4 arragement with the sums of the rows, columns, and diagonals */
#include <stdio.h>

int main(void)
{	
	int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, twelfth, thirteenth, fourteenth, fifteenth, sixteenth;

	// Asks user to input numbers 1-16 in any order
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth, &thirteenth, &fourteenth, &fifteenth, &sixteenth);

	// Prints the numbers entered in a 4 by 4 arragement
	printf("\n");
	printf("%d\t%d\t%d\t%d\n", first, second, third, fourth);
	printf("%d\t%d\t%d\t%d\n", fifth, sixth, seventh, eighth);
	printf("%d\t%d\t%d\t%d\n", ninth, tenth, eleventh, twelfth);
	printf("%d\t%d\t%d\t%d\n\n", thirteenth, fourteenth, fifteenth, sixteenth);

	// Prints the sums of the rows, columns, and diagonals
	printf("Row sums: %d %d %d %d\n", first + second + third + fourth, fifth + sixth + seventh + eighth, ninth + tenth + eleventh + twelfth, thirteenth + fourteenth + fifteenth + sixteenth);
	printf("Column sums: %d %d %d %d\n", first + fifth + ninth + thirteenth, second + sixth + tenth + fourteenth, third + seventh + eleventh + fifteenth, fourth + eighth + twelfth + sixteenth);
	printf("Diagonal sums: %d %d\n", first + sixth + eleventh + sixteenth, fourth + seventh + tenth + thirteenth);

	return 0;
}
