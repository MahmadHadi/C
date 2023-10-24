//Write a pro to print PRODUCT of all digit of given number.

#include<stdio.h>
int main()
{
    
    int a,b=1;////////////b=1 lidhu karan ke 0 levathi ln16 ma badhu 0 thay.
    
    printf("Enter any number: ");
    scanf("%d",&a);
    
    while(a!=0)
    {
        int  c=a%10;  
        a=a/10;
        b=b*c;////////Karan ke product karvanu chh.
        
    }
    printf("Sum is %d",b);
    
    
    return 0;
}