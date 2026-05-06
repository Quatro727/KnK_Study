/*programming project 09*/
#include <stdio.h>

int main(){
    int mm1, dd1, yy1, mm2, dd2, yy2;

    //First input from user
    printf("Enter first date: ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);

    //Second input
    printf("Enter second date: ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    //Judge which is eariler date in calender
    int total1 = yy1 * 10000 + mm2 * 100 + dd1;
    int total2 = yy2 * 10000 + mm2 * 100 + dd2;

    int diff = total1 - total2;

    if (diff > 0){
        printf("%02d/%02d/%02d is eariler than %02d/%02d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    }
    else{
        printf("%02d/%02d/%02d is eariler than %02d/%02d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    }

    return 0;
}
