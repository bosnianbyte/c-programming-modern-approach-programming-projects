// A program that creates a (n x n) magic square

#include <stdio.h>
#include <stdlib.h>
void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    // Asks user for the size of the square
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    // Initializes the array
    int magic_square[99][99] = {0};

    // Calls function to create the square
    create_magic_square(n, magic_square);

    // Calls function to print the square
    print_magic_square(n, magic_square);

    exit(EXIT_SUCCESS);
}

void create_magic_square(int n, int magic_square[n][n])
{
    int i, j, num = 1;
    
        // Loop to assigns each number in the array
    for(i = 0, j = n / 2; num <= n * n; num++) {
        magic_square[i][j] = num;
        int next_i =  (i - 1 + n) % n;
        int next_j = (j + 1) % n;
        if (magic_square[next_i][next_j] != 0) {
            i = (i + 1) % n;
        } else {
            i = next_i;
            j = next_j;
        }
    }
}

void print_magic_square(int n, int magic_square[n][n])
{
    int i, j;
    // Prints the magic square
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%5d", magic_square[i][j]);
        }
        printf("\n");
    }
}
