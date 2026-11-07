#include <stdio.h>
#include <string.h>

void encrypt(char *message, int shift);

int main(void)
{
    char ch;
    char message[80];
    int i = 0;
    int shift_amount;

    printf("Enter a message to be encrypted: ");
    while ((ch = getchar()) != '\n') {
        message[i] = ch;

        if (message[i] == '.')
            break;
        i++;
    }

    printf("Ente a shift_amount(1-25): ");
    scanf("%d", &shift_amount);
    
    encrypt(message, shift_amount);

    return 0;
}

void encrypt(char *message, int shift)
{
    int i;
    int len = strlen(message);

    for (i = 0; i < len; i++) {
        if (message[i] == ' ' || message[i] == ',')
            continue;
        if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
        }
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        }
    }
    
    for (i = 0; i < len; i++)
        printf("%c", message[i]);
    printf("\n");
}

