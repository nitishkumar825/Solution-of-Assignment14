// Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main() 
{
    int a[10],min;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(min>a[i])
            min=a[i];
    }
    printf("\nMinimum is %d",min);
    return 0;
}