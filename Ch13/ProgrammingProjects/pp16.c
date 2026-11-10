#include <stdio.h>
#include <string.h>

#define STR_LEN 100

void reverse(char *message);

int main(void)
{
    char ch;
    char message[STR_LEN + 1];
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        message[i++] = ch;
    }
    message[i] = '\0';

    reverse(message);

    return 0;
}

void reverse(char *message)
{
    char *first, *last;
    int len = strlen(message);
    
    first = message;

    for (last = message + len - 1; last >= first; last--) {
        printf("%c", *last);
    }
    printf("\n");
}
