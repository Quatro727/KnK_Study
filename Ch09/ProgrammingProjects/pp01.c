#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);
int max(int a[], int n);

int main(void){
    int a[N];

    printf("Enter a 10 integers: ");
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    
    //selection sort call
    selection_sort(a, N);
    
    //print the result
    for(int i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

//selection sort: recursive version
void selection_sort(int a[], int n){
    int temp, idx;

    if (n == 1) return;
   
    //get a max element's index
    idx =  max(a, n);

    //put into index nuimber n
    temp = a[n - 1];
    a[n - 1] = a[idx];
    a[idx] = temp;
    
    //recursive call
    selection_sort(a, n - 1);
}

//Get a max element's index
int max(int a[], int n){
    int max_idx = 0;
    int i;

    for(i = 1; i < n; i++){
        if(a[max_idx] < a[i]) max_idx = i;
    }
    return max_idx;
}





