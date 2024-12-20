// A program that reverses the words in a sentence with a terminating character . or ? or !

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char sentence[256];
    char terminating_character, c;
    int i, j, start;

    printf("Enter a sentence: ");

    // For loop that saves each character into an array
    for(i = 0; (c = getchar()) != '.' && c != '?' && c != '!'; i++) {
        c = tolower(c); // to lower function to lowercase all letters
        sentence[i] = c;
    }

    // Saves the terminating character '.' '?' '!'
    terminating_character = c;

    // For loop that searches the array backwards and prints the word everytime it finds a space
    for (start = i - 1; start >= 0; start--) {
        if (start == 0 || sentence [start - 1] == ' ') {
            for (int j = start; j < i; j++) {
                printf("%c", sentence[j]);
            }
            if (start > 0) 
                printf(" ");
            i = start - 1;
        }
    }

    // Prints the terminating character at the end of the sentence
    printf("%c\n", terminating_character);

    return 0;
}
