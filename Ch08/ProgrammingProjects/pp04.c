/********************************************************************
 * Modify the rever.c in Section01 of Ch08 with following conditions
 * -use the expression (int)(sizeof(a)/sizeof(a[0]))
 *  *****************************************************************/
#include <stdio.h>

int main(void){
    int a[10], i;
    int N = (int)(sizeof(a) / sizeof(a[0]));

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for (i = N - 1; i >= 0; i--){
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
