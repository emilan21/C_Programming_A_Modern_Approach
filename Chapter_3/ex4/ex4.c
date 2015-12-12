/* get telephone number from user. Display in xxx.xxx.xxxx form */

#include <stdio.h>

int main(void)
{
	int area_code;
	int three_digit_num;
	int four_digit_num;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &three_digit_num, &four_digit_num);
	
	printf("You entered %d.%d.%d\n", area_code, three_digit_num, four_digit_num);

	return 0;	
}
