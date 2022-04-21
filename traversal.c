#include<stdio.h>
#include<conio.h>
void main()
{
int a[7], i=0;
clrscr();
printf("Enter the elements of the array :");
for (i=0;i<=6 ;i++ )
{
    scanf("%d\n", &a[i]);     /* taking input array from the user */
    }
printf("\nThe elements of the array you have enetered are as follows :")
for(i=0; i<=6; i++)
    {
    printf("%d", a[i]);        /* printing the array elements or traversing the array */
}
getch();
}
