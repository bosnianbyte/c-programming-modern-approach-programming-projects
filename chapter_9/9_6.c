// A program that uses a function to compute the value of a polynomial

#include <stdio.h>
#include <stdlib.h>

double polynomial(int x);

int main(void)
{
    int x;
    // Asks user for value x
    printf("Enter a value for x: ");
    scanf("%d", &x);

    // Calls polynomial function to calculate the value
    printf("The result is: %g", polynomial(x));

    exit(EXIT_SUCCESS);
}

double polynomial(int x)
{
    return (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
}
