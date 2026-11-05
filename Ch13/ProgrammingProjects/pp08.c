#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void)
{
    char ch;
    int result = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {

        result += compute_scrabble_value(&ch);
    }
    printf("Scrabble Value: %d\n", result);
    return 0;
}

int compute_scrabble_value(const char *word)
{
    char ch = *word;

    if (ch >= 'a' && ch <= 'z')
        ch = toupper(ch);

    if (ch == 'Q' || ch == 'Z')
        return 10;
    else if (ch == 'J' || ch == 'X')
        return 8;
    else if (ch == 'K')
        return  5;
    else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
        return  4;
    else if (ch == 'B' || ch == 'C' || ch ==  'M' || ch =='P')
        return 3;
    else if (ch == 'D' || ch == 'G')
        return 2;
    else 
        return  1;
}
