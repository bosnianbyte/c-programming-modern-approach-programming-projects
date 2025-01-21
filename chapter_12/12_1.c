/*  A program that reads a message, then prints the reversal of
    the message, using a pointer to keep track of the current position
    in the array. */

#include <stdio.h>

#define MAX_LENGTH 255

int main (void)
{
    char message[MAX_LENGTH];
    char ch, *p;

    printf("Enter a message; ");

    // p points to the first element in the message array.
    // the element that p points to gets incremented each loop
    for (p = &message[0];(ch = getchar()) != '\n'; p++) {
        *p = ch; // Assigns the character to the element that p currently points to
    }

    printf("The reversal of your message is: ");
    
    // Decrements p by 1 element and prints each element going down to the first element.
    for (p--; p >= &message[0]; p--)
    {
        printf("%c", *p);
    }
    printf("\n\n");

    return 0;
}
