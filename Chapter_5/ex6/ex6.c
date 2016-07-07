/* Computes a Universal Producat Code check digit */

#include <stdio.h>

int main(void)
{
	int first_digit, grp_one_one, grp_one_two, grp_one_three, grp_one_four, grp_one_five,
	    grp_two_one, grp_two_two, grp_two_three, grp_two_four, grp_two_five,
	    first_sum, second_sum, total, check_digit;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &first_digit);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",
		&grp_one_one, &grp_one_two, &grp_one_three, &grp_one_four, &grp_one_five);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &grp_two_one, &grp_two_two, &grp_two_three, &grp_two_four, &grp_two_five);
	
	first_sum = first_digit + grp_one_two + grp_one_four +
		grp_two_one + grp_two_three + grp_two_five;
	second_sum = grp_one_one + grp_one_three + grp_one_five
		+ grp_two_two + grp_two_four;
	total = ((3 * first_sum) + second_sum) - 1;

	check_digit = 9 - (total % 10);

	printf("Check digit: %d\n", check_digit );

	return 0;
}
