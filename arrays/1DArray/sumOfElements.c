//Write a pro to print sum of all elements if an array

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},sum,size;
    
    size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++)/////i<size aavshe.
    {
        sum=sum+arr[i];
    }
    printf("sum is %d",sum);
}