// Name: p3.c
// Purpose: Breaks down an ISBN entered by user
// Author: EM

#include <stdio.h>

int main(void)
{
	int gs1 = 0;
	int group_identifier = 0;
	int publisher_code = 0;
	int item_number = 0;
	int check_digit = 0;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", group_identifier);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check_digit);

        return 0;
}
