//Write a pro to print biggest element of all elements if an array

////////............m-1...................................//
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={11,2,3,4,5,6,7,8,9},check,size;
    
    size=sizeof(arr)/sizeof(arr[0]);
    
    check=INT_MIN;
    
    for(int i=0;i<size;i++)/////i<size aavshe.
    {
        if(check<arr[i]) check=arr[i];   
    }
    printf("Biggest element of arr is %d",check);
}





///////...................m-2...................................//

// #include<stdio.h>
// int main()
// {
//     int arr[]={11,2,3,4,5,6,7,8,9},check,size;
    
//     size=sizeof(arr)/sizeof(arr[0]);
    
//     check=arr[0];
    
//     for(int i=1;i<size;i++)/////i<size aavshe.
//     {
//         if(check<arr[i]) check=arr[i];   
//     }
//     printf("Biggest element of arr is %d",check);
// }