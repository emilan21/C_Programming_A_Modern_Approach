// Name: p9.c
// Purpose: Calculates the remaining balance on a loan after the first, second, and third monthly payments.
// Author: EM

#include <stdio.h>

int main(void)
{
        float loan_amount = 0.0f;
        float interest_rate = 0.0f;
        float monthly_payment = 0.0f;
        float monthly_interest_rate = 0.0f;
	int number_of_payments = 0;

        printf("Enter amount of loan: ");
        scanf("%f", &loan_amount);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);
        printf("Enter number of payments: ");
        scanf("%d", &number_of_payments);

	float current_balance = loan_amount;

        monthly_interest_rate = (interest_rate / 100) / 12;

	for (int i = 1; i <= number_of_payments; i++) {
		current_balance = (current_balance - monthly_payment) + (current_balance * monthly_interest_rate);
		printf("Balance remaining after payment: %.2f\n", current_balance);
	}

        return 0;
}
