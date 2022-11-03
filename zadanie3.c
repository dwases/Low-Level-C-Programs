#include <stdio.h>
#include <stdlib.h>
int** RezerwujMacierz(int n, int m)
{
    int** w;
    w = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        w[i] = (int*)malloc(m*sizeof(int));
    }
    return w;
}

int** LosujMacierz(int wiersze, int kolumny)
{
    printf("\nwartosci wylosowanej macierzy:");
    int **m;
    m = RezerwujMacierz(wiersze, kolumny);
    for(int i = 0;i<wiersze;i++)
    {
        printf("\n");
        for(int j = 0;j<kolumny;j++)
        {
            m[i][j] = rand()%10;
            printf("%d ",m[i][j]);
        }
    }
    return m;
}
//sumuje dwie macierze o losowych wartosciach
int** SumujMacierze(int wiersze, int kolumny)
{
    int **m1;
    int **m2;
    m1 = LosujMacierz(wiersze, kolumny);
    m2 = LosujMacierz(wiersze, kolumny);
    printf("\nwynik sumowania macierzy:");
    for(int i = 0; i < wiersze;i++)
    {
        printf("\n");
        for(int j = 0; j< kolumny;j++)
        {
            m1[i][j] = m1[i][j] + m2[i][j];
            printf("%d ",m1[i][j]);
        }
        
    }
    return m1;
}

//mnozy przez siebie 2 macierze
int** MnozenieMacierzy(int wiersze1, int kolumny1, int wiersze2, int kolumny2)
{
    
}

//te dwie sa raczej ok

int main()
{
    RezerwujMacierz(3,5);
    LosujMacierz(3,5);
    RezerwujMacierz(3,5);
    RezerwujMacierz(3,5);
    SumujMacierze(3,5);
    printf("pass");
}