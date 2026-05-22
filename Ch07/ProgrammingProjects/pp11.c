#include <stdio.h>

int main(){
    char ch1, ch2, first_initial;

    printf("Enter a first name and last name: ");
    
    int i = 0;
    while ((ch1 = getchar()) != ' '){
        if (i == 0) first_initial = ch1;
        i++;
    }

    while ((ch2 = getchar()) != '\n'){
        printf("%c", ch2);
    }
    printf(", %c\n", first_initial);
    
    return 0;
}




