//Write a pro to print odd number rectangle.

        // 1 3 5
        // 1 3 5
        // 1 3 5 
        

#include<stdio.h>
int main()
{
    
    int a,b=1,c;
    printf("Enter side of rectangle: ");
    scanf("%d",&a);
    
    printf("Enter height of rectangle: ");
    scanf("%d",&c);
        
    for(int j=0;j<a;j++)/////////////r
    {
        for(int i=1;i<=c;i++)//////////////////////c
        {
            printf("%d ",b);
            b=b+2;
        }
        b=1;
        printf("\n");
    }
    
    return 0;
}