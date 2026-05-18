#include <stdio.h>

int main(){
    int days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week. (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    
    for(int i = 1; i < start_day; i++){
        printf("   ");
    }

    for (int i = 1, j = start_day; i <= days; i++, j++){
        if (j > 7){
            printf("\n");
            j = 1;
        }

        printf("%02d ", i); 
    }
    return 0;
}
