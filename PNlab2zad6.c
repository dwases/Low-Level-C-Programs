//zadanie 6
#include <stdio.h>
int main()
{
    char c;
    for(int i = 1;i<=255;i++)
    {
        printf("kod: %d\nznak: %c\n",i,i);
        if(i==40 || i == 80 || i == 120 || i == 160 || i == 200 || i == 240)
        {
           scanf("%c",&c); 
        }
    }
}