#include <stdio.h>
#include <math.h>//fabs()

int main(){
    unsigned int num;
    double avg, y, xy, root_num;

    //1. Enter the number(positive)
    printf("Enter a positive number: ");
    scanf("%u", &num);
    
    y = 1.0;
    xy = num / y;
    avg = (y + xy) / 2.0;

    //2. Compute the square root of the num by using Newton's method
    while (fabs(avg - y) > 0.00001){
        y = avg;
        xy = num / y;
        avg = (y + xy) / 2.0;
    }

    //3. prints the square root of the number
    printf("Square root: %f\n", avg);

    return 0;
}
