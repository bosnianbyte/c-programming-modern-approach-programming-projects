//	Calculates the average word length of a sentence, including punctuation
	
#include <stdio.h>

int main(void)
{	
	char ch;
	float count = 0.0f, words = 1.0f; // Initializes words as 1.0, assuming the sentence contains at least 1 word

	printf("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n') {
		// Counts each space between the words to calculate amount of words
		if (ch == ' ')
			++words;
		// Counts each letter & punctuation
		else
			++count;
		
	}
	// Prints the average word length by dividing the letters/punctuation by the amount of words in the sentence
	printf("Average word length: %.1f", count / words);

	return 0;
}
