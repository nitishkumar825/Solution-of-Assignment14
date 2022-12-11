// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main() 
{
    int a[10],max=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }

    printf("Max is %d",max);
    return 0;
}