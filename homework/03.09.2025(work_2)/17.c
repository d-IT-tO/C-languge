include <stdio.h>

int main(){
    int knuts, sickles, galleons;
    scanf("%d", &knuts);
    
    galleons = (int) knuts / 493;
    if (galleons != 0)
        printf("\n%dg.", galleons);
        
    sickles = (int) (knuts % 493) / 29;
    if (sickles != 0)
        printf("%ds.", sickles);
        
    knuts = knuts % 29;
    if (knuts != 0)
        printf("%dk.", knuts);
    
    return 0;
}
