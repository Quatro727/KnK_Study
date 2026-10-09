#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* segments array
 *
 *   _0_
 * 5|   |1
 *  |_6_|
 *  |   |
 * 4|_3_|2
 */
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
//digits array
char digits[4][MAX_DIGITS * 4];

/* translating the 7-segments display to a 3x3 grid:
 *   0  1  2
 * 0    _
 * 1 |  _  |
 * 2 |  _  |
 */
const int segment_grid[7][2] = {{0, 1},
                                {1, 2},
                                {2, 2},
                                {2, 1},
                                {2, 0},
                                {1, 0},
                                {1, 1}};

int main(void)
{   
    char ch;
    int position = 0;
           
    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += 4;
        }
    }
    print_digits_array();

    return 0;
}

//store blank characters into all elements of the digits array
void clear_digits_array(void)
{
    int i,j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

//store the seven-segment representation of digit into a specified position in the digit array
void process_digit(int digit, int position)
{
    int i, row, col;

    for (i = 0; i < 7; i++) {
        if (segments[digit][i]) {
            row = segment_grid[i][0];
            col = segment_grid[i][1] + position;
            digits[row][col] = (i % 3 == 0 ? '_' : '|');
        }
    }
}

//display the rows of the digits array
void print_digits_array(void)
{
    int i, j;
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);
        printf("\n");
    }
}
