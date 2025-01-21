// A program that reverses the words in a sentence with a terminating character . or ? or !

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 255

int main(void)
{
    char sentence[MAX_LENGTH];
    char terminating_character, ch;
    char *p, *word;

    printf("Enter a sentence with a terminating character '.', '?', or '!': ");

    // For loop that saves each character into an array
    for(p = sentence; (ch = getchar()) != '.' && ch != '?' && ch != '!'; p++) {
        *p = tolower(ch);
    }

    // Saves the terminating character '.' '?' '!'
    terminating_character = ch;

    // Saves a null character at the end of the array
    *p = '\0';

    // For loop searching backwards until it finds an element that is a space (' ') character
    for (--p; p >= sentence; p--) {
        if (*p == ' ' || p == sentence) {
            word = (p == sentence) ? p : p + 1;
            // Prints the elements going forward until the word ends
            for (; *word != ' ' && *word != '\0'; word++) {
                printf("%c", *word);
            }
            if (p > sentence) printf(" ");
        }
    }

    // Prints the terminating character at the end of the sentence
    printf("%c\n", terminating_character);

    return 0;
}
