#include <stdio.h>

int main(void){
    char name[2][20];
    int i = 0;
    int cnt = 1;

    printf("Enter a first name and last name: ");
    while ((name[0][i]  = getchar()) != ' '){
        i++;
    }

    i = 0;
    while ((name[1][i] = getchar()) != '\n'){
        i++;
        cnt++;
    }

    printf("You entered the name: ");
    for (i = 0; i < cnt - 1; i++){
         printf("%c", name[1][i]);
    }

    printf(", %c.\n", name[0][0]);

    return 0;
}
