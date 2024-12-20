// A program that translates an alphabetic phone number into numeric form

#include <stdio.h>
#include <ctype.h>

// Macro that defines the size of our number array
#define SIZE ((int) (sizeof(number) / sizeof(number[0])))

int main(void)
{
    int i;
    char c, number[15];

    printf("Enter phone number: ");

    // For loop that gets each single character and stores it into the number array
    for (i = 0; (c = getchar()) != '\n'; ++i) {
        c = toupper(c);
        switch (c) {
            case 'A': case 'B': case 'C':
                number[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                number[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                number[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                number[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                number[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                number[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                number[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                number[i] = '9';
                break;
            default:
                number[i] = c;

        }
    }
    printf("In numeric form: ");

    // Prints each number in our array
    for (i = 0; i < SIZE - 1; ++i)
        printf("%c", number[i]);

    printf("\n");

    return 0;
}
