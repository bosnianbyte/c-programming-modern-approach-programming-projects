// Translates an alphabetic phone number into numeric form

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	// Asks user for the number
	printf("Enter phone number: ");

	// While loop to translate letters into numbers
	while((ch = getchar()) != '\n') {
		ch = toupper(ch); // toupper function capitalizes all letters
		if (ch == 'A' || ch == 'B' || ch == 'C')
			printf("2");
		else if (ch == 'D' || ch == 'E' || ch == 'F')
			printf("3");
		else if (ch == 'G' || ch == 'H' || ch == 'I')
			printf("4");
		else if (ch == 'J' || ch == 'K' || ch == 'L')
			printf("5");
		else if (ch == 'M' || ch == 'N' || ch == 'O')
			printf("6");
		else if (ch == 'P' || ch == 'R' || ch == 'S')
			printf("7");
		else if (ch == 'T' || ch == 'U' || ch == 'V')
			printf("8");
		else if (ch == 'W' || ch == 'X' || ch == 'Y')
			printf("9");
		else
			printf("%c", ch);
	}
	printf("\n");

	return 0;
}
