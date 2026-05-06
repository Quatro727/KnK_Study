/*programming projects*/
#include <stdio.h>

int main(){
    int num_shares;
    float price_per_share;
    
    //input the number of shares from users
    printf("Enter the number of shares: ");
    scanf("%d", &num_shares);

    //inpute price per shares from users
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    //get the value of whole trade
    float value, commission_org;

    value = num_shares * price_per_share;
    
    //compute the commission for brokers
    if (value < 2500.00f){
        commission_org = 30.00f + 0.17f * value;
    }
    else if (value < 6250.00f){
        commission_org = 56.00f + 0.066f * value;
    }
    else if (value < 20000.00f){
        commission_org = 76.00f + 0.0034f * value;
    }
    else if (value <50000.00f){
        commission_org = 100.00f + 0.0022f * value;
    }
    else if (value < 500000.00f){
        commission_org = 155.00f + 0.0011f * value;
    }
    else {
        commission_org = 255.00f + 0.0009f * value;
    }

    if (commission_org < 39.00f){
        commission_org = 39.00f;
    }

    printf("Commission: $%.2f\n", commission_org);
    
    //compute the commission for rival brokers
    float commission_rival;

    if (num_shares >= 2000) {
        commission_rival = 33 + 0.02f * num_shares;
    }
    else {
        commission_rival = 33+ 0.03f * num_shares;
    }
    printf("Commission of rival: $%.2f\n", commission_rival);

    return 0;
}

