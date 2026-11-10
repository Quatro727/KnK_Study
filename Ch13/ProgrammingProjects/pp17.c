#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define STR_LEN 100

bool is_palindrome(const char *message);

int main(void)
{
    char ch;
    char message[STR_LEN + 1];
    int i = 0;
    bool result;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z'))
            message[i++] = ch;
    }
    message[i] = '\0';

    result = is_palindrome(message);
    if (result)
        printf("Palindrome.\n");
    else
        printf("Not a Plaindrome.\n");

    return 0;
}

bool is_palindrome(const char *message)
{
    int len = strlen(message);
    int i;

    for (i = 0; i < len/2; i++) {
        if (message[i] != message[len - 1 - i]) {
            return false;
        }
    }
    return true;
}
