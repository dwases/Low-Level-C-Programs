//zadanie 1
//imię, nazwisko, numer indeksu, kierunek, rok studiów, numer grupy dziekańskiej
#include <stdio.h>

//utworzenie struktury Student
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
    //niepotrzebna zmienna, powstala przed refraktoryzacja kodu, relikt przeszlosci
    char *var1;
    
    //utworzenie obiektu Student
    Student ja;
    //wczytanie atrybutow ze standardowego wejscia
    scanf("%s",ja.imie);
    scanf("%s",ja.nazwisko);
    scanf("%d",&ja.numer_indeksu);
    scanf("%s",ja.kierunek);
    scanf("%d",&ja.rok_studiow);
    scanf("%d",&ja.numer_grupy_dziekanskiej);
    //wypisanie atrybutow na standardowe wyjscie
    printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", ja.imie, ja.nazwisko, ja.numer_indeksu,ja.kierunek,ja.rok_studiow,ja.numer_grupy_dziekanskiej);
    return 0;
}