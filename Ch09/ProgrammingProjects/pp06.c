#include <stdio.h>

int power(int num, int n);
int polynomial(int n);

int main(void){
    int x, result;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);

    result = polynomial(x);

    printf("Result: %d\n", result);

    return 0;
}

int power(int num, int n){
    int i, result = 1;

    for(i = 1; i <= n ; i++){
        result *= num;
    }
    return result;
}

int polynomial(int n){
    int result;

    result = power(n, 5) * 3 + power(n, 4) * 2 - power(n, 3) * 5 - power(n, 2) + n * 7 - 6;

    return result;
}
