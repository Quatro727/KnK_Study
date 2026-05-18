#include <stdio.h>

int main(void){
    unsigned int num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    int remainder;
    
    printf("The reversal is: ");
    do {
        remainder = num % 10;
        printf("%d", remainder);
        
        num = num / 10;
    } while (num > 0);
    printf("\n");

    return 0;
}

