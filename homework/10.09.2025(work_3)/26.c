#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);
    int count = ceil(log2(N));
    printf("%d", count);

    return 0;
}
