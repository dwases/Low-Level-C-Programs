//zadanie 11
#include <stdio.h>
#include <math.h>
int main()
{
    double n = 10000000;
    double suma = 0;
    for(int i = 0;i<=n;i++)
    {
        suma+=(pow(-1,i))/(2*i+1);
    }
    printf("suma = %lf",suma*4);
}
