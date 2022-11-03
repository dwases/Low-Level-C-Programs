//zadanie 4
#include <stdio.h>

int main()
{
    unsigned int stan;
    scanf("%d", &stan);
    //printf("\n%u %u",stan,maska);
    //stan = stan & (~maska);
    //printf("\n0x%x",stan);
    if((stan>=2952790016) && (stan<3221225472))    printf("tak");
    else    printf("nie");
    return 0;
}
