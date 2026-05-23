#include <stdio.h>

int main(){
    char operator;
    double total = 0.0;
    double next_num;

    //1. Read first number entered by the user
    scanf("%lf", &total);


    //2. Read operator and nect number repeatdely
    while (scanf("%c", &operator) == 1){
        //if read the letter new-line character
        if (operator == '\n') break;

        //read next number after the operator
        if (scanf("%lf", &next_num) == 1){
            //compute the expression
            switch(operator){
                case '+': 
                    total += next_num;
                    break;
                case '-':
                    total -= next_num;
                    break;
                case '*':
                    total *= next_num;
                    break;
                case '/':
                    total /= next_num;
                    break;
                default: break;
            }
        }
    }

    //3. prints the result of expression
    printf("Value of expression: %.2f\n", total); 

    return 0;
}
