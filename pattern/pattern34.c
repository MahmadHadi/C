//Write a pro to print rhombus

            //     * * * *
            //    * * * *
            //   * * * *
            //  * * * *
            // * * * *
    
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of rhombus: ");
    scanf("%d",&a);
    
    // printf("Enter numbers of column: ");
    // scanf("%d",&b);
    
    if(a>0)
    {
        for(int i=1;i<=a;i++)//////////number of raw
        {
            for(int j=1;j<=a+1-i;j++)
            {
                printf("  ");
            }
            for(int j=1;j<=a;j++)////////number of column
            {
                printf("* ");
            }
            printf("\n");/////sub loop puri thay atle navi line ma enter thahse.
        }
    }
    else if(a==0)
    {
        printf("Height is zero.");
    }
    else if(a<0)
    {
        printf("Height can not be -ve.");
    }
    
    return 0;
}