#include <stdio.h>

int read_line(char str[], int n);

int main(void){
    char sentence[50];
    int len;

    printf("Enter a sentence: ");
    len = read_line(sentence, 50);

    printf("%s\n", sentence);

    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n) str[i++] = ch;
    }   
        str[i] = '\0';
        return i;
}
