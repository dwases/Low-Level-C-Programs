#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int size = (90 - 64) + (122 - 96);
void wpiszZnak(char znak, int histogram[52][2]);
void sortujTablice(int histogram[52][2]);
void wyprowadzTablice(int histogram[52][2]);
int wskaznik = 0;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    char napis[128];
    printf("Wprowadź napis: ");
    fgets(napis, 128, stdin);
    int histogram[52][2];
    int i = 0;
    while (napis[i] != 0)
    {
        wpiszZnak(napis[i], histogram);
        i++;
    }
    sortujTablice(histogram);
    wyprowadzTablice(histogram);
    return 0;
}

void wpiszZnak(char znak, int histogram[52][2])
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (histogram[i][0] == znak)
        {
            histogram[i][1]++;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        histogram[wskaznik][0] = znak;
        histogram[wskaznik][1] = 1;
        wskaznik++;
    }
}

void sortujTablice(int histogram[52][2])
{
    qsort(histogram, wskaznik, 2*sizeof(int), cmpfunc);
}

void wyprowadzTablice(int histogram[52][2])
{
    for (int i = 0; i < wskaznik; i++)
    {
        printf("%c : %d\n", histogram[i][0], histogram[i][1]);
    }
}
