#include <stdio.h>
#include <ctype.h>

int main(void){
    int scrabble[7] = {1, 2, 3, 4, 5, 8, 10};
    int sum = 0;
    char ch;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n'){
        //if input letter is lower case, change it to upper case
        if (ch >= 97 && ch <= 122) ch = toupper(ch);

        //add the face vaules to sum
        if (ch == 'Q' || ch == 'Z') sum += scrabble[6];//+10
        else if (ch == 'J' || ch == 'X') sum += scrabble[5];//+8
        else if (ch == 'K') sum += scrabble[4];//+5
        else if (ch == 'F' || ch == 'H'|| ch == 'V' || ch == 'W' || ch == 'Y' ) sum += scrabble[3];//+4
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') sum += scrabble[2];//+3
        else if (ch == 'D' || ch == 'G') sum += scrabble[1];//+2
        else sum += scrabble[0];//+1
    }

    printf("Scrabble value: %d\n", sum);

    return 0;
}

