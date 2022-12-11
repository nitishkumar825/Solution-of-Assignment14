// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main() 
{
    int a[10],sum=0;
    float avg=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/10.0;
    printf("\nThe average is : %.2f",avg);
    return 0;
}