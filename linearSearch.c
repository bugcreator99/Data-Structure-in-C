#include<stdio.h>
int main(){
    int A[30],i,n,search;
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d integer\n",n);
    for(i=0;i<n;i++)
        scanf("%d", &A[i]);
        
    printf("Enter your search number: ");
    scanf("%d", &search);

    for(i=0;i<n;i++){
        if(A[i]==search){
            printf("%d is found %d index",search,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d is not Found!",search);

    return 0;
}