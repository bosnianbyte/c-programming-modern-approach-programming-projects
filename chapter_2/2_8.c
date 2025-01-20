/* 	A program that calculates the remaining balance on a loan
	after the first, second, and third monthly payment */
#include <stdio.h>

int main(void)
{	
	float interest, monthly_payment, monthly_interest_rate, balance;
	/* 	Asks user for the loan amount, interest rate, and
		monthly payment amount */
	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
    
	// Calculates monthly interest rate
	monthly_interest_rate = interest * 0.01 / 12;
	
	// Calculates balance and prints results for each month
	balance += (balance * monthly_interest_rate);
	balance -= monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", balance);

	balance += (balance * monthly_interest_rate);
	balance -= monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", balance);

	balance += (balance * monthly_interest_rate);
	balance -= monthly_payment;
	printf("Balance remaining after third payment: %.2f\n", balance);
	return 0;
}
