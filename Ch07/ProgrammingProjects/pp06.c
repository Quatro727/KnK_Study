#include <stdio.h>

int main(){
    int i;
    short s;
    long l;
    float f;
    double d;

    printf("%d %d %d %d %d\n",
            sizeof(i), sizeof(s), sizeof(l), sizeof(f), sizeof(d));

    return 0;
}
