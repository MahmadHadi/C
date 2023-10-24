////////////////------                H.W.          ------ ///////////////////////////////

//Write a pro to print how long number is.
//Ex.  if number is 282939   then length of number is 6.

#include<stdio.h>
int main()
{
    int a,b=0;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    while(a!=0)
    {
        a=a/10;
        b++;
    }
    
    printf("Given number is %d digit long",b);
    
    return 0;
}