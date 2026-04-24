#include <stdio.h>

int main(){
    double loan;
    double rate;
    double monthly_pay;
    
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_pay);

    double remain1 = loan * ( 0.06 / 12 + 1 )- monthly_pay ;
    double remain2 = remain1 * ( 0.06 / 12 + 1 )  - monthly_pay ;
    double remain3 = remain2 * ( 0.06 / 12 + 1 ) - monthly_pay ;

    printf("Balance remaining after first payment: %.2lf\n", remain1);
    printf("Balance remaining after second payment: %.2lf\n", remain2);
    printf("Balance remaining after third payment: %.2lf\n", remain3);

    return 0;
}
