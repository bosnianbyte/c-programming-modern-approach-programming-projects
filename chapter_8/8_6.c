// Translates a message into "B1FF speak"

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 256

int main(void)
{
    int i, j;
    char c, message[MAX_SIZE];

    // Asks user for the message
    printf("Enter message: ");
    // For loop that starts at the beginning of the message array and stores each character separately
    for (i = 0; (c = getchar()) != '\n'; i++) {
        c = toupper(c);
        switch (c) { // Switch statement that translates certain characters to 'B1FF-speak'
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'S':
                message[i] = '5';
                break;
            default:
                message[i] = c;
        }
        // If statement that ends the program is the message is greater than 256 characters
        if (i > MAX_SIZE) {
            printf("Error: Your message is too long");
            return 0;
        }
    }
    // Prints message in 'B1FF-speak'
    printf("In B1FF-speak: ");
    for (j = 0; j < i; j++)
        printf("%c", message[j]);
    printf("!!!!!!!!!!\n");

    return 0;
}
