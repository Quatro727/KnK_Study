#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter phone number from 1 to 16 [ (xxx) xxxx - xxxx]: ");
    scanf("(%d)%d-%d", &num1, &num2, &num3);

    printf("You entered %d.%d.%d\n", num1, num2, num3);

    return 0;
}
