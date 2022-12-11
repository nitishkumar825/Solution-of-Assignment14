// Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a value for \'n\' : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\nEnter %d numbers\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("\nElements of array A: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        b[i]=a[i];                      // Copying elements from array 'a' to array 'b'.
    }
        
    printf("\nElements of array B: ");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}