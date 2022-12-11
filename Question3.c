// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main() 
{
    int a[10],even=0,odd=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even+=a[i];
        else
            odd+=a[i];
    }
    printf("\nSum of all the Even numbers: %d",even);
    printf("\nSum of all the Odd numbers: %d",odd);
    return 0;
}