//write a pro to check if array is polindrome or not.
//Pondrome: 1,2,3,2,1; racecar;  BANNE BAJU THI SAME HOY.

#include<stdio.h>
int main()
{
    // int ar[]={1,2,3,2,1};
    // int ar[]={1,1,1,1};
    // int ar[]={1,2,3,4,5,4,3,2,1};
    // int ar[]={1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1};
    int ar[]={1,6,4,6,1};

        
    int size=sizeof(ar)/sizeof(ar[0]);
    
    int j=size-1,i,temp,temp2;
    
    while(j>i)
    {
        temp=ar[i]+ar[j];
        j--;
        i++;
    }
    // printf("%d ",temp);///////To check temp 
    
    if(temp%2==0) printf("Array is Palindrome.");
    else printf("Array is not Palindrome.");
   
    return 0;
}
    