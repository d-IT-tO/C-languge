#include <stdio.h>

int main(){
    int count = 0; 
    for (int i = 102; i <= 986; i += 17){
        printf("%d ", i);
        count++;
    }
    printf("\n%d", count);
    
    return 0;
}
