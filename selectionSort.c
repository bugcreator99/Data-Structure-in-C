#include<stdio.h>
int main(){
    int A[30],i,j,k,n,temp,minIndex;
    
    printf("\t\tSelection Sort\n\n");
    
    printf("Input your number of elements: ");
    scanf("%d",&n);
    printf("Input %d integer:\n",n);
    for(k=0;k<n;k++)
        scanf("%d",&A[k]);
        
    //Outer loop to iterate all numbers
    for(i=0;i<n;i++){
        minIndex = i;
    //inner loop to find the minimum index
        for(j=i+1;j<n;j++){
            if(A[j]<A[minIndex]){
                minIndex = j;
            }
        }
    //swap two numbers
        temp = A[i];
        A[i] = A[minIndex];
        A[minIndex]= temp;
    }
    
    //print the sorted array
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
        
    return 0;
}