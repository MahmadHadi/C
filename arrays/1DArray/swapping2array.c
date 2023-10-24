//Copy all elements in reverse order of an array

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    printf("1st array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    printf("2nd array: ");
    int brr[size];
    for(int i=0;i<size;i++)
    {
        brr[size]=arr[size-1-i];
        printf("%d ",brr[size]);
    }
    
    
    return 0;
}