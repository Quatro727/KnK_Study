#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char board[10][10];
    char letter = 'B';
    int i, j, mv;

    srand((unsigned int) time(NULL));

    //Initiallize the array board with '.'
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            board[i][j] = '.';
        }
    }
    board[0][0] = 'A';
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    i = 0;
    j = 0;

    //randomly move
    while (letter <='Z'){
        
        mv = rand() % 4;//specify the direction on board
       
        //direction blocked check 
        int left_blocked = (j - 1 < 0) || (board[i][j - 1] != '.');
        int right_blocked = (j + 1 > 9) || (board[i][j + 1] != '.');
        int up_blocked = (i - 1 < 0) || (board[i - 1][j] != '.');
        int down_blocked = (i + 1 > 9) || (board[i +1][j] != '.');
        
        if (left_blocked && right_blocked && up_blocked && down_blocked) break;

        //move by direction
        //move to left
        if (mv == 0){
            if (j - 1 < 0) continue;
            if (board[i][j - 1] != '.') continue;
            board[i][--j] = letter++;
        }
        //move to up
        else if (mv == 1){
            if (i - 1 < 0) continue;
            if (board[i - 1][j] != '.') continue;
            board[--i][j] = letter++;
        }
        //move to right
        else if (mv == 2){
            if (j + 1 > 9) continue;
            if (board[i][j + 1] != '.') continue;
            board[i][++j] = letter++;
        }
        //move to down
        else if (mv == 3){
            if (i + 1 > 9) continue;
            if (board[i + 1][j] != '.') continue;
            board[++i][j] = letter++;
        }
        
    }

    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
