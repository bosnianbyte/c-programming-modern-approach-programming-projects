// Adds two fractions
	
#include <stdio.h>

int main(void)
{	
	int num1, denom1, num2, denom2, result_num, result_denom;

	// Asks user for both fractions
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	// Calculates the sum of both fractions
	result_num = num1 * num2 + num2 * denom1;
	result_denom = denom1 * denom2;

	// Prints the sum
	printf("The sum is %d/%d\n", result_num, result_denom);
	return 0;
}
