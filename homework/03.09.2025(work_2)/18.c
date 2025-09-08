#include <stdio.h>

int main(){
    int pincode;
    scanf("%d", &pincode);
    // if (pincode > 1022 && pincode < 9877)
    if ( ((int) pincode / 1000 != (int) pincode % 1000 / 100 != (int) pincode % 100 / 10 != pincode % 10) && 
        ((pincode > 1022 && pincode < 1900) || (pincode > 2050 && pincode < 9877)) )
        puts("OK");
    else puts("ERROR");
    
    return 0;
}
