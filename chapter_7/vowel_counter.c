//	Counts the number of vowels in a sentence
	
#include <stdio.h>
#include <ctype.h>

int main(void)
{	
	char ch;
	int count = 0;

	// Asks for sentence
	printf("Enter a sentence: ");

	// While loop to test for vowels in each letter
	while((ch = getchar()) != '\n') {
		ch = toupper(ch); // Capitalizes each letter
		switch (ch) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				++count;
				break;
		}
	}
	printf("Your sentence contains %d vowels\n", count);
	return 0;
}
