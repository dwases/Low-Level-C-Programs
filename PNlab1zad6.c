//zadanie 6
#include <stdio.h>

int main() {


  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  if(a<b+c && b<a+c && c<a+b)
  {
      printf("mozna");
  }
  else
  {
      printf("niemozna");
  }
}