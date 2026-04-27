#include <stdio.h>

int main(){
    int month, year, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%02d%d\n", year, month, day);
 
    return 0;
}
