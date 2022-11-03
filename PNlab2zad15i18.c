//zadanie 15 i 18
#include <stdio.h>

int czyPalindrom(char *message, int w)
{
    int k = 0;
    for(int i = w-2;w>=0;w--)
    {
        if(message[i] != message[k])
        {
            return 0;
        }
    }
    return 1;
}

void polPalindrom(char * message, int flag, int w)
{
    //najwyrazniej w tym kompilatorze dzielenie calkowite odbywa sie z nadmiarem
    //a nie niedoborem, gdyby dzialalo to normalnie to potrzebne by byly te if'y
    //DISCLAIMER - jednak nie, oba powyzsze nie maja zastosowania, po prostu ostatni znak to linefeed
    printf("\n");
    if(flag==0)
    {
        for(int i = 0;i<w/2;i++)
        {
            printf("%c",message[i]);
        }
    }
    if(flag==1)
    {
        for(int i = 0;i<w/2;i++)
        {
            printf("%c",message[i]);
        }
    }
    printf("\n%d",w/2);
}

int main()
{
    char nazwisko[30];
    for(int v = 0;v<30;v++)
    {
        nazwisko[v] = 0;
    }
    fgets(nazwisko, 30, stdin);
    //printf("%s",nazwisko);
    int w = 0;
    while(nazwisko[w] != 0)
    {
        w++;
    }
    
    char message[w];            //w dlugosc stringa, ostatni znak to line feed!
    for(int k = 0;k<w;k++)
    {
        message[k] = nazwisko[k];
    }
    if (czyPalindrom(message,w)!=0)
    {
        printf("\nTo jest palindrom :)");
        ////////////////////////////////////
        switch((w-1)%2)         //w-1 bo ostatni znak to line feed
        {
        case 0:
        printf("\npalindrom jest parzysty");
        polPalindrom(message, 0, w);
        break;

        case 1:
        printf("\npalindrom jest nieparzysty");
        polPalindrom(message, 1, w);
        break;
        }
        //
        
        //
        /////////////////////////////////////
    }
    
    //printf("%s",message);
    //printf("\n%d",w);
    //printf("\n%d",message[22]);
    
    
    
    return 0;
}