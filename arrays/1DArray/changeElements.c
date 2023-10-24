//Given an array of integers,change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    // printf("%d",size);
    
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=arr[i]*2;
        }
    }
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}