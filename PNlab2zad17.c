//zadanie 17
#include <stdio.h>
float naStopien(float rad)
{
    float deg = rad * (180/3.14159265);
    return deg;
}


int main()
{
    float rad;
    scanf("%f",&rad);
    printf("\nw stopniach: %f",naStopien(rad));
}
