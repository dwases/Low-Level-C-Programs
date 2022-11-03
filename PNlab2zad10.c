//zadanie 10
#include <stdio.h>
#include <math.h>
int main()
{
    double n = 10000;
    double suma = 0;
    for(int i = 1;i<=n;i++)
    {
        suma+=1.0/(pow(i,2));
    }
    printf("suma1 = %lf\n",suma);
    double suma2 = 0;
    for(int i = n;i>=1;i--)
    {
        suma2+=1.0/(pow(i,2));
    }
    printf("suma2 = %lf\n",suma2);
}
