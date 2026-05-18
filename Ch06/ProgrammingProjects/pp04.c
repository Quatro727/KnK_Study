#include <stdio.h>

int main(void){
    double commission, value;
    while (1){
        printf("Enter value of trade: ");
        scanf("%lf", &value);
        if (value == 0) break;

        if (value < 2500.00) commission = 30.0 + 0.017 * value;
        else if (value < 6250.0) commission = 56.0 + 0.0066 * value;
        else if (value < 20000.0) commission = 76.0 + 0.0034 * value;
        else if  (value < 50000.0) commission = 100.0 + 0.0022 * value;
        else if (value < 500000.0) commission = 155.0 + 0.0011 * value;
        else commission = 255.0 + 0.0009 * value;

        if (value < 39.0) commission = 39.0;

        printf("Commission: $%.2f\n", commission);
    }   
    return 0;
}
