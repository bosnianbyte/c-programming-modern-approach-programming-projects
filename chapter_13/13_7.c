/* A program that prints the English word for a two-digit number 
    MODIFIED:
        Uses arrays containing pointers to strings instead of switch statements. */
	
#include <stdio.h>

char *tens[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char *ones[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};


int main(void)
{	
	int number, first_digit, second_digit;

	// Asks user for a two-digit number
	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	// Converts the number into two digits (tens and ones place)
	first_digit = number / 10;
	second_digit = number % 10;

    printf("You entered the number: ");
    if (number < 20) {
        printf("%s", teens[second_digit]);
    } else {
        printf("%s", tens[first_digit - 2]);
        if (second_digit > 0) {
            printf("-%s", ones[second_digit - 1]);
        }
    }
    printf("\n");
	
	return 0;
}
