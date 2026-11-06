#include <stdio.h>

#define NAME_LEN 30
void reverse_name(char *name);

int main(void)
{
    char ch;
    char str[NAME_LEN + 1];
    int i = 0;

    printf("Enter a first name and last name: ");
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    reverse_name(str);

    return 0;
}

void reverse_name(char *name)
{
    char *str1 = name;
    char first_initial;
    
    while (*str1 == ' ') {
        str1++;
    }
    first_initial = *str1;

    while (*str1 != ' ')
        str1++;
    str1++;

    printf("%c, %s\n", first_initial, str1);
}
