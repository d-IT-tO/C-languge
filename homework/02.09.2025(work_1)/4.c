#include <stdio.h>


int main()
{
    float yard, miles, feet, inches, centimeters;
    
    scanf("%f", &centimeters);
    inches = centimeters / 2.54;
    feet = inches / 12;
    yard = feet / 3;
    miles = yard/1760;
    printf("\n%f %f %f %f", yard, miles, feet, inches);
    
    return 0;
}
