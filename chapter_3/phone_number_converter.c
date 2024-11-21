/*	A program that takes a phone number in the format (xxx) xxx-xxxx
	and displays it in xxx.xxx.xxxx */
#include <stdio.h>

int main(void)
{	
	int area_code, first_number, second_number;

	// Asks user for phone number
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &first_number, &second_number);

	// Displays phone number
	printf("You entered %d.%d.%d", area_code, first_number, second_number);
	return 0;
}
