/* Computes a European Article Number(EAN) check digit */

#include <stdio.h>

int main(void)
{
	int d_one, d_two, d_three, d_four, d_five, d_six, d_seven,
	    d_eight, d_nine, d_ten, d_eleven, d_tweleve,
	    first_sum, second_sum, total, check_digit;

	printf("Enter the first 12 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d_one, &d_two, &d_three,
		&d_four, &d_five, &d_six, &d_seven, &d_eight, &d_nine, &d_ten,
		&d_eleven, &d_tweleve);
	
	first_sum = d_two + d_four + d_six + d_eight + d_ten + d_tweleve;
	second_sum = d_one + d_three + d_five + d_seven + d_nine + d_eleven;
	total = ((3 * first_sum) + second_sum) - 1;

	check_digit = 9 - (total % 10);

	printf("Check digit: %d\n", check_digit );

	return 0;
}
