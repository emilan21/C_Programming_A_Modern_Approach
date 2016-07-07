#include <stdio.h>

#define PENCENT 100.00
#define NUM_OF_MONTHS 12.00

int main(void)
{
	float loan_amount = 0.00f;
	float interest_rate = 0.00f;
	float monthly_payment = 0.00f;
	float monthly_interest_rate = 0.00f;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	printf("interest rate: %f\n", interest_rate);
	monthly_interest_rate = ((interest_rate / PENCENT) / NUM_OF_MONTHS) + 1;
	printf("monthly interest rate: %f\n", monthly_interest_rate);

	loan_amount *= monthly_interest_rate;
	loan_amount -= monthly_payment;
	printf("Balance remaining after first payment: $%.2f\n", loan_amount);

	loan_amount *= monthly_interest_rate;
	loan_amount -= monthly_payment;
	printf("Balance remaining after second payment: $%.2f\n", loan_amount);

	loan_amount *= monthly_interest_rate;
	loan_amount -= monthly_payment;
	printf("Balance remaining after third payment: $%.2f\n", loan_amount);

	return 0;
}
