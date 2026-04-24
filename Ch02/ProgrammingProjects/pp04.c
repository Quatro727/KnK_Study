#include <stdio.h>

#define PI 3.141592

int main(){
    float r, volume ;
    
    printf("Enter a radius: ");
    scanf("%f", &r);
    
    volume = 4.0f /3.0f * PI * r * r * r ;
    printf("Volume: %.3f\n", volume);

    return 0;
}
