#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int dollar_amounts, twenty_amount, ten_amount, five_amount, one_amount;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amounts);

    twenty_amount = dollar_amounts / 20;
    ten_amount = dollar_amounts% 20 / 10;
    five_amount = dollar_amounts % 20 % 20 / 5;
    one_amount = dollar_amounts % 20 % 10 % 5;

    pay_amount(dollar_amounts, &twenty_amount, &ten_amount, &five_amount, &one_amount);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    printf("You may pay \n");
    printf("$20 bills: %d\n", *twenties);
    printf("$10 bills: %d\n", *tens);
    printf("$5 bills: %d\n", *fives);
    printf("$1 bills: %d\n", *ones);
}
