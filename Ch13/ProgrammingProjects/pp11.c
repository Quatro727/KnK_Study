#include <stdio.h>

#define STR_LEN 100

double compute_average_word_length(const char *sentence);

int main(void)
{
    char ch;
    char str[STR_LEN + 1];
    int i = 0;
    double avg_len;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    avg_len = compute_average_word_length(str);

    printf("Average word length: %.1lf\n", avg_len);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int word_cnt = 0;
    int letter_cnt = 0;

    while (*sentence != '\0') {
        letter_cnt++;

        if (*sentence == ' ' || *sentence == '.') {
            word_cnt++;
            sentence++;
        }
        sentence++;
    }
    return (double)letter_cnt / word_cnt;
}

