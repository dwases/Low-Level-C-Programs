//zadanie 2
//2. Opracuj program, w którym:
// zdefiniujesz tablicę statyczną, o rozmiarze 15, do przechowywania informacji o studentach z Twojej
//grupy laboratoryjnej sINF_1_4.1 (zamiast trójkropka wstaw numer grupy laboratoryjnej)(juz wstawilem czworke i jedynke),
// wczytasz ze standardowego wejścia do powyższej tablicy dane 4 studentów z Twojej grupy
//laboratoryjnej (pozostałe pozycje tablicy pozostawisz puste),
// uporządkujesz te dane alfabetycznie (względem nazwiska i imienia studenta),
// wyprowadzisz dane z tablicy w czytelny sposób na standardowe wyjście.

#include <stdio.h>
#include <string.h>	//na potrzeby strcpy()
//struktura studenta
typedef struct
{
	//atrybuty studenta
    char imie[20];
    char nazwisko[20];
    int numer_indeksu;
    char kierunek[20];
    int rok_studiow;
    int numer_grupy_dziekanskiej;
} Student;


int main()
{
//utworzenie tablicy studentow
    Student studenci[15];
    
    //utworzenie czterech studentow
    Student ja;
    Student ktos_inny;
    Student ktos_jeszcze_inny;
    Student i_jeszcze_inny;
    //wczytanie atrybutow
    scanf("%s",ja.imie);
    scanf("%s",ja.nazwisko);
    scanf("%d",&ja.numer_indeksu);
    scanf("%s",ja.kierunek);
    scanf("%d",&ja.rok_studiow);
    scanf("%d",&ja.numer_grupy_dziekanskiej);
    //printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", ja.imie, ja.nazwisko, ja.numer_indeksu,ja.kierunek,ja.rok_studiow,ja.numer_grupy_dziekanskiej);
    //wczytanie atrybutow
    scanf("%s",ktos_inny.imie);
    scanf("%s",ktos_inny.nazwisko);
    scanf("%d",&ktos_inny.numer_indeksu);
    scanf("%s",ktos_inny.kierunek);
    scanf("%d",&ktos_inny.rok_studiow);
    scanf("%d",&ktos_inny.numer_grupy_dziekanskiej);
    //printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", ja.imie, ja.nazwisko, ja.numer_indeksu,ja.kierunek,ja.rok_studiow,ja.numer_grupy_dziekanskiej);
    //wczytanie atrybutow
    scanf("%s",ktos_jeszcze_inny.imie);
    scanf("%s",ktos_jeszcze_inny.nazwisko);
    scanf("%d",&ktos_jeszcze_inny.numer_indeksu);
    scanf("%s",ktos_jeszcze_inny.kierunek);
    scanf("%d",&ktos_jeszcze_inny.rok_studiow);
    scanf("%d",&ktos_jeszcze_inny.numer_grupy_dziekanskiej);
    //printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", ja.imie, ja.nazwisko, ja.numer_indeksu,ja.kierunek,ja.rok_studiow,ja.numer_grupy_dziekanskiej);
    //wczytanie atrybutow
    scanf("%s",i_jeszcze_inny.imie);
    scanf("%s",i_jeszcze_inny.nazwisko);
    scanf("%d",&i_jeszcze_inny.numer_indeksu);
    scanf("%s",i_jeszcze_inny.kierunek);
    scanf("%d",&i_jeszcze_inny.rok_studiow);
    scanf("%d",&i_jeszcze_inny.numer_grupy_dziekanskiej);
    //printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", ja.imie, ja.nazwisko, ja.numer_indeksu,ja.kierunek,ja.rok_studiow,ja.numer_grupy_dziekanskiej);
    //umieszczenie studentow w tablicy
    studenci[0] = ja;
    studenci[1] = ktos_inny;
    studenci[2] = ktos_jeszcze_inny;
    studenci[3] = i_jeszcze_inny;
    
    //relikt, nieuzyta zmienna
    int flag = 0;

    ////////////////////////////////////////////////////////////
    //iteratory do petl na dole
    int i;
    int j;
    int n;
    //pomocniczy student
    Student temp = {"a","b",1,"c",2,3};
    //zmienne pomocnicze
    char tmp_imie[20];
    char tmp_nazwisko[20];
    int tmp_numer_indeksu;
    char tmp_kierunek[20];
    int tmp_rok_studiow;
    int tmp_numer_grupy_dziekanskiej;
    n = 4;
    //sortowanie alfabetyczne imion
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
		//porownywanie nazwisk studentow
                if (strcmp(studenci[i].imie, studenci[j].imie) > 0) 
                {
                    //printf("");
                    temp = studenci[i];
                    studenci[i] = studenci[j];
                    studenci[j] = temp;

                }
            }
        }    
    
    
    
    //teraz nazwisk
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
		//porownywanie nazwisk studentow
                if (strcmp(studenci[i].nazwisko, studenci[j].nazwisko) > 0) 
                {
                    //printf("");
                    temp = studenci[i];
                    studenci[i] = studenci[j];
                    studenci[j] = temp;

                }
            }
        }
    
    ///////////////////////////////////////////////////////////
    
    //wypisanie danych na standardowe wyjscie
    for(int k=0;k<4;k++)
    {
        printf ("imie = %s, nazwisko = %s, numer_indeksu = %d, kierunek = %s,rok_studiow = %d,numer_grupy_dziekanskiej = %d,,\n", studenci[k].imie, studenci[k].nazwisko, studenci[k].numer_indeksu,studenci[k].kierunek,studenci[k].rok_studiow,studenci[k].numer_grupy_dziekanskiej);
    }
    
    return 0;
}