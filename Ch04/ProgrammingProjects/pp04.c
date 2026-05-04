#include <stdio.h>

int main(){
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    
    int num1 = n %8;
    n = n  / 8;

    int num2 = n % 8;
    n = n / 8;

    int num3  = n % 8;
    n /= 8;

    int num4  = n % 8;
    n /= 8;
    
    int num5 = n % 8;
    n /= 8;

    printf("In octal, your number is: %d%d%d%d%d\n", num5, num4, num3, num2, num1);

    return 0;
}


