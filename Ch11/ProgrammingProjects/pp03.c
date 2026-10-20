#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int num1, num2, reduced_numerator, reduced_denomiator;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &num1, &num2);

    reduce(num1, num2, &reduced_numerator, &reduced_denomiator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int dividend, divisor, remainder;

    if (numerator > denominator) {
        remainder = numerator % denominator;
        dividend = denominator;
        divisor = numerator;
    }
    else {
        remainder = denominator % numerator;
        dividend = numerator;
        divisor = denominator;
    }

    while (remainder != 0) {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    printf("In lowest terms: %d/%d\n", numerator / dividend, denominator / dividend);
}


