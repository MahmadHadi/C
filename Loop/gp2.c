//Write a pro to print this GP: 3,12,48,...,n terms

#include<stdio.h>
int main()
{
    
    int a,b,c=3;
    
    printf("How many terms do you want in gp?\n");
    scanf("%d",&b);
    
    
    
    for(a=1;a<=b;a++)
    {
        printf("%d ",c);
        c=c*4;
    }
    
    return 0;
}