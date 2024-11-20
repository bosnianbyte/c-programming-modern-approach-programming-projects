/* 	A program that accepts a date from the user in the format
	mm/dd/yyyy and displays it as yyyymmdd */
#include <stdio.h>

int main(void)
{	
	int month, day, year;
	// Gets the date from the user
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	//prints out the date in the format (yyyymmdd)
	printf("You entered the date %4d%.2d%.2d", year, month, day);

	return 0;
}
