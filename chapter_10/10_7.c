/*  A program that prompts the user for a number and then displays the
    number, using characters to simulate the effect of a
    seven-segment display */

#include <stdio.h>

/* macros */
#define MAX_DIGITS 10

/* external variables */
char digits[4][MAX_DIGITS * 4];
int numbers[MAX_DIGITS];
int number, i, j;

/* prototypes */
int clear_digits(void);
int process_digits(int digit, int position);
int print_digits_array(void);


int main(void)
{
    while(1)
    {
        clear_digits();
        printf("Enter a number: ");
        for (i = 0; (number = getchar()) != '\n' && i < MAX_DIGITS;)
        {
            if (number >= '0' && number <= '9')
                numbers[i++] = number - '0';
        }

        for (i = 0; i < MAX_DIGITS; i++, j += 4)
        {
            process_digits(numbers[i], j );
        }
        
        print_digits_array();
    }
    return 0;
}

/* clear digits:    Stores blank characters into all elements of
                    the digits array */
int clear_digits(void)
{
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < MAX_DIGITS * 4; j++)
        {
            digits[i][j] = ' ';
        }
    }
    for (i = 0; i < MAX_DIGITS; i++)
    {
        numbers[i] = ' ';
    }
}


/* process_digit:   stores the seven-segment representation of digit
                    into a specified position in the digits array
                    (positions range from 0 to MAX_DIGITS - 1) */
int process_digits(int digit, int position)
{
    switch (digit)
    {
        case 0:
            digits[0][position + 1] = '_'; digits[1][position] = '|'; digits[1][position + 2] = '|'; digits[2][position] = '|';
            digits[2][position + 1] = '_'; digits[2][position + 2] = '|';
            break;
        case 1:
            digits[1][position + 2] = '|'; digits[2][position + 2] = '|';
            break;
        case 2:
            digits[0][position + 1] = '_'; digits[1][position + 1] = '_'; digits[1][position + 2] = '|'; digits[2][position] = '|';
            digits[2][position + 1] = '_'; digits[3][position + 1] = ' ';
            break;
        case 3:
            digits[0][position + 1] = '_'; digits[1][position + 1] = '_'; digits[1][position + 2] = '|'; digits[2][position + 1] = '_';
            digits[2][position + 2] = '|';
            break;
        case 4:
            digits[1][position] = '|'; digits[1][position + 1] = '_'; digits[1][position + 2] = '|'; digits[2][position + 2] = '|';
            break;
        case 5:
            digits[0][position + 1] = '_'; digits[1][position] = '|'; digits[1][position + 1] = '_'; digits[2][position + 1] = '_';
            digits[2][position + 2] = '|';
            break;
        case 6:
            digits[0][position + 1] = '_';
            digits[1][position] = '|'; digits[1][position + 1] = '_'; digits[2][position] = '|'; digits[2][position + 1] = '_';
            digits[2][position + 2] = '|';
            break;
        case 7:
            digits[0][position + 1] = '_'; digits[1][position + 2] = '|'; digits[2][position + 2] = '|';
            break;
        case 8:
            digits[0][position + 1] = '_'; digits[1][position] = '|'; digits[1][position + 1] = '_'; digits[1][position + 2] = '|';
            digits[2][position] = '|'; digits[2][position + 1] = '_'; digits[2][position + 2] = '|';
            break;
        case 9:
            digits[0][position + 1] = '_';
            digits[1][position] = '|'; digits[1][position + 1] = '_'; digits[1][position + 2] = '|'; digits[2][position + 1] = '_';
            digits[2][position + 2] = '|';
            break;
    }
}


/* print_digits_array:  displays the rows of the digits array each on a
                        single line */
int print_digits_array(void)
{
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < MAX_DIGITS * 4 - 1; j++)
        {
            putchar(digits[i][j]);
        }
        putchar('\n');
    }
    printf("\n");
}
