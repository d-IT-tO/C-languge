#include <stdio.h>

int main(){
    int N, sub = 1;
    scanf("%d", &N);

    do{
        printf("\n%d", sub);
        sub *= 2;
    }
    while (sub <= N);

    return 0;
}
