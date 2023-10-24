//Write a pro to type even numbers b/w 1 to 100 using CONTINUE STATEMENT.

#include<stdio.h>
int main()
{
    
    for(int a=1;a<=100;a++)
    {
        if(a%2!=0)
        {
            continue ;
        }
    
        printf("%d ",a);
    }
    
    return 0;
}