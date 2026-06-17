/*Sorts an array of integers using QuickSort algorithm*/
#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void){
    int a[N];

    printf("Enter %d number to be sorted: ");
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (int i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

//quicksort function: using recursion
void quicksort(int a[], int low, int high){
    int middle;
    
    //if low is bigger or equal than high, it means parameter you get from argument is array with length or arrangement of arguments was wrong when main called quicksort
    if (low >= high) return;

    //partitioning
    middle = split(a, low, high);

    //recursion
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

//partitioning function
int split(int a[], int low, int high){
    int part_element = a[low];

    for(;;){
        while(low < high && part_element <= a[high]){
            high--;
        }
        if(low >= high) break;
        a[low++] = a[high];

        while(low < high && a[low] <= part_element){
            low++;
        }
        if(low >= high) break;
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}
