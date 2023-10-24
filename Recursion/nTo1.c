//Write a pro to print n to 1.

#include<stdio.h>
void hadi(int n)////////////////////function calling itself
{
    if(n==0) return;
    printf("%d\n",n);
    hadi(n-1);////////////////////function calling itself
}
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    hadi(n);

    return 0;
}