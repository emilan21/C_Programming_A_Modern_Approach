/* break down a dollar amount in $20, $10, $5 and $1 bills */

#include <stdio.h>

#define TWENTY_BILL 20
#define TEN_BILL 10
#define FIVE_BILL 5
#define DOLLAR_BILL 1

int main(void)
{
	int dollar_amount;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar_amount);
	printf("$20 bills: %d\n", dollar_amount / TWENTY_BILL);
	printf("$10 bills: %d\n", dollar_amount / TEN_BILL);
	printf("$5 bills: %d\n", dollar_amount / FIVE_BILL);
	printf("$1 bills: %d\n", dollar_amount / DOLLAR_BILL);

	return 0;
}
