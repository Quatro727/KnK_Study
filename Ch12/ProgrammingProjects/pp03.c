#include <stdio.h>

#define STR_LEN 100

int main(void)
{
    char ch, *p;
    char message[STR_LEN + 1];
    int cnt =0;

    p = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        *(p++) = ch;
        cnt++;
    }
    *p = '\0';

    for (p = p - 1; p >= message; p--) {
        printf("%c", *p);
    }
    printf("\n");

    return 0;
}
