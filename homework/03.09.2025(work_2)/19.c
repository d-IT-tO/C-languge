#include <stdio.h>
#include <math.h>

int main(){
    const float radius = 6.5;
    float A, B;
    scanf("%f%f", &A, &B);
    float diagonal = sqrt(pow(A, 2) + pow(B, 2));
    if (diagonal <= 2 * radius) puts("Yes");
    else puts("No");
    
    return 0;
}
