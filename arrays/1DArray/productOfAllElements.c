//Write a pro to print product of all elements if an array

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},pro=1,size;
    
    size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++)/////i<size aavshe.
    {
        pro*=arr[i];
    }
    printf("product is %d",pro);
}