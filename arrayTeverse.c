#include<stdio.h>
#include<conio.h>
int main()
{
    int LA[]={5,10,15,20,25}, LB=0, UB=4;
    /*  (LA = list of array)
        (LB = Lower bound)
        (UB = Upper bound)
    */
    int k = LB;
    while(k<=UB)
    {
        printf("%d ", LA[k]);
        k = k+1;
    }
    printf("\n");

    getch();
}