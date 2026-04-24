#include <stdio.h>

int main(){
    float amount, tax;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * 1.05 ;

    printf("With tax added: $%.2f\n", tax);
    return 0;
}
