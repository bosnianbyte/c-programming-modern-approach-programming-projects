/*	A program that asks for a 12-hour time, then displays the departure time of
	the closest flight */
	
#include <stdio.h>
#include <ctype.h>

int main(void)
{	
	int hour, minutes;
	char meridiem;

	// Asks user for 12-hour time
	printf("Enter 12-hour time followed by (a/p/am/pm): ");
	scanf("%d:%d", &hour, &minutes);
	meridiem = getchar();
	meridiem = toupper(meridiem);

	// converts 12-hour time to minutes
	if (meridiem == 'A') {
		if (hour == 12) {
			hour = 0;
		} else {
		minutes += hour * 60;
		}
	}
	else {
		if (hour == 12) {
			minutes += hour * 60;
		} else {
			minutes += (hour + 12) * 60;
		}
	}

	/********************************
	 *	Departure		Arrival		*
	 *	8:00 a.m.		10:16 a.m.	*
	 *	9:43 a.m.		11:52 a.m.	*
	 *	11:19 a.m.		1:31 p.m.	*
	 *	12:47 p.m.		3:00 p.m.	*
	 *	2:00 p.m.		4:08 p.m.	*
	 *	3:45 p.m.		5:55 p.m.	*
	 *	7:00 p.m.		9:20 p.m.	*
	 *	9:45 p.m.		11:58 p.m.	*
	 ********************************/

	// Prints the closest departure time
	if (minutes <= 480 || minutes > 1305)
	{
		printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m.\n");
	}
	else if (minutes <= 583)
	{
		printf("Closest departure time is 9:45 a.m., arriving at 11:52 a.m.\n");
	}
	else if (minutes <= 679)
	{
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	}
	else if (minutes <= 767)
	{
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}
	else if (minutes <= 840)
	{
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	}
	else if (minutes <= 945)
	{
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}
	else if (minutes <= 1140)
	{
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}
	else 
	{
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}

	return 0;
}
