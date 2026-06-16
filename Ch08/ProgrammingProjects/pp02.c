/*Modify the repdigit.c in Sec01 inc Ch08
 * printf a table showing the number fo repeated time of digit
 * *************************************************************/

#include <stdio.h>

int main(void){
    int digit_cnt[10] = {0,};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        digit_cnt[digit] += 1;
        n /= 10;
    }

    printf("Digit:         ");
    for (int i = 0; i < 10; i++){
        printf("%d  ", i);
    }
    printf("\n");

    printf("Occurrencies:  ");
    for (int i = 0; i <10; i++){
        printf("%d  ", digit_cnt[i]);
    }
    printf("\n");

    return 0;
}

