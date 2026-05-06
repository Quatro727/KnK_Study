/*programming project 10*/
#include <stdio.h>

int main(){
    int num_grade, letter_grade;

    //Get num_grade from user input
    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);
    
    //Error handling
    if (num_grade < 0 || num_grade > 100){
        printf("Invalid num_grade\n");
        return 0;
    }

    //Convert num_grade to letter_grade
    letter_grade = num_grade / 10;

    switch (letter_grade){
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("F\n");
            break;
    }

    /**********************************************************************
     * //if문 없이 법위를 체크하는 변수 생성
     * //0~100 사이면 0, 범위를 벗어나면 1
     * int  is_error =(grade < 0) || (grade >100)
     *
     * //switch 문 안에서 error 상태와 점수를 조합
     * //error이면 -1을, 정상이라면 십의 자리를 
     * switch (is_error * (-1) + (1 - is_error) * (grade / 10){
     *      case -1:
     *          printf("Error: Invalid grade.\n");
     *          break;
     *      case 10: case 9:
     *          printf("A\n");
     *          break;
     *      case 8:
     *          printf("B\n");
     *          break;
     * ...........
     ************************************************************************/
    return 0;
}
