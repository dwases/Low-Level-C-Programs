#include <stdio.h>
#include <stdlib.h>
//rezerwuje pamiec na macierz
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
//wprowadza do macierzy losowe wartosci od 0 do 99 wlacznie
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
int** MnozenieMacierzy(int wiersze, int kolumny)
{
    int sum;
    int **m1;
    int **m2;
    int **m3;
    m1 = LosujMacierz(wiersze, kolumny);
    m2 = LosujMacierz(kolumny, wiersze);
    m3 = LosujMacierz(wiersze, wiersze);
    for(int i = 0;i<wiersze;i++)
    {
        for(int j = 0;j<wiersze;j++)
        {
            m3[i][j] = 0;
        }
    }
    printf("\nwynik mnozenia:\n");
    for (int c = 0 ; c < wiersze ; c++)
    {
        printf("\n");
      for (int d = 0 ; d < wiersze ; d++)
      {
        for (int k = 0 ; k < kolumny ; k++)
        {
          sum = sum + m1[c][k]*m2[k][d];
          
        }
        printf("%d ",sum);
        m3[c][d] = sum;
        sum = 0;
      }
    }


    return m3;
}
//oblicza wyznacznik macierzy 3 na 3
int WyznacznikMacierzy(int wiersze, int kolumny)
{
    int **a;
    a = LosujMacierz(wiersze, kolumny);
    
    int wyznacznik = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    printf("wartosc wyznacznika: %d",wyznacznik);
    return wyznacznik;
}



int main()
{
    RezerwujMacierz(3,5);
    LosujMacierz(3,5);
    RezerwujMacierz(3,5);
    RezerwujMacierz(3,5);
    SumujMacierze(3,5);
    WyznacznikMacierzy(3,3);
    MnozenieMacierzy(2,3);
}
