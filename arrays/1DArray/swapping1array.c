//Swap without 2nd array

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,3,4,5,6,7,8,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Before swapping: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\nAfter swapping:");
    
    int brr[size];
    
    int i,j=size;
    while(j>=0)
    {
        brr[i]=arr[j];
        printf("%d ",brr[i]);
        j--;
        i++;
    }
}