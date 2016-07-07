/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
	float commission = 0.00f;
	float rival_commission = 0.00f;
	float price_per_share = 0.00f;
	int number_of_shares = 0;
	float total_value = 0.00f;
	
	/* Get user input */
	printf("Enter the number of shares: ");
	scanf("%d", &number_of_shares);
	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);

	/* compute total value of shares */
	total_value = number_of_shares * price_per_share;

	/* compute commission for broker */
	if (total_value < 2500.00f)
		commission = 30.00f + .017f * total_value;
	else if (total_value < 6250.00f)
		commission = 56.00f + .0066f * total_value;
	else if (total_value < 20000.00f)
		commission = 76.00f + .0034f * total_value;
	else if (total_value < 50000.00f)
		commission = 100.00f + .0022f * total_value;
	else if (total_value < 500000.00f)
		commission = 155.00f + .0011f * total_value;
	else
		commission = 255.00f + .0009f * total_value;

	if (commission < 39.00f)
		commission = 39.00f;

	/* compute commission for rival broker */
	if (number_of_shares < 2000)
		rival_commission = 33.00f + .03f * number_of_shares;
	else if (number_of_shares > 2000)
		rival_commission = 33.00f + .02f * number_of_shares;
	
	/* output */
	printf("Commission: $%.2f\n", commission);
	printf("Rival Commission: $%.2f\n", rival_commission);

	return 0;
}
