/* Prints a table of squares using a for statement that pauses every 24 squares */

#include <stdio.h>

int main(void)
{
	int i, n;

	printf("This program prints a table of squares.\n");
	// Asks user for the number of entries in the table of squares
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	// getchar function to collect the enter keystroke after the scanf function
	getchar();

	// For loop to print each entry and its square
	for (i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);
		// Pauses the loop every 24 squares until the user inputs the enter key
		if (i % 24 == 0) {
			printf("Press Enter to continue\n");
			getchar();
		}
	}
	return 0;
}
