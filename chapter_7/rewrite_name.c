//	Rewrites a person's name as (last name, first initial.)
	
#include <stdio.h>
#include <ctype.h>

int main(void)
{	
	char ch, first_initial;

	printf("Enter a first and last name: ");

	// Scanf function to store the first initial 
	scanf(" %c", &first_initial);

	// While loop to discard the rest of the letters in the first name
	while((ch = getchar()) != ' ');

	// While loop to print each letter of the last name
	while((ch = getchar()) != '\n') {
		if (ch != ' ')
			putchar(ch);
	}

	// Prints a comma then the first initial and a period
	printf(", %c.\n", first_initial);

	return 0;
}
