//	A program that asks the user for a 12-hour time, then displays the time in 24-hour form
	
#include <stdio.h>
#include <ctype.h>

int main(void)
{	
	int hours, minutes;
	char meridiem;

	// Asks user for time
	printf("Enter a 12-hour time: ");
	scanf("%d:%d ", &hours, &minutes);
	meridiem = getchar();
	meridiem = toupper(meridiem);

	switch (meridiem) {
		case 'A':
			if (hours == 12) {
				hours = 0;
			}
			break;
		case 'P':
			if (hours == 12);
			else {
				hours += 12;
			}
			break;
	}

	printf("Equivalent 24-hour time: %d:%.2d\n", hours, minutes);
	return 0;
}
