#include <stdio.h>

int main(void){
    unsigned long num;
    int i = 1;

    printf("Enter a number: ");
    scanf("%lu", &num);

    while (i * i <= num){
        printf("%d\n", i*i);
        i++;
    }

    return 0;
}
