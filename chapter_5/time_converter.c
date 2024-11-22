//	A program that converts 24-hour time to 12-hour form
	
#include <stdio.h>

int main(void)
{	
	int hours, minutes;

	// Asks the user to enter a 24-hour time
	printf("Enter a 24-hour time (hh:mm): ");
	scanf("%d:%d", &hours, &minutes);

	// If statement to print the correct 12-hour time
	if (hours == 0) {
		printf("The equivalent 12-hour time: 12:%.2d AM", minutes);
	}
	else if (hours == 12) {
		printf("The equivalent 12-hour time: 12:%.2d PM", minutes);
	}
	else if (hours > 12) {
		printf("The equivalent 12-hour time: %d:%.2d PM", hours - 12, minutes);
	}
	else {
		printf("The equivalent 12-hour time: %d:%.2d AM", hours, minutes);
	}
	return 0;
}
