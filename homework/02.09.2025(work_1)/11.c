#include <stdio.h>


int main()
{
    int n, c, number, lst, vertical, horizontal;
    
    scanf("%d%d%d", &n, &c, &number);
    lst = ((number - 1) / (n * c)) + 1;
    number = number - n*c*(lst - 1);
    horizontal = ((number - 1) / c) + 1;
    vertical = number - ((horizontal - 1) * c);
    printf("\n%d %d %d", lst, vertical, horizontal);
    
    return 0;
}

