// 	A program that calculates the remaining balance on a loan

#include <stdio.h>

int main(void)
{	
	float interest, monthly_payment, monthly_interest_rate, balance;
	int number_of_payments, i;

	/* 	Asks user for the loan amount, interest rate, and
		monthly payment amount */
	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
    printf("Enter the number of payments: ");
	scanf("%d", &number_of_payments);

	// Calculates monthly interest rate
	monthly_interest_rate = interest * 0.01 / 12;
	
	// Loop to print each months balance
	for(i = 1; number_of_payments >= i; ++i) {
		balance += (balance * monthly_interest_rate);
		balance -= monthly_payment;
		printf("Balance remaining after payment %d: %.2f\n", i, balance);
	}

	/*
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
	*/


	return 0;
}
