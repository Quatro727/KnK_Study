#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int* min);

int main(void)
{
    int b[N], big, small;
    int *p;

    printf("Enter %d numbers: ", N);
    for (p = b; p < b + N - 1; p++) 
        scanf("%d", p);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int *q;

    *max = *a;
    *min = *a;

    for (q = a + 1; q < a + n - 1; q++) {
        if (*q > *max)
            *max = *q;
        else if (*q < *min)
            *min = *q;
    }
}
