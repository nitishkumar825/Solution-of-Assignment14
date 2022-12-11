// Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a value for \"n\" : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d numbers\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n---- Array elements ----\n");
    printf("Before reverse: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nAfter reverse: ");
    for(int i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}