#include <stdio.h>


int main(void){
  int N, K;
  scanf("%d%d", &N, &K);
  if (N < K)
    printf("%d", N);
  else printf("%d", K);
  
  return 0;
}
