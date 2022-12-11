// Write a program to sort elements of an array of size 10. Take array values from the user.

#include <stdio.h>

int main() 
{
    int a[10],temp;
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(int x=0;x<10-1;x++){
        for(int i=0;i<10-1-x;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("\n-------- Sorted array -----\n");

    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}