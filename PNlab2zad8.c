//zadanie 8
#include <stdio.h>

int main()
{
    printf("wybierz dzialanie:\n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    int wybor;
    scanf("%d", &wybor);
    float a;
    float b;
    switch (wybor)
    {
    case 1:
      scanf("%f %f",&a,&b);
      printf("\n%f",a+b);
      break;

    case 2:
      scanf("%f %f",&a,&b);
      printf("\n%f",a-b);
      break;
      
    case 3:
      scanf("%f %f",&a,&b);
      printf("\n%f",a*b);
      break;
    
    case 4:
      scanf("%f %f",&a,&b);
      printf("\n%f",a/b);
      break;
      
    default:
      printf("nieprawidlowa operacja");
      break;
    }
}
