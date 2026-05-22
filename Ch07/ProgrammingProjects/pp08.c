#include <stdio.h>

int main(){
    int input_hours, input_min;
    char ch1, ch2;

    printf("Enter a 12-hour clock: ");
    scanf("%d:%d%c%c", &input_hours, &input_min, &ch1, &ch2);
    
    //convert 12 hour clock to 24 hour clock
    if (ch1 == 'p' || ch1 == 'P'){
       if (input_hours == 12) break;
       
       input_hours += 12;
    }

    if (input_hours == 0){
        input_hours += 24;
    }

    //rest of the code is same wth /Knk_Study/Ch05/ProgrammingProjects/pp08.c....



    return 0;
}
