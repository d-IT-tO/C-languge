#include <stdio.h>

int main(){
  unsigned int number;
  scanf("%d", &number);
  if (number % 11 == 0 && 
    (int) number % 1000 / 10 % 11 == 0 &&
    number >= 1001 && number <= 9999)
    puts("\nreal");
  else puts("\ncurves");

  return 0;
}
