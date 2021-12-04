/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
	float commission, value, price_per_share;
	int number_of_shares;

	printf("Enter the number of shares: ");
	scanf("%d", &number_of_shares);
	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);

	value = number_of_shares * price_per_share;

	// Main broker
	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 2000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Main Broker Commission: $%.2f\n", commission);

	// Rival Broker
	if (value < 2000.00f)
		commission = 33.00f + .03f * number_of_shares;
	else
		commission = 33.00f + .02f * number_of_shares;

	printf("Rival Broker Commission: $%.2f\n", commission);

	return 0;
}
