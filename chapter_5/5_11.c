// A program that prints the English word for a two-digit number
	
#include <stdio.h>

int main(void)
{	
	int number, tens, ones;

	// Asks user for a two-digit number
	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	// Converts the number into two digits (tens and ones place)
	tens = number / 10;
	ones = number % 10;

	// First switch statement to print the first digit
	switch (tens) {
		case 1:
			if (ones == 0)
				printf("You entered the number ten.");
			else if (ones == 1)
				 printf("You entered the number eleven.");
			else if (ones == 2)
				printf("You entered the number twelve.");
			else if (ones == 3)
				printf("You entered the number thirteen.");
			else if (ones == 4)
				printf("You entered the number fourteen.");
			else if (ones == 5)
				printf("You entered the number fifteen.");
			else if (ones == 6)
				printf("You entered the number sixteen.");
			else if (ones == 7)
				printf("You entered the number seventeen.");
			else if (ones == 8)
				printf("You entered the number eighteen.");
			else if (ones == 9)
				printf("You entered the number nineteen.");
			break;
		case 2:
			printf("You entered the number twenty");
			break;
		case 3:
			printf("You entered the number thirty");
			break;
		case 4:
			printf("You entered the number forty");
			break;
		case 5:
			printf("You entered the number fifty");
			break;
		case 6:
			printf("You entered the number sixty");
			break;
		case 7:
			printf("You entered the number seventy");
			break;
		case 8:
			printf("You entered the number eighty");
			break;
		case 9:
			printf("You entered the number ninety");
			break;

	}

	// Second switch statement to print the second digit
	if (tens != 1) {
		switch (ones) {
			case 1:
				printf("-one.\n");
				break;
			case 2:
				printf("-two.\n");
				break;
			case 3:
				printf("-three.\n");
				break;
			case 4:
				printf("-four.\n");
				break;
			case 5:
				printf("-five.\n");
				break;
			case 6:
				printf("-six.\n");
				break;
			case 7:
				printf("-seven.\n");
				break;
			case 8:
				printf("-eight.\n");
				break;
			case 9:
				printf("-nine.\n");
				break;
			case 0:
				printf(".\n");
		}
	}
	return 0;
}
