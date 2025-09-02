#include <stdio.h>


int main()
{
    int cost_bitkoin;
    
    scanf("%d", &cost_bitkoin);
    int third_right = (cost_bitkoin / 100) % 10;
    printf("\n%d", third_right);
    
    return 0;
}
