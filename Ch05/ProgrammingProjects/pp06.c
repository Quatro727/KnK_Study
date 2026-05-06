/*programming project 06*/
#include <stdio.h>

int main(){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, final_digit;

    //Get UPC input from user
    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);

    printf("Enter the group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter the group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    printf("Enter the last (single) digit: ");
    scanf("%1d", &final_digit);
    
    //Check the validiation of UPC input
    int first_sum, second_sum, total;

    first_sum = d + i2 +i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    int check_digit = 9 - ((total - 1) % 10);

    if (check_digit == final_digit){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }

    return 0;
}

