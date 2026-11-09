#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[30];
    char word2[30];
    int i = 0;
    bool result;

    printf("Enter first words: ");
    while ((word1[i] = getchar()) != '\n') {
            i++;
    }
    word1[i] = '\0';

    i = 0;
    printf("Enter a second word: ");
    while ((word2[i] = getchar()) != '\n') {
        i++;
    }
    word2[i] = '\0';
    
    result = are_anagrams(word1, word2);
    if (result)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int i;
    int alphas[26] = {0, };

    while (*word1 != '\0')  {
        if (!isalpha(*word1)) {
            word1++;
            continue;
        }
        else {
            if (*word1 >= 'A' && *word1 <= 'Z')
                alphas[*word1 - 'A'] += 1;
            else
                alphas[*word1 - 'a'] += 1;
        }
        word1++;
    }

    while (*word2 != '\0') {
        if (!isalpha(*word2)) {
            word2++;
            continue;
        }
        else {
            if (*word2 >= 'A' && *word2 <= 'Z')
                alphas[*word2 - 'A'] -= 1;
            else
                alphas[*word2 - 'a'] -= 1;
        }
        word2++;
    }  

    for (i = 0; i < 26; i++) {
        if (alphas[i] != 0)
            return 0;
    }
    return 1;
}
    
