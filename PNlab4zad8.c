//lab4 zadanie 8
#include <stdio.h>
#include <string.h>
int main()
{
    //wczytanie string1 i string2
    char string1[64];
    for(int v = 0;v<=64;v++)
    {
        string1[v] = 0;
    }
    fgets(string1, 64, stdin);
    char string2[64];
    for(int v = 0;v<=64;v++)
    {
        string2[v] = 0;
    }
    fgets(string2, 64, stdin);
    //wczytane zostaly
    int counter;
    int flag = 0;
    for(int i = 0;i<64;i++)     //64 to dlugosc string1
    {
        if(string1[i]==string2[0])
        {
            flag = 1;
            counter = i;
            //break;    //bez tego breaka powinno stykac // tak teraz juz ok
        }
    }
    printf("%d",counter);
    //zerowanie prawej czesci stringa
    if(flag==1)
    {
        for(int i = counter; i < 64; i++)
        {
            string1[i] = 0;
        }
    }
    printf("\n%s",string1);     //teraz powinien byc do ostatniego wystapienia piertwszej litery 2. stringa
    
    ///////////////////////////////////////
    counter = 0;
    flag = 0;
    //teraz to samo ale dla drugiego
    for(int i = 0;i<64;i++)     //64 to dlugosc string2
    {
        if(string2[i]==string1[0])
        {
            flag = 1;
            counter = i;
            //break;    //bez tego breaka powinno stykac // tak teraz juz ok
        }
    }    
    printf("\n%d",counter); //dobra, styka
    //zerowanie prawej czesci stringa2
    if(flag==1)
    {
        for(int i = counter+1; i < 64; i++)
        {
            string2[i] = 0;
        }
    }
    printf("\n%s",string2);    
    //do tad jest ok
	strcat(string1, string2);
	printf("\n%s",string1);
}
