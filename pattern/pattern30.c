//Write a pro to print SOLID RECTANGLE take number of raw and column from user.

    // * * * *
    // *     *
    // *     *
    // * * * *
    
    
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of raws: ");
    scanf("%d",&a);
    
    printf("Enter numbers of column: ");
    scanf("%d",&b);
    
    if(a>=0 && b>=0)
    {
        for(int i=1;i<=a;i++)//////////number of raw
        {
            for(int j=1;j<=b;j++)////////number of column
            {
                if(i==1 || j==1 || i==a || j==b)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
        }
    }
    else if(a<0 || b<0)
    {
        printf("Number of raw and column can not be zero.");
    }
    
    return 0;
}