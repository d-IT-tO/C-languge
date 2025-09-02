#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){
  float first_radius, second_radius;
  scanf("%f %f", &first_radius, &second_radius);
  float coverage_area = pi * fabs(pow(second_radius, 2) - pow(first_radius, 2));
  printf("%f", coverage_area);
  
  return 0;
}
