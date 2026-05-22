#include <stdio.h>

int main(){
    char ch1, ch2;
    int hours, minutes;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d%c%c", &hours, &minutes, &ch1, &ch2);
    
    if (ch1 == 'A' && hours == 0) hours = 0;
    else if (ch1 == 'P'){
        hours += 12;

        if (hours == 24) hours -= 12;
    }

    printf("Equivalent 24-hour time: %d:%d\n", hours, minutes);

    return 0;
}
