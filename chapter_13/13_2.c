/*  Print a one-year reminder list
    IMPROVED:
        (a) Prints a message and ignores a reminder if the corresponding day
            is negative or larger than 31 using the continue statement
        (b) Allows the user to enter a day, a 24-hour time, and a reminder.
            The printed reminder list should be sorted first by day, then
            by time.
        (c) The program prints a one-year reminder list. Requires the user to
            enter days in the form month/day */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line (char str[], int n);

int main (void)
{
    // + 5 for the mm/dd and + 6 for the time 00:00 and '\0' char
    char reminders[MAX_REMIND][MSG_LEN+16];
    char day_str[13], msg_str[MSG_LEN+1];
    int month, day, hour, minute, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        // GETS date ---
        printf("Reminder [%d], Enter date (mm/dd): ", num_remind + 1);
        scanf("%2d/%2d", &month, &day); // Gets day input
        if (month == 0) {
            break;
        } else if (day < 0 || day > 31) {
            printf("Error: Day is negative or larger than 31\n");
            continue;
        }

        // Clears input buffer
        while (getchar() != '\n');

        // GETS time ---
        printf("Reminder [%d], Enter 24-hour time (00:00): ", num_remind + 1);
        scanf("%2d:%2d", &hour, &minute);
        sprintf(day_str, "%02d/%02d %02d:%02d ", month, day, hour, minute);

        // Clears input buffer
        while (getchar() != '\n');

        // GETS reminder ---
        printf("Reminder [%d], Enter reminder: ", num_remind + 1);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    
    printf("\n   Day  Time Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
