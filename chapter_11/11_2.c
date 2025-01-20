/*	A program that asks for a 24-hour time, then displays the departure time of
	the closest flight in 12-hour form.
    Modified to include a function. */
	
#include <stdio.h>

/* external variables */
float hour, minutes;
int departure, arrival;

/* prototypes */
void find_closest_flight (int desired_time, int *departure_time, int *arrival_time);

int main(void)
{	
	// Asks user for 24-hour time
	printf("Enter 24-hour time: ");
	scanf("%f:%f", &hour, &minutes);

	// converts 24-hour time to minutes
	minutes += hour * 60;

    find_closest_flight(minutes, &departure, &arrival);

    if (departure < 720)
        printf("Closest departure time is %d:%.2d a.m., ", departure / 60, departure % 60);
    else
        printf("Closest departure time is %d:%.2d p.m., ", (departure / 60) - 12, departure % 60);

    if (arrival < 720)
        printf("arriving at %d:%.2d a.m.\n", arrival / 60, arrival % 60);
    else
        printf("arriving at %d:%.2d p.m.\n", (arrival / 60) - 12, arrival % 60);

	return 0;
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

/* find_closest_flight: Finds the flight whose departure time is closest to desired_time
                        (expressed in minutes since midnight). It will store the departure
                        and arrival times of this flight (also expressed in minutes since
                        midnight) in the variables pointed to by departure_time and
                        arrival_time. */
void find_closest_flight (int desired_time, int *departure_time, int *arrival_time)
{
    // Prints the closest departure time
	if (minutes <= 480 || minutes > 1305) {
        *departure_time = 480; *arrival_time = 616; }
	else if (minutes <= 583) {
        *departure_time = 583; *arrival_time = 712; }
	else if (minutes <= 679) {
        *departure_time = 679; *arrival_time = 811; }
	else if (minutes <= 767) {
        *departure_time = 767; *arrival_time = 900; }
	else if (minutes <= 840) {
        *departure_time = 840; *arrival_time = 968; }
	else if (minutes <= 945) {
        *departure_time = 945; *arrival_time = 1075; }
	else if (minutes <= 1140) {
        *departure_time = 1140; *arrival_time =  1280; }
	else {
        *departure_time = 1305; *arrival_time = 1438; }
}
