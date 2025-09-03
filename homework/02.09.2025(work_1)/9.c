#include <stdio.h>


int main()
{
    int seconds, minutes, hours;
    
    scanf("%d", &seconds);
    hours = int seconds / 3600;
    seconds = seconds - hours * 3600;
    minutes = int seconds / 60;
    seconds = seconds - minutes * 60;
    printf("\n%d:%d:%d", hours, minutes, seconds);
    
    return 0;

}
