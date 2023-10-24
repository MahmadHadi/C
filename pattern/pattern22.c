//Write a pro to print even number inverted triangle.

        // 2 4 6 
        // 2 4
        // 2

#include<stdio.h>
int main()
{
    
    int a,b=2,c;
    printf("Enter height of triangle: ");
    scanf("%d",&a);

    for(int j=a;j>=1;j--)/////////////r
    {
        for(int i=1;i<=j;i++)//////////////////////c
        {
            printf("%d ",b);
            b=b+2;
        }
        b=2;
        printf("\n");
    }
    
    return 0;
}