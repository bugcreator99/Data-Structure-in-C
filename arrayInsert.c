#include<stdio.h>
#include<conio.h>
int main()
{
    int LA[]={5,10,15,20,25}, N=5, k=3, item=100;
    int j = N;
    while(j>=k)
    {
        LA[j+1] = LA[j];
        j = j-1;
    }
    LA[k] = item;
    N = N+1;

    int i;
    for(i=0; i<N; i++)
    {
        printf("%d ", LA[i]);
    }

    getch();
}