//zadanie 5
#include <stdio.h>

int main()
{
    unsigned int stan;
    unsigned int maska;
    scanf("%x", &stan);
    scanf("%x", &maska);
    printf("\n%u %u",stan,maska);
    stan = stan & (~maska);
    printf("\n0x%x",stan);
    return 0;
}
