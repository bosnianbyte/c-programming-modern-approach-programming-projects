//	Uses Newton's method to compute the square root of a positive float
	
#include <stdio.h>
#include <math.h>

int main(void)
{	
	double x, y = 1.0f, avg; // Initial guess for y is 1

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	while(1) {
		avg = (x / y + y) / 2; // Calculates the average of y and x/y
		if (fabs(y - avg) < 0.00001)
			break;
		y = avg;

	}

	// Prints the square root
	printf("Square root: %.5lf", y);

	return 0;
}
