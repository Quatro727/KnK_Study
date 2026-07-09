#include <stdio.h>

size_t my_strlen(const char *s);

int main(void){
    char str[30] = "Hello Nice to meet u!";

    printf("%d\n", my_strlen(str));

    return 0;
}

size_t my_strlen(const char *s){
    size_t n;

    for(n = 0; *s != 0; s++){
        n++;
    }

    return n;
}
