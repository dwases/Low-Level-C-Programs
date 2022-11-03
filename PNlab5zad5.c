//zadanie 5
#include <stdio.h>
#include <stdlib.h>
int tablica[90];
int g = 0;
//struktura wierzcholka drzewa
struct wierzcholekBST
{
    int klucz;
    struct wierzcholekBST *right;
    struct wierzcholekBST *left;
};

//sprawdza czy dany element jest w drzewie
void czyElement(struct wierzcholekBST *root, int klucz)
{
    int flag = 0;
    for(int i = 0;i<90;i++)
    {
        if(tablica[i]==klucz)
        printf("\nszukany element(%d) jest w drzewie",klucz);
        flag = 1;
    }
    if (flag ==0)
    printf("\nnie ma tego elementu w drzewie");
}

//wstawia wierzcholek
struct wierzcholekBST* wstaw(int klucz)
{
    struct wierzcholekBST *w;
    w = malloc(sizeof(struct wierzcholekBST));
    w->klucz = klucz;
    w->left = NULL;
    w->right = NULL;
    return w;
}

//wstawia wierzcholek do drzewa
struct wierzcholekBST* wstaw_doDrzewa(struct wierzcholekBST *root, int klucz)
{
    if(root==NULL)
        return wstaw(klucz);
    else if(x>root->klucz)
        root->right = wstaw_doDrzewa(root->right, klucz);
    else
    {
        root->left = wstaw_doDrzewa(root->left,klucz);
    }
    
    return root;
}

//wypisuje drzewo w kolejnosci inorder
void wyprowadz_drzewo(struct wierzcholekBST *root)
{
    if(root!=NULL)
    {
        wyprowadz_drzewo(root->left);
        printf(" %d ", root->klucz);
        tablica[g++]=root->klucz;
        wyprowadz_drzewo(root->right);
    }
}

//usuwa drzewo
struct wierzcholekBST* usunDrzewo (struct wierzcholekBST *korzen)
{
    if(korzen->left!=NULL)
    {
        usunDrzewo(korzen->left);
    }

    if(korzen->right!=NULL)
    {
        usunDrzewo(korzen->right);
    }


    korzen->right = NULL;
    korzen->left = NULL;
    korzen->klucz = 0;
}



void czyPuste(struct wierzcholekBST *root)
{
    if ((root->left == NULL) && (root->right==NULL) && ((root->klucz == 0)))
    {
        printf("\npuste");
    }
    else
    {
        printf("\nniepuste");
    }
}

int oblicz_poziom(struct wierzcholekBST *root)
{
    if (!root)
    {
        return 0;
    }
    else
    {
        int left_height = oblicz_poziom(root->left);
        int right_height = oblicz_poziom(root->right);
        if (left_height >= right_height)
            return left_height + 1;
        else
            return right_height + 1;
    }   
}


int main()
{
    struct wierzcholekBST *drzewo;
    drzewo = wstaw(5);
    wstaw_doDrzewa(drzewo,6);
    wstaw_doDrzewa(drzewo,10);
    wstaw_doDrzewa(drzewo,152);
    wstaw_doDrzewa(drzewo,42);
    wstaw_doDrzewa(drzewo,123);
    wstaw_doDrzewa(drzewo,4);
    printf("\nwypisanie inorder:\n");
    wyprowadz_drzewo(drzewo);
    czyElement(drzewo, 10);
    printf("\nwysokosc drzewa: ");
    printf("\n%d",oblicz_poziom(drzewo));
    czyPuste(drzewo);
    usunDrzewo(drzewo);
    printf("\n*dokonano spustoszenia*");
    czyPuste(drzewo);
    return 0;
}