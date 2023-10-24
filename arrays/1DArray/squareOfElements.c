// Given an integer n. creatr an array containing squares of all natural numbers till n and print the elments of array.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    
    int arr[n],sq=1;
    
    for(int i=1;i<=n;i++)
    {
        if(sq==0) continue;
        else sq=i*i;
        arr[i]=sq;
    }
    
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}