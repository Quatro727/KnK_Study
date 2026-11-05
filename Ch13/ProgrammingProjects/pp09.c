#include <stdio.h>
#include <ctype.h>

#define STR_LEN 100

int compute_vowel_count(const char *sentence);

int main(void)
{
    char ch;
    char str[STR_LEN + 1];
    int cnt, i = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(str));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int cnt = 0;
    char lower_ch; 

    while (*sentence != '\0') {
        lower_ch = tolower(*sentence);

        if (lower_ch  == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
            cnt++;

        sentence++;
    }
    return cnt;
}
