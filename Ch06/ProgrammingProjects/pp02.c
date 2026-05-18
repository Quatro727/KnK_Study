#include <stdio.h>

int main(void){
    int num1, num2;
    int remainder, divisor, dividend;
    
    //Input two integers
    scanf("%d %d", &num1, &num2);
    
    //Get GCD
    if (num1 > num2){
        remainder = num1 % num2;
        dividend = num2;
        divisor = remainder;
    }
    else{
        remainder = num2 % num1;
        dividend =num1;
        divisor = remainder;
    }
    
    while (remainder != 0){
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    printf("Greatest common divisor: %d\n", dividend);
    return 0;
}
