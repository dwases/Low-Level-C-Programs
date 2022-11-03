//zadanie 4
//typ_elementu *wskaznik_do_tablicy; //jezyk C++
//wskaznik_do_tablicy = new typ_elementu[rozmiar];
//delete [] wskaznik_do_tablicy; 

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
    Student temp = {"a","b",1,"c",2,3};		//tymczasowy student
    int tab_size;	//wielkosc tablicy
    printf("Podaj wielkosc tablicy:");
    scanf("%d",&tab_size);	//pobranie wielkosci tablicy
    //pozostalosci z poprzedniego programu wykomentowane
    //Student *dINF_1_4;
    //dINF_1_4 = (Student*) malloc(tab_size*sizeof(Student));
    Student *dINF_1_4;	//wskaznik na poczatek tablicy
    dINF_1_4 = new Student[tab_size];	//uzycie operatora new z C++
    //wczytanie danych studentow
    for(int i = 0;i<tab_size/3;i++)
    {
        scanf("%s",dINF_1_4[i].imie);
        scanf("%s",dINF_1_4[i].nazwisko);
        scanf("%d",&dINF_1_4[i].numer_indeksu);
        scanf("%s",dINF_1_4[i].kierunek);
        scanf("%d",&dINF_1_4[i].rok_studiow);
        scanf("%d",&dINF_1_4[i].numer_grupy_dziekanskiej);
    }
//znowu do celow testowych
    //printf("%d",dINF_1_4[0].numer_indeksu);
//iteratory do petl
    int i;
    int j;
    int n;
    ////////////////////////////////////////////////////////////////////////////////////////////////
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

    //petle zagniezdzone do sortowania alfabetycznego nazwisk
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
		//strcmp() z string.h
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
    for(int k=0;k<4;k++)
    {
        printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", dINF_1_4[k].imie, dINF_1_4[k].nazwisko, dINF_1_4[k].numer_indeksu,dINF_1_4[k].kierunek,dINF_1_4[k].rok_studiow,dINF_1_4[k].numer_grupy_dziekanskiej);
    }
//zwolnienie pamieci
    //free(dINF_1_4);
//usuniecie tablicy
    delete [] dINF_1_4; 
    return 0;
}