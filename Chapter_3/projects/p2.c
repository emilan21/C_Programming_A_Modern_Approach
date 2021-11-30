// Name: p2.c
// Purpose: Take in product information and format output.
// Author: EM

#include <stdio.h>

int main(void)
{
        int item_number = 0;
        float unit_price = 0.0f;
        int purchase_date_month = 0; 
        int purchase_date_day = 0; 
        int purchase_date_year = 0; 

        printf("Enter item number: ");
        scanf("%d", &item_number);

        printf("Enter unit price: ");
        scanf("%f", &unit_price);

        printf("Enter purchase date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &purchase_date_month, &purchase_date_day, &purchase_date_year);

        printf("Item\t\tUnit\t\tPurchase\n");
        printf("    \t\tPrice\t\tDate\n");
        printf("%d\t\t$%4.2f\t\t%d/%d/%d\n", item_number, unit_price, purchase_date_month, purchase_date_day,
        purchase_date_year);

        return 0;

}
