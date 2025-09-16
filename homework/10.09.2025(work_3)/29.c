#include <stdio.h>
#include <math.h>

int prime(int num){
    for (int j = 2; j <= (int) sqrt(num) + 1; j++){
      if (num % j == 0)
        return 0;
    }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        if (prime(i))
        printf("%d ", i);
    }
    
    return 0;
}
