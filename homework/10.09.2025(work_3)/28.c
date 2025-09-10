#include <stdio.h>
#include <math.h>

int main(){
    int N, count = 0, sum_divisors;
    scanf("%d", &N);
  
    for (int i = 6; i <= N; i++){
        sum_divisors = 1;
        for (int j = 2; j <= (int) sqrt(i); j++){
            if (i % j == 0)
                sum_divisors += j + (i/j);
            if (sum_divisors > i)
                break;
        }
        if (sum_divisors == i)
            count++;
    }
    printf("%d", count);

  return 0;
}
