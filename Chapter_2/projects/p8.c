// Name: p8.c
// Purpose: Calculates the remaining balance on a loan after the first, second, and third monthly payments.
// Author: EM

#include <stdio.h>

int main(void)
{
        float loan_amount = 0.0f;
        float interest_rate = 0.0f;
        float monthly_payment = 0.0f;
        float monthly_interest_rate = 0.0f;
        float first_payment = 0.0f;
        float second_payment = 0.0f;
        float third_payment = 0.0f;

        printf("Enter amount of loan: ");
        scanf("%f", &loan_amount);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);

        monthly_interest_rate = (interest_rate / 100) / 12;

        first_payment = (loan_amount - monthly_payment) + (loan_amount *monthly_interest_rate);
        second_payment = (first_payment - monthly_payment) + (first_payment * monthly_interest_rate);
        third_payment = (second_payment - monthly_payment) + (second_payment * monthly_interest_rate);

        printf("Balance remaining after first payment: %.2f\n", first_payment);
        printf("Balance remaining after second payment: %.2f\n", second_payment);
        printf("Balance remaining after third payment: %.2f\n", third_payment);

        return 0;
}
