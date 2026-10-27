#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void)
{
    char word[LEN + 1];
    char smallest_word[LEN+ 1];
    char largest_word[LEN + 1];
    int i = 0;

    for (;;) {
        printf("Enter a word: ");
        scanf("%s", word);

        if (strlen(word) == 4)
            break;

        if (strlen(word) >= 20)
            continue;

        if (i == 0) {
            strcpy(smallest_word, word);
            strcpy(largest_word, word);
        }
        else {
            if (strcmp(word, smallest_word) < 0)
                strcpy(smallest_word, word);
            
            if (strcmp(word, largest_word) > 0)
                strcpy(largest_word, word);
        }

        i++;
    }
    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
