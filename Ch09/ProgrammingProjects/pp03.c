#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void){
    char board[10][10];

    //First call: generate_random_walk-> initialize and random move
    generate_random_walk(board);

    //print the result
    print_array(board);
 
    return 0;
}

void generate_random_walk(char walk[10][10]){
    char letter = 'B';
    int i, j, mv;
    
    srand((unsigned int) time(NULL));
    
    //Initialize the walk[10][10]
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            walk[i][j] = '.';
        }
    }
    walk[0][0] = 'A';

    i = 0;
    j = 0;
    
    //randomly move: left, right, up, down
    while (letter <= 'Z'){
        mv = rand() % 4;//specify the direction on board

        int left_blocked = (j - 1 < 0) || (walk[i][j - 1] != '.');
        int right_blocked = (j + 1 > 9) || (walk[i][j + 1] != '.');
        int up_blocked = (i - 1 < 0) || (walk[i - 1][j] != '.');
        int down_blocked = (i + 1 > 9) || (walk[i + 1][j] != '.');
        
        if(left_blocked && right_blocked && up_blocked && down_blocked) break;
        
        //move by direction
        //move to left
        if(mv == 0){
            if(j - 1 < 0) continue;
            if(walk[i][j - 1] != '.') continue;
            walk[i][--j] = letter++;
        }
        //move to up
        else if(mv == 1){
            if(i - 1 < 0) continue;
            if(walk[i - 1][j] != '.') continue;
            walk[--i][j] = letter++;
        }
        //move to right
        else if(mv == 2){
            if(j + 1 > 9) continue;
            if(walk[i][j + 1] != '.') continue;
            walk[i][++j] = letter++;
         }
        else{
            if(i + 1 > 9) continue;
            if(walk[i + 1][j] != '.') continue;
            walk[++i][j] = letter++;
        }
    }
}
void print_array(char walk[10][10]){
    int i, j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c", walk[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
        
