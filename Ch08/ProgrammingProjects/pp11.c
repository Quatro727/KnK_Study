#include <stdio.h>

int main(void){
    char ph_num[15];
    int i;
    printf("Enter phone number: ");
    for (i = 0; i < 15; i++){
        scanf("%c", &ph_num[i]);
    }

    for (i = 0; i < 15; i++){
        if (ph_num[i] == '-') continue;
        if ((ph_num[i] >= '0') && (ph_num[i] <= '9')) continue;

        if ((ph_num[i] >= 'A') && (ph_num[i] <= 'C')) ph_num[i] = '2';
        else if ((ph_num[i] >= 'D') && (ph_num[i] <= 'F')) ph_num[i] = '3';
        else if ((ph_num[i] >= 'G') && (ph_num[i] <= 'I')) ph_num[i] = '4';
        else if ((ph_num[i] >= 'J') && (ph_num[i] <= 'L')) ph_num[i] = '5';
        else if ((ph_num[i] >= 'M') && (ph_num[i] <= 'O')) ph_num[i] = '6';
        else if ((ph_num[i] >= 'P') && (ph_num[i] <= 'S')) ph_num[i] = '7';
        else if ((ph_num[i] >= 'T') && (ph_num[i] <= 'V')) ph_num[i] = '8';
        else if ((ph_num[i] >= 'W') && (ph_num[i] <= 'Z')) ph_num[i] = '9';
    }
    for( i = 0; i < 15; i++){
        printf("%c", ph_num[i]);
    }
    return 0;
}
