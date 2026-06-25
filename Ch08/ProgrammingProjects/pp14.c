#include <stdio.h>

int main(void){
    char sentence[100];
    int i = 0, cnt = 1;
    char mark;

    printf("Enter a sentence: ");
    for(;;){
        scanf("%c", &sentence[i]);

        if (sentence[i] == ' ') cnt++;

        if(sentence[i] == '?' || sentence[i] == '.' || sentence[i] == '!'){
            mark = sentence[i];
            break;
        }
        i++;
    }

    printf("Reversal of sentence: ");

    int word_end = i - 1;

    for (int j = i - 1; j >= 0 ; j--){
        if (sentence[j] == ' '){
            for (int k = j + 1; k <= word_end; k++){
                printf("%c", sentence[k]);
            }
            printf(" ");

            word_end = j - 1;
        }

    }

    for (int k = 0; k <= word_end; k++){
        printf("%c", sentence[k]);
    }
    printf("%c\n", mark);

    return 0;
}
