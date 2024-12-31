// A program that uses a recursive function to calculate x^n (x to the power of n)

#include <stdio.h>
#include <stdlib.h>

int power(int x, int n);

int main(void)
{
    int x, n;
    // Asks user for the value of x and n
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int result = power(x,n);
    printf("The result is: %d", result);

    exit(EXIT_SUCCESS);
}

int power(int x, int n)
{
    if (n == 0) {
        return 1;
    } else
    {
        return x * power(x, n - 1);
    }
}
