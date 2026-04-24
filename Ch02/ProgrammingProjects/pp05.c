#include <stdio.h>

int main(){
    double x;

    scanf("%lf", &x);

    double result =  3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6 ;
    printf("%lf\n", result);

    return 0;
}
