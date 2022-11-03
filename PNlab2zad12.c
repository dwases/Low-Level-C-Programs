//zadanie 12
#include <stdio.h>
#include <math.h>
int main() {
  double a, b, c;
  int flag;
  scanf("%lf %lf %lf", &a, &b, &c);
  if(a<b+c && b<a+c && c<a+b)
  {
      printf("mozna zbudowac trojkat");
      flag = 1;
  }
  else
  {
      printf("niemozna zbudowac trojkata");
      flag = 0;
  }
  
  if(flag == 1)
  {
      //p - polowa obwodu
      double p;
      p = (a+b+c)/(2.0);
      double pole;
      pole = sqrt(p*(p-a)*(p-b)*(p-c));
      printf("\npole jest rowne: %f",pole);
  }
}