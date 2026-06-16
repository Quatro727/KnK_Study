#include <stdio.h>
#include <ctype.h>

int main(){
    char b1ff[100] = {'\0',};
    int count = 0;

    printf("Enter message: ");
    for (;;){
        scanf("%c", &b1ff[count]);

        if (b1ff[count] == '\n'){
            break;
        }
        count++;
    }
    b1ff[count] = '\0';

    //Change the lower-case letter to upper-case
    for (int i = 0; b1ff[i] != '\0'; i++){
        if (b1ff[i] >= 'a' && b1ff[i] <= 'z') b1ff[i] = toupper(b1ff[i]);
    }

    //Convert the character to corresponding Digit
    for (int i = 0; b1ff[i] != '\0'; i++){
        if (b1ff[i] == 'A') b1ff[i] = '4';
        if (b1ff[i] == 'B') b1ff[i] = '8';
        if (b1ff[i] == 'E') b1ff[i] = '3';
        if (b1ff[i] == 'I') b1ff[i] = '1';
        if (b1ff[i] == 'O') b1ff[i] = '0';
        if (b1ff[i] == 'S') b1ff[i] = '5';
    }


    //Print the string that conversion is completed   
    printf("In B1FF-speak: ");
    for (int i = 0; b1ff[i] != '\0'; i++){
        printf("%c", b1ff[i]);
    }
    printf("!!!!!!!!!!!!!!!!!!!!!!\n");

    return 0;
}
