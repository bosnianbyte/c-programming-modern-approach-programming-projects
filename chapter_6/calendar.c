//	A program that prints a one-month calendar.
	
#include <stdio.h>

int main(void)
{
	int days, starting_day, i, last_day;

	// Asks the user how long the month is and which day the month starts
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);
	// Initializes last day of the week variable for later loop
	last_day = starting_day;

	// Prints tabs until the day which the month starts
	while (starting_day > 1) {
		printf("\t");
		--starting_day;
	}
	// Prints each date and prints a new line every saturday.
	for (i = 1; i <= days; ++i) {
		printf("%d\t", i);
		if ((i + last_day - 1) % 7 == 0)
			printf("\n");
	}

	return 0;
}
