// A program that tests numbers for repeating digits until the user enters a number that's less than or equal to 0

#include <stdio.h>
#include <stdbool.h>

#define SIZE ((int) (sizeof(digit_seen) / sizeof(digit_seen[0]))) // Calculates the number of variables within our array
#define N 10 // Size of array is all 9 single digits

int main(void)
{
    bool digit_seen[N] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    // Do loop that terminates when the user enters a number less than or equal to 0
    do {
        while (n > 0) {
            digit = n % 10; // Separates a single digit of the number
            if (digit_seen[digit]) // If statment to check if the digit has been seen already
                break;
            digit_seen[digit] = true; // Sets the tested digit to seen
            n /= 10;
        }
        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        // Resets all digits to unseen for the next number
        for (i = 0; i < SIZE; i++) {
            digit_seen[i] = false;
        }

        // Asks for the next number
        printf("\nEnter a number: ");
        scanf("%ld", &n);
    } while (n > 0);

    return 0;
}
