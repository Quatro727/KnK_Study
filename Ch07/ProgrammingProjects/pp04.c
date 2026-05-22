#include <stdio.h>

int main(){
    char ch;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n'){
        if (ch >= 65 && ch <=67) printf("2");
        else if (ch >=68 && ch <=70) printf("3");
        else if (ch >= 71 && ch <= 73) printf("4");
        else if (ch >= 74 && ch <= 76) printf("5");
        else if (ch >= 77 && ch <= 79) printf("6");
        else if (ch >= 80 && ch <= 82) printf("7");
        else if (ch >= 83 && ch <= 85) printf("8");
        else if (ch >= 86 && ch <= 88) printf("9");
        else printf("%c", ch);
    }
    while (getchar() != '\n');

    printf("\n");

    return 0;
}


