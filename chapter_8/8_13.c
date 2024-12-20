// Modified project 11 from Chapter 7. Prints a person's name in a specific order. (last name, first initial.). Stores the last name into an array until it can be printed.

#include <stdio.h>

int main(void)
{
    char last_name[20];
    char first_initial, c;
    int i;

    printf("Enter a first and last name: ");

    // Scanf function to collect the first initial
    scanf("%c", &first_initial);

    // While loop that discards the remaining letters in the first name
    while ((c = getchar()) != ' ');

    // For loop that assigns each letter of the last name into the array
    for (i = 0; (c = getchar()) != '\n'; i++) {
        last_name[i] = c;
    }

    // For loop to print the last name using the array
    for (i = 0; last_name[i] != 0; i++) {
        printf("%c", last_name[i]);
    }

    // Prints the comma, first initial, and a period
    printf(", %c.\n", first_initial);


    return 0;
}
