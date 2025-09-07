#include <stdio.h>
#include <math.h>

int main(){
    int N, K, M;
    scanf("%d%d%d", &N, &K, &M);
    int distance = fabs(K-M) - 1;
    if (distance > N - distance - 2)
        distance = N - distance - 2;
    printf("%d", distance);
    
    return 0;
}
