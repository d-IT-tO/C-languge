#include <stdio.h>
#include <math.h>


int main()
{
    float weight_pounds, height_inches;
    
    scanf("%f%f", &weight_pounds, &height_inches);
    float imt = (weight_pounds/pow(height_inches, 2)) * 703;
    printf("\n%.2f", imt);
    
    return 0;
}
