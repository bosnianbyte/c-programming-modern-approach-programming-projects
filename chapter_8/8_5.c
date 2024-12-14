// Prints a table of monthly compound interest

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, j, low_rate, num_years, year;
    double value[5];

    printf("Enter monthly interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%13d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {
            j = 0; // <-- Resets month back to 0 for each loop
            // Compounds the value monthly
            while(j < 12) {
                value[i] = value[i] + ((low_rate + i) / 100.00) * value[i];
                ++j;
            }
            printf("%14.2f", value[i]);

        }
        printf("\n");
    }

    return 0;
}
