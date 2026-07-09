#include <stdio.h>

char *my_strcat(char *str1, const char *str2);

int main(void){
    char str1[30] = "Rhee";

    my_strcat(str1, "Jeongin");

    printf("%s\n", str1);

    return 0;
}
char *my_strcat(char *str1, const char *str2){
    char *p = str1;

    while(*p != 0) p++;

    while(*str2 != 0){
        *p = *str2;

        p++;
        str2++;
    }
    *p = '\0';
    return str1;
}
