// Computes the scrabble face value of a word

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int value = 0;

	// Asks user to input a scrabble word
	printf("Enter a word: ");

	// While loop to calculate the face value of each letter and add the sum
	while((ch = getchar()) != '\n') {
		ch = toupper(ch);
		switch (ch) {
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
	// Prints the scrabble word value
	printf("Scrabble value: %d\n", value);

	return 0;
}
