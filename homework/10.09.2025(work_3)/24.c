#include <stdio.h>
#include <math.h>

int main(){
    int N, V = 1;
    scanf("%d", &N);

    int i = 1;
    while (V <= N){
        printf("%d ", V);
        i++;
        V = pow(i, 3);
    }

    return 0;
}
