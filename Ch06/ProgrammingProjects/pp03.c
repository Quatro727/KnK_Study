#include <stdio.h>

int main(void){
    int num1, num2, divisor, dividend, remainder;

    scanf("%d/%d", &num1, &num2);

    if (num2 > num2){
        remainder = num1 % num2;
        dividend = num2;
        divisor = remainder;
    }
    else{
        remainder = num2 % num1;
        dividend = num1;
        divisor = remainder;
    }

    //Get GCD
    while (remainder != 0){
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    
    printf("In lowest terms: %d/%d\n", num1 / dividend, num2 / dividend);

    return 0;
}
