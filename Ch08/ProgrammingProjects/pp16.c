#include <stdio.h>
#include <ctype.h>

int main(void){
    char word1[26];
    char word2[26];
    int alpha[26] = {0};
    int i = 0,  total = 0;

    printf("Enter first words: ");
    while ((word1[i] = getchar()) != '\n'){
        i++;
    }
    word1[i] = '\0';

    //check the letter of word1
    for (i = 0; word1[i] != '\0'; i++){
        if (!isalpha(word1[i])) continue;
        if (word1[i] >= 'A' &&  word1[i] <= 'Z') word1[i] = tolower(word1[i]);
        if (isalpha(word1[i])) alpha[word1[i] - 'a'] += 1;
    }
    
    i = 0;
    printf("Enter second word: ");
    while ((word2[i] =getchar()) != '\n'){
        i++;
    }
    word2[i] = '\0';

    //check the letter of word2
    for (i = 0; word2[i] != '\0'; i++){
        if (!isalpha(word2[i])) continue;
        if (word2[i] >= 'A' &&  word2[i] <= 'Z') word2[i] = tolower(word2[i]);
        if (isalpha(word2[i])) alpha[word2[i] - 'a'] -= 1;
    }

    //check array whether anagrams or not 
    for (i = 0; i < 26; i++){
        if (alpha[i] != 0){
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");

    return 0;
}
