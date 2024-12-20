// Modified programming project 5 from chapter 7. SCRABBLE value of letters are stored in an array. As letters are read, the program uses the array to determine the SCRABBLE value.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int total = 0;
    // SCRABBLE character value for A - Z
    int value[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");

    for(;(c = getchar()) != '\n';) {
        c = toupper(c); // Capitalizes all letters read
        c = (int) c; // Turns each letter into their ASCII value
        c -= 'A'; // Subtracts each letter by A's ASCII value (65) to correspond to the array position of the letter
        total += value[c]; // Adds up each letters value into a total
    }
    // Prints the SCRABBLE word's value
    printf("Scrabble value: %d\n", total);

    return 0;
}
