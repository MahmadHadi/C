//Write a pro to print sum of digit of given number.

#include<stdio.h>
int main()
{
    
    int a,b=0;
    
    printf("Enter any number: ");
    scanf("%d",&a);
    
    while(a!=0)
    {
        int  c=a%10;  ////////Karan ke a no last digit a%10 vade male
        a=a/10;///////Karan ke a nu chellu digit ghatadvu pan pade
        b=b+c;////////////Karan ke sum ne store karavu ane update karavu pade
        
    }
    printf("Sum is %d",b);
    
    
    return 0;
}