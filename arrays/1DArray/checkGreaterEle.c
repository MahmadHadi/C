//count the number of elements in given array greater than a given number x
#include<stdio.h>
int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    
    int arr[]={1,2,3,4,5};
    
    int size,check;
    
    size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>x) check++;
        else continue;
    }
    printf("%d elements are greater than %d.",check,x);
    
    return 0;
}