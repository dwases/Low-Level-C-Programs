//zadanie 9
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int seq[20];
    int max_value_seq = -2147483648;
    for(int v = 0;v<20;v++)
    {
        seq[v] = -2147483648;
    }
    int dist_0 = 2147483647;
    for(int i = 0;i<20;i++)
    {
        scanf("%d ",&seq[i]);
        if(i == 0)
        {
            max_value_seq = seq[0];
        }
        if(i>0)
        {
            if(seq[i]>max_value_seq)
            {
                max_value_seq = seq[i];
            }
        }
        if(abs(seq[i])<dist_0)
        {
            dist_0 = abs(seq[i]);
        }
    }
    //a
    //int seq_abs[20];
    
    //for(int p = 1;p<=20;p++)
    //{
    //    seq_abs[p] = abs(seq[p]);
    //}
    printf("liczba o najmniejszym module: %d",dist_0);
    //b
    printf("\nliczba najwieksza: %d",max_value_seq);
}