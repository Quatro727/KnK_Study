/*programming project 04*/
#include <stdio.h>

int main(){
    int speed;

    //get input the speed from user
    printf("Enter the speed of wind(knots): ");
    scanf("%d", &speed);

    //correspond the description based on speed
    if (speed < 1){
        printf("Calm\n");
    }
    else if ( speed >=1 && speed <= 3){
        printf("Light air\n");
    }
    else if (speed >= 4 && speed <= 27){
        printf("Breeze\n");
    }
    else if (speed >= 28 && speed <= 47){
        printf("Gale\n");
    }
    else if (speed >= 48 && speed <= 63){
        printf("Strom\n");
    }
    else if (speed >= 64){
        printf("Hurricane\n");
    }

    return 0;
}

