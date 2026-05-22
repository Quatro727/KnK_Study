#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    int cnt = 0;

    while ((ch = getchar()) != '\n'){
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') cnt += 1;
    }
    
    printf("%d\n", cnt);

    return 0;
}

