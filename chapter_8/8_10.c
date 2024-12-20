// A program that modifies project 8 from chapter 5. Flight times are stored in an array and searched for in a loop

#include <stdio.h>

int main(void)
{
    // Flight times in minutes since midnight
    int departure_times[8] = {480, 583, 679, 767, 840, 945, 1140, 1305}, arrival_times[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hour, minute, i, dhour, dmin, ahour, amin;

    // Asks user for 24-hour time
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    
    // Converts 24-hour time into minutes
    minute += hour * 60;

    // Loop that searches for closest departure time
    for(i = 0; minute >= departure_times[i]; i++);

    // Converts departure time and arrival time into 12-hour format
    dhour = departure_times[i] / 60;
    dmin = departure_times[i] % 60;
    ahour = arrival_times[i] / 60;
    amin = arrival_times[i] % 60;

    // Prints out closest departure time
    if (dhour > 12) {
        dhour -= 12;
        ahour -= 12;
        printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.", dhour, dmin, ahour, amin); 
    } else if (ahour > 12) {
        ahour -= 12;
        printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d p.m.", dhour, dmin, ahour, amin);
    } else {
        printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.", dhour, dmin, ahour, amin);
    }

    return 0;
}
