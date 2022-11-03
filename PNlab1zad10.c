//zadanie 10
#include <stdio.h>
#include <math.h>
int main()
{
    char nazwisko[20];
    for(int v = 0;v<=20;v++)
    {
        nazwisko[v] = 0;
    }
    fgets(nazwisko, 20, stdin);
    //printf("%d",nazwisko[0]);
    //printf("%s",nazwisko);
    for(int i = 0;i<20;i++)
    {
        if((nazwisko[i]>=65 && nazwisko[i]<=90) || (nazwisko[i]>=97 && nazwisko[i]<=122))
        {
            if(nazwisko[i]%2==0)
            {
                printf("%c\n",nazwisko[i]);
            }
            //else
            //{
            //    printf("?????????????????????????????????????????");
            //}
        }
    }
}