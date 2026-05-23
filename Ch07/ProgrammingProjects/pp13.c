#include <stdio.h>

int main(){
    char ch;
    int word_cnt = 0, letter_cnt = 0;
    double avg;

    printf("Enter a sentence: ");
    
    //count the total letters of sentence and words entered by the user
    while((ch = getchar()) !='\n'){
        if (ch == ' '){
            word_cnt++;
            continue;
        }
        letter_cnt++;
    }
    //2. compute avg
    avg = (double)letter_cnt / (word_cnt + 1);

    //3. print the result
    printf("Average word length: %.1f\n", avg);

    return 0;
}


