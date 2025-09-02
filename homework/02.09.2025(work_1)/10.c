#include <stdio.h>


int main()
{
    int x, y;
    
    scanf("%d%d", &x, &y);
    int rezult = (x % y) * (y % x) + 1;
    printf("\n%d", rezult);
    
    return 0;
}
