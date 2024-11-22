//	A program that calculates the check digit to see if the UPC is valid
	
#include <stdio.h>

int main(void)
{	
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, cd, first_sum, second_sum, total, check_digit;

	// Asks user for a 12 digit UPC
	printf("Enter a 12 digits UPC number: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &cd);

	// Computes the check digit
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	check_digit = 9 - (total - 1) % 10;

	// Prints if the UPC is valid or not based on the check digit
	if (check_digit == cd)
		printf("VALID");
	else
		printf("NOT VALID");
	return 0;
}
