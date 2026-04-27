#include <stdio.h>

int main(){
    int item_num, year, month, day;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item    Unit    Purchase\n");
    printf("        Price   Date\n");
    printf("%-4d    $%7.2f  %d/%d/%d\n", item_num, unit_price, month, day, year);

    return 0;
}
    


