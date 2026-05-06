/*programming project07*/
#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    
    //Get four integers input from user
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    //Get MAX
    int max = num1;
    if (max < num2 ){
        max = num2;
    }
    else if (max < num3){
        max = num3;
    }
    else if (max < num4){
        max = num4;
    }

    //Get min
    int min = num1;
    if (min > num2){
        min = num2;
    }
    else if (min > num3){
        min = num3;
    }
    else if (min > num4){
        min = num4;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
