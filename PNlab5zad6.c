//zadanie 6
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int count = 0;
struct node *start_node = NULL;
//struktura listy
struct node {
  int data;
  struct node *next;
};
//przejscie przez liste
void traverse() {
  struct node *t;

  t = start_node;

  if (t == NULL)
  {
    return;
  }
  while (t->next != NULL)
{
  printf("%d\n", t->data);
    t = t->next;
  }
  printf("%d\n", t->data);
}


void push(int x)
{
  struct node *t, *temp;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;

  if (start_node == NULL) {
    start_node = t;
    start_node->next = NULL;
    return;
  }

  temp = start_node;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}

//zamienia jedna liczba z druga
void swapuj(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//sortuje metoda babelkowa
void bubbleSort(int *arr, int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swapuj(&arr[j], &arr[j+1]);
    //wypiszPierwiastki(arr, n);
}


float srednia(float tab[])
{
    float suma = 0.0;
    for(int i = 0;i<1000;i++)
    {
        suma+=tab[i];
    }
    return suma/1000;
}

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    
    float czasy_generacji_tablicy[1000];
    float czasy_sortowania_tablicy[1000];
    float czasy_wypisywania_tablicy[1000];
    float czasy_generacji_listy[1000];
    float czasy_wypisywania_listy[1000];

    int tab[300];
    int v = 0;
    while(v<1000)
    {
        for(int i = 0;i<300;i++)
        {
            tab[i]=rand() % 1001;
            //printf(" %d ", tab[i]);//dziala
        }
        //tablica dynamiczna
        clock_t start = clock();
        
        int *wskaznik_do_tablicy;
        wskaznik_do_tablicy = (int*) malloc(300*sizeof(int));
        //printf(" %d ",wskaznik_do_tablicy[1]);
        for(int i = 0;i<300;i++)
        {
            wskaznik_do_tablicy[i] = tab[i];
        }
        clock_t end = clock();
        czasy_generacji_tablicy[a++] = (float)(end - start) / CLOCKS_PER_SEC;
        
        //printf("\nutworzenie i wpisanie liczb do tablicy trwalo: "); 
        start = clock();
        bubbleSort(wskaznik_do_tablicy,300);
        end = clock();
        //printf("\nsortowanie tablicy trwalo: "); 
        czasy_sortowania_tablicy[b++] = (float)(end - start) / CLOCKS_PER_SEC;
        
        start = clock();
        for(int i = 0;i<300;i++)
        {
        //    if(i%10==0)printf("\n");
        //    printf(" %d ",tab[i]);
        }
        end = clock();
        czasy_wypisywania_tablicy[c++] = (float)(end - start) / CLOCKS_PER_SEC;
        //printf("\nwypisanie tablicy na ekran trwalo: ");
        free(wskaznik_do_tablicy);
        
        //teraz lista jednokierunkowa
        start = clock();
        for(int i = 0;i<300;i++)
        {
            push(tab[i]);
        }
        end = clock();
        czasy_generacji_listy[d++] = (float)(end - start) / CLOCKS_PER_SEC;
        //printf("zbudowanie listy trwalo: ");
        start = clock();
        for(int i = 0;i<300;i++)
        {
            traverse();
        }
        end = clock();
        //printf("\nwypisanie listy na ekran trwalo: ");
        czasy_wypisywania_listy[d++] = (float)(end - start) / CLOCKS_PER_SEC;
        
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    v++;
    }
    
    printf("sredni czas tworzenia tablicy: %f",srednia(czasy_generacji_tablicy));
    printf("sredni czas sortowania tablicy: %f",srednia(czasy_sortowania_tablicy));
    printf("sredni czas wypisania tablicy: %f",srednia(czasy_wypisywania_tablicy));
    printf("sredni czas tworzenia listy: %f",srednia(czasy_generacji_listy));
    printf("sredni czas tworzenia listy: %f",srednia(czasy_generacji_listy));
    return 0;
}