/*****************************************************************************
 * Modify the interest.c program in Sec01 of Ch08 with following conditions
 * - compounds interest monthly instead annually
 * - the form of output shouldn't change
 * - the balance should still be shown at ANNUAL intervals
 *   ***************************************************************************/
#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(){
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++){
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE; 
    }
    printf("\n");

    for (year = 1; year <= num_years; year++){
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++){
            for (int month = 1; month <=12; month++){
                //caculate the monthly rate
                double monthly_rate = (low_rate + i) / 12.0 / 100.0;
                value[i] += monthly_rate * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
