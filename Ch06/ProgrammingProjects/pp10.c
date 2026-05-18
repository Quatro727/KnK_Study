#include <stdio.h>

int main(){
    int dd, mm, yy;
    long result = 300000;
    long total;

    while (1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);

        total = yy * 10000 + mm * 100 + dd;
        if (total == 0) break;
        if (result > total ) result = total;
    }

    int ear_dd = result % 100;
    int ear_mm = (result / 100) % 100;
    int ear_yy = result / 10000;

    printf("%02d/%02d/%02d is the earliest date.\n", ear_mm, ear_dd, ear_yy);

    return 0;
}
