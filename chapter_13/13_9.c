//	Counts the number of vowels in a sentence
	
#include <stdio.h>
#include <ctype.h>

#define STR_LEN 100

int compute_vowel_count(const char *sentence);

int main(void)
{	
	char ch;
    int i;
    char sentence[STR_LEN];

	// Asks for sentence
	printf("Enter a sentence: ");
    // For loop to save each letter in the array
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        sentence[i] = toupper(ch);
    }
    sentence[i] = '\0'; // Saves NULL character at the end of the word

	printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));
	return 0;
}

int compute_vowel_count(const char *sentence)
{
    int i, count = 0;
    for (i = 0; sentence[i] != '\0'; i++) {
        switch (sentence[i]) {
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    ++count;
                    break;
            }
    }
    return count; // Returns the amount of vowels
}
