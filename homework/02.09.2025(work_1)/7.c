#include <stdio.h>


int main()
{
    int n, m;
    
    scanf("%d%d", &n, &m);
    int sweets_one = m / n;
    int pinocchio_candies = m - sweets_one * n;
    printf("\n%d %d", sweets_one, pinocchio_candies);
    
    return 0;
}
