//Check whether any of the digits in a number appear more than once
#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false,};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    //check each digit of entered number, whether it is repeated or not
    while (n > 0){
        digit = n % 10;
        if (digit_seen[digit]) break;
        digit_seen[digit] = true;

        n /= 10;
    }

    //Print the result based on digit_seen array
    if (n > 0){
        printf("Repeated digit.\n");
    }
    else{
        printf("No repeated digit.\n");
    }

    return 0;
}
