/*
3. Opracuj program, w którym:
 utworzysz tablicę dynamiczną dINF_1_4 (zamiast trójkropka wstaw numer grupy laboratoryjnej), o
rozmiarze n, wczytanym ze standardowego wejścia (rozmiar ten winien odpowiadać faktycznej wielkości         //nie wiem ile osob jest dokladnie w grupie wiec przyjalem 14
Twojej grupy laboratoryjnej) – użyj funkcji malloc!)
 wczytasz ze standardowego wejścia do powyższej tablicy dane 33% (n/3) studentów z Twojej grupy
laboratoryjnej (pozostałe pozycje tablicy pozostawisz puste),
 uporządkujesz te dane alfabetycznie (względem nazwiska i imienia studenta),
 wyprowadzisz dane z tablicy w czytelny sposób na standardowe wyjście,
 zwolnisz pamięć zajmowaną przez powyższą tablicę – użyj funkcji free! 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char imie[20];
    char nazwisko[20];
    int numer_indeksu;
    char kierunek[20];
    int rok_studiow;
    int numer_grupy_dziekanskiej;
} Student;


int main()
{
    //student pomocniczy
    Student temp = {"a","b",1,"c",2,3};
    int tab_size;	//wielkosc tablicy
    printf("Podaj wielkosc tablicy:");
    scanf("%d",&tab_size);	//pobiera wielkosc tablicy z stdin
  
    Student *dINF_1_4;	//znacznik na poczatek tablicy
    dINF_1_4 = (Student*) malloc(tab_size*sizeof(Student));	//zarezerwowanie pamieci odpowiedniej wielkosci
    //wczytanie atrybutow do studentow, a studentow do tablicy
    for(int i = 0;i<tab_size/3;i++)
    {
        scanf("%s",dINF_1_4[i].imie);
        scanf("%s",dINF_1_4[i].nazwisko);
        scanf("%d",&dINF_1_4[i].numer_indeksu);
        scanf("%s",dINF_1_4[i].kierunek);
        scanf("%d",&dINF_1_4[i].rok_studiow);
        scanf("%d",&dINF_1_4[i].numer_grupy_dziekanskiej);
    }
    //to do testow bylo potrzebne
    printf("%d",dINF_1_4[0].numer_indeksu);
    //iteratory do petl
    int i;
    int j;
    int n;
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //straznik petli
    n = 4;
    
        //sortowanie alfabetyczne imion
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
		//porownywanie imion studentow
                if (strcmp(dINF_1_4[i].imie, dINF_1_4[j].imie) > 0) 
                {
                    //printf("");
                    temp = dINF_1_4[i];
                    dINF_1_4[i] = dINF_1_4[j];
                    dINF_1_4[j] = temp;

                }
            }
        } 
    
    
    //sortowanie alfabetyczne nazwisk
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(dINF_1_4[i].nazwisko, dINF_1_4[j].nazwisko) > 0) 
                {
                    temp = dINF_1_4[i];
                    dINF_1_4[i] = dINF_1_4[j];
                    dINF_1_4[j] = temp;
                }
            }
        }
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //wypisanie danych
    for(int k=0;k<tab_size/3;k++)
    {
        printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", dINF_1_4[k].imie, dINF_1_4[k].nazwisko, dINF_1_4[k].numer_indeksu,dINF_1_4[k].kierunek,dINF_1_4[k].rok_studiow,dINF_1_4[k].numer_grupy_dziekanskiej);
    }
//zwolnienie pamieci
    free(dINF_1_4);
    
    return 0;
}