#include <stdio.h>

#define STR_LEN 100

int main(void)
{
    char ch;
    char message[STR_LEN + 1];
    int i = 0, cnt = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        message[i++] = ch;
    }
    message[i] = '\0';

    for( i = 0; message[i] != '\0'; i++)
        cnt++;

    for (i = cnt - 1; i >= 0; i--) {
        printf("%c", message[i]);
    }
    printf("\n");

    return 0;
}
