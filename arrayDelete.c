#include<stdio.h>
#include<conio.h>
int main()
{
    int LA[]={5,10,15,20,25}, N=5, k=3, item;
    int j;
    for(j=k; j<=N-1; j++)
    {
        LA[j]=LA[j+1];
    }
    N = N-1;
    printf("Item %d Deleted\n",item+4);
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ",LA[i]);
    }

    getch();
}