#include <stdio.h>

int main(void){
    double num;
    double max = 0;
    
    do {
        printf("Enter a number: ");
        scanf("%lf", &num);
        
        if (num > max) max = num;
    } while (num > 0);

    printf("The largest number entered was %f.\n", max);
    return 0;
}
