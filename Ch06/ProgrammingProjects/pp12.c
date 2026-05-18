#include <stdio.h>

int main(){
    double n;
    double sum = 1.0;

    printf("Enter a number: ");
    scanf("%lf", &n);
    
    int i = 1;
    while (1){
        long denom = 1;
        for (int j = 1; j <= i; j++){
            denom *= j;
        }
        if (n > (1.0 / denom)) break;
        i++;
        sum += 1.0 / denom;
    }
    printf("The result: %f\n", sum);

    return 0;
}
