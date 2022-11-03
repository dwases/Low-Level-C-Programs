//zadanie 7
#include <stdio.h>
float zadanieDODAWANIE(float a, float b)
{
    return a+b;
}

float zadanieODEJMOWANIE(float a, float b)
{
    return a-b;
}

float zadanieMNOZENIE(float a, float b)
{
    return a*b;   
}

float zadanieDZIELENIE(float a, float b)
{
    return a/b;
}

int main()
{
    int r = 0;
    int wybor;
    do
    {
    printf("wybierz dzialanie:\n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    
    scanf("%d", &wybor);
    float a;
    float b;
    switch (wybor)
    {
    case 1:
      scanf("%f %f",&a,&b);
      printf("\n%f",zadanieDODAWANIE(a,b));
      break;

    case 2:
      scanf("%f %f",&a,&b);
      printf("\n%f",zadanieODEJMOWANIE(a,b));
      break;
      
    case 3:
      scanf("%f %f",&a,&b);
      printf("\n%f",zadanieMNOZENIE(a,b));
      break;
    
    case 4:
      scanf("%f %f",&a,&b);
      printf("\n%f",zadanieDZIELENIE(a,b));
      break;
      
    default:
      printf("nieprawidlowa operacja\n");
      break;
    }
    
    printf("Zakonczyc program?(1/0): ");
    scanf("%d",&r);
    
    }
    while(r == 0);
}