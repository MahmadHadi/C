//Writer a pro to print nPr using fun.

#include<stdio.h>
int fact(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}
int npr(int n,int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    int n,r;
    printf("Enter value of n: ");
    scanf("%d",&n);
    
    printf("Enter value of r: ");
    scanf("%d",&r);
    
    int p=npr(n,r);
    printf("%dP%d is %d",n,r,p);
    
    return 0;
}