#include <stdio.h>

int main(){
    
    int grades[5][5] = {0};
    
    //Input the grades of students for each quiz
    for (int i = 0; i < 5; i++){
        printf("Enter the quiz %d's grade of each students: ", i + 1);
        scanf("%d %d %d %d %d", &grades[i][0], &grades[i][1], &grades[i][2], &grades[i][3], &grades[i][4]);
    }
    printf("\n");

    //get quiz's score
    for (int i = 0; i < 5; i++){
        printf("Quiz %d's average score, high score and low score: ", i + 1);

        int total = 0;
        int high = grades[i][0], low = grades[i][0];
        
        for (int j = 0; j < 5; j++){
            total += grades[i][j];
            if (high <= grades[i][j]) high = grades[i][j];
            if (low >= grades[i][j]) low = grades[i][j];
        }
        printf("%lf %d %d\n", (double)total / 5, high, low);
    }
    printf("\n");

    //get student's score
    for (int i = 0; i < 5; i++){
        printf("Student %d's total score, average score: ", i + 1);

        int total = 0;

        for (int j = 0; j < 5; j++){
            total += grades[j][i];
        }
        printf("%d %lf\n", total, (double)total / 5); 
    }
    
    return 0;
}
