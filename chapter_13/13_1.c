/*  A program that finds the "smallest" and "largest" in a series of words.
    After the user enters the words, the program will determine which words would come first
    and last if the words were listed in dictionary order. The program must stop accepting
    input when the user enters a four-letter word. Assumes no word is more than 20 letters
    long. */

#include <stdio.h>
#include <string.h>

#define STR_LEN 20

void read_line(char str[], int length);

int main (void)
{
    char msg[STR_LEN + 1];
    // Initializes the 'smallest' array with the largest dictionary value
    char smallest[STR_LEN + 1] = {'z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','\0'};
    // Initializes the 'largest' array with the smallest dictionary value
    char largest[STR_LEN + 1] = {' '};
    int i;

    // While loop that ends when the input is 4 characters long
    while (strlen(msg) != 4) {
        printf("Enter a word: ");
        read_line(msg, STR_LEN);
        // Compares the dictionary value of the input to the current smallest message
        if (strcmp(msg, smallest) < 0)
            strcpy(smallest, msg);
        // Compares the dictionary value of the input to the current longes message
        else if (strcmp(msg, largest) > 0)
            strcpy(largest, msg);
    }
    // Prints the smallest and largest words entered
    printf("\nSmallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

// read_line:   reads and assigns each character into the array
void read_line(char str[], int length)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < length)
            str[i++] = ch;
    }
    str[i] = '\0';
}
