#include <stdio.h>

int main(){
    int n;
    double sum = 1.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        long denom = 1;
        for (int j = 1; j <= i; j++){
            denom *= j; 
        }
        sum += 1.0 / denom;
    }
    printf("The approximate value of e: %f\n", sum);
    return 0;
}

