/*programming peoject 02*/
#include <stdio.h>

int main(){
    int time_24,minute, time_12;

    //get time based on 24 hours
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &time_24, &minute);

    //get time based on 12 hours from input time_24
    if ( time_24 > 0 && time_24 < 12 ){
        time_12 = time_24;
        printf("Equivalent 12-hour time: %02d:%02d AM\n", time_12, minute);
    }
    else if ( time_24 == 12 ){
        time_12 = time_24;
        printf("Equivalent 12-hour time: %02d:%02d PM\n", time_12, minute);
    }
    else if( time_24 > 12 && time_24 < 24 ){
        time_12 = time_24 - 12;
        printf("Equivalent 12-hour time: %02d:%02d PM\n", time_12, minute);
    }
    else if ( time_24 == 0 ){
        time_12 = 0;
        printf("Equivalent 12-hour time: %02d:%02d AM\n", time_12, minute);
    }

    return 0;
}
