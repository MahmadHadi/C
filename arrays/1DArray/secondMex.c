//Find the second largest number of the array
#include<stdio.h>
int main()
{
    
    int arr[]={1,2,3,4,5};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int max=arr[0];
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max) max=arr[i];
        else continue;
    }
    printf("max=%d\n",max);
    
    int smax=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
        else continue;
    }
    printf("smax=%d",smax);
    
    
    return 0;
}