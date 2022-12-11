// Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>

int main() 
{
    int s=10,temp;
    int a[s];
    printf("Enter %d numbers\n",s);
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\nThe second largest element in the array = %d",a[s-2]);
    return 0;
}