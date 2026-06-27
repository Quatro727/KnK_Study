#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n, row, col;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic quare: ");
    scanf("%d", &n);
    
    //n x n matrix 
    int magic_square[n][n];
    
    //initialize the element of magic_square with 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            magic_square[i][j] = 0;
        }
    }

    row = 0;
    col = n / 2;
    magic_square[row][col] = 1;//initialize a element in middle of row 0 to 1
    
    for (int i = 2; i <= n * n; i++){
        int next_row = row - 1;
        int next_col = col + 1;

        if(next_row < 0) next_row = n - 1;
        if(next_col == n) next_col = 0;

        if(magic_square[next_row][next_col] != 0){
            next_row = row + 1;
            next_col = col;
        }

        row = next_row;
        col = next_col;
        magic_square[row][col] = i;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            printf("%d ", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
