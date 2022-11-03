//zadanie 16
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//podpunkt a
bool czyTrojkat(float a, float b, float c)
{
    if(a<b+c && b<a+c && c<a+b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//podpunkt b
float obliczPole (float a, float b, float c)
{
    //p - polowa obwodu
      double p;
      p = (a+b+c)/(2.0);
      double pole;
      pole = sqrt(p*(p-a)*(p-b)*(p-c));
      return pole;
}

int main()
{
    float a, b, c;
    //int flag;
    scanf("%f %f %f", &a, &b, &c);
    if(czyTrojkat(a,b,c))
    {
        printf("a) true");
        printf("\npole jest rowne: %f",obliczPole(a,b,c));
    }
    else
    {
        printf("a) false");
    }
    
}