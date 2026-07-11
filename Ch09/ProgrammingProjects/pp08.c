#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

bool play_game(void);
int roll_dice(void);

int main(void){
    int w_times = 0;
    int l_times = 0;
    char ch;

    srand((unsigned) time(NULL));

    while(1){
        if(play_game()){
            printf("You win!\n");
            w_times++;
        }
        else{
            printf("You lose!\n");
            l_times++;
        }
        
        printf("\n");
        printf("Play again?[y/n]: ");
        scanf(" %c", &ch);

        if(tolower(ch) == 'n') break;
        printf("\n");
    }

    printf("\nWins: %d   Losses: %d\n", w_times, l_times);

    return 0;
}

bool play_game(void){
    int result = roll_dice();
    int point;

    printf("You rolled: %d\n", result);

    if(result == 7 || result == 11) return 1;
    else if(result == 2 || result == 3 || result == 12) return 0;
    
    printf("Your point is %d\n", point = result);

    while(result = roll_dice()){
        printf("You rolled: %d\n", result);

        if(result == point) return 1;
        else if(result == 7) return 0;
    }
}

int roll_dice(void){
    int roll1;
    int roll2;

    roll1 = rand() % 6 + 1;
    roll2 = rand() % 6 + 1;

    return (roll1 + roll2);
}
    
