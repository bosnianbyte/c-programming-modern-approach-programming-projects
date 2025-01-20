/*	Adds, subtracts, multiplies, or divides 2 fractions
	Modified project 6 from chapter 3 */
#include <stdio.h>

int main(void)
{	
	int num1, denom1, num2, denom2, result_num, result_denom;
	char sign;

	// Asks user for both fractions
	printf("Enter two fractions separated by a sign (+)(-)(*)(/): ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);

	// Calculates the numerator and denominator
	if (sign == '+') {
		result_num = num1 * num2 + num2 * denom1;
		result_denom = denom1 * denom2;
	} else if (sign == '-') {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
	} else if (sign == '*') {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	} else if (sign == '/') {
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
	}
	// Prints the result
	printf("%d/%d %c %d/%d = %d/%d", num1, denom1, sign, num2, denom2, result_num, result_denom);
	return 0;
}
