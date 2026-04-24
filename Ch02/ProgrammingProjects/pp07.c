#include <stdio.h>

int main(){
    int dollar_amounts;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amounts);

    int results;

    results=dollar_amounts / 20;
    printf("$20 bills: %d\n", results);

    results=dollar_amounts % 20 / 10;
    printf("$10 bills: %d\n", results);

    results = dollar_amounts % 20 % 10 / 5;
    printf("$5 bills: %d\n", results);

    printf("$1 bills: %d\n", dollar_amounts % 20 % 10 % 5);

    return 0;
}
