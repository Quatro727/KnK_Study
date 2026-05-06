/*Programming Project 01*/
#include <stdio.h>

int main(){
    int num;

    //get integer
    printf("Enter a number: ");
    scanf("%d", &num);

    //idetify the numbers of digits from input number
    if( num >= 1000 ){
        printf("The number %d has 4 digits.\n", num);
    }
    else if ( num >= 100){
        printf("The number %d has 3 digits.\n", num);
    }
    else if ( num >= 10 ){
        printf("The number %d has 2 digits.\n", num);
    }
    else{
        printf("The number %d has 1digit.\n", num);
    }

    return 0;
}
