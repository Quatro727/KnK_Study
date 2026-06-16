/*Checks numbers for repeated digits*/
/*modify to print a repeated numbers*/

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

    printf("Repeated digits(s): ");
    for (int i = 0; i < 10; i++){
        if (digit_cnt[i] >= 2){         
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

