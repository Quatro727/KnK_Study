#include <stdio.h>

int main(){
    char ch;
    int num1, denom1, num2, denom2;

    printf("Enter either +, -, * or /: ");
    scanf("%c", &ch);

    printf("Enter two fractions: ");
    scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);
    
    int result_num, result_denom;
    if (ch == '+'){
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (ch == '-'){
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (ch == '*'){
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if (ch == '/'){
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
    }

    printf("The result: %d/%d\n", result_num, result_denom);

    return 0;
}
