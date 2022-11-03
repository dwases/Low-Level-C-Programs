#include <stdio.h>
#include <math.h>
//wzory vieta
int main() {


  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double delta = b*b - 4 * a * c;
  if (delta == 0)
  {
      double x = (-b)/(2*a);
      double suma = x;
      printf("jest jeden pierwiastek, suma jest rowna %lf", suma);
  }
  else if (delta < 0)
  {
      printf("Brak pierwiastkow rzeczywistych");
  }
  else if (delta > 0)
  {
      double x1 = ((-b)-sqrt(delta))/(2*a);
      double x2 = ((-b)+sqrt(delta))/(2*a);
      double suma = x1 + x2;
      printf("sa 2 pierwiastki, suma jest rowna %lf", suma);
  }
  
  //snprintf(s, size, "%f", d);   // convert double to string 
  //printf(" d = %f = %s \n", d,s); // check

  return 0;
}