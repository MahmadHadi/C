//Write a pro to print even number triangle.

        // 2  
        // 2 4  
        // 2 4 6 

#include<stdio.h>
int main()
{
    
    int a,b=2,c;
    printf("Enter side of rectangle: ");
    scanf("%d",&a);

    for(int j=0;j<=a;j++)/////////////r
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