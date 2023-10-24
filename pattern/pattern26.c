//Write a pro to print following triangle.
    // 1 
    // 0 1 
    // 1 0 1 
    // 0 1 0 1

///////trick:- i+j -even => print 1 else print 0/////////////// 
    
#include<stdio.h>
int main()
{
    int a,b=1,c;
    
    printf("Enter height of triangle: ");
    scanf("%d",&a);
    
    if(a>0)
    {
        for(int j=1;j<=a;j++)
        {
            for(int i=1;i<=j;i++)
            {   
                if((i+j)%2==0)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }
            }
                b=0;
                printf("\n");
        }
    }
    else if(a==0)
    {
        printf("Height can not be zere.");
    }
    else if(a<0)
    {
        printf("Height can not be zero.");
    }
    
    return 0;
} 