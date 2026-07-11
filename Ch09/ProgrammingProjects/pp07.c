#include <stdio.h>

int power(int x, int n);

int main(void){
    int x, n;

    printf("Enter integer x: ");
    scanf("%d", &x);
    
    printf("Enter integer n: ");
    scanf("%d", &n);

    printf("x^n = %d\n", power(x, n));

    return 0;
}   

int power(int x, int n){
    int half;

    if(n == 0) return 1;//if n is  0, power will return 1
    //if n is even, power will return x^n/2 * x^n/2;
    else if(n % 2 == 0){
        half = power(x, n / 2);    
        return half * half;
    }
    else return x * power(x, n - 1);//if n is odd, power will return x * x^n - 1
}

