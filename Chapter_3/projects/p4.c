// Name: p4.c
// Purpose: Takes entered telephone number in the form of (xxx) xxx-xxxx and the displays
// the number in the form of xxx.xxx.xxxx
// Author: EM

#include <stdio.h>

int main(void)
{
        int area_code = 0;
	int first_phone_section = 0;
	int second_phone_section = 0;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &first_phone_section, &second_phone_section);

	printf("You entered %d.%d.%d\n", area_code, first_phone_section, second_phone_section);

        return 0;
}
