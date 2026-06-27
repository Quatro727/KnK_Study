#include <stdio.h>

double income_tax(double);

int main(void){
    double income, tax;

    //Get income form user
    printf("Enter the income($): ");
    scanf("%lf",&income);

    tax = income_tax(income);

    printf("Tax u need to pay: %.2f\n", tax);

    return 0;
}

//function income_tax
double income_tax(double income){
    double tax;

    //Compute the tax based on income
    if (income <= 750.00) tax = income * 0.01;
    else if (income > 750.00 && income <= 2250.00){
        tax = 7.50 + ((income - 750.00) * 0.02);
    }
    else if (income > 2250.00 && income <= 3750.00){
        tax = 37.0 + ((income - 2250.00) * 0.03);
    }
    else if (income > 3750.00 && income < 5250.00){
        tax = 82.50 + ((income - 3750.00) * 0.04);
    }
    else if (income >5250.00 && income <= 7000.00){
        tax = 142.50 + ((income -5250.00)* 0.05);
    }
    else{
        tax = 230.00 + ((income - 7000.00) * 0.06);
    }

    return tax;
}

