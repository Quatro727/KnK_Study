#include <stdio.h>
#include <string.h>

#define ROW 30
#define COL 20

int main(void)
{   
    char last_char;
    char sentence[ROW][COL + 1];
    int i = 0, j = 0;
    
    printf("Enter a sentence: ");
    for (i = 0; i < ROW; i++) {
        scanf("%s", sentence[i]);
        
        int len = strlen(sentence[i]);

        if (sentence[i][len - 1] == '!' || sentence[i][len - 1] == '?' || sentence[i][len -1] == '.') {
            last_char = sentence[i][len - 1];
            sentence[i][len - 1] = '\0';
            break;
        }
    }
    
    printf("Reversal of sentence: ");
    for (j = i; j >= 0; j--) {
        if (j == 0) {
            printf("%s%c", sentence[j], last_char);
            break;
        }
        printf("%s ", sentence[j]);
    }

    return 0;
}
