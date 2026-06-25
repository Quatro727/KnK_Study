#include <stdio.h>

int main(void){
    char message[80];
    int i = 0, shift_amount;

    printf("Enter message to be encrypted: ");
    for(;;){
        scanf("%c", &message[i]);
        
        if (message[i] == '.') break;
        i++;
    }

    printf("Enter shift amount(1-25): ");
    scanf("%d", &shift_amount);


    for(int j = 0; j <= i; j++){
        if (message[j] == ' ' || message[j] == ',') continue;
        
        if (message[j] >= 'a' && message[j] <= 'z'){
            message[j] = ((message[j] - 'a') + shift_amount) % 26 + 'a';
        }
        if (message[j] >= 'A' && message[j] <= 'Z'){
            message[j] = ((message[j] - 'A') + shift_amount) % 26 + 'A';
        }
    }

    for(int j = 0; j <= i; j++){
        printf("%c", message[j]);
    }
    printf("\n");

    return 0;
}
