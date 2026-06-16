/*************************************************************************************************
 * modify the repdigit.c by following conditions
 * 01) user can enter more than on number to be tested for repeated digits
 * 02) the program should terminate when the user enters a number that's less than or equal to 0
 * ***********************************************************************************************/
#include <stdio.h>

int main(void){
    long n = 1;
    
    while (n > 0){
        //Initialize the array digit_seen[10] by value 10
        int digit_seen[10] = {0, };
        int digit;

        printf("Enter a numebr: ");
        scanf("%ld", &n);

        //if n is less than or equal to 0
        if (n <= 0){
            printf("Terminated.\n");
            break;
        }

        long num = n;
        while (num > 0){
            digit = num % 10;
            if (digit_seen[digit]) break;
            digit_seen[digit] = 1;
            num /=10;
        }
        if (num > 0) printf("Repeated digit.\n");
        else printf("No repeated digit.\n");
    }

    return 0;
}


     
    
