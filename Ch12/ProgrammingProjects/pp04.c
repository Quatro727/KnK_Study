#include <stdio.h>

#define STR_LEN 100

int main(void)
{
    char ch, *p; 
    char message[STR_LEN + 1];
    int cnt = 0;

    p = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            *(p++) = ch;
            cnt++;
        }
    }
    *p = '\0';
    
    for (p = message; p < message + cnt/2; p++) {
        if (*p != *(message + cnt - 1 - (p - message))) {
            printf("Not a palindrome.\n");
            return 0;
        }
    }
    printf("Palindrome.\n");

    return 0;
}
