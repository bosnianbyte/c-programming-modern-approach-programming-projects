// A program that displays the tax due based on the amount of taxable income

#include <stdio.h>

// Function to calculate the tax due
double tax_calculator(float income)
{
    if (income < 750.00) {
        return income * 0.01;
    } else if (income < 2250.00) {
        return ((income - 750.00) * 0.02) + 7.50;
    } else if (income < 3750.00) {
        return ((income - 750.00) * 0.03) + 37.50;
    } else if (income < 5250.00) {
        return ((income - 750.00) * 0.04) + 82.50;
    } else if (income < 7000.00) {
        return ((income - 750.00) * 0.05) + 142.50;
    } else {
        return ((income - 750.00) * 0.06) + 230.00;
    }
}

int main(void)
{
    float income;

    // Asks user for their income
    printf("Enter your income: ");
    scanf("%f", &income);

    printf("Tax due: %.2f",tax_calculator(income));

    return 0;
}  
