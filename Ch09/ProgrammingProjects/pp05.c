#include <stdio.h>

void create_magic_square(int n, char magic_square[][n]);
void print_magic_square(int n, char magic_square[][n]);

int main(void){
    int n;

    printf("This program creates a magic sqaure of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magice square: ");
    scanf("%d", &n);

    char  magic_square[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            magic_square[i][j] = 0;
        }
    }
    
    create_magic_square(n, magic_square);

    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, char magic_square[][n]){
    int row, col;
    
    row = 0;
    col = n / 2;

    //starting point of magic_square
    magic_square[row][col] = 1;
    
    //create magic_square
    for(int i = 2; i < n * n; i++){
        int next_row = row - 1;//movig up one row
        int next_col = col + 1;//moving over one column
                               
        if(next_row < 0) next_row = n -1;//if row become -1
        if(next_col == n ) next_col = 0;//if col become n
        
        //if next position is already occupied by another integer
        if(magic_square[next_row][next_col] != 0){
            next_row = row + 1;
            next_col = col;
        }
        //positioning
        row = next_row;
        col = next_col;
        magic_square[row][col] = i;
    }
}

void print_magic_square(int n, char magic_square[][n]){
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%2d ", magic_square[i][j]);
        }
        printf("\n");
    }
}
