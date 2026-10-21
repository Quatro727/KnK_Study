#include <stdio.h>

#define STR_LEN 100

int main(void)
{
    char ch;
    char message[STR_LEN + 1];
    int i = 0, cnt = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            *(message + i) = ch;
            i++;
            cnt++;
        }
    }
    *(message + i) = '\0';

    for (i = 0; i < cnt/2; i++) {
        if (*(message + i) != *(message + cnt - 1 - i)) {
            printf("Not a palindrome.\n");
            return 0;
        }
    }
    printf("Palindrome.\n");

    return 0;
}
