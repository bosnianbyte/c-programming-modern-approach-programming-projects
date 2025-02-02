// Computes the scrabble face value of a word

#include <stdio.h>
#include <ctype.h>

#define STR_LEN 20

int compute_scrabble_value(const char *word);

int main(void)
{
	char ch;
	int i;
    char word[STR_LEN];

	// Asks user to input a scrabble word
	printf("Enter a word: ");

	// For loop to store each character into our word array
	for(i = 0;(ch = getchar()) != '\n'; i++) {
		ch = toupper(ch);
        word[i] = ch;
	}
    word[i] = '\0'; // Places NULL character at the end of the word within the string array

	// Prints the scrabble word value
	printf("Scrabble value: %d\n", compute_scrabble_value(word));

	return 0;
}

int compute_scrabble_value(const char *word)
{
    int value = 0;
    // For loop that uses a pointer that begins at the first element of the array and increments with each loop
    for (; *word != '\0'; word++) {
        // Switch statement that calculates the value of each letter within our array
        switch (*word) {
                case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                    value += 1;
                    break;
                case 'D': case 'G':
                    value += 2;
                    break;
                case 'B': case 'C': case 'M': case 'P':
                    value += 3;
                    break;
                case 'F': case 'H': case 'V': case 'W': case 'Y':
                    value += 4;
                    break;
                case 'K':
                    value += 5;
                    break;
                case 'J': case 'X':
                    value += 8;
                    break;
                case 'Q': case 'Z':
                    value += 10;
                    break;
            }
    }
    return value;
}
