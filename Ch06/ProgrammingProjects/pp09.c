#include <stdio.h>

int main(){
    double loan, interest, pay;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate:");
    scanf("%lf", &interest);
    
    interest = (interest / 100) / 12.00;

    for (int i = 0; i < 3; i++){
        loan = loan * (1 + interest);
        
        printf("Enter the payment of this month: ");
        scanf("%lf", &pay);
        
        loan -= pay;
        printf("Balance remaining after the payment: $%.2lf\n", loan);
    }
    return 0;
}





