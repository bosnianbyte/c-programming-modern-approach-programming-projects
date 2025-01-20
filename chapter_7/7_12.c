//	A program that evaluates an expression from left to right with operators +, -,* and /.
	
#include <stdio.h>

int main(void)
{	
	float result = 0.0, first_number, number;
	char ch;

	printf("Enter an expression: ");
	scanf("%f", &result);

	while((ch = getchar()) != '\n') {

		if (ch == '+') {
			scanf("%f", &number);
			result += number;
		} else if (ch == '-') {
			scanf("%f", &number);
			result -= number;
		} else if (ch == '*') {
			scanf("%f", &number);
			result *= number;
		} else if (ch == '/') {
			scanf("%f", &number);
			result /= number;
		}
	}
	printf("Value of expression: %.2f\n", result);

	return 0;
}
