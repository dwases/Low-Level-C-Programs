//zadanie 7
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {


  float x;
  scanf("%f", &x);
  printf("%f", ((sin(x)*sin(x))*log(15.0))/sqrt(abs(log(0.5*x)/log(3))));
}