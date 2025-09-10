#include <stdio.h>
#include <math.h>

int main(){
  int N, count;
  bool prime_number;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++){
    prime_number = true;
    for (int j = 2; j <= (int) sqrt(i) + 1; j++){
      if (i % j == 0){
        prime_number = False;
        break;
      }
    }
    if prime_number
      printf("%d ", i);
  }

  return 0;
}
