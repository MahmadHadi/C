//find the diffrence between the sum of elements at even indices to the sum of elements at odd indices.

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    
    int even,odd;
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++)
    {
        if(i%2==0) even=even+arr[i];
        else odd=odd+arr[i];
    }
    
    printf("diffrence between the sum of elements at even indices to the sum of elements at odd indices is %d",even-odd);
    
    return 0;
}