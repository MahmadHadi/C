//Write a pro to print odd number triangle.

        // 1 
        // 1 3 
        // 1 3 5 
        

#include<stdio.h>
int main()
{
    
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    
    for(int j=0;j<=a;j++)
    {
        for(int i=1;i<=j;i++)
        {
            printf("%d ",b);
            b=b+2;
        }
        printf("\n");
    }
    
    return 0;
}