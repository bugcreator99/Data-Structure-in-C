#include<stdio.h>
int main(){
    int A[30],i,n,first,last,mid,search;
    
    printf("Enter number of Elements: ");
    scanf("%d", &n);
    
    printf("Enter %d integer:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    printf("Enter your Search number: ");
    scanf("%d",&search);

    first=0;
    last=(n-1);

    while(first<=last){
        mid = (first+last)/2;
        if(A[mid]==search){
            printf("%d is found %d index",search,mid+1);
            return 0;
        }
        else if(A[mid]<search){
            first = mid+1;
        }
        else
            last = mid-1;
    }

    return 0;
}