// Sums a series of numbers (using double variables)

#include <stdio.h>

int main(void)
{
	double n, sum = 0.0;

	printf("This program sums a series of rational numbers.\n");
	printf("Enter rational numbers (0 to terminate): ");

	scanf("%lf", &n);
	while (n != 0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %.4lf\n", sum);
	
	return 0;
}
