#include <stdio.h>

int main(){
    int matrix[5][5]={{0,},
                      {0,},
                      {0,},
                      {0,},
                      {0,}};

    //Enter the value for 5x5 array elements
    for (int i = 0; i < 5; i++){
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
    }

    //Get a Row totals
    printf("Row totals: ");
    for (int i = 0; i < 5; i++){
        int row_totals = 0;
        for (int j = 0; j < 5; j++){
            row_totals += matrix[i][j];
        }
        printf("%d ", row_totals);
    }
    printf("\n");

    //Get a Column totals
    printf("Column totals: ");
    for (int i = 0; i < 5; i++){
        int column_totals = 0;
        for (int j = 0; j < 5; j++){
            column_totals += matrix[j][i];
        }
        printf("%d ", column_totals);
    }
    printf("\n");

    return 0;
}
