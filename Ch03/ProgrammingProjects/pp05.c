#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    int num5, num6, num7, num8;
    int num9, num10, num11, num12;
    int num13, num14, num15, num16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
            &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
    printf("%2d %2d %2d %2d\n", num1, num2, num3, num4);

    printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
    printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
    printf("%2d %2d %2d %2d\n", num13, num14, num15, num16);
    
    int row1_sums = num1 + num2 + num3 + num4;
    int row2_sums = num5 + num6 + num7 + num8;
    int row3_sums = num9 + num10 + num11 + num12;
    int row4_sums = num13 + num14 + num15+ num16;
    printf("Row sums: %d %d %d %d\n", row1_sums, row2_sums, row3_sums, row4_sums);

    int col1_sums = num1 + num5 + num9 +num13;
    int col2_sums = num2 + num6 + num10 +num14;
    int col3_sums = num3 + num7 + num11 +num15;
    int col4_sums = num4 + num8 + num12 +num16;
    printf("Column sums: %d %d %d %d\n", col1_sums, col2_sums, col3_sums, col4_sums);

    int diag1_sums = num1 + num6+ num11 +num16;
    int diag2_sums = num4 + num7+ num10 +num13;
    printf("Diagnoal sums: %d %d\n", diag1_sums, diag2_sums);

    return 0;
}
