#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    int sum = 0;
    printf("Enter a word: ");
    
    while ((ch = getchar()) != '\n'){
      
        //if input letter is lower case, change it to upper case
        if (ch >= 97 && ch <= 122) ch = toupper(ch);
        
        //add the face values to sum
        if (ch == 'Q' || ch =='Z') sum += 10;
        else if (ch == 'J' || ch == 'X') sum+= 8;
        else if (ch == 'K') sum+= 5;
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y') sum += 4;
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch =='P') sum += 3;
        else if (ch == 'D' || ch == 'G') sum += 2;
        else sum+=1;
    }

    printf("%d\n", sum);

    return 0;
}

