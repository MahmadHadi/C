//Write a pro to print following stare pluse.

    //     *
    //     *
    // * * * * *
    //     *
    //     * 


///////trick:- i+j -even => print 1 else print 0/////////////// 
    
#include<stdio.h>
int main()
{
    int a,b=1,mr;
    
    printf("Enter height of triangle (HEIGHT MUST BE ODD NUMBER): ");
    scanf("%d",&a);
    
    mr=(a/2)+1;///////karan k khali middle raw and column maj stare hova jove.
    if(a%2==0)
    {
        printf("HEIGHT MUST BE ODD NUMBER");
    }
    else
    {
        if(a>0)
        {
            for(int j=1;j<=a;j++)
            {
                for(int i=1;i<=a;i++)
                {   
                    if(i==mr || j==mr)////////mr=middle raw or middle column
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
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
    }
    
    return 0;
} 