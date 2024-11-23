// A program that indicates which of two dates comes first
	
#include <stdio.h>

int main(void)
{	
	int month1, day1, year1, month2, day2, year2;

	// Asks user for two dates
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	// Prints which date comes earlier on the calendar
	if (year1 < year2) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
	}
	else if (year1 > year2)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
	}
	else if (month1 < month2)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
	}
	else if (month1 > month2)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
	}
	else if (day1 < day2)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
	}
	else if (day1 > day2)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
	}
	else
	{
		printf("The dates %d/%d/%.2d and %d/%d/%.2d are the same\n", month1, day1, year1, month2, day2, year2);
	}
	return 0;
}
