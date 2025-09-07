#include <stdio.h>

int main(void){
  int N, flag;
  scanf("%d", &N);
  if (N == 1 || N % 2 == 0)
    puts("Yes");    
  else
    puts("No");    
  
  return 0;
}
