/* 24 hour time to 12 hour form */

#include <stdio.h>

int main(void)
{
	int long_hour;
	int short_hour;
	int minutes;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &long_hour, &minutes);

	
	if (long_hour >= 0 && long_hour <= 12)
		printf("Equivalent 12-hour time: %d:%.2d AM\n", long_hour, minutes);	
	else if (long_hour >= 13 && long_hour <= 24) {
		short_hour = long_hour - 12;
		printf("Equivalent 12-hour time: %d:%d PM\n", short_hour, minutes);	
	} else
		printf("Invaild Time\n");

	return 0;
}
