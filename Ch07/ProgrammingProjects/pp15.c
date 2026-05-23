#include <stdio.h>

int main(){
    unsigned int num;
    short int result = 1;
    //int result = 1;
    //long result = 1;
    //float result = 1.0f;

    //1. Enter the number
    printf("Enter a positive number: ");
    scanf("%u", &num);

    //2. compute the factorial 
    for (int i = num; i >= 1; i--){
        result *= i;
    }

    //3. print the result of factorial
    printf("Factorial of %d: %hd\n", num, result);
    //printf("Factorial of %d: %d\n", num, result);
    //printf("Factorial of %d: %ld\n", num, result);
    //printf("Factorial of %d: %f\n", num, result);
    
    /**************************************************************************************************
     * (a) short type result -> 7 is the largest number that my machine can compute factorial correctly.
     * (b) int type result -> 12 is the largest number that my machine can compute factorial correctly.
     * (c) long type result -> 20 is the largest number that my machine can compute factorial correctly.
     * (e) float type result -> 33 is the largest number that my machine can compute factorial correctly.
     ****************************************************************************************************/
    return 0;
}

