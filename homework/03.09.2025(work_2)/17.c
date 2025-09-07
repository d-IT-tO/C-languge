#include <stdio.h>

int main(){
    int knuts, sickles, galleons;
    scanf("%d", &knuts);
    
    galleons = (int) knuts / 493;
    if (galleons)
        printf("\n%dg. ", galleons);
        
    sickles = (int) (knuts % 493) / 29;
    if (sickles)
        printf("%ds. ", sickles);
        
    knuts = knuts % 29;
    if (knuts)
        printf("%dk.", knuts);
    
    return 0;
}
