#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void znajdzPierwiastki(int stopien, int wspolczynnik[]);
//wypisuje pierwiastki wielomianu w nowych liniach
void wypiszPierwiastki(int rozwiazanie[], int n)
{
    if (!(n <= 0))
    {
        printf("pierwiastki: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", rozwiazanie[i]);
        }
    }
}
//zamienia jedna liczba z druga
void swapuj(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//sortuje metoda babelkowa
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swapuj(&arr[j], &arr[j+1]);
    wypiszPierwiastki(arr, n);
}

struct Wielomian
{
    int wspolczynniki[256];
    int stopien;
};

//funkcja glowna
int main()
{
    int stopien;
    struct Wielomian wielomian;
    printf("stopień wielomianu= ");
    scanf("%d", &stopien);
    wielomian.stopien = stopien;
    printf("wprowadz wspolczynniki\n");
    for (int i = 0; i <= stopien; i++)
    {
        scanf("%d", &wielomian.wspolczynniki[i]);
    }
    znajdzPierwiastki(wielomian.stopien, wielomian.wspolczynniki);
    return 0;
}
//funkcja szukajaca pierwiastkow
void znajdzPierwiastki(int stopien, int wspolczynnik[])
{
    int pierwiastki[1000];
    int counter = 0;
    for (int a = 1; a <= abs(wspolczynnik[stopien]); a++)
    {
        if (abs(wspolczynnik[stopien]) % a == 0)
        {
            for (int b = 1; b <= abs(wspolczynnik[0]); b++)
            {
                if (abs(wspolczynnik[0]) % (b/a) == 0)
                {
                    int suma = 0;
                    for (int c = 0; c <= stopien; c++)
                    {
                        suma += pow((b/a) * wspolczynnik[c], c);
                    }
                    if (suma == 0)
                    {
                        pierwiastki[counter++] = (b/a);
                    }
                    suma = 0;
                    for (int c = 0; c <= stopien; c++)
                    {
                        suma += pow(((-b) / a) * wspolczynnik[c], c);
                    }
                    if (suma == 0)
                    {
                        pierwiastki[counter++] = ((-b) / a);
                    }
                    suma = 0;
                    for (int c = 0; c <= stopien; c++)
                    {
                        suma += pow((b / (-a)) * wspolczynnik[c], c);
                    }
                    if (suma == 0)
                    {
                        pierwiastki[counter++] = (b / (-a));
                    }
                }
            }
        }
    }
    bubbleSort(pierwiastki, counter);
}