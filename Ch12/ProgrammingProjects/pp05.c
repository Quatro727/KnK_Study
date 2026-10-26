#include <stdio.h>

int main(void) 
{
    char sentence[100];
    char *p, *q;
    int cnt = 0;
    char mark;

    p = sentence;

    printf("Enter a sentence: ");
    for(;;) {
        scanf("%c", p);

        if (*p == ' ')
            cnt++;
        if (*p == '?' || *p == '.' || *p == '!') {
            mark = *p;
            break;
        }
        p++;
    }

    printf("Reversal of sentence: ");

    char *word_end = p - 1;

    for (p = p - 1; p >= sentence; p--) {
        if (*p == ' ') {
            for (q = p + 1; q <= word_end; q++) {
                printf("%c", *q);
            }
            printf(" ");

            word_end = p - 1;
        }
    }

    for (p = sentence; p <= word_end; p++)
        printf("%c", *p);
    printf("%c\n", mark);

    return 0;
}
