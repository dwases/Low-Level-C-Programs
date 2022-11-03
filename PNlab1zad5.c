//zadanie 5
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int dzielniki_c[50];
    for(int v = 0;v<50;v++)
    {
        dzielniki_c[v] = 0;
    }
    int j = 0;
    for(int i = 1;i<=c;i++)
    {
        if(c%i==0)
        {
            dzielniki_c[j] = i;
            j++;
        }
    }
    for(int f = 0;f<50;f++)
    {
        //printf("dzielnik: %d\n",dzielniki_c[f]);
    }
    //nowy segment
    int dzielniki_c_ujemne[50];
    for(int f = 0;f<50;f++)
    {
        dzielniki_c_ujemne[f] = -1*dzielniki_c[f];
        //printf("dzielnik ujemny: %d\n",dzielniki_c_ujemne[f]);
    }
    //koniec nowego segmentu
    int t = 1;
    //tu w petli na dole moga byc problemy, ale nie wiem co jest nie tak
    for(int i = 0;i<50;i++)
    {
        if(dzielniki_c[i]!=0)
        {
            if(a*dzielniki_c[i]*dzielniki_c[i]+b*dzielniki_c[i]+c==0)
            {
                printf("rozwiazanie nr %d: %d\n",t,dzielniki_c[i]);
                t++;
            }
        //nowe
            if(a*dzielniki_c_ujemne[i]*dzielniki_c_ujemne[i]+b*dzielniki_c_ujemne[i]+c==0)
            {
                printf("rozwiazanie nr %d: %d\n",t,dzielniki_c_ujemne[i]);
                t++;
            }
        //koniec nowe
            //testowo
            //else
            //{
            //    printf("wynik to: %d\n", a*dzielniki_c[i]*dzielniki_c[i]+b*dzielniki_c[i]+c);
            //}
            //koniec testowego
        }
    }
    if(t==1)
    {
        printf("brak rozwiazan calkowitych :(");
    }
    //dotad dziala, bo dzielniki_c wypisuje sensownie
    //poczatek obszaru testowego
    
    //koniec obszaru testowego
    /*
    int k = 0;
    int r = 0;
    int rozwiazania[50];
    for(int p = 0;p<=j;p++)
    {
        rozwiazania[p] = 2147483647;     //na razie max int najwyzej zmienie
    }
    while(dzielniki_c[k]!=dzielniki_c[k+1])
    {
        if(a*dzielniki_c[k]*dzielniki_c[k]+b*dzielniki_c[k]+c==0)
        {
            rozwiazania[r] = dzielniki_c[k];
            r++;
        }
        k+=1;
    }
    for(int l = 0;l<50;l++)
    {
        printf("rozwiazanie: %d\n",rozwiazania[l]);
    }
    for(int f = 0;f<50;f++)
    {
        printf("dzielnik: %d\n",dzielniki_c[f]);
    }
    */
    if(c==0)
    {
	printf("rozwiazanie nr %d: 0",t);
    }
}