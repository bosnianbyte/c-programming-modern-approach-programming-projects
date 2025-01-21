/*  A program that reads a message, then checks whether it's a palindrome.
    Uses pointers instead of integers to keep track of array positions. */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LENGTH 255

int main (void)
{
    char message[MAX_LENGTH];
    char ch, *p, *q;
    bool palindrome = true;

    printf("Enter a message: ");

    // p points to the first element in the message array.
    // the element that p points to gets incremented each time an element is stored
    for (p = &message[0];(ch = getchar()) != '\n' && p <= &message[MAX_LENGTH - 1];) {
        if (isalpha(ch))
            *p++ = toupper(ch); // Assigns the character to the element that p currently points to
    }

    /*  Decrements p by 1 element
        Assigns q to the first element in the message array
        Decremenets p and incremenets q each loop
        Loops as long as q is less than p */
    for (p--, q = &message[0]; q < p; p--, q++)
    {
        if (*p != *q) { // If the opposite elements within the array aren't equal
            palindrome = false;
            break;
        }
            
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
