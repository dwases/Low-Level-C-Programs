//zadanie 14
#include <stdio.h>
int main()
{
    char nazwisko[30];
    for(int v = 0;v<=30;v++)
    {
        nazwisko[v] = 0;
    }
    fgets(nazwisko, 30, stdin);
    //printf("%d",nazwisko[0]);
    //printf("%s",nazwisko);
    for(int i = 0;i<30;i++)
    {
        if(nazwisko[i]>=65 && nazwisko[i]<=90)
        {
                printf("%c",nazwisko[i]+32);

            //else
            //{
            //    printf("?????????????????????????????????????????");
            //}
        }
        else if(nazwisko[i]>=97 && nazwisko[i]<=122)
        {
            printf("%c",nazwisko[i]-32);
        }
        else
        {
            printf("%c",nazwisko[i]);
        }
    }
}