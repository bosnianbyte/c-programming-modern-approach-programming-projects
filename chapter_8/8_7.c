// A program that reads a 5x5 array of integers and then prints the row sums and the column sums

#include <stdio.h>

int main(void)
{
    int numbers[5][5];
    int i, j, sum;

    // scans the input for each row and column
    for (i = 0; i < 5; ++i) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &numbers[i][0], &numbers[i][1], &numbers[i][2], &numbers[i][3], &numbers[i][4]);
    }

    // Prints the row totals
    printf("Row totals:");
    for (i = 0; i < 5; ++i) {
        for (j = 0, sum = 0; j < 5; ++j)
            sum += numbers[i][j];
        printf(" %d", sum);
    }

    // Prints the column totals
    printf("\nColumn totals:");
    for (j = 0; j < 5; ++j) {
        for (i = 0, sum = 0; i < 5; ++i)
            sum += numbers[i][j];
        printf(" %d", sum);
    }

    return 0;
}
